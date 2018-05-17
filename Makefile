all: vmmath

debug: vmmath_debug

compressed: vmmath_compressed

vmmath:
	g++ -Wall -o vmmath vmmath.cpp Double2DVector.cpp Double2DMatrix.cpp

vmmath_debug:
	g++ -Wall -g -o vmmath vmmath.cpp Double2DVector.cpp Double2DMatrix.cpp

vmmath_compressed:
	g++ -Wall -fno-math-errno -Os -m32 -fno-exceptions -fno-rtti -fmerge-all-constants -fno-ident -o vmmath vmmath.cpp Double2DVector.cpp Double2DMatrix.cpp

clean:
	rm vmmath
	rm -rvf vmmath.dSYM
