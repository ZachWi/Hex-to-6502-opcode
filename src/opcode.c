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
  if (strcmp("01", hexstr) == 0){
    return "ORA X, ind";
  }
  if (strcmp("11", hexstr) == 0){
    return "ORA Y, ind";
  }
  if (strcmp("21", hexstr) == 0){
    return "AND X, ind";
  }
  if (strcmp("31", hexstr) == 0){
    return "AND ind, Y";
  } 
  if (strcmp("41", hexstr) == 0){
    return "EOR X, ind";
  }
  if (strcmp("51", hexstr) == 0){
    return "EOR ind, Y";
  }
  if (strcmp("61", hexstr) == 0){
    return "ADC X, ind";
  }
  if (strcmp("71", hexstr) == 0){
    return "ADC ind, Y";
  }
  if (strcmp("81", hexstr) == 0){
    return "STA X, ind";
  }
  if (strcmp("91", hexstr) == 0){
    return "STA ind, Y";
  }
  if (strcmp("a1", hexstr) == 0){
    return "LDA X, ind";
  }
  if (strcmp("b1", hexstr) == 0){
    return "LDA ind, Y";
  }
  if (strcmp("c1", hexstr) == 0){
    return "CMP X, ind";
  }
  if (strcmp("d1", hexstr) == 0){
    return "CMP ind, Y ";
  }
  if (strcmp("e1", hexstr) == 0){
    return "SBC X, ind";
  }
  if (strcmp("f1", hexstr) == 0){
    return "SBC ind, Y";
  }
  if (strcmp("a2", hexstr) == 0){
    return "LDX #";
  }
  if (strcmp("24", hexstr) == 0){
    return "BIT zpg";
  }
  if (strcmp("84", hexstr) == 0){
    return "STY zpg";
  }
  if (strcmp("94", hexstr) == 0){
    return "STY zpg, X";
  }
  if (strcmp("a4", hexstr) == 0){
    return "LDY zpg";
  }
  if (strcmp("b4", hexstr) == 0){
    return "LDY zpg, X";
  }
  if (strcmp("c4", hexstr) == 0){
    return "CPY zpg";
  }
  if (strcmp("e4", hexstr) == 0){
    return "CPX zpg";
  }
  if (strcmp("05", hexstr) == 0){
    return "ORA zpg";
  }
  if (strcmp("15", hexstr) == 0){
    return "ORA zpg, X";
  }
  if (strcmp("25", hexstr) == 0){
    return "AND zpg";
  }
  if (strcmp("35", hexstr) == 0){
    return "AND zpg, X";
  }
  if (strcmp("45", hexstr) == 0){
    return "EOR zpg";
  }
  if (strcmp("55", hexstr) == 0){
    return "EOR zpg, x";
  }  
  if (strcmp("65", hexstr) == 0){
    return "ADC zpg";
  }
  if (strcmp("75", hexstr) == 0){
    return "ADC zpg, X";
  }
  if (strcmp("85", hexstr) == 0){
    return "STA zpg";
  }
  if (strcmp("95", hexstr) == 0){
    return "STA zpg, X";
  }
  if (strcmp("a5", hexstr) == 0){
    return "LDA zpg";
  }
  if (strcmp("b5", hexstr) == 0){
    return "LDA zpg, X";
  }
  if (strcmp("c5", hexstr) == 0){
    return "CMP zpg";
  }
  if (strcmp("d5", hexstr) == 0){
    return "CMP zpg, X";
  }
  if (strcmp("e5", hexstr) == 0){
    return "SBC zpg";
  }
  if (strcmp("f5", hexstr) == 0){
    return "SBC zpg, X";
  }
  if (strcmp("06", hexstr) == 0){
    return "ASL zpg";
  }
  if (strcmp("16", hexstr) == 0){
    return "ASL zpg, X";
  }
  if (strcmp("26", hexstr) == 0){
    return "ROL zpg";
  }
  if (strcmp("36", hexstr) == 0){
    return "ROL zpg, X";
  }
  if (strcmp("46", hexstr) == 0){
    return "LSR zpg";
  }
  if (strcmp("56", hexstr) == 0){
    return "LSR zpg, x";
  }  
  if (strcmp("66", hexstr) == 0){
    return "ROR zpg";
  }
  if (strcmp("76", hexstr) == 0){
    return "ROR zpg, X";
  }
  if (strcmp("86", hexstr) == 0){
    return "STX zpg";
  }
  if (strcmp("96", hexstr) == 0){
    return "STX zpg, Y";
  }
  if (strcmp("a6", hexstr) == 0){
    return "LDX zpg";
  }
  if (strcmp("b6", hexstr) == 0){
    return "LDX zpg, Y";
  }
  if (strcmp("c6", hexstr) == 0){
    return "DEC zpg";
  }
  if (strcmp("d6", hexstr) == 0){
    return "DEC zpg, X";
  }
  if (strcmp("e6", hexstr) == 0){
    return "INC zpg";
  }
  if (strcmp("f6", hexstr) == 0){
    return "INC zpg, X";
  }
  if (strcmp("08", hexstr) == 0){
    return "PHP impl";
  }
  if (strcmp("18", hexstr) == 0){
    return "CLC impl";
  }
  if (strcmp("28", hexstr) == 0){
    return "PLP impl";
  }
  if (strcmp("38", hexstr) == 0){
    return "SEC impl";
  }
  if (strcmp("48", hexstr) == 0){
    return "PHA impl";
  }
  if (strcmp("58", hexstr) == 0){
    return "CLI impl";
  }  
  if (strcmp("68", hexstr) == 0){
    return "PLA impl";
  }
  if (strcmp("78", hexstr) == 0){
    return "SEI impl";
  }
  if (strcmp("88", hexstr) == 0){
    return "DEY impl";
  }
  if (strcmp("98", hexstr) == 0){
    return "TYA impl";
  }
  if (strcmp("a8", hexstr) == 0){
    return "TAY impl";
  }
  if (strcmp("b8", hexstr) == 0){
    return "CLV impl";
  }
  if (strcmp("c8", hexstr) == 0){
    return "INY impl";
  }
  if (strcmp("d8", hexstr) == 0){
    return "CLD impl";
  }
  if (strcmp("e8", hexstr) == 0){
    return "INX impl";
  }
  if (strcmp("f8", hexstr) == 0){
    return "SED impl";
  }
  if (strcmp("09", hexstr) == 0){
    return "ORA #";
  }
  if (strcmp("19", hexstr) == 0){
    return "ORA abs, Y";
  }
  if (strcmp("29", hexstr) == 0){
    return "AND #";
  }
  if (strcmp("39", hexstr) == 0){
    return "AND abs, Y";
  }
  if (strcmp("49", hexstr) == 0){
    return "EOR #";
  }
  if (strcmp("59", hexstr) == 0){
    return "EOR abs, Y";
  }  
  if (strcmp("69", hexstr) == 0){
    return "ADC #";
  }
  if (strcmp("79", hexstr) == 0){
    return "ADC abs, Y";
  }
  if (strcmp("99", hexstr) == 0){
    return "STA abs, Y";
  }
  if (strcmp("a9", hexstr) == 0){
    return "LDA #";
  }
  if (strcmp("b9", hexstr) == 0){
    return "LDA abs, Y";
  }
  if (strcmp("c9", hexstr) == 0){
    return "CMP #";
  }
  if (strcmp("d9", hexstr) == 0){
    return "CMP abs, Y";
  }
  if (strcmp("e9", hexstr) == 0){
    return "SBC #";
  }
  if (strcmp("f9", hexstr) == 0){
    return "SBC abs, Y";
  }  
  if (strcmp("0a", hexstr) == 0){
    return "ASL A";
  }
  if (strcmp("2a", hexstr) == 0){
    return "ROL A";
  }
  if (strcmp("4a", hexstr) == 0){
    return "LSR A";
  }
  if (strcmp("6a", hexstr) == 0){
    return "ROR A";
  }
  if (strcmp("8a", hexstr) == 0){
    return "TXA impl";
  }
  if (strcmp("9a", hexstr) == 0){
    return "TXS impl";
  }
  if (strcmp("aa", hexstr) == 0){
    return "TAX impl";
  }
  if (strcmp("ba", hexstr) == 0){
    return "TSX impl";
  }
  if (strcmp("ca", hexstr) == 0){
    return "DEX impl";
  }
  if (strcmp("ea", hexstr) == 0){
    return "NOP impl";
  }
  if (strcmp("2c", hexstr) == 0){
    return "BIT abs";
  }
  if (strcmp("4c", hexstr) == 0){
    return "JMP abs";
  }
  if (strcmp("6c", hexstr) == 0){
    return "JMP ind";
  }
  if (strcmp("8c", hexstr) == 0){
    return "STY abs";
  }
  if (strcmp("ac", hexstr) == 0){
    return "LDY abs";
  }
  if (strcmp("bc", hexstr) == 0){
    return "LDY abs, X";
  }
  if (strcmp("cc", hexstr) == 0){
    return "CPY abs";
  }
  if (strcmp("ec", hexstr) == 0){
    return "CPX abs";
  }  
  if (strcmp("0d", hexstr) == 0){
    return "ORA abs";
  }
  if (strcmp("1d", hexstr) == 0){
    return "ORA abs, X";
  }
  if (strcmp("2d", hexstr) == 0){
    return "AND abs";
  }
  if (strcmp("3d", hexstr) == 0){
    return "AND abs, X";
  }
  if (strcmp("4d", hexstr) == 0){
    return "EOR abs";
  }
  if (strcmp("5d", hexstr) == 0){
    return "EOR abs, X";
  }  
  if (strcmp("6d", hexstr) == 0){
    return "ADC abs";
  }
  if (strcmp("7d", hexstr) == 0){
    return "ADC abs, X";
  }
  if (strcmp("8d", hexstr) == 0){
    return "STA abs";
  }
  if (strcmp("9d", hexstr) == 0){
    return "STA abs, X";
  }
  if (strcmp("ad", hexstr) == 0){
    return "LDA abs";
  }
  if (strcmp("bd", hexstr) == 0){
    return "LDA abs, X";
  }
  if (strcmp("cd", hexstr) == 0){
    return "CMP abs";
  }
  if (strcmp("dd", hexstr) == 0){
    return "CMP abs, X";
  }
  if (strcmp("ed", hexstr) == 0){
    return "SBC abs";
  }
  if (strcmp("fd", hexstr) == 0){
    return "SBC abs, X";
  }  
  if (strcmp("0e", hexstr) == 0){
    return "ASL abs";
  }
  if (strcmp("1e", hexstr) == 0){
    return "ABS abs, X";
  }
  if (strcmp("2e", hexstr) == 0){
    return "ROL abs";
  }
  if (strcmp("3e", hexstr) == 0){
    return "ROL abs, X";
  }
  if (strcmp("4e", hexstr) == 0){
    return "LSR abs";
  }
  if (strcmp("5e", hexstr) == 0){
    return "LSR abs, X";
  }  
  if (strcmp("6e", hexstr) == 0){
    return "ROR abs";
  }
  if (strcmp("7e", hexstr) == 0){
    return "ROR abs, X";
  }
  if (strcmp("8e", hexstr) == 0){
    return "STX abs";
  }
  if (strcmp("ae", hexstr) == 0){
    return "LDX abs";
  }
  if (strcmp("be", hexstr) == 0){
    return "LDX abs, Y";
  }
  if (strcmp("ce", hexstr) == 0){
    return "DEC abs";
  }
  if (strcmp("de", hexstr) == 0){
    return "DEC abs, X";
  }
  if (strcmp("ee", hexstr) == 0){
    return "INC abs";
  }
  if (strcmp("fe", hexstr) == 0){
    return "INC abs, X";
  }  
  else {
    return 0; // IT'S FINALLY OVER UGH
  }
}
