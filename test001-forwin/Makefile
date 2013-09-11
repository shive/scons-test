# -*- mode: makefile-gmake; coding: euc-jp-unix -*-
#==============================================================================

toolset ?= 'msvc'			# msvc|mingw
msvc_version ?= 10.0		# 9.0|10.0|11.0
msvc_arch ?= x64			# x86|x64
msvc_subsystem ?= console	# console|windows

SCONS = scons -Qsj4					\
	toolset=$(toolset)				\
	msvc_version=$(msvc_version)	\
	msvc_arch=$(msvc_arch)			\
	msvc_subsystem=$(msvc_subsystem)


#------------------------------------------------------------------------------
.PHONY: run-%
run-%:
	$(SCONS) $@


#------------------------------------------------------------------------------
.PHONY: build build-% build-all
build-all:
	$(MAKE) build toolset=msvc msvc_version=9.0 msvc_arch=x86
	$(MAKE) build toolset=msvc msvc_version=9.0 msvc_arch=x64
	$(MAKE) build toolset=msvc msvc_version=10.0 msvc_arch=x86
	$(MAKE) build toolset=msvc msvc_version=10.0 msvc_arch=x64
	$(MAKE) build toolset=msvc msvc_version=11.0 msvc_arch=x86
	$(MAKE) build toolset=msvc msvc_version=11.0 msvc_arch=x64
	$(MAKE) build toolset=mingw

build: build-debug build-release

build-%:
	$(SCONS) $@


#------------------------------------------------------------------------------
.PHONY: msvcproj msvcproj-all
msvcproj:
	$(SCONS) $@

msvcproj-all:
	$(MAKE) msvcproj toolset=msvc msvc_version=9.0 msvc_arch=x86
	$(MAKE) msvcproj toolset=msvc msvc_version=9.0 msvc_arch=x64
	$(MAKE) msvcproj toolset=msvc msvc_version=10.0 msvc_arch=x86
	$(MAKE) msvcproj toolset=msvc msvc_version=10.0 msvc_arch=x64
	$(MAKE) msvcproj toolset=msvc msvc_version=11.0 msvc_arch=x86
	$(MAKE) msvcproj toolset=msvc msvc_version=11.0 msvc_arch=x64


#------------------------------------------------------------------------------
.PHONY: clean
clean:
	$(RM) -r bin obj Debug/ Release/ x64/ ipch/
	$(RM) *.user *.suo *.sdf *.ncb *.o *.dblite

