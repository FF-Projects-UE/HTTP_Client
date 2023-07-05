// Some copyright should be here...

using System;
using System.IO;
using UnrealBuildTool;

public class HTTP_Client : ModuleRules
{
	public HTTP_Client(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDefinitions.Add("WITH_LIBCURL=1");
        string WinLibCurlPath = Target.UEThirdPartySourceDirectory + "libcurl/7.83.1/";
        string AndroidLibCurlPath = Target.UEThirdPartySourceDirectory + "libcurl/7_75_0/";

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicSystemIncludePaths.Add(Path.Combine(WinLibCurlPath, "include"));
            PublicAdditionalLibraries.Add(Path.Combine(WinLibCurlPath, "lib", Target.Platform.ToString(), "Release", "libcurl.lib"));
            PublicDefinitions.Add("CURL_STATICLIB=1");

            // Our build requires nghttp2, OpenSSL and zlib, so ensure they're linked in
            AddEngineThirdPartyPrivateStaticDependencies(Target, new string[]
            {
                "nghttp2",
                "OpenSSL",
                "zlib"
            });
        }

        else if (Target.IsInPlatformGroup(UnrealPlatformGroup.Android))
        {
            string[] Architectures = new string[] {
                "ARM64",
                "x64",
            };

            PublicSystemIncludePaths.Add(AndroidLibCurlPath + "include/Android/");
            foreach (var Architecture in Architectures)
            {
                PublicAdditionalLibraries.Add(AndroidLibCurlPath + "lib/Android/" + Architecture + "/libcurl.a");
            }
        }

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "HTTP",
                "Json",
                "JsonUtilities",
                "JsonBlueprintUtilities",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}