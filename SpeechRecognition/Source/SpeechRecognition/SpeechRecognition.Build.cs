// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class SpeechRecognition : ModuleRules
	{

        private string ModulePath
        {
            get { return ModuleDirectory; }
        }

        private string ThirdPartyPath
        {
            get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/")); }
        }

		public SpeechRecognition(ReadOnlyTargetRules Target) : base(Target)
        {
	        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

	        PrivateIncludePaths.AddRange(
				new string[] {
					"SpeechRecognition/Private",
					// ... add other private include paths required here ...
				}
				);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
				    "Core", 
				    "CoreUObject", 
				    "Engine", 
				    "InputCore",
				    "RHI"
					// ... add other public dependencies that you statically link with here ...
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{

				}
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
				);

            LoadSphinxBase(Target);
            LoadPocketSphinx(Target);
		}

        
        public bool LoadSphinxBase(ReadOnlyTargetRules Target)
        {
            bool isLibrarySupported = false;

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                isLibrarySupported = true;

                string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";
                string LibrariesPath = Path.Combine(ThirdPartyPath, "SphinxBase", "Libraries");
                LibrariesPath = Path.Combine(LibrariesPath, PlatformString);

                PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "SphinxBase.lib"));

                // TODO: Copy dlls to alternative package directory, to be loaded through a manual process
                PublicDelayLoadDLLs.Add("SphinxBase.dll");
                RuntimeDependencies.Add(Path.Combine(LibrariesPath, "SphinxBase.dll"));         
            }

            if (Target.Platform == UnrealTargetPlatform.Mac)
            {
                isLibrarySupported = true;

                string LibraryPath = Path.Combine(ThirdPartyPath, "SphinxBase", "Libraries");

                LibraryPath = Path.Combine(LibraryPath, "osx");

PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, "libopenal.dylib"));
PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, "libsphinxad.a"));
PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, "libsphinxbase.a"));
            }

            if (isLibrarySupported)
            {
                // Include path
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "SphinxBase", "Includes"));
                PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath, "SphinxBase", "Includes"));
            }

            PublicDefinitions.Add(string.Format("WITH_SPHINX_BASE_BINDING={0}", isLibrarySupported ? 1 : 0));

            return isLibrarySupported;
        }

        public bool LoadPocketSphinx(ReadOnlyTargetRules Target)
        {
            bool isLibrarySupported = false;

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                isLibrarySupported = true;

                string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";
                string LibrariesPath = Path.Combine(ThirdPartyPath, "PocketSphinx", "Libraries");
                LibrariesPath = Path.Combine(LibrariesPath, PlatformString);

                PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "PocketSphinx.lib"));

                // TODO: Copy dlls to alternative package directory, to be loaded through a manual process
                PublicDelayLoadDLLs.Add("PocketSphinx.dll");
                RuntimeDependencies.Add(Path.Combine(LibrariesPath, "PocketSphinx.dll"));
            }

            if (Target.Platform == UnrealTargetPlatform.Mac)
            {
                isLibrarySupported = true;

                string LibraryPath = Path.Combine(ThirdPartyPath, "PocketSphinx", "Libraries");

                LibraryPath = Path.Combine(LibraryPath, "osx");

                PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, "libpocketsphinx.a"));
            }

            if (isLibrarySupported)
            {
                // Include path
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "PocketSphinx", "Includes"));
                PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath, "PocketSphinx", "Includes"));
            }

            PublicDefinitions.Add(string.Format("WITH_POCKET_SPHINX_BINDING={0}", isLibrarySupported ? 1 : 0));

            return isLibrarySupported;
        }

    }
}