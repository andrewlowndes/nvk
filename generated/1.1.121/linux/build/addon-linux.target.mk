# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := addon-linux
DEFS_Debug := \
	'-DNODE_GYP_MODULE_NAME=addon-linux' \
	'-DUSING_UV_SHARED=1' \
	'-DUSING_V8_SHARED=1' \
	'-DV8_DEPRECATION_WARNINGS=1' \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DV8_IMMINENT_DEPRECATION_WARNINGS' \
	'-D_LARGEFILE_SOURCE' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DBUILDING_NODE_EXTENSION' \
	'-DDEBUG' \
	'-D_DEBUG' \
	'-DV8_ENABLE_CHECKS'

# Flags passed to all source files.
CFLAGS_Debug := \
	-fPIC \
	-pthread \
	-Wall \
	-Wextra \
	-Wno-unused-parameter \
	-m64 \
	-std=c++11 \
	-fexceptions \
	-Wno-switch \
	-Wno-unused \
	-Wno-uninitialized \
	-g \
	-O0

# Flags passed to only C files.
CFLAGS_C_Debug :=

# Flags passed to only C++ files.
CFLAGS_CC_Debug := \
	-fno-rtti \
	-fno-exceptions \
	-std=gnu++1y \
	-std=c++11 \
	-fexceptions \
	-Wno-switch \
	-Wno-unused \
	-Wno-uninitialized

INCS_Debug := \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/include/node \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/src \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/openssl/config \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/openssl/openssl/include \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/uv/include \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/zlib \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/v8/include \
	-I/home/zeeshan/Documents/Projects/tortuga-library/node_modules/nvk/node_modules/node-addon-api \
	-I$(srcdir)/../../../lib/include \
	-I/include

DEFS_Release := \
	'-DNODE_GYP_MODULE_NAME=addon-linux' \
	'-DUSING_UV_SHARED=1' \
	'-DUSING_V8_SHARED=1' \
	'-DV8_DEPRECATION_WARNINGS=1' \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DV8_IMMINENT_DEPRECATION_WARNINGS' \
	'-D_LARGEFILE_SOURCE' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DBUILDING_NODE_EXTENSION'

# Flags passed to all source files.
CFLAGS_Release := \
	-fPIC \
	-pthread \
	-Wall \
	-Wextra \
	-Wno-unused-parameter \
	-m64 \
	-std=c++11 \
	-fexceptions \
	-Wno-switch \
	-Wno-unused \
	-Wno-uninitialized \
	-O3 \
	-fno-omit-frame-pointer

# Flags passed to only C files.
CFLAGS_C_Release :=

# Flags passed to only C++ files.
CFLAGS_CC_Release := \
	-fno-rtti \
	-fno-exceptions \
	-std=gnu++1y \
	-std=c++11 \
	-fexceptions \
	-Wno-switch \
	-Wno-unused \
	-Wno-uninitialized

INCS_Release := \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/include/node \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/src \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/openssl/config \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/openssl/openssl/include \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/uv/include \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/zlib \
	-I/home/zeeshan/.cache/node-gyp/12.9.1/deps/v8/include \
	-I/home/zeeshan/Documents/Projects/tortuga-library/node_modules/nvk/node_modules/node-addon-api \
	-I$(srcdir)/../../../lib/include \
	-I/include

OBJS := \
	$(obj).target/$(TARGET)/src/index.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# End of this set of suffix rules
### Rules for final target.
LDFLAGS_Debug := \
	-pthread \
	-rdynamic \
	-m64

LDFLAGS_Release := \
	-pthread \
	-rdynamic \
	-m64

LIBS := \
	-Wl,-rpath,/home/zeeshan/Documents/Projects/tortuga-library/node_modules/nvk/generated/1.1.121/linux/build/Release \
	/home/zeeshan/Documents/Projects/tortuga-library/node_modules/nvk/generated/1.1.121/linux/build/Release/libvulkan.so \
	/home/zeeshan/Documents/Projects/tortuga-library/node_modules/nvk/generated/1.1.121/linux/build/Release/../../../../../lib/linux/x64/GLFW/libglfw3.a \
	-lvulkan \
	-lXrandr \
	-lXi \
	-lX11 \
	-lXxf86vm \
	-lXinerama \
	-lXcursor \
	-ldl \
	-pthread

$(obj).target/addon-linux.node: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/addon-linux.node: LIBS := $(LIBS)
$(obj).target/addon-linux.node: TOOLSET := $(TOOLSET)
$(obj).target/addon-linux.node: $(OBJS) FORCE_DO_CMD
	$(call do_cmd,solink_module)

all_deps += $(obj).target/addon-linux.node
# Add target alias
.PHONY: addon-linux
addon-linux: $(builddir)/addon-linux.node

# Copy this to the executable output path.
$(builddir)/addon-linux.node: TOOLSET := $(TOOLSET)
$(builddir)/addon-linux.node: $(obj).target/addon-linux.node FORCE_DO_CMD
	$(call do_cmd,copy)

all_deps += $(builddir)/addon-linux.node
# Short alias for building this executable.
.PHONY: addon-linux.node
addon-linux.node: $(obj).target/addon-linux.node $(builddir)/addon-linux.node

# Add executable to "all" target.
.PHONY: all
all: $(builddir)/addon-linux.node

