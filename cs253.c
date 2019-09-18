#include stdio.h

main (){
  scanf("%x", &v);
  unsigned v = readTouchDataReg();
  unsigned x = getx (v) ;
  
  
}

getx(v) {
  unsigned x = (v&) >> 24;
  return x ;
}

