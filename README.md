ARdevKitPlayer
===============

The player can be used to show an AREL project which was created with the <a href=https://github.com/teco-kit/ARdevKit>ARdevKitEditor</a>.
If the player is started from within the editor you can choose an image or video to test your project with.
You can also use a virtual camera like <a href=http://download.manycam.com/>ManyCam</a> as source for the player.
Moreover you can decide to start a debug terminal as well to show you some additional information.

If no paths are specified the player will try to load the project from .\currentProject and use the camera  (if available) as source. Due to this you can just copy a project to his path and try your app with a mobile device.

Install Guide:
==============

1. Clone/fork the repository
2. Downlaod the <a href=http://dev.metaio.com/>metaioSDK 5.2</a> and install it.
3. Copy all files from [metaio sdk install folder]/_Windows/metaioSDK/bin to the output folder of the project (you may create the folders manually first, if you haven't tried to compile the project yet).
4. Copy the folder "metaioSDK" from [metaio sdk install folder]/_Windows/metaioSDK/include/ to [project folder]\include
5. Download and install <a href"http://download.qt-project.org/archive/qt/4.8/4.8.4/">Qt 4.8.4</a>
6. Copy at least the following files from [qt install folder]/bin to the output folder of the project:
	* QtCore4.dll
	* QtCored4.dll
	* QtGui4.dll
	* QtGuid4.dll
	* QtNetwork4.dll
	* QtNetworkd4.dll
	* QtOpenGL4.dll
	* QtOpenGLd4.dll
	* QtWebKit4.dll
	* QtWebKitd4.dll
7. Download and install the VisualStudio plugin from <a href="http://download.qt-project.org/official_releases/vsaddin/qt-vs-addin-1.1.11-opensource.exe">here</a>
8. Download QuaZip from <a href="http://sourceforge.net/projects/quazip/files/latest/download">here</a>
9. Build Quazip as a dll, exlained as  <a href="http://quazip.sourceforge.net/">here</a> under Building, testing and installing, or <a href="http://www.youtube.com/watch?v=mxlcKmvMK9Q">here</a> for a video howto.
10. Copy the compiled quazip.lib, quazip.dll and quazip.exp to the output folder of the project.
11. Copy at all header ("*.h) files from [quazip download folder]/quazip to [project folder]\include
12. copy this files from [qt install folder]/src/3rdparty/zlib to [project folder]\include:
	* zconf.h
	* zlib.h

After that you should be able to compile and debug the project.


Testing Guide:
==============

Select Test for a build Preset, and run each test in PLayerTest.cpp one at a time, by commenting or likewise, otherwise they will all fail after the first one.
If you press the Run button it should run GoogleTest and you should be good for testing. 

