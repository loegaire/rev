
void Unwind_140069c00(undefined8 param_1,longlong param_2)

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
  char cVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint uVar15;
  bool bVar16;
  
  if (*(longlong *)(param_2 + 0x510) != 0) {
    uVar4 = 0;
    lVar6 = readgsbase();
    puVar2 = (undefined8 *)
             **(undefined8 **)(*(longlong *)(*(longlong *)(lVar6 + 0x60) + 0x18) + 0x10);
    uVar5 = 0xe2398719;
    puVar9 = puVar2;
    do {
      if (uVar4 == 0) {
LAB_140069cbd:
        lVar3 = puVar9[6];
        uVar11 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
        lVar6 = lVar3 + (ulonglong)uVar11;
        if ((ulonglong)uVar11 != 0) {
          uVar7 = (ulonglong)*(uint *)(lVar6 + 0x18);
          do {
            bVar16 = uVar7 == 0;
            uVar7 = uVar7 - 1;
            if (bVar16) goto LAB_140069c73;
            uVar13 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar6 + 0x20) + lVar3 + uVar7 * 4);
            cVar12 = *(char *)(lVar3 + uVar13);
            if (cVar12 == '\0') {
              uVar15 = 0x1cba1898;
            }
            else {
              pcVar14 = (char *)(uVar13 + lVar3 + 1);
              uVar15 = 0x1cba1898;
              do {
                uVar15 = ((int)cVar12 ^ uVar15) * 0x1000193;
                cVar12 = *pcVar14;
                pcVar14 = pcVar14 + 1;
              } while (cVar12 != '\0');
            }
          } while (uVar15 != uVar5);
          uVar4 = *(uint *)((ulonglong)*(uint *)(lVar6 + 0x1c) + lVar3 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar6 + 0x24) + lVar3 + (uVar7 & 0xffffffff) * 2)
                           * 4);
          pcVar10 = (code *)(lVar3 + (ulonglong)uVar4);
          if ((uVar4 <= uVar11) ||
             ((code *)(lVar6 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c))
                      ) <= pcVar10)) goto LAB_140069def;
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
        if (uVar11 == uVar4) goto LAB_140069cbd;
      }
LAB_140069c73:
      puVar9 = (undefined8 *)*puVar9;
    } while( true );
  }
LAB_140069e01:
  *(undefined8 *)(param_2 + 0x2a0) = 0xf;
  *(longlong *)(param_2 + 0x298) = param_2 + 0x980;
  *(undefined1 *)(param_2 + 0x1198) = 1;
  return;
LAB_140069def:
  (*pcVar10)(*(undefined8 *)(param_2 + 0x510),0,0x8000);
  goto LAB_140069e01;
}

