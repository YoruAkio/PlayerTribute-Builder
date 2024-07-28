# Player Tribute Builder

Growtopia player tribute builder, building the player tribute data, into a file named `player_tribute.dat`.

## Usage

1. Install [CMake](https://cmake.org/download/) and [Conan](https://conan.io/downloads.html).
2. Install [Python](https://www.python.org/downloads/) and [Visual Studio](https://visualstudio.microsoft.com/downloads/).
3. Install Conan packages `pip install conan`.
4. Do the following commands:

```bash
$ git clone https://github.com/YoruAkio/PlayerTribute-Builder.git
$ cd PlayerTribute-Builder
$ mkdir build && cd build
$ cmake .. -DCMAKE_BUILD_TYPE=Debug
$ cmake --build .
```

5. The built file will be located at `build/src/PlayerTributeBuilder`.


## Notes

- Please star this repository if you like it.
- Please report bugs or issues to me on telegram [@mendict](https://t.me/mendict).
- Give credits to me and the original source code if you use this project.

## Credits

- [GTServer](https://github.com/Rebillionxx/GTServer): The original source code of the Player Tribute builder.
- [fmt](https://github.com/fmtlib/fmt): A modern formatting library.
- [spdlog](https://github.com/gabime/spdlog): Fast C++ logging library.
- [conan](https://github.com/conan-io/conan): The C/C++ package manager.