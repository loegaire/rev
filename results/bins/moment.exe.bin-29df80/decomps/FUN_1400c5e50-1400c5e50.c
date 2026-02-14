
void FUN_1400c5e50(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  code cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  code *pcVar9;
  uint uVar10;
  char cVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint uVar14;
  bool bVar15;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  lVar5 = readgsbase();
  plVar7 = (longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x60) + 0x18) + 0x10);
  uVar4 = 0x28188289;
LAB_1400c5eb6:
  plVar7 = (longlong *)*plVar7;
  if (uVar3 != 0) goto code_r0x0001400c5ebd;
  goto LAB_1400c5f0d;
code_r0x0001400c5ebd:
  uVar10 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar7 + 0xb) - 8U)) {
    lVar5 = 0;
    do {
      uVar10 = ((int)*(char *)(plVar7[0xc] + lVar5) ^ uVar10) * 0x1000193;
      lVar5 = lVar5 + 2;
    } while ((ulonglong)((*(int *)(plVar7 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar5);
  }
  if (uVar10 == uVar3) {
LAB_1400c5f0d:
    lVar2 = plVar7[6];
    uVar10 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar5 = lVar2 + (ulonglong)uVar10;
    if ((ulonglong)uVar10 != 0) {
      uVar8 = (ulonglong)*(uint *)(lVar5 + 0x18);
      do {
        bVar15 = uVar8 == 0;
        uVar8 = uVar8 - 1;
        if (bVar15) goto LAB_1400c5eb6;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar5 + 0x20) + lVar2 + uVar8 * 4);
        cVar11 = *(char *)(lVar2 + uVar12);
        if (cVar11 == '\0') {
          uVar14 = 0xf7e491c8;
        }
        else {
          pcVar13 = (char *)(uVar12 + lVar2 + 1);
          uVar14 = 0xf7e491c8;
          do {
            uVar14 = ((int)cVar11 ^ uVar14) * 0x1000193;
            cVar11 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar11 != '\0');
        }
      } while (uVar14 != uVar4);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar5 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar5 + 0x24) + lVar2 + (uVar8 & 0xffffffff) * 2) * 4)
      ;
      pcVar9 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar10) ||
         ((code *)(lVar5 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
          pcVar9)) {
        (*pcVar9)(param_1,0,0x8000);
        return;
      }
      uVar4 = 0xf7e491c8;
      uVar3 = 0xf7e491c8;
      cVar6 = *pcVar9;
      while (cVar6 != (code)0x2e) {
        uVar3 = ((int)(char)cVar6 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar6 = *pcVar1;
      }
      cVar6 = pcVar9[1];
      if (cVar6 != (code)0x0) {
        pcVar9 = pcVar9 + 2;
        uVar4 = 0xf7e491c8;
        do {
          uVar4 = ((int)(char)cVar6 ^ uVar4) * 0x1000193;
          cVar6 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar6 != (code)0x0);
      }
      lVar5 = readgsbase();
      plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(lVar5 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c5eb6;
}

