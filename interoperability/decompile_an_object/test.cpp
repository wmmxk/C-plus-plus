/* name mangling in c++ 
 * extern "C"  */

void f() {}
void g();


extern "C" {
   void ef() {}
	 void eg();
}

void h() {g(); eg(); }
