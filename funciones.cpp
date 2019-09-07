#include <math.h>

class Recta{
	private:
		float m;
		float b;
	
	public:
		
		Recta( float _m, float _b ){
			m = _m;
			b = _b;
		}
		
		float getY( float x ){
			return ( m * x ) + b;
		}
};

class Parabola{
	private:
		float h;
		float c;
		float p;
		
	public:
		Parabola( float _h, float _c, float _p ){
			h = _h;
			c = _c;
			p = _p;
		}
		
		float getY( float x ){
			return ( ( pow( ( x - h ), 2 ) / ( 4 * p ) ) + c );
		}
		
		float getX( float y ){
			return ( ( pow( ( y - c ), 2 ) / ( 4 * p ) ) + h );
		}
	
	
};
