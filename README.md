## About
A Qt file archiver/compressor based on libarchive.

## Prerequisites

You need to have the following dependencies installed

- [CMake](https://cmake.org)
- [Qt](https://www.qt.io) Base
- [GoogleTest](https://google.github.io/googletest/)
- [libarchive](http://www.libarchive.org)

## Installing
TODO:

## Build

To build the application on your host machine

```sh
# Be aware that this is an in-tree build
cmake -B build
cmake --build build
```

## Run the tests

Run all the tests

```sh
build/tests/archivers-tests
```

## Run the application

You can execute the app using

```sh
build/app/archivers-qt
```

## License

This project is licensed under the [MIT](LICENSE) license.