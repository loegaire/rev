
void FUN_1400c0120(longlong *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  code cVar8;
  undefined8 *puVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  ulonglong uVar14;
  char *pcVar15;
  bool bVar16;
  
  if (*param_1 != 0) {
    uVar4 = 0;
    lVar6 = readgsbase();
    puVar2 = (undefined8 *)
             **(undefined8 **)(*(longlong *)(*(longlong *)(lVar6 + 0x60) + 0x18) + 0x10);
    uVar5 = 0xe2398719;
    puVar9 = puVar2;
    do {
      if (uVar4 == 0) {
LAB_1400c01bd:
        lVar3 = puVar9[6];
        uVar11 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
        lVar6 = lVar3 + (ulonglong)uVar11;
        if ((ulonglong)uVar11 != 0) {
          uVar7 = (ulonglong)*(uint *)(lVar6 + 0x18);
          do {
            bVar16 = uVar7 == 0;
            uVar7 = uVar7 - 1;
            if (bVar16) goto LAB_1400c0173;
            uVar14 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar6 + 0x20) + lVar3 + uVar7 * 4);
            cVar13 = *(char *)(lVar3 + uVar14);
            if (cVar13 == '\0') {
              uVar12 = 0x1cba1898;
            }
            else {
              pcVar15 = (char *)(uVar14 + lVar3 + 1);
              uVar12 = 0x1cba1898;
              do {
                uVar12 = ((int)cVar13 ^ uVar12) * 0x1000193;
                cVar13 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar13 != '\0');
            }
          } while (uVar12 != uVar5);
          uVar4 = *(uint *)((ulonglong)*(uint *)(lVar6 + 0x1c) + lVar3 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar6 + 0x24) + lVar3 + (uVar7 & 0xffffffff) * 2)
                           * 4);
          pcVar10 = (code *)(lVar3 + (ulonglong)uVar4);
          if ((uVar4 <= uVar11) ||
             ((code *)(lVar6 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c))
                      ) <= pcVar10)) goto LAB_1400c02ef;
          uVar5 = 0x1cba1898;
          uVar4 = 0x1cba1898;
          cVar8 = *pcVar10;
          while (cVar8 != (code)0x2e) {
            uVar4 = ((int)(char)cVar8 ^ uVar4) * 0x1000193;
            pcVar1 = pcVar10 + 1;
            pcVar10 = pcVar10 + 1;
            cVar8 = *pcVar1;
          }
          cVar8 = pcVar10[1];
          if (cVar8 != (code)0x0) {
            pcVar10 = pcVar10 + 2;
            uVar5 = 0x1cba1898;
            do {
              uVar5 = ((int)(char)cVar8 ^ uVar5) * 0x1000193;
              cVar8 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar8 != (code)0x0);
          }
          puVar9 = (undefined8 *)*puVar2;
        }
      }
      else {
        uVar11 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar9 + 0xb) - 8U)) {
          lVar6 = 0;
          do {
            uVar11 = ((int)*(char *)(puVar9[0xc] + lVar6) ^ uVar11) * 0x1000193;
            lVar6 = lVar6 + 2;
          } while ((ulonglong)((*(int *)(puVar9 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar6);
        }
        if (uVar11 == uVar4) goto LAB_1400c01bd;
      }
LAB_1400c0173:
      puVar9 = (undefined8 *)*puVar9;
    } while( true );
  }
LAB_1400c02fd:
  *param_1 = 0;
  return;
LAB_1400c02ef:
  (*pcVar10)(*param_1,0,0x8000,pcVar10,0xfffffffffffffffe);
  goto LAB_1400c02fd;
}

