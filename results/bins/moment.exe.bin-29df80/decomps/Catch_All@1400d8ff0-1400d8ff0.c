
void Catch_All_1400d8ff0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x2140);
  if (*(longlong *)(param_2 + 0x2240) != *(longlong *)(param_2 + 0x2120)) {
    lVar2 = *(longlong *)(param_2 + 0x2240);
    do {
      FUN_1400dc310(lVar2);
      bVar3 = lVar2 != lVar1;
      lVar2 = lVar2 + 0xb0;
    } while (bVar3);
  }
  FUN_1400de140(*(void **)(param_2 + 0x2308),*(longlong *)(param_2 + 0x2098));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

