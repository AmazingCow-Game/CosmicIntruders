
##~---------------------------------------------------------------------------##
##                     _______  _______  _______  _     _                     ##
##                    |   _   ||       ||       || | _ | |                    ##
##                    |  |_|  ||       ||   _   || || || |                    ##
##                    |       ||       ||  | |  ||       |                    ##
##                    |       ||      _||  |_|  ||       |                    ##
##                    |   _   ||     |_ |       ||   _   |                    ##
##                    |__| |__||_______||_______||__| |__|                    ##
##                             www.amazingcow.com                             ##
##  File      : build_gnu_linux.sh                                            ##
##  Project   : Cosmic Intruders                                              ##
##  Date      : Feb 12, 2018                                                  ##
##  License   : GPLv3                                                         ##
##  Author    : n2omatt <n2omatt@amazingcow.com>                              ##
##  Copyright : AmazingCow - 2017                                             ##
##                                                                            ##
##  Description :                                                             ##
##                                                                            ##
##---------------------------------------------------------------------------~##

mkdir -p ../build/gnu_linux
cd ../build/gnu_linux

MODE="Release";
test "$1" == "debug" && MODE="Debug";

cmake ../../ -DCMAKE_BUILD_TYPE=$MODE
cmake --build .

cd - > /dev/null