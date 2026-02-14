
ulonglong FUN_1400bfd70(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = param_3 - param_2;
  if (uVar1 != 0) {
    uVar3 = 0xcbf29ce484222325;
    uVar2 = (ulonglong)((uint)uVar1 & 3);
    if (~param_2 + param_3 < 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        uVar3 = ((ulonglong)*(byte *)(param_2 + 3 + uVar4) ^
                ((ulonglong)*(byte *)(param_2 + 2 + uVar4) ^
                ((ulonglong)*(byte *)(param_2 + 1 + uVar4) ^
                (*(byte *)(param_2 + uVar4) ^ uVar3) * 0x100000001b3) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3;
        uVar4 = uVar4 + 4;
      } while ((uVar1 & 0xfffffffffffffffc) != uVar4);
    }
    if (uVar2 != 0) {
      uVar1 = 0;
      do {
        uVar3 = (*(byte *)(param_2 + uVar4 + uVar1) ^ uVar3) * 0x100000001b3;
        uVar1 = uVar1 + 1;
      } while (uVar2 != uVar1);
    }
    return uVar3;
  }
  return 0x84222325;
}

