# cboot-t194-441
Cboot (cpu-bootloader) component of JetPack for Jetson Xavier NX

Pulled from https://developer.nvidia.com/cboot-sources-jetson-agx-xavier-and-jetson-xavier-nx-32.4.4
Updated from JP4.4.1 to JP4.6.1.

Had to turn stack canary off for the first build, otherwise built right from the box.

For build on x86_64 host, gcc-aarch64-linux-gnu and binutils-aarch64-linux-gnu are required. Also, CROSS_COMPILE has to be set

    export CROSS_COMPILE=aarch64-linux-gnu-

Also requires GNU Make and python2.

For all builds:

    cd cboot-t194
    export TEGRA_TOP=`pwd`
    export TOP=`pwd`
    make -C ./bootloader/partner/t18x/cboot PROJECT=t194 TOOLCHAIN_PREFIX="${CROSS_COMPILE}" DEBUG=2 BUILDROOT="${PWD}"/out NV_TARGET_BOARD=t194ref NV_BUILD_SYSTEM_TYPE=l4t NOECHO=@

Binary is built in ./out/build-t194/lk.bin


