cmd_Release/obj.target/addon-linux.node := g++ -shared -pthread -rdynamic -m64  -Wl,-soname=addon-linux.node -o Release/obj.target/addon-linux.node -Wl,--start-group Release/obj.target/addon-linux/src/index.o Release/obj.target/addon-linux/src/source.o -Wl,--end-group -Wl,-rpath,/home/user/Documents/GitHub/nvk/generated/1.1.101/linux/build/Release /home/user/Documents/GitHub/nvk/generated/1.1.101/linux/build/Release/libvulkan.so /home/user/Documents/GitHub/nvk/generated/1.1.101/linux/build/Release/../../../../../lib/linux/x64/GLFW/libglfw3.a -lvulkan -lXrandr -lXi -lX11 -lXxf86vm -lXinerama -lXcursor -ldl -pthread
