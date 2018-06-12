#ifndef MATHBASIC_H
#define MATHBASIC_H

namespace mbasic{

	class MathBasic{
	public:
		MathBasic();
		~MathBasic();
		static int v1, v2;
		static int add(int v1_, int v2_);
		static int dif(int v1_, int v2_);
		static int mux(int v1_, int v2_);
		static int div(int v1_, int v2_);
	};

}

#endif