#include <string.h>

char* hex2op(const char* hexstr) {
  if (strcmp("00", hexstr) == 0){
    return "BRK impl";
  }
  if (strcmp("10", hexstr) == 0){
    return "BPL rel";
  }
  if (strcmp("20", hexstr) == 0){
    return "JSR abs";
  }
  if (strcmp("30", hexstr) == 0){
    return "BMI rel";
  }
  if (strcmp("40", hexstr) == 0){
    return "RTI impl";
  }
  if (strcmp("50", hexstr) == 0){
    return "BVC rel";
  }
  if (strcmp("60", hexstr) == 0){
    return "RTS impl";
  }
  if (strcmp("70", hexstr) == 0){
    return "BVS rel";
  }
  if (strcmp("90", hexstr) == 0){
    return "BCC rel";
  }
  if (strcmp("a0", hexstr) == 0){
    return "LDY #";
  }
  if (strcmp("b0", hexstr) == 0){
    return "BCS rel";
  }
  if (strcmp("c0", hexstr) == 0){
    return "CPY #";
  }
  if (strcmp("d0", hexstr) == 0){
    return "BNE rel";
  }
  if (strcmp("e0", hexstr) == 0){
    return "CPX #";
  }
 if (strcmp("f0", hexstr) == 0){
    return "BEQ rel";
  }
 else{return 0;}
}
