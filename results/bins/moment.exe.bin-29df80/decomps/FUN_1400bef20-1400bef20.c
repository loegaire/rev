
char * FUN_1400bef20(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  char *pcVar12;
  char cVar13;
  bool bVar14;
  
  lVar4 = readgsbase();
  puVar2 = (undefined8 *)**(longlong **)(*(longlong *)(*(longlong *)(lVar4 + 0x60) + 0x18) + 0x10);
  uVar3 = 0xd010769e;
  uVar8 = 0;
  puVar9 = puVar2;
  do {
    if (uVar8 == 0) {
LAB_1400befa0:
      lVar4 = puVar9[6];
      uVar10 = *(uint *)(lVar4 + 0x88 + (longlong)*(int *)(lVar4 + 0x3c));
      if ((ulonglong)uVar10 != 0) {
        lVar6 = (ulonglong)uVar10 + lVar4;
        uVar7 = (ulonglong)*(uint *)(lVar6 + 0x18);
        do {
          bVar14 = uVar7 == 0;
          uVar7 = uVar7 - 1;
          if (bVar14) goto LAB_1400bf0c0;
          uVar11 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar6 + 0x20) + lVar4 + uVar7 * 4);
          cVar13 = *(char *)(lVar4 + uVar11);
          if (cVar13 == '\0') {
            uVar5 = 0x352c9a7e;
          }
          else {
            pcVar12 = (char *)(uVar11 + lVar4 + 1);
            uVar5 = 0x352c9a7e;
            do {
              uVar5 = ((int)cVar13 ^ uVar5) * 0x1000193;
              cVar13 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar13 != '\0');
          }
        } while (uVar5 != uVar3);
        uVar8 = *(uint *)((ulonglong)*(uint *)(lVar6 + 0x1c) + lVar4 +
                         (ulonglong)
                         *(ushort *)
                          ((ulonglong)*(uint *)(lVar6 + 0x24) + lVar4 + (uVar7 & 0xffffffff) * 2) *
                         4);
        pcVar12 = (char *)(lVar4 + (ulonglong)uVar8);
        if (uVar8 <= uVar10) {
          return pcVar12;
        }
        if ((char *)(lVar6 + (ulonglong)*(uint *)(lVar4 + 0x8c + (longlong)*(int *)(lVar4 + 0x3c)))
            <= pcVar12) {
          return pcVar12;
        }
        uVar3 = 0x352c9a7e;
        uVar8 = 0x352c9a7e;
        cVar13 = *pcVar12;
        while (cVar13 != '.') {
          uVar8 = ((int)cVar13 ^ uVar8) * 0x1000193;
          pcVar1 = pcVar12 + 1;
          pcVar12 = pcVar12 + 1;
          cVar13 = *pcVar1;
        }
        cVar13 = pcVar12[1];
        if (cVar13 != '\0') {
          pcVar12 = pcVar12 + 2;
          uVar3 = 0x352c9a7e;
          do {
            uVar3 = ((int)cVar13 ^ uVar3) * 0x1000193;
            cVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar13 != '\0');
        }
        puVar9 = (undefined8 *)*puVar2;
      }
    }
    else {
      uVar10 = 0x352c9a7e;
      if (1 < (ushort)(*(int *)(puVar9 + 0xb) - 8U)) {
        lVar4 = 0;
        do {
          uVar10 = ((int)*(char *)(puVar9[0xc] + lVar4) ^ uVar10) * 0x1000193;
          lVar4 = lVar4 + 2;
        } while ((ulonglong)((*(int *)(puVar9 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar4);
      }
      if (uVar10 == uVar8) goto LAB_1400befa0;
    }
LAB_1400bf0c0:
    puVar9 = (undefined8 *)*puVar9;
    if ((puVar9 == puVar2) || (puVar9[6] == 0)) {
      return (char *)0x0;
    }
  } while( true );
}

