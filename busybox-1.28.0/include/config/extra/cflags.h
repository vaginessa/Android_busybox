#define CONFIG_EXTRA_CFLAGS "-DANDROID -D__ANDROID__ -DSK_RELEASE -nostdlib -march=armv7-a -msoft-float -mfloat-abi=softfp -mfpu=neon -mthumb -mthumb-interwork -fpic -fno-short-enums -fgcse-after-reload -frename-registers -fuse-ld=bfd"