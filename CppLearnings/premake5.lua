workspace "CppLearnings"
    architecture "x64"
    startproject "CppLearnings"
    configurations
    {
        "Debug",
        "Release"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "CppLearnings"
    location "CppLearnings"
    kind "ConsoleApp"
    language "C++"

    targetdir ("bin/" ..outputdir..  "")
    objdir ("bin-int/" ..outputdir..  "")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"
    
        filter "configurations:Debug"
        defines "_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "_RELEASE"
        optimize "On"
    
    