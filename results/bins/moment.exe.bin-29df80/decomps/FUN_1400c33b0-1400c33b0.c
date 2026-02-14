
void FUN_1400c33b0(void)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  code cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  code *pcVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  char cVar19;
  bool bVar20;
  char *local_90;
  undefined4 local_84;
  ulonglong local_80;
  longlong *local_78;
  int *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  uint local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  local_80 = local_80 & 0xffffffff00000000;
  uVar3 = 0;
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar6 = 0xba9d8b4f;
LAB_1400c3415:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c341c;
  goto LAB_1400c346d;
code_r0x0001400c341c:
  uVar13 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar13) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar13 == uVar3) {
LAB_1400c346d:
    lVar2 = plVar8[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c3415;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar18 = 0x2292570b;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar18 = 0x2292570b;
          do {
            uVar18 = ((int)cVar19 ^ uVar18) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar18 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c358b;
      uVar6 = 0x2292570b;
      uVar3 = 0x2292570b;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar6 = 0x2292570b;
        do {
          uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c3415;
LAB_1400c358b:
  plVar8 = (longlong *)(*pcVar15)(0,8,0x3000,4);
  uVar3 = 8;
LAB_1400c35c1:
  lVar10 = readgsbase();
  lVar10 = *(longlong *)
            (**(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar14 = (ulonglong)*(uint *)(lVar10 + 0x88 + (longlong)*(int *)(lVar10 + 0x3c));
  uVar12 = 0;
  do {
    uVar16 = (ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar10 + 0x20 + uVar14) + lVar10 + uVar12 * 4);
    cVar19 = *(char *)(lVar10 + uVar16);
    if (cVar19 != '\0') {
      pcVar11 = (char *)(uVar16 + lVar10 + 1);
      uVar6 = 0x61b3279c;
      do {
        uVar6 = ((int)cVar19 ^ uVar6) * 0x1000193;
        cVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar19 != '\0');
      if (uVar6 == 0xbf5693b1) break;
    }
    uVar12 = uVar12 + 1;
  } while( true );
  local_78 = plVar8;
  iVar4 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c + uVar14) + lVar10 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar10 + 0x24 + uVar14) + lVar10 +
                               (uVar12 & 0xffffffff) * 2) * 4) + lVar10))
                    (0xffffffffffffffff,7,plVar8,uVar3,&local_80);
  if ((iVar4 < 0) && (uVar6 = (uint)local_80, uVar3 < (uint)local_80)) {
    uVar3 = 0;
    lVar10 = readgsbase();
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    uVar13 = 0xba9d8b4f;
LAB_1400c36c5:
    plVar8 = (longlong *)*plVar8;
    if (uVar3 != 0) goto code_r0x0001400c36cc;
    goto LAB_1400c371d;
  }
  if (*local_78 != 0) {
    LOCK();
    DAT_14012b250 = 1;
    UNLOCK();
  }
  local_80 = 0;
  local_84 = 0;
  iVar4 = NtQueryInformationProcess(0xffffffffffffffff,0x1e,&local_80,8,&local_84);
  if ((local_80 != 0) || (iVar4 != -0x3ffffcad)) {
    LOCK();
    DAT_14012b250 = 1;
    UNLOCK();
  }
  local_4c[0] = 0;
  uVar3 = 0;
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar6 = 0xba9d8b4f;
LAB_1400c3ab5:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c3abc;
  goto LAB_1400c3b0d;
code_r0x0001400c36cc:
  uVar18 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar3) {
LAB_1400c371d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c36c5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0x2292570b;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0x2292570b;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c3840;
      uVar13 = 0x2292570b;
      uVar3 = 0x2292570b;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0x2292570b;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c36c5;
LAB_1400c3840:
  plVar8 = (longlong *)(*pcVar15)(0,(uint)local_80,0x3000,4);
  uVar3 = uVar6;
  if (local_78 != (longlong *)0x0) {
    uVar6 = 0;
    lVar10 = readgsbase();
    plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    uVar13 = 0x28188289;
LAB_1400c38a5:
    plVar9 = (longlong *)*plVar9;
    if (uVar6 != 0) goto code_r0x0001400c38ac;
    goto LAB_1400c38fd;
  }
  goto LAB_1400c35c1;
code_r0x0001400c38ac:
  uVar18 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar9 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar9[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar9 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar6) {
LAB_1400c38fd:
    lVar2 = plVar9[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c38a5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0xf7e491c8;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar6 + lVar2);
      if ((uVar6 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c35b0;
      uVar13 = 0xf7e491c8;
      uVar6 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0xf7e491c8;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar9 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c38a5;
LAB_1400c35b0:
  (*pcVar15)(local_78,0);
  goto LAB_1400c35c1;
code_r0x0001400c3abc:
  uVar13 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar13) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar13 == uVar3) {
LAB_1400c3b0d:
    lVar2 = plVar8[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c3ab5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar18 = 0x2292570b;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar18 = 0x2292570b;
          do {
            uVar18 = ((int)cVar19 ^ uVar18) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar18 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c3c2b;
      uVar6 = 0x2292570b;
      uVar3 = 0x2292570b;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar6 = 0x2292570b;
        do {
          uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c3ab5;
LAB_1400c3c2b:
  piVar5 = (int *)(*pcVar15)(0,4,0x3000,4);
  uVar3 = 4;
LAB_1400c3c61:
  lVar10 = readgsbase();
  lVar10 = *(longlong *)
            (**(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar14 = (ulonglong)*(uint *)(lVar10 + 0x88 + (longlong)*(int *)(lVar10 + 0x3c));
  uVar12 = 0;
  do {
    uVar16 = (ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar10 + 0x20 + uVar14) + lVar10 + uVar12 * 4);
    cVar19 = *(char *)(lVar10 + uVar16);
    if (cVar19 != '\0') {
      pcVar11 = (char *)(uVar16 + lVar10 + 1);
      uVar6 = 0x61b3279c;
      do {
        uVar6 = ((int)cVar19 ^ uVar6) * 0x1000193;
        cVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar19 != '\0');
      if (uVar6 == 0xbf5693b1) break;
    }
    uVar12 = uVar12 + 1;
  } while( true );
  local_70 = piVar5;
  iVar4 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c + uVar14) + lVar10 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar10 + 0x24 + uVar14) + lVar10 +
                               (uVar12 & 0xffffffff) * 2) * 4) + lVar10))
                    (0xffffffffffffffff,0x1f,piVar5,uVar3,local_4c);
  uVar6 = local_4c[0];
  if ((iVar4 < 0) && (uVar3 < local_4c[0])) {
    uVar3 = 0;
    lVar10 = readgsbase();
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    uVar13 = 0xba9d8b4f;
LAB_1400c3d65:
    plVar8 = (longlong *)*plVar8;
    if (uVar3 != 0) goto code_r0x0001400c3d6c;
    goto LAB_1400c3dbd;
  }
  if (*local_70 == 0) {
    LOCK();
    DAT_14012b250 = 1;
    UNLOCK();
  }
  local_4c[0] = 0;
  local_58 = (char *)0x0;
  uVar3 = 0;
LAB_1400c40e0:
  local_68 = local_58;
LAB_1400c40f0:
  uVar6 = 0;
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar13 = 0x94da9b9e;
LAB_1400c4125:
  plVar8 = (longlong *)*plVar8;
  if (uVar6 != 0) goto code_r0x0001400c412c;
  goto LAB_1400c417d;
code_r0x0001400c3d6c:
  uVar18 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar3) {
LAB_1400c3dbd:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c3d65;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0x2292570b;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0x2292570b;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c3ee0;
      uVar13 = 0x2292570b;
      uVar3 = 0x2292570b;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0x2292570b;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c3d65;
LAB_1400c3ee0:
  piVar5 = (int *)(*pcVar15)(0,local_4c[0],0x3000,4);
  uVar3 = uVar6;
  if (local_70 != (int *)0x0) {
    uVar6 = 0;
    lVar10 = readgsbase();
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    uVar13 = 0x28188289;
LAB_1400c3f45:
    plVar8 = (longlong *)*plVar8;
    if (uVar6 != 0) goto code_r0x0001400c3f4c;
    goto LAB_1400c3f9d;
  }
  goto LAB_1400c3c61;
code_r0x0001400c3f4c:
  uVar18 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar6) {
LAB_1400c3f9d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c3f45;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0xf7e491c8;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar6 + lVar2);
      if ((uVar6 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c3c50;
      uVar13 = 0xf7e491c8;
      uVar6 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0xf7e491c8;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c3f45;
LAB_1400c3c50:
  (*pcVar15)(local_70,0);
  goto LAB_1400c3c61;
code_r0x0001400c412c:
  uVar18 = 0x46f966e9;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar6) {
LAB_1400c417d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c4125;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0x46f966e9;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0x46f966e9;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar6 + lVar2);
      if ((uVar6 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c42a0;
      uVar13 = 0x46f966e9;
      uVar6 = 0x46f966e9;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0x46f966e9;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c4125;
LAB_1400c42a0:
  iVar4 = (*pcVar15)(0x23,local_68,uVar3,local_4c);
  uVar6 = local_4c[0];
  if (-1 < iVar4) {
    if ((*local_68 != '\0') || (local_68[1] == '\0')) {
      LOCK();
      DAT_14012b250 = 1;
      UNLOCK();
    }
    if (DAT_7ffe02d4 != '\0') {
      LOCK();
      DAT_14012b250 = 1;
      UNLOCK();
    }
    local_4c[0] = 0;
    local_60 = (char *)0x0;
    uVar3 = 0;
    goto LAB_1400c46ba;
  }
  if (uVar3 < local_4c[0]) goto code_r0x0001400c42c6;
  goto LAB_1400c40f0;
LAB_1400c46ba:
  local_58 = local_60;
LAB_1400c46d0:
  uVar6 = 0;
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar13 = 0x94da9b9e;
LAB_1400c4705:
  plVar8 = (longlong *)*plVar8;
  if (uVar6 != 0) goto code_r0x0001400c470c;
  goto LAB_1400c475d;
code_r0x0001400c470c:
  uVar18 = 0x46f966e9;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar6) {
LAB_1400c475d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c4705;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0x46f966e9;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0x46f966e9;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar6 + lVar2);
      if ((uVar6 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c4880;
      uVar13 = 0x46f966e9;
      uVar6 = 0x46f966e9;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0x46f966e9;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c4705;
LAB_1400c4880:
  iVar4 = (*pcVar15)(0x95,local_58,uVar3,local_4c);
  uVar6 = local_4c[0];
  if (-1 < iVar4) {
    if (((*local_58 != '\0') || (local_58[1] != '\0')) || (local_58[2] != '\0')) {
      LOCK();
      DAT_14012b250 = 1;
      UNLOCK();
    }
    local_4c[0] = 0;
    local_90 = (char *)0x0;
    uVar3 = 0;
    goto LAB_1400c4c90;
  }
  if (uVar3 < local_4c[0]) goto code_r0x0001400c48a6;
  goto LAB_1400c46d0;
LAB_1400c4c90:
  local_60 = local_90;
LAB_1400c4ca0:
  uVar6 = 0;
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar13 = 0x94da9b9e;
LAB_1400c4cd5:
  plVar8 = (longlong *)*plVar8;
  if (uVar6 != 0) goto code_r0x0001400c4cdc;
  goto LAB_1400c4d2d;
code_r0x0001400c4cdc:
  uVar18 = 0x46f966e9;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar6) {
LAB_1400c4d2d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c4cd5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0x46f966e9;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0x46f966e9;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar6 + lVar2);
      if ((uVar6 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c4e50;
      uVar13 = 0x46f966e9;
      uVar6 = 0x46f966e9;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0x46f966e9;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c4cd5;
LAB_1400c4e50:
  iVar4 = (*pcVar15)(0xa3,local_60,uVar3,local_4c);
  uVar6 = local_4c[0];
  if (-1 < iVar4) {
    if (*local_60 != '\0') {
      LOCK();
      DAT_14012b250 = 1;
      UNLOCK();
    }
    uVar3 = 0;
    lVar10 = readgsbase();
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    uVar6 = 0x28188289;
    goto LAB_1400c5275;
  }
  if (uVar3 < local_4c[0]) goto code_r0x0001400c4e76;
  goto LAB_1400c4ca0;
LAB_1400c5275:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c527c;
  goto LAB_1400c52cd;
code_r0x0001400c527c:
  uVar13 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar13) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar13 == uVar3) {
LAB_1400c52cd:
    lVar2 = plVar8[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c5275;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar18 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar18 = 0xf7e491c8;
          do {
            uVar18 = ((int)cVar19 ^ uVar18) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar18 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c53eb;
      uVar6 = 0xf7e491c8;
      uVar3 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar6 = 0xf7e491c8;
        do {
          uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c5275;
LAB_1400c53eb:
  uVar3 = 0;
  (*pcVar15)(local_60,0,0x8000);
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar6 = 0x28188289;
LAB_1400c5435:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c543c;
  goto LAB_1400c548d;
code_r0x0001400c543c:
  uVar13 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar13) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar13 == uVar3) {
LAB_1400c548d:
    lVar2 = plVar8[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c5435;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar18 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar18 = 0xf7e491c8;
          do {
            uVar18 = ((int)cVar19 ^ uVar18) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar18 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c55ab;
      uVar6 = 0xf7e491c8;
      uVar3 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar6 = 0xf7e491c8;
        do {
          uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c5435;
LAB_1400c55ab:
  uVar3 = 0;
  (*pcVar15)(local_58,0,0x8000);
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar6 = 0x28188289;
LAB_1400c55f5:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c55fc;
  goto LAB_1400c564d;
code_r0x0001400c55fc:
  uVar13 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar13) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar13 == uVar3) {
LAB_1400c564d:
    lVar2 = plVar8[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c55f5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar18 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar18 = 0xf7e491c8;
          do {
            uVar18 = ((int)cVar19 ^ uVar18) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar18 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c576b;
      uVar6 = 0xf7e491c8;
      uVar3 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar6 = 0xf7e491c8;
        do {
          uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c55f5;
LAB_1400c576b:
  uVar3 = 0;
  (*pcVar15)(local_68,0,0x8000);
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar6 = 0x28188289;
LAB_1400c57b5:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c57bc;
  goto LAB_1400c580d;
code_r0x0001400c57bc:
  uVar13 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar13) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar13 == uVar3) {
LAB_1400c580d:
    lVar2 = plVar8[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c57b5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar18 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar18 = 0xf7e491c8;
          do {
            uVar18 = ((int)cVar19 ^ uVar18) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar18 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c592b;
      uVar6 = 0xf7e491c8;
      uVar3 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar6 = 0xf7e491c8;
        do {
          uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c57b5;
LAB_1400c592b:
  uVar3 = 0;
  (*pcVar15)(local_70,0,0x8000);
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar6 = 0x28188289;
LAB_1400c5975:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c597c;
  goto LAB_1400c59cd;
code_r0x0001400c597c:
  uVar13 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar13) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar13 == uVar3) {
LAB_1400c59cd:
    lVar2 = plVar8[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c5975;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar18 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar18 = 0xf7e491c8;
          do {
            uVar18 = ((int)cVar19 ^ uVar18) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar18 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) {
        (*pcVar15)(local_78,0,0x8000);
        return;
      }
      uVar6 = 0xf7e491c8;
      uVar3 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar6 = 0xf7e491c8;
        do {
          uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c5975;
code_r0x0001400c4e76:
  uVar3 = 0;
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar13 = 0xba9d8b4f;
LAB_1400c4eb5:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c4ebc;
  goto LAB_1400c4f0d;
code_r0x0001400c4ebc:
  uVar18 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar3) {
LAB_1400c4f0d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c4eb5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0x2292570b;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0x2292570b;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c5030;
      uVar13 = 0x2292570b;
      uVar3 = 0x2292570b;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0x2292570b;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c4eb5;
LAB_1400c5030:
  local_90 = (char *)(*pcVar15)(0,local_4c[0],0x3000,4);
  uVar3 = uVar6;
  if (local_60 != (char *)0x0) {
    uVar6 = 0;
    lVar10 = readgsbase();
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    uVar13 = 0x28188289;
LAB_1400c5095:
    plVar8 = (longlong *)*plVar8;
    if (uVar6 != 0) goto code_r0x0001400c509c;
    goto LAB_1400c50ed;
  }
  goto LAB_1400c4c90;
code_r0x0001400c509c:
  uVar18 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar6) {
LAB_1400c50ed:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c5095;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0xf7e491c8;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar6 + lVar2);
      if ((uVar6 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c5210;
      uVar13 = 0xf7e491c8;
      uVar6 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0xf7e491c8;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c5095;
LAB_1400c5210:
  (*pcVar15)(local_60,0,0x8000);
  goto LAB_1400c4c90;
code_r0x0001400c48a6:
  uVar3 = 0;
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar13 = 0xba9d8b4f;
LAB_1400c48e5:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c48ec;
  goto LAB_1400c493d;
code_r0x0001400c48ec:
  uVar18 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar3) {
LAB_1400c493d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c48e5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0x2292570b;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0x2292570b;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c4a60;
      uVar13 = 0x2292570b;
      uVar3 = 0x2292570b;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0x2292570b;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c48e5;
LAB_1400c4a60:
  local_60 = (char *)(*pcVar15)(0,local_4c[0],0x3000,4);
  uVar3 = uVar6;
  if (local_58 != (char *)0x0) {
    uVar6 = 0;
    lVar10 = readgsbase();
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    uVar13 = 0x28188289;
LAB_1400c4ac5:
    plVar8 = (longlong *)*plVar8;
    if (uVar6 != 0) goto code_r0x0001400c4acc;
    goto LAB_1400c4b1d;
  }
  goto LAB_1400c46ba;
code_r0x0001400c4acc:
  uVar18 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar6) {
LAB_1400c4b1d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c4ac5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0xf7e491c8;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar6 + lVar2);
      if ((uVar6 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c4c40;
      uVar13 = 0xf7e491c8;
      uVar6 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0xf7e491c8;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c4ac5;
LAB_1400c4c40:
  (*pcVar15)(local_58,0,0x8000);
  goto LAB_1400c46ba;
code_r0x0001400c42c6:
  uVar3 = 0;
  lVar10 = readgsbase();
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
  uVar13 = 0xba9d8b4f;
LAB_1400c4305:
  plVar8 = (longlong *)*plVar8;
  if (uVar3 != 0) goto code_r0x0001400c430c;
  goto LAB_1400c435d;
code_r0x0001400c430c:
  uVar18 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar3) {
LAB_1400c435d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c4305;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0x2292570b;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0x2292570b;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c4480;
      uVar13 = 0x2292570b;
      uVar3 = 0x2292570b;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar3 = ((int)(char)cVar7 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0x2292570b;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c4305;
LAB_1400c4480:
  local_58 = (char *)(*pcVar15)(0,local_4c[0],0x3000,4);
  uVar3 = uVar6;
  if (local_68 != (char *)0x0) {
    uVar6 = 0;
    lVar10 = readgsbase();
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    uVar13 = 0x28188289;
LAB_1400c44e5:
    plVar8 = (longlong *)*plVar8;
    if (uVar6 != 0) goto code_r0x0001400c44ec;
    goto LAB_1400c453d;
  }
  goto LAB_1400c40e0;
code_r0x0001400c44ec:
  uVar18 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar8 + 0xb) - 8U)) {
    lVar10 = 0;
    do {
      uVar18 = ((int)*(char *)(plVar8[0xc] + lVar10) ^ uVar18) * 0x1000193;
      lVar10 = lVar10 + 2;
    } while ((ulonglong)((*(int *)(plVar8 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar10);
  }
  if (uVar18 == uVar6) {
LAB_1400c453d:
    lVar2 = plVar8[6];
    uVar18 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar10 = lVar2 + (ulonglong)uVar18;
    if ((ulonglong)uVar18 != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar10 + 0x18);
      do {
        bVar20 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar20) goto LAB_1400c44e5;
        uVar12 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar10 + 0x20) + lVar2 + uVar14 * 4);
        cVar19 = *(char *)(lVar2 + uVar12);
        if (cVar19 == '\0') {
          uVar17 = 0xf7e491c8;
        }
        else {
          pcVar11 = (char *)(uVar12 + lVar2 + 1);
          uVar17 = 0xf7e491c8;
          do {
            uVar17 = ((int)cVar19 ^ uVar17) * 0x1000193;
            cVar19 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar19 != '\0');
        }
      } while (uVar17 != uVar13);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar10 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar10 + 0x24) + lVar2 + (uVar14 & 0xffffffff) * 2) *
                       4);
      pcVar15 = (code *)((ulonglong)uVar6 + lVar2);
      if ((uVar6 <= uVar18) ||
         ((code *)(lVar10 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar15)) goto LAB_1400c4660;
      uVar13 = 0xf7e491c8;
      uVar6 = 0xf7e491c8;
      cVar7 = *pcVar15;
      while (cVar7 != (code)0x2e) {
        uVar6 = ((int)(char)cVar7 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar15 + 1;
        pcVar15 = pcVar15 + 1;
        cVar7 = *pcVar1;
      }
      cVar7 = pcVar15[1];
      if (cVar7 != (code)0x0) {
        pcVar15 = pcVar15 + 2;
        uVar13 = 0xf7e491c8;
        do {
          uVar13 = ((int)(char)cVar7 ^ uVar13) * 0x1000193;
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != (code)0x0);
      }
      lVar10 = readgsbase();
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar10 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400c44e5;
LAB_1400c4660:
  (*pcVar15)(local_68,0,0x8000);
  goto LAB_1400c40e0;
}

