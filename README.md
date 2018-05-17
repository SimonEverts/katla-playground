# katla-playground

## Renderer test 

Dependencies (Arch Linux):
- pacman -S vulkan-devel [glfw-x11 | glfw-wayland] glm


# build skia

Setup python to use python2
$ pacman -S python2-virtualenv

$ virtualenv2 -p /usr/bin/python2 --distribute venv-py2
$ source venv-py2/bin/activate

Clone & setup repo-tools:
$ git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git'
$ export PATH="${PWD}/depot_tools:${PATH}
$ alias python=python2

Setup Build Skia
$ cd skia
$ python tools/git-sync-dep

Build Skia
$ ./bin/gn gen out/Release
$ cd out/Release
$ ninja
