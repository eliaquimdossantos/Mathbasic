#include "mathbasic.h"

 
namespace mbasic{
	MathBasic::MathBasic(){

	}
	MathBasic::~MathBasic(){

	}

	int MathBasic::add(int v1_, int v2_){
		return (v1+v2);
	}
	int MathBasic::dif(int v1_, int v2_){
		return (v1-v2);
	}
	int MathBasic::mux(int v1_, int v2_){
		return (v1*v2);
	}
	int MathBasic::div(int v1_, int v2_){
		return (v1/v2);
	}

}

