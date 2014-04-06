solution "Graphs"
   configurations { "Debug", "Release" }
   location ".."
project "Graphs"
   kind "ConsoleApp"
   
   language "C++"
   
   objdir".."
   debugdir".."
   
   includedirs { "../Includes" }
   
   location ".."
   
   files 	{ 
			"../Includes/*.h",
			"../Source/*.cpp" 
			}

   configuration "Debug"
      flags { "Symbols" }
      defines { "_DEBUG" }

   configuration "Release"
      flags { "Optimize" }
      defines { "NDEBUG" }