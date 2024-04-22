# This is a Make File

# /// @file makefile
# ///
# /// Definitions - makefile contain all the command present that
# /// are use to compile the code.
# ///
# /// @version 0.1
# ///
# /// @author Manish Ghule <manishghule26@gmail.com >
# ///
# /// (C)2024 Zeus Numerix Pvt. Ltd. All rights reserved.
# /// http :// www.zeusnumerix.com/

all: 
	g++ main.cpp conversion.cpp conversion.h function.h -o u_con

exac:
	./u_con
	
clean:
	rm -rf u_con	
	rm -rf *.exe
	rm -rf *.o
