# SPDX-License-Identifier: GPL-2.0

ifeq ($(CONFIG_SEC_Q2Q_PROJECT),y)
dts-dirs += q2/q2q
else ifeq ($(CONFIG_SEC_B2Q_PROJECT),y)
dts-dirs += b2/b2q
endif

always          := $(dtb-y)
subdir-y        := $(dts-dirs)

clean-files := *.dtb *.reverse.dts *.dtbo

