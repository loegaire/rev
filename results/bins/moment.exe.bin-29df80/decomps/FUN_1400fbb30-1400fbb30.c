
void FUN_1400fbb30(void)

{
  code *pcVar1;
  short *psVar2;
  wchar_t *_Str;
  undefined1 auVar3 [32];
  bool bVar4;
  undefined1 auVar5 [32];
  longlong *plVar6;
  undefined8 _Src;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  ulonglong *puVar10;
  size_t sVar11;
  longlong *plVar12;
  longlong *plVar13;
  void *pvVar14;
  undefined2 *puVar15;
  HANDLE pvVar16;
  uint uVar17;
  longlong *plVar18;
  uint *puVar19;
  longlong *plVar20;
  code cVar21;
  longlong *plVar22;
  uint *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  char *pcVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  uint uVar35;
  ulonglong uVar36;
  code *pcVar37;
  longlong lVar38;
  longlong *plVar39;
  uint uVar40;
  void *pvVar41;
  uint uVar42;
  uint *puVar43;
  char cVar44;
  void *pvVar45;
  bool bVar46;
  ulonglong local_e8;
  undefined1 local_d8 [16];
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  uint local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined1 auStack_68 [16];
  ulonglong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88 = 0;
  uVar7 = 0;
  lVar25 = readgsbase();
  plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar25 + 0x60) + 0x18) + 0x10);
  uVar17 = 0xba9d8b4f;
LAB_1400fbb95:
  plVar22 = (longlong *)*plVar22;
  if (uVar7 != 0) goto code_r0x0001400fbb9c;
  goto LAB_1400fbbed;
code_r0x0001400fbb9c:
  uVar35 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar25 = 0;
    do {
      uVar35 = ((int)*(char *)(plVar22[0xc] + lVar25) ^ uVar35) * 0x1000193;
      lVar25 = lVar25 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar25);
  }
  if (uVar35 == uVar7) {
LAB_1400fbbed:
    lVar27 = plVar22[6];
    uVar35 = *(uint *)(lVar27 + 0x88 + (longlong)*(int *)(lVar27 + 0x3c));
    lVar25 = lVar27 + (ulonglong)uVar35;
    if ((ulonglong)uVar35 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar25 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fbb95;
        uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar25 + 0x20) + lVar27 + uVar36 * 4);
        cVar44 = *(char *)(lVar27 + uVar28);
        if (cVar44 == '\0') {
          uVar42 = 0x2292570b;
        }
        else {
          pcVar26 = (char *)(uVar28 + lVar27 + 1);
          uVar42 = 0x2292570b;
          do {
            uVar42 = ((int)cVar44 ^ uVar42) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar42 != uVar17);
      uVar7 = *(uint *)((ulonglong)*(uint *)(lVar25 + 0x1c) + lVar27 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar25 + 0x24) + lVar27 + (uVar36 & 0xffffffff) * 2) *
                       4);
      pcVar37 = (code *)((ulonglong)uVar7 + lVar27);
      if ((uVar7 <= uVar35) ||
         ((code *)(lVar25 + (ulonglong)*(uint *)(lVar27 + 0x8c + (longlong)*(int *)(lVar27 + 0x3c)))
          <= pcVar37)) goto LAB_1400fbd0b;
      uVar17 = 0x2292570b;
      uVar7 = 0x2292570b;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar17 = 0x2292570b;
        do {
          uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar25 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar25 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fbb95;
LAB_1400fbd0b:
  lVar25 = (*pcVar37)(0,0x10,0x3000,4);
  uVar7 = 0x10;
LAB_1400fbd41:
  lVar27 = readgsbase();
  lVar27 = *(longlong *)
            (**(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar36 = (ulonglong)*(uint *)(lVar27 + 0x88 + (longlong)*(int *)(lVar27 + 0x3c));
  uVar28 = 0;
  do {
    uVar33 = (ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar27 + 0x20 + uVar36) + lVar27 + uVar28 * 4);
    cVar44 = *(char *)(lVar27 + uVar33);
    if (cVar44 != '\0') {
      pcVar26 = (char *)(uVar33 + lVar27 + 1);
      uVar17 = 0x61b3279c;
      do {
        uVar17 = ((int)cVar44 ^ uVar17) * 0x1000193;
        cVar44 = *pcVar26;
        pcVar26 = pcVar26 + 1;
      } while (cVar44 != '\0');
      if (uVar17 == 0xbf5693b1) break;
    }
    uVar28 = uVar28 + 1;
  } while( true );
  local_98 = lVar25;
  iVar8 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c + uVar36) + lVar27 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar27 + 0x24 + uVar36) + lVar27 +
                               (uVar28 & 0xffffffff) * 2) * 4) + lVar27))
                    (0xffffffffffffffff,0x1b,lVar25,uVar7,&local_88);
  uVar17 = local_88;
  if ((iVar8 < 0) && (uVar7 < local_88)) {
    uVar7 = 0;
    lVar25 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar25 + 0x60) + 0x18) + 0x10);
    uVar35 = 0xba9d8b4f;
LAB_1400fbe45:
    plVar22 = (longlong *)*plVar22;
    if (uVar7 != 0) goto code_r0x0001400fbe4c;
    goto LAB_1400fbe9d;
  }
  auStack_68 = (undefined1  [16])0x0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_d8._8_8_ = 0;
  local_d8._0_8_ = ClientId.UniqueProcess;
  local_a8 = 0;
  uVar36 = 0;
  lVar25 = readgsbase();
  lVar25 = *(longlong *)
            (**(longlong **)(*(longlong *)(*(longlong *)(lVar25 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar28 = (ulonglong)*(uint *)(lVar25 + 0x88 + (longlong)*(int *)(lVar25 + 0x3c));
  do {
    uVar33 = (ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar25 + 0x20 + uVar28) + lVar25 + uVar36 * 4);
    cVar44 = *(char *)(lVar25 + uVar33);
    if (cVar44 != '\0') {
      pcVar26 = (char *)(uVar33 + lVar25 + 1);
      uVar7 = 0x797859;
      do {
        uVar7 = ((int)cVar44 ^ uVar7) * 0x1000193;
        cVar44 = *pcVar26;
        pcVar26 = pcVar26 + 1;
      } while (cVar44 != '\0');
      if (uVar7 == 0x94dbb78c) goto code_r0x0001400fc252;
    }
    uVar36 = uVar36 + 1;
  } while( true );
code_r0x0001400fbe4c:
  uVar42 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar25 = 0;
    do {
      uVar42 = ((int)*(char *)(plVar22[0xc] + lVar25) ^ uVar42) * 0x1000193;
      lVar25 = lVar25 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar25);
  }
  if (uVar42 == uVar7) {
LAB_1400fbe9d:
    lVar27 = plVar22[6];
    uVar42 = *(uint *)(lVar27 + 0x88 + (longlong)*(int *)(lVar27 + 0x3c));
    lVar25 = lVar27 + (ulonglong)uVar42;
    if ((ulonglong)uVar42 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar25 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fbe45;
        uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar25 + 0x20) + lVar27 + uVar36 * 4);
        cVar44 = *(char *)(lVar27 + uVar28);
        if (cVar44 == '\0') {
          uVar40 = 0x2292570b;
        }
        else {
          pcVar26 = (char *)(uVar28 + lVar27 + 1);
          uVar40 = 0x2292570b;
          do {
            uVar40 = ((int)cVar44 ^ uVar40) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar40 != uVar35);
      uVar7 = *(uint *)((ulonglong)*(uint *)(lVar25 + 0x1c) + lVar27 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar25 + 0x24) + lVar27 + (uVar36 & 0xffffffff) * 2) *
                       4);
      pcVar37 = (code *)((ulonglong)uVar7 + lVar27);
      if ((uVar7 <= uVar42) ||
         ((code *)(lVar25 + (ulonglong)*(uint *)(lVar27 + 0x8c + (longlong)*(int *)(lVar27 + 0x3c)))
          <= pcVar37)) goto LAB_1400fbfc0;
      uVar35 = 0x2292570b;
      uVar7 = 0x2292570b;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar35 = 0x2292570b;
        do {
          uVar35 = ((int)(char)cVar21 ^ uVar35) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar25 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar25 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fbe45;
LAB_1400fbfc0:
  lVar25 = (*pcVar37)(0,local_88,0x3000,4);
  uVar7 = uVar17;
  if (local_98 != 0) {
    uVar17 = 0;
    lVar27 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    uVar35 = 0x28188289;
LAB_1400fc025:
    plVar22 = (longlong *)*plVar22;
    if (uVar17 != 0) goto code_r0x0001400fc02c;
    goto LAB_1400fc07d;
  }
  goto LAB_1400fbd41;
code_r0x0001400fc02c:
  uVar42 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar27 = 0;
    do {
      uVar42 = ((int)*(char *)(plVar22[0xc] + lVar27) ^ uVar42) * 0x1000193;
      lVar27 = lVar27 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
  }
  if (uVar42 == uVar17) {
LAB_1400fc07d:
    lVar29 = plVar22[6];
    uVar42 = *(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
    lVar27 = lVar29 + (ulonglong)uVar42;
    if ((ulonglong)uVar42 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar27 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fc025;
        uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar27 + 0x20) + lVar29 + uVar36 * 4);
        cVar44 = *(char *)(lVar29 + uVar28);
        if (cVar44 == '\0') {
          uVar40 = 0xf7e491c8;
        }
        else {
          pcVar26 = (char *)(uVar28 + lVar29 + 1);
          uVar40 = 0xf7e491c8;
          do {
            uVar40 = ((int)cVar44 ^ uVar40) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar40 != uVar35);
      uVar17 = *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c) + lVar29 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar27 + 0x24) + lVar29 + (uVar36 & 0xffffffff) * 2)
                        * 4);
      pcVar37 = (code *)((ulonglong)uVar17 + lVar29);
      if ((uVar17 <= uVar42) ||
         ((code *)(lVar27 + (ulonglong)*(uint *)(lVar29 + 0x8c + (longlong)*(int *)(lVar29 + 0x3c)))
          <= pcVar37)) goto LAB_1400fbd30;
      uVar35 = 0xf7e491c8;
      uVar17 = 0xf7e491c8;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar35 = 0xf7e491c8;
        do {
          uVar35 = ((int)(char)cVar21 ^ uVar35) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar27 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fc025;
LAB_1400fbd30:
  (*pcVar37)(local_98,0);
  goto LAB_1400fbd41;
code_r0x0001400fc252:
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar25 + 0x1c + uVar28) + lVar25 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar25 + 0x24 + uVar28) + lVar25 +
                       (uVar36 & 0xffffffff) * 2) * 4) + lVar25))
            (&local_a8,0x1fffff,&local_88,local_d8);
  lVar25 = local_a8;
  local_88 = 0;
  puVar10 = (ulonglong *)0x0;
  uVar7 = 0;
LAB_1400fc2a0:
  local_50 = puVar10;
  uVar17 = 0;
  lVar27 = readgsbase();
  plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
  uVar35 = 0x94da9b9e;
LAB_1400fc2d5:
  plVar22 = (longlong *)*plVar22;
  if (uVar17 != 0) goto code_r0x0001400fc2dc;
  goto LAB_1400fc32d;
code_r0x0001400fc2dc:
  uVar42 = 0x46f966e9;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar27 = 0;
    do {
      uVar42 = ((int)*(char *)(plVar22[0xc] + lVar27) ^ uVar42) * 0x1000193;
      lVar27 = lVar27 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
  }
  if (uVar42 == uVar17) {
LAB_1400fc32d:
    lVar29 = plVar22[6];
    uVar42 = *(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
    lVar27 = lVar29 + (ulonglong)uVar42;
    if ((ulonglong)uVar42 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar27 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fc2d5;
        uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar27 + 0x20) + lVar29 + uVar36 * 4);
        cVar44 = *(char *)(lVar29 + uVar28);
        if (cVar44 == '\0') {
          uVar40 = 0x46f966e9;
        }
        else {
          pcVar26 = (char *)(uVar28 + lVar29 + 1);
          uVar40 = 0x46f966e9;
          do {
            uVar40 = ((int)cVar44 ^ uVar40) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar40 != uVar35);
      uVar17 = *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c) + lVar29 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar27 + 0x24) + lVar29 + (uVar36 & 0xffffffff) * 2)
                        * 4);
      pcVar37 = (code *)((ulonglong)uVar17 + lVar29);
      if ((uVar17 <= uVar42) ||
         ((code *)(lVar27 + (ulonglong)*(uint *)(lVar29 + 0x8c + (longlong)*(int *)(lVar29 + 0x3c)))
          <= pcVar37)) goto LAB_1400fc450;
      uVar35 = 0x46f966e9;
      uVar17 = 0x46f966e9;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar35 = 0x46f966e9;
        do {
          uVar35 = ((int)(char)cVar21 ^ uVar35) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar27 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fc2d5;
LAB_1400fc450:
  iVar8 = (*pcVar37)(0x40,local_50,uVar7,&local_88);
  uVar17 = local_88;
  if (-1 < iVar8) goto LAB_1400fc827;
  puVar10 = local_50;
  if (uVar7 < local_88) {
    uVar7 = 0;
    lVar27 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    uVar35 = 0xba9d8b4f;
LAB_1400fc4b5:
    plVar22 = (longlong *)*plVar22;
    if (uVar7 != 0) goto code_r0x0001400fc4bc;
    goto LAB_1400fc50d;
  }
  goto LAB_1400fc2a0;
LAB_1400fc827:
  FUN_1400bd5c0((longlong *)local_d8);
  _Src = local_d8._0_8_;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  sVar11 = strlen((char *)local_d8._0_8_);
  if ((longlong)sVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar11 < 0x10) {
    uStack_70 = 0xf;
    uStack_78 = sVar11;
    memcpy(&local_88,(void *)_Src,sVar11);
    puVar43 = &local_88;
  }
  else {
    uVar36 = 0x16;
    if (0x16 < (sVar11 | 0xf)) {
      uVar36 = sVar11 | 0xf;
    }
    if (uVar36 < 0xfff) {
      puVar43 = operator_new(uVar36 + 1);
    }
    else {
      pvVar41 = operator_new(uVar36 + 0x28);
      puVar43 = (uint *)((longlong)pvVar41 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar43 + -2) = pvVar41;
    }
    local_88 = (uint)puVar43;
    uStack_84 = (undefined4)((ulonglong)puVar43 >> 0x20);
    uStack_78 = sVar11;
    uStack_70 = uVar36;
    memcpy(puVar43,(void *)_Src,sVar11);
  }
  *(undefined1 *)((longlong)puVar43 + sVar11) = 0;
  if (local_d8._0_8_ != 0) {
    uVar7 = 0;
    lVar27 = readgsbase();
    puVar34 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    uVar17 = 0xe2398719;
    puVar31 = puVar34;
    do {
      if (uVar7 == 0) {
LAB_1400fc99d:
        lVar29 = puVar31[6];
        uVar35 = *(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
        lVar27 = lVar29 + (ulonglong)uVar35;
        if ((ulonglong)uVar35 != 0) {
          uVar36 = (ulonglong)*(uint *)(lVar27 + 0x18);
          do {
            bVar46 = uVar36 == 0;
            uVar36 = uVar36 - 1;
            if (bVar46) goto LAB_1400fc953;
            uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar27 + 0x20) + lVar29 + uVar36 * 4)
            ;
            cVar44 = *(char *)(lVar29 + uVar28);
            if (cVar44 == '\0') {
              uVar42 = 0x1cba1898;
            }
            else {
              pcVar26 = (char *)(uVar28 + lVar29 + 1);
              uVar42 = 0x1cba1898;
              do {
                uVar42 = ((int)cVar44 ^ uVar42) * 0x1000193;
                cVar44 = *pcVar26;
                pcVar26 = pcVar26 + 1;
              } while (cVar44 != '\0');
            }
          } while (uVar42 != uVar17);
          uVar7 = *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c) + lVar29 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar27 + 0x24) + lVar29 +
                            (uVar36 & 0xffffffff) * 2) * 4);
          pcVar37 = (code *)(lVar29 + (ulonglong)uVar7);
          if ((uVar7 <= uVar35) ||
             ((code *)(lVar27 + (ulonglong)
                                *(uint *)(lVar29 + 0x8c + (longlong)*(int *)(lVar29 + 0x3c))) <=
              pcVar37)) goto LAB_1400fcacf;
          uVar17 = 0x1cba1898;
          uVar7 = 0x1cba1898;
          cVar21 = *pcVar37;
          while (cVar21 != (code)0x2e) {
            uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
            pcVar1 = pcVar37 + 1;
            pcVar37 = pcVar37 + 1;
            cVar21 = *pcVar1;
          }
          cVar21 = pcVar37[1];
          if (cVar21 != (code)0x0) {
            pcVar37 = pcVar37 + 2;
            uVar17 = 0x1cba1898;
            do {
              uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
              cVar21 = *pcVar37;
              pcVar37 = pcVar37 + 1;
            } while (cVar21 != (code)0x0);
          }
          puVar31 = (undefined8 *)*puVar34;
        }
      }
      else {
        uVar35 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar31 + 0xb) - 8U)) {
          lVar27 = 0;
          do {
            uVar35 = ((int)*(char *)(puVar31[0xc] + lVar27) ^ uVar35) * 0x1000193;
            lVar27 = lVar27 + 2;
          } while ((ulonglong)((*(int *)(puVar31 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
        }
        if (uVar35 == uVar7) goto LAB_1400fc99d;
      }
LAB_1400fc953:
      puVar31 = (undefined8 *)*puVar31;
    } while( true );
  }
LAB_1400fcade:
  uVar36 = uStack_78;
  plVar6 = DAT_14012b308;
  plVar22 = (longlong *)DAT_14012b308[1];
  bVar46 = false;
  plVar13 = DAT_14012b308;
  if (*(char *)((longlong)plVar22 + 0x19) == '\0') {
    plVar18 = plVar22;
    if (uStack_70 < 0x10) {
      puVar43 = &local_88;
    }
    else {
      puVar43 = (uint *)CONCAT44(uStack_84,local_88);
    }
    do {
      plVar22 = plVar18;
      if ((ulonglong)plVar22[7] < 0x10) {
        plVar18 = plVar22 + 4;
      }
      else {
        plVar18 = (longlong *)plVar22[4];
      }
      uVar28 = plVar22[6];
      uVar33 = uVar36;
      if (uVar28 <= uVar36) {
        uVar33 = uVar28;
      }
      iVar8 = memcmp(plVar18,puVar43,uVar33);
      bVar46 = uVar28 < uVar36;
      if (iVar8 != 0) {
        bVar46 = iVar8 < 0;
      }
      plVar12 = plVar22 + 2;
      if (!bVar46) {
        plVar12 = plVar22;
        plVar13 = plVar22;
      }
      plVar18 = (longlong *)*plVar12;
    } while (*(char *)(*plVar12 + 0x19) == '\0');
    bVar46 = (bool)(bVar46 ^ 1);
    cVar44 = *(char *)((longlong)plVar13 + 0x19);
    uVar28 = uStack_78;
    uVar36 = uStack_70;
  }
  else {
    cVar44 = *(char *)((longlong)DAT_14012b308 + 0x19);
    uVar28 = uStack_78;
    uVar36 = uStack_70;
  }
  uStack_78 = uVar28;
  uStack_70 = uVar36;
  if (cVar44 == '\0') {
    if ((ulonglong)plVar13[7] < 0x10) {
      plVar18 = plVar13 + 4;
    }
    else {
      plVar18 = (longlong *)plVar13[4];
    }
    uVar33 = plVar13[6];
    puVar43 = &local_88;
    if (0xf < uVar36) {
      puVar43 = (uint *)CONCAT44(uStack_84,local_88);
    }
    uVar24 = uVar28;
    if (uVar33 < uVar28) {
      uVar24 = uVar33;
    }
    iVar8 = memcmp(puVar43,plVar18,uVar24);
    bVar4 = uVar33 <= uVar28;
    if (iVar8 != 0) {
      bVar4 = -1 < iVar8;
    }
    if (bVar4) goto LAB_1400fccb0;
  }
  if (DAT_14012b310 == 0x38e38e38e38e38e) {
    FUN_1400c0930();
LAB_1400fe436:
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  plVar13 = operator_new(0x48);
  auVar3._4_4_ = uStack_84;
  auVar3._0_4_ = local_88;
  auVar3._8_8_ = uStack_80;
  auVar3._16_8_ = uStack_78;
  auVar3._24_8_ = uStack_70;
  *(undefined1 (*) [32])(plVar13 + 4) = auVar3;
  uStack_78 = 0;
  uStack_70 = 0xf;
  local_88 = local_88 & 0xffffff00;
  *(undefined4 *)(plVar13 + 8) = 0;
  *plVar13 = (longlong)plVar6;
  plVar13[2] = (longlong)plVar6;
  DAT_14012b310 = DAT_14012b310 + 1;
  *(undefined2 *)(plVar13 + 3) = 0;
  plVar6 = DAT_14012b308;
  plVar13[1] = (longlong)plVar22;
  if (plVar22 == plVar6) {
    *plVar22 = (longlong)plVar13;
    plVar22[1] = (longlong)plVar13;
    plVar22[2] = (longlong)plVar13;
    plVar22 = plVar13;
  }
  else {
    plVar18 = plVar13 + 1;
    if (bVar46) {
      *plVar22 = (longlong)plVar13;
      plVar12 = plVar6;
      if (plVar22 == (longlong *)*plVar6) {
LAB_1400fcc94:
        *plVar12 = (longlong)plVar13;
      }
    }
    else {
      plVar22[2] = (longlong)plVar13;
      if (plVar22 == (longlong *)plVar6[2]) {
        plVar12 = plVar6 + 2;
        goto LAB_1400fcc94;
      }
    }
    plVar22 = (longlong *)*plVar18;
    cVar44 = (char)plVar22[3];
    plVar12 = plVar13;
    while (cVar44 == '\0') {
      puVar34 = (undefined8 *)plVar22[1];
      plVar39 = (longlong *)*puVar34;
      plVar20 = plVar12;
      if (plVar22 == plVar39) {
        plVar39 = (longlong *)puVar34[2];
        if ((char)plVar39[3] != '\0') {
          if (plVar12 == (longlong *)plVar22[2]) {
            plVar22[2] = *plVar12;
            if (*(char *)(*plVar12 + 0x19) == '\0') {
              *(longlong **)(*plVar12 + 8) = plVar22;
              puVar34 = (undefined8 *)plVar22[1];
            }
            plVar12[1] = (longlong)puVar34;
            if ((longlong *)DAT_14012b308[1] == plVar22) {
              plVar18 = DAT_14012b308 + 1;
            }
            else {
              plVar20 = (longlong *)plVar22[1];
              plVar18 = plVar20 + 2;
              if ((longlong *)*plVar20 == plVar22) {
                plVar18 = plVar20;
              }
            }
            *plVar18 = (longlong)plVar12;
            *plVar12 = (longlong)plVar22;
            plVar22[1] = (longlong)plVar12;
            plVar20 = plVar22;
            plVar22 = plVar12;
          }
          *(undefined1 *)(plVar22 + 3) = 1;
          *(undefined1 *)(*(longlong *)(plVar20[1] + 8) + 0x18) = 0;
          plVar22 = *(longlong **)(plVar20[1] + 8);
          plVar18 = (longlong *)*plVar22;
          *plVar22 = plVar18[2];
          if (*(char *)(plVar18[2] + 0x19) == '\0') {
            *(longlong **)(plVar18[2] + 8) = plVar22;
          }
          plVar18[1] = plVar22[1];
          if ((longlong *)DAT_14012b308[1] == plVar22) {
            plVar12 = DAT_14012b308 + 1;
          }
          else {
            plVar39 = (longlong *)plVar22[1];
            plVar12 = plVar39 + 2;
            if ((longlong *)plVar39[2] != plVar22) {
              plVar12 = plVar39;
            }
          }
          *plVar12 = (longlong)plVar18;
          plVar18[2] = (longlong)plVar22;
          goto LAB_1400fe423;
        }
LAB_1400fe240:
        *(undefined1 *)(plVar22 + 3) = 1;
        *(undefined1 *)(plVar39 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar18 + 8) + 0x18) = 0;
        plVar20 = *(longlong **)(*plVar18 + 8);
      }
      else {
        if ((char)plVar39[3] == '\0') goto LAB_1400fe240;
        if (plVar12 == (longlong *)*plVar22) {
          *plVar22 = plVar12[2];
          if (*(char *)(plVar12[2] + 0x19) == '\0') {
            *(longlong **)(plVar12[2] + 8) = plVar22;
            puVar34 = (undefined8 *)plVar22[1];
          }
          plVar12[1] = (longlong)puVar34;
          if ((longlong *)DAT_14012b308[1] == plVar22) {
            plVar18 = DAT_14012b308 + 1;
          }
          else {
            plVar20 = (longlong *)plVar22[1];
            plVar18 = plVar20 + 2;
            if ((longlong *)plVar20[2] != plVar22) {
              plVar18 = plVar20;
            }
          }
          *plVar18 = (longlong)plVar12;
          plVar12[2] = (longlong)plVar22;
          plVar22[1] = (longlong)plVar12;
          plVar20 = plVar22;
          plVar22 = plVar12;
        }
        *(undefined1 *)(plVar22 + 3) = 1;
        *(undefined1 *)(*(longlong *)(plVar20[1] + 8) + 0x18) = 0;
        plVar22 = *(longlong **)(plVar20[1] + 8);
        plVar18 = (longlong *)plVar22[2];
        plVar22[2] = *plVar18;
        if (*(char *)(*plVar18 + 0x19) == '\0') {
          *(longlong **)(*plVar18 + 8) = plVar22;
        }
        plVar18[1] = plVar22[1];
        if ((longlong *)DAT_14012b308[1] == plVar22) {
          plVar12 = DAT_14012b308 + 1;
        }
        else {
          plVar39 = (longlong *)plVar22[1];
          plVar12 = plVar39 + 2;
          if ((longlong *)*plVar39 == plVar22) {
            plVar12 = plVar39;
          }
        }
        *plVar12 = (longlong)plVar18;
        *plVar18 = (longlong)plVar22;
LAB_1400fe423:
        plVar22[1] = (longlong)plVar18;
      }
      plVar18 = plVar20 + 1;
      plVar22 = (longlong *)plVar20[1];
      plVar12 = plVar20;
      cVar44 = (char)plVar22[3];
    }
    plVar22 = (longlong *)plVar6[1];
  }
  *(undefined1 *)(plVar22 + 3) = 1;
  uVar36 = 0xf;
LAB_1400fccb0:
  puVar10 = local_50;
  local_ac = *(uint *)(plVar13 + 8);
  if (0xf < uVar36) {
    pvVar45 = (void *)CONCAT44(uStack_84,local_88);
    pvVar41 = pvVar45;
    if ((0xfff < uVar36 + 1) &&
       (pvVar41 = *(void **)((longlong)pvVar45 + -8),
       0x1f < (ulonglong)((longlong)pvVar45 + (-8 - (longlong)pvVar41)))) {
LAB_1400fe43b:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar41);
  }
  if (*puVar10 == 0) {
    uVar36 = 0;
    local_e8 = 0;
  }
  else {
    puVar10 = puVar10 + 2;
    local_e8 = 0;
    uVar28 = 0;
    do {
      if ((local_ac == *(ushort *)((longlong)puVar10 + 0x1e)) &&
         (uVar36 = puVar10[1], DVar9 = GetCurrentProcessId(), uVar36 == DVar9)) {
        local_e8 = *puVar10;
      }
      uVar28 = uVar28 + 1;
      uVar36 = *local_50;
      puVar10 = puVar10 + 5;
    } while (uVar28 < uVar36);
  }
  uVar28 = 0;
  puVar10 = local_50;
LAB_1400fcd6a:
  if (uVar28 < uVar36) {
    if ((((local_ac == *(ushort *)((longlong)puVar10 + uVar28 * 0x28 + 0x2e)) &&
         (uVar36 = local_50[uVar28 * 5 + 3], DVar9 = GetCurrentProcessId(), puVar10 = local_50,
         uVar36 != DVar9)) && (local_50[uVar28 * 5 + 2] == local_e8)) &&
       ((int)local_50[uVar28 * 5 + 5] != 0x103000)) {
      auStack_68 = (undefined1  [16])0x0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      local_d8._8_8_ = 0;
      local_d8._0_8_ = local_50[uVar28 * 5 + 3];
      local_a8 = 0;
      lVar27 = readgsbase();
      lVar27 = *(longlong *)
                (**(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10) + 0x30);
      uVar36 = (ulonglong)*(uint *)(lVar27 + 0x88 + (longlong)*(int *)(lVar27 + 0x3c));
      uVar33 = 0;
      do {
        uVar24 = (ulonglong)
                 *(uint *)((ulonglong)*(uint *)(lVar27 + 0x20 + uVar36) + lVar27 + uVar33 * 4);
        cVar44 = *(char *)(lVar27 + uVar24);
        if (cVar44 != '\0') {
          pcVar26 = (char *)(uVar24 + lVar27 + 1);
          uVar7 = 0x797859;
          do {
            uVar7 = ((int)cVar44 ^ uVar7) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
          if (uVar7 == 0x94dbb78c) goto code_r0x0001400fce66;
        }
        uVar33 = uVar33 + 1;
      } while( true );
    }
    goto LAB_1400fcd60;
  }
  uVar7 = 0;
  lVar27 = readgsbase();
  plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
  uVar17 = 0x28188289;
LAB_1400fdea5:
  plVar22 = (longlong *)*plVar22;
  if (uVar7 != 0) goto code_r0x0001400fdeac;
  goto LAB_1400fdefd;
LAB_1400fcacf:
  (*pcVar37)(local_d8._0_8_,0,0x8000);
  goto LAB_1400fcade;
code_r0x0001400fce66:
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c + uVar36) + lVar27 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar27 + 0x24 + uVar36) + lVar27 +
                       (uVar33 & 0xffffffff) * 2) * 4) + lVar27))
            (&local_a8,0x1041,&local_88,local_d8);
  lVar27 = local_a8;
  if (local_a8 != -1) {
    local_88 = 0;
    uVar7 = 0;
    lVar27 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    uVar17 = 0xba9d8b4f;
LAB_1400fcee5:
    plVar22 = (longlong *)*plVar22;
    if (uVar7 != 0) goto code_r0x0001400fceec;
    goto LAB_1400fcf3d;
  }
LAB_1400fde41:
  puVar10 = local_50;
  if (1 < lVar27 + 1U) {
    NtClose(lVar27);
  }
LAB_1400fcd60:
  uVar28 = uVar28 + 1;
  uVar36 = *puVar10;
  goto LAB_1400fcd6a;
code_r0x0001400fceec:
  uVar35 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar27 = 0;
    do {
      uVar35 = ((int)*(char *)(plVar22[0xc] + lVar27) ^ uVar35) * 0x1000193;
      lVar27 = lVar27 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
  }
  if (uVar35 == uVar7) {
LAB_1400fcf3d:
    lVar29 = plVar22[6];
    uVar35 = *(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
    lVar27 = lVar29 + (ulonglong)uVar35;
    if ((ulonglong)uVar35 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar27 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fcee5;
        uVar33 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar27 + 0x20) + lVar29 + uVar36 * 4);
        cVar44 = *(char *)(lVar29 + uVar33);
        if (cVar44 == '\0') {
          uVar42 = 0x2292570b;
        }
        else {
          pcVar26 = (char *)(uVar33 + lVar29 + 1);
          uVar42 = 0x2292570b;
          do {
            uVar42 = ((int)cVar44 ^ uVar42) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar42 != uVar17);
      uVar7 = *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c) + lVar29 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar27 + 0x24) + lVar29 + (uVar36 & 0xffffffff) * 2) *
                       4);
      pcVar37 = (code *)((ulonglong)uVar7 + lVar29);
      if ((uVar7 <= uVar35) ||
         ((code *)(lVar27 + (ulonglong)*(uint *)(lVar29 + 0x8c + (longlong)*(int *)(lVar29 + 0x3c)))
          <= pcVar37)) goto LAB_1400fd05b;
      uVar17 = 0x2292570b;
      uVar7 = 0x2292570b;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar17 = 0x2292570b;
        do {
          uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar27 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fcee5;
LAB_1400fd05b:
  local_a0 = local_a8;
  lVar27 = (*pcVar37)(0,0x10,0x3000,4);
  uVar7 = 0x10;
LAB_1400fd092:
  lVar29 = readgsbase();
  lVar29 = *(longlong *)
            (**(longlong **)(*(longlong *)(*(longlong *)(lVar29 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar36 = (ulonglong)*(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
  uVar33 = 0;
  do {
    uVar24 = (ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar29 + 0x20 + uVar36) + lVar29 + uVar33 * 4);
    cVar44 = *(char *)(lVar29 + uVar24);
    if (cVar44 != '\0') {
      pcVar26 = (char *)(uVar24 + lVar29 + 1);
      uVar17 = 0x61b3279c;
      do {
        uVar17 = ((int)cVar44 ^ uVar17) * 0x1000193;
        cVar44 = *pcVar26;
        pcVar26 = pcVar26 + 1;
      } while (cVar44 != '\0');
      puVar43 = &local_88;
      if (uVar17 == 0xbf5693b1) break;
    }
    uVar33 = uVar33 + 1;
  } while( true );
  local_90 = lVar27;
  iVar8 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar29 + 0x1c + uVar36) + lVar29 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar29 + 0x24 + uVar36) + lVar29 +
                               (uVar33 & 0xffffffff) * 2) * 4) + lVar29))
                    (local_a0,0x1b,lVar27,uVar7,puVar43);
  uVar17 = local_88;
  if ((iVar8 < 0) && (uVar7 < local_88)) {
    uVar7 = 0;
    lVar27 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    uVar35 = 0xba9d8b4f;
LAB_1400fd1a5:
    plVar22 = (longlong *)*plVar22;
    if (uVar7 != 0) goto code_r0x0001400fd1ac;
    goto LAB_1400fd1fd;
  }
  lVar27 = local_a0;
  if (local_90 == 0) goto LAB_1400fde41;
  _Str = *(wchar_t **)(local_90 + 8);
  if (_Str == (wchar_t *)0x0) goto LAB_1400fdc7b;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  sVar11 = wcslen(_Str);
  if (0x7ffffffffffffffe < sVar11) goto LAB_1400fe436;
  if (sVar11 < 8) {
    uStack_70 = 7;
    uStack_78 = sVar11;
    memcpy(&local_88,_Str,sVar11 * 2);
    puVar15 = (undefined2 *)((longlong)&local_88 + sVar11 * 2);
  }
  else {
    uStack_70 = 7;
    uVar36 = sVar11 | 7;
    if (0x7ffffffffffffffe < uVar36) {
LAB_1400fe444:
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    if (uVar36 < 0xb) {
      uVar36 = 10;
    }
    if (uVar36 < 0x7ff) {
      pvVar41 = operator_new(uVar36 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar36) goto LAB_1400fe444;
      pvVar45 = operator_new(uVar36 * 2 + 0x29);
      pvVar41 = (void *)((longlong)pvVar45 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar41 - 8) = pvVar45;
    }
    local_88 = (uint)pvVar41;
    uStack_84 = (undefined4)((ulonglong)pvVar41 >> 0x20);
    uStack_78 = sVar11;
    uStack_70 = uVar36;
    memcpy(pvVar41,_Str,sVar11 * 2);
    puVar15 = (undefined2 *)((longlong)pvVar41 + sVar11 * 2);
  }
  *puVar15 = 0;
  puVar23 = (uint *)CONCAT44(uStack_84,local_88);
  puVar19 = &local_88;
  if (7 < uStack_70) {
    puVar19 = puVar23;
  }
  if (uStack_78 != 0) {
    lVar27 = -2;
    uVar36 = 0;
    do {
      if (*(short *)((longlong)puVar19 + uVar36 * 2) == 0x5c) {
        if (lVar27 != 0) {
          lVar27 = (longlong)puVar19 + uStack_78 * 2 + -2;
          if (*(short *)((longlong)puVar19 + uStack_78 * 2 + -2) == 0x5c) goto LAB_1400fd6ac;
          lVar29 = uStack_78 * -2;
          lVar38 = lVar27;
          goto LAB_1400fd690;
        }
        break;
      }
      lVar27 = lVar27 + -2;
      uVar36 = uVar36 + 1;
    } while (uStack_78 != uVar36);
    goto LAB_1400fd814;
  }
  uVar33 = 0;
  uVar24 = 0xcbf29ce484222325;
  goto LAB_1400fd8e4;
code_r0x0001400fd1ac:
  uVar42 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar27 = 0;
    do {
      uVar42 = ((int)*(char *)(plVar22[0xc] + lVar27) ^ uVar42) * 0x1000193;
      lVar27 = lVar27 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
  }
  if (uVar42 == uVar7) {
LAB_1400fd1fd:
    lVar29 = plVar22[6];
    uVar42 = *(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
    lVar27 = lVar29 + (ulonglong)uVar42;
    if ((ulonglong)uVar42 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar27 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fd1a5;
        uVar33 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar27 + 0x20) + lVar29 + uVar36 * 4);
        cVar44 = *(char *)(lVar29 + uVar33);
        if (cVar44 == '\0') {
          uVar40 = 0x2292570b;
        }
        else {
          pcVar26 = (char *)(uVar33 + lVar29 + 1);
          uVar40 = 0x2292570b;
          do {
            uVar40 = ((int)cVar44 ^ uVar40) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar40 != uVar35);
      uVar7 = *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c) + lVar29 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar27 + 0x24) + lVar29 + (uVar36 & 0xffffffff) * 2) *
                       4);
      pcVar37 = (code *)((ulonglong)uVar7 + lVar29);
      if ((uVar7 <= uVar42) ||
         ((code *)(lVar27 + (ulonglong)*(uint *)(lVar29 + 0x8c + (longlong)*(int *)(lVar29 + 0x3c)))
          <= pcVar37)) goto LAB_1400fd320;
      uVar35 = 0x2292570b;
      uVar7 = 0x2292570b;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar35 = 0x2292570b;
        do {
          uVar35 = ((int)(char)cVar21 ^ uVar35) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar27 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fd1a5;
LAB_1400fd320:
  lVar27 = (*pcVar37)(0,local_88,0x3000,4);
  uVar7 = uVar17;
  if (local_90 != 0) {
    uVar17 = 0;
    lVar29 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar29 + 0x60) + 0x18) + 0x10);
    uVar35 = 0x28188289;
LAB_1400fd385:
    plVar22 = (longlong *)*plVar22;
    if (uVar17 != 0) goto code_r0x0001400fd38c;
    goto LAB_1400fd3dd;
  }
  goto LAB_1400fd092;
code_r0x0001400fd38c:
  uVar42 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar29 = 0;
    do {
      uVar42 = ((int)*(char *)(plVar22[0xc] + lVar29) ^ uVar42) * 0x1000193;
      lVar29 = lVar29 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar29);
  }
  if (uVar42 == uVar17) {
LAB_1400fd3dd:
    lVar38 = plVar22[6];
    uVar42 = *(uint *)(lVar38 + 0x88 + (longlong)*(int *)(lVar38 + 0x3c));
    lVar29 = lVar38 + (ulonglong)uVar42;
    if ((ulonglong)uVar42 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar29 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fd385;
        uVar33 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar29 + 0x20) + lVar38 + uVar36 * 4);
        cVar44 = *(char *)(lVar38 + uVar33);
        if (cVar44 == '\0') {
          uVar40 = 0xf7e491c8;
        }
        else {
          pcVar26 = (char *)(uVar33 + lVar38 + 1);
          uVar40 = 0xf7e491c8;
          do {
            uVar40 = ((int)cVar44 ^ uVar40) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar40 != uVar35);
      uVar17 = *(uint *)((ulonglong)*(uint *)(lVar29 + 0x1c) + lVar38 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar29 + 0x24) + lVar38 + (uVar36 & 0xffffffff) * 2)
                        * 4);
      pcVar37 = (code *)((ulonglong)uVar17 + lVar38);
      if ((uVar17 <= uVar42) ||
         ((code *)(lVar29 + (ulonglong)*(uint *)(lVar38 + 0x8c + (longlong)*(int *)(lVar38 + 0x3c)))
          <= pcVar37)) goto LAB_1400fd080;
      uVar35 = 0xf7e491c8;
      uVar17 = 0xf7e491c8;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar35 = 0xf7e491c8;
        do {
          uVar35 = ((int)(char)cVar21 ^ uVar35) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar29 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar29 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fd385;
LAB_1400fd080:
  (*pcVar37)(local_90,0);
  goto LAB_1400fd092;
  while (lVar27 = lVar38 + -2, psVar2 = (short *)(lVar38 + -2), lVar38 = lVar27, *psVar2 != 0x5c) {
LAB_1400fd690:
    lVar29 = lVar29 + 2;
    if (lVar29 == 0) goto LAB_1400fd814;
  }
LAB_1400fd6ac:
  if (lVar27 - (longlong)puVar19 != -2) {
    uVar36 = (lVar27 - (longlong)puVar19 >> 1) + 1;
    _local_d8 = ZEXT1232(ZEXT812(0));
    uVar33 = uStack_78 - uVar36;
    if (uStack_78 < uVar36) {
      FUN_1400e1900();
LAB_1400fe451:
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (0x7ffffffffffffffe < uVar33) goto LAB_1400fe451;
    pvVar41 = (void *)((longlong)puVar19 + uVar36 * 2);
    if (uVar33 < 8) {
      local_d8._12_4_ = 0;
      local_d8._0_12_ = ZEXT812(0);
      uStack_c8 = uVar33;
      uStack_c0 = 7;
      memcpy(local_d8,pvVar41,uVar33 * 2);
      puVar15 = (undefined2 *)(local_d8 + uVar33 * 2);
    }
    else {
      uVar36 = uVar33 | 7;
      if (0x7ffffffffffffffe < uVar36) {
LAB_1400fe459:
                    /* WARNING: Subroutine does not return */
        FUN_1400bb790();
      }
      if (uVar36 < 0xb) {
        uVar36 = 10;
      }
      if (uVar36 < 0x7ff) {
        pvVar45 = operator_new(uVar36 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < uVar36) goto LAB_1400fe459;
        pvVar14 = operator_new(uVar36 * 2 + 0x29);
        pvVar45 = (void *)((longlong)pvVar14 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar45 - 8) = pvVar14;
      }
      local_d8._0_8_ = pvVar45;
      uStack_c8 = uVar33;
      uStack_c0 = uVar36;
      memcpy(pvVar45,pvVar41,uVar33 * 2);
      puVar15 = (undefined2 *)((longlong)pvVar45 + uVar33 * 2);
    }
    *puVar15 = 0;
    if (7 < uStack_70) {
      pvVar45 = (void *)CONCAT44(uStack_84,local_88);
      pvVar41 = pvVar45;
      if ((0xfff < uStack_70 * 2 + 2) &&
         (pvVar41 = *(void **)((longlong)pvVar45 + -8),
         0x1f < (ulonglong)((longlong)pvVar45 + (-8 - (longlong)pvVar41)))) goto LAB_1400fe43b;
      free(pvVar41);
    }
    local_88 = local_d8._0_4_;
    uStack_84 = local_d8._4_4_;
    uStack_80 = local_d8._8_8_;
    uStack_78 = uStack_c8;
    uStack_70 = uStack_c0;
    puVar23 = (uint *)local_d8._0_8_;
  }
LAB_1400fd814:
  puVar19 = puVar23;
  if (uStack_70 < 8) {
    puVar19 = &local_88;
  }
  uVar36 = uStack_78 * 2;
  uVar33 = uStack_78;
  if (uVar36 == 0) {
    uVar24 = 0xcbf29ce484222325;
  }
  else {
    uVar30 = (ulonglong)((uint)uVar36 & 2);
    if (uVar36 < 4) {
      uVar32 = 0;
      uVar24 = 0xcbf29ce484222325;
    }
    else {
      uVar32 = 0;
      uVar24 = 0xcbf29ce484222325;
      do {
        uVar24 = ((ulonglong)*(byte *)((longlong)puVar19 + uVar32 + 3) ^
                 ((ulonglong)*(byte *)((longlong)puVar19 + uVar32 + 2) ^
                 ((ulonglong)*(byte *)((longlong)puVar19 + uVar32 + 1) ^
                 (*(byte *)((longlong)puVar19 + uVar32) ^ uVar24) * 0x100000001b3) * 0x100000001b3)
                 * 0x100000001b3) * 0x100000001b3;
        uVar32 = uVar32 + 4;
      } while ((uVar36 & 0xfffffffffffffffc) != uVar32);
    }
    if (uVar30 != 0) {
      uVar36 = 0;
      do {
        uVar24 = (uVar24 ^ *(byte *)((longlong)puVar19 + uVar36 + uVar32)) * 0x100000001b3;
        uVar36 = uVar36 + 1;
      } while (uVar30 != uVar36);
    }
  }
LAB_1400fd8e4:
  puVar10 = local_50;
  lVar29 = local_a0;
  lVar27 = *(longlong *)(DAT_14012b020 + 8 + (uVar24 & DAT_14012b038) * 0x10);
  if (lVar27 != DAT_14012b010) {
    uVar36 = *(ulonglong *)(lVar27 + 0x20);
    while( true ) {
      if (uVar33 == uVar36) {
        if (uVar33 == 0) goto joined_r0x0001400fdc36;
        if (*(ulonglong *)(lVar27 + 0x28) < 8) {
          lVar38 = lVar27 + 0x10;
        }
        else {
          lVar38 = *(longlong *)(lVar27 + 0x10);
        }
        uVar36 = 0;
        while (*(short *)((longlong)puVar19 + uVar36 * 2) == *(short *)(lVar38 + uVar36 * 2)) {
          uVar36 = uVar36 + 1;
          if (uVar33 == uVar36) {
            if (lVar27 == 0) goto LAB_1400fd975;
            goto joined_r0x0001400fdc36;
          }
        }
      }
      if (lVar27 == *(longlong *)(DAT_14012b020 + (uVar24 & DAT_14012b038) * 0x10)) break;
      lVar27 = *(longlong *)(lVar27 + 8);
      uVar36 = *(ulonglong *)(lVar27 + 0x20);
    }
  }
LAB_1400fd975:
  auVar5._24_8_ = 0;
  auVar5._0_24_ = stack0xffffffffffffff30;
  _local_d8 = auVar5 << 0x40;
  uVar7 = 0;
  lVar27 = readgsbase();
  puVar34 = (undefined8 *)**(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10)
  ;
  uVar17 = 0x3abe69f4;
  puVar31 = puVar34;
  do {
    if (uVar7 == 0) {
LAB_1400fda05:
      lVar27 = puVar31[6];
      uVar35 = *(uint *)(lVar27 + 0x88 + (longlong)*(int *)(lVar27 + 0x3c));
      if ((ulonglong)uVar35 != 0) {
        lVar38 = (ulonglong)uVar35 + lVar27;
        uVar36 = (ulonglong)*(uint *)(lVar38 + 0x18);
        do {
          bVar46 = uVar36 == 0;
          uVar36 = uVar36 - 1;
          if (bVar46) goto LAB_1400fdb3d;
          uVar33 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar38 + 0x20) + lVar27 + uVar36 * 4);
          cVar44 = *(char *)(lVar27 + uVar33);
          if (cVar44 == '\0') {
            uVar42 = 0xf093b609;
          }
          else {
            pcVar26 = (char *)(uVar33 + lVar27 + 1);
            uVar42 = 0xf093b609;
            do {
              uVar42 = ((int)cVar44 ^ uVar42) * 0x1000193;
              cVar44 = *pcVar26;
              pcVar26 = pcVar26 + 1;
            } while (cVar44 != '\0');
          }
        } while (uVar42 != uVar17);
        uVar7 = *(uint *)((ulonglong)*(uint *)(lVar38 + 0x1c) + lVar27 +
                         (ulonglong)
                         *(ushort *)
                          ((ulonglong)*(uint *)(lVar38 + 0x24) + lVar27 + (uVar36 & 0xffffffff) * 2)
                         * 4);
        pcVar37 = (code *)(lVar27 + (ulonglong)uVar7);
        if ((uVar7 <= uVar35) ||
           ((code *)(lVar38 + (ulonglong)
                              *(uint *)(lVar27 + 0x8c + (longlong)*(int *)(lVar27 + 0x3c))) <=
            pcVar37)) goto LAB_1400fdb53;
        uVar17 = 0xf093b609;
        uVar7 = 0xf093b609;
        cVar21 = *pcVar37;
        while (cVar21 != (code)0x2e) {
          uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
          pcVar1 = pcVar37 + 1;
          pcVar37 = pcVar37 + 1;
          cVar21 = *pcVar1;
        }
        cVar21 = pcVar37[1];
        if (cVar21 != (code)0x0) {
          pcVar37 = pcVar37 + 2;
          uVar17 = 0xf093b609;
          do {
            uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
            cVar21 = *pcVar37;
            pcVar37 = pcVar37 + 1;
          } while (cVar21 != (code)0x0);
        }
        puVar31 = (undefined8 *)*puVar34;
      }
    }
    else {
      uVar35 = 0xf093b609;
      if (1 < (ushort)(*(int *)(puVar31 + 0xb) - 8U)) {
        lVar27 = 0;
        do {
          uVar35 = ((int)*(char *)(puVar31[0xc] + lVar27) ^ uVar35) * 0x1000193;
          lVar27 = lVar27 + 2;
        } while ((ulonglong)((*(int *)(puVar31 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
      }
      if (uVar35 == uVar7) goto LAB_1400fda05;
    }
LAB_1400fdb3d:
    puVar31 = (undefined8 *)*puVar31;
  } while ((puVar31 != puVar34) && (puVar31[6] != 0));
  pcVar37 = (code *)0x0;
LAB_1400fdb53:
  pvVar16 = GetCurrentProcess();
  iVar8 = (*pcVar37)(lVar29,puVar10[uVar28 * 5 + 4],pvVar16,local_d8,
                     (ulonglong)puVar43 & 0xffffffff00000000,0,1);
  if (iVar8 != 0) {
    lVar27 = readgsbase();
    lVar27 = *(longlong *)
              (**(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10) + 0x30);
    uVar36 = (ulonglong)*(uint *)(lVar27 + 0x88 + (longlong)*(int *)(lVar27 + 0x3c));
    uVar33 = 0;
    do {
      uVar24 = (ulonglong)
               *(uint *)((ulonglong)*(uint *)(lVar27 + 0x20 + uVar36) + lVar27 + uVar33 * 4);
      cVar44 = *(char *)(lVar27 + uVar24);
      if (cVar44 != '\0') {
        pcVar26 = (char *)(uVar24 + lVar27 + 1);
        uVar7 = 0xfae4de4f;
        do {
          uVar7 = ((int)cVar44 ^ uVar7) * 0x1000193;
          cVar44 = *pcVar26;
          pcVar26 = pcVar26 + 1;
        } while (cVar44 != '\0');
        if (uVar7 == 0xaab730e3) goto code_r0x0001400fdc0e;
      }
      uVar33 = uVar33 + 1;
    } while( true );
  }
joined_r0x0001400fdc36:
  if (7 < uStack_70) {
    pvVar45 = (void *)CONCAT44(uStack_84,local_88);
    pvVar41 = pvVar45;
    if ((0xfff < uStack_70 * 2 + 2) &&
       (pvVar41 = *(void **)((longlong)pvVar45 + -8),
       0x1f < (ulonglong)((longlong)pvVar45 + (-8 - (longlong)pvVar41)))) goto LAB_1400fe43b;
    free(pvVar41);
  }
LAB_1400fdc7b:
  lVar27 = local_a0;
  uVar7 = 0;
  lVar29 = readgsbase();
  plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar29 + 0x60) + 0x18) + 0x10);
  uVar17 = 0x28188289;
LAB_1400fdcb5:
  plVar22 = (longlong *)*plVar22;
  if (uVar7 != 0) goto code_r0x0001400fdcbc;
  goto LAB_1400fdd0d;
code_r0x0001400fdc0e:
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c + uVar36) + lVar27 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar27 + 0x24 + uVar36) + lVar27 +
                       (uVar33 & 0xffffffff) * 2) * 4) + lVar27))(local_d8._0_8_);
  goto joined_r0x0001400fdc36;
code_r0x0001400fdcbc:
  uVar35 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar29 = 0;
    do {
      uVar35 = ((int)*(char *)(plVar22[0xc] + lVar29) ^ uVar35) * 0x1000193;
      lVar29 = lVar29 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar29);
  }
  if (uVar35 == uVar7) {
LAB_1400fdd0d:
    lVar38 = plVar22[6];
    uVar35 = *(uint *)(lVar38 + 0x88 + (longlong)*(int *)(lVar38 + 0x3c));
    lVar29 = lVar38 + (ulonglong)uVar35;
    if ((ulonglong)uVar35 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar29 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fdcb5;
        uVar33 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar29 + 0x20) + lVar38 + uVar36 * 4);
        cVar44 = *(char *)(lVar38 + uVar33);
        if (cVar44 == '\0') {
          uVar42 = 0xf7e491c8;
        }
        else {
          pcVar26 = (char *)(uVar33 + lVar38 + 1);
          uVar42 = 0xf7e491c8;
          do {
            uVar42 = ((int)cVar44 ^ uVar42) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar42 != uVar17);
      uVar7 = *(uint *)((ulonglong)*(uint *)(lVar29 + 0x1c) + lVar38 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar29 + 0x24) + lVar38 + (uVar36 & 0xffffffff) * 2) *
                       4);
      pcVar37 = (code *)((ulonglong)uVar7 + lVar38);
      if ((uVar7 <= uVar35) ||
         ((code *)(lVar29 + (ulonglong)*(uint *)(lVar38 + 0x8c + (longlong)*(int *)(lVar38 + 0x3c)))
          <= pcVar37)) goto LAB_1400fde2b;
      uVar17 = 0xf7e491c8;
      uVar7 = 0xf7e491c8;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar17 = 0xf7e491c8;
        do {
          uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar29 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar29 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fdcb5;
LAB_1400fde2b:
  (*pcVar37)(local_90,0,0x8000);
  goto LAB_1400fde41;
code_r0x0001400fdeac:
  uVar35 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar27 = 0;
    do {
      uVar35 = ((int)*(char *)(plVar22[0xc] + lVar27) ^ uVar35) * 0x1000193;
      lVar27 = lVar27 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
  }
  if (uVar35 == uVar7) {
LAB_1400fdefd:
    lVar29 = plVar22[6];
    uVar35 = *(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
    lVar27 = lVar29 + (ulonglong)uVar35;
    if ((ulonglong)uVar35 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar27 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fdea5;
        uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar27 + 0x20) + lVar29 + uVar36 * 4);
        cVar44 = *(char *)(lVar29 + uVar28);
        if (cVar44 == '\0') {
          uVar42 = 0xf7e491c8;
        }
        else {
          pcVar26 = (char *)(uVar28 + lVar29 + 1);
          uVar42 = 0xf7e491c8;
          do {
            uVar42 = ((int)cVar44 ^ uVar42) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar42 != uVar17);
      uVar7 = *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c) + lVar29 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar27 + 0x24) + lVar29 + (uVar36 & 0xffffffff) * 2) *
                       4);
      pcVar37 = (code *)((ulonglong)uVar7 + lVar29);
      if ((uVar7 <= uVar35) ||
         ((code *)(lVar27 + (ulonglong)*(uint *)(lVar29 + 0x8c + (longlong)*(int *)(lVar29 + 0x3c)))
          <= pcVar37)) goto LAB_1400fe01b;
      uVar17 = 0xf7e491c8;
      uVar7 = 0xf7e491c8;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar17 = 0xf7e491c8;
        do {
          uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar27 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fdea5;
LAB_1400fe01b:
  (*pcVar37)(local_50,0,0x8000);
  if (1 < lVar25 + 1U) {
    NtClose();
  }
  if (local_98 == 0) {
    return;
  }
  uVar7 = 0;
  lVar25 = readgsbase();
  plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar25 + 0x60) + 0x18) + 0x10);
  uVar17 = 0x28188289;
LAB_1400fe095:
  plVar22 = (longlong *)*plVar22;
  if (uVar7 != 0) goto code_r0x0001400fe09c;
  goto LAB_1400fe0ed;
code_r0x0001400fe09c:
  uVar35 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar25 = 0;
    do {
      uVar35 = ((int)*(char *)(plVar22[0xc] + lVar25) ^ uVar35) * 0x1000193;
      lVar25 = lVar25 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar25);
  }
  if (uVar35 == uVar7) {
LAB_1400fe0ed:
    lVar27 = plVar22[6];
    uVar35 = *(uint *)(lVar27 + 0x88 + (longlong)*(int *)(lVar27 + 0x3c));
    lVar25 = lVar27 + (ulonglong)uVar35;
    if ((ulonglong)uVar35 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar25 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fe095;
        uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar25 + 0x20) + lVar27 + uVar36 * 4);
        cVar44 = *(char *)(lVar27 + uVar28);
        if (cVar44 == '\0') {
          uVar42 = 0xf7e491c8;
        }
        else {
          pcVar26 = (char *)(uVar28 + lVar27 + 1);
          uVar42 = 0xf7e491c8;
          do {
            uVar42 = ((int)cVar44 ^ uVar42) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar42 != uVar17);
      uVar7 = *(uint *)((ulonglong)*(uint *)(lVar25 + 0x1c) + lVar27 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar25 + 0x24) + lVar27 + (uVar36 & 0xffffffff) * 2) *
                       4);
      pcVar37 = (code *)((ulonglong)uVar7 + lVar27);
      if ((uVar7 <= uVar35) ||
         ((code *)(lVar25 + (ulonglong)*(uint *)(lVar27 + 0x8c + (longlong)*(int *)(lVar27 + 0x3c)))
          <= pcVar37)) {
        (*pcVar37)(local_98,0,0x8000);
        return;
      }
      uVar17 = 0xf7e491c8;
      uVar7 = 0xf7e491c8;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar17 = 0xf7e491c8;
        do {
          uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar25 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar25 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fe095;
code_r0x0001400fc4bc:
  uVar42 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar27 = 0;
    do {
      uVar42 = ((int)*(char *)(plVar22[0xc] + lVar27) ^ uVar42) * 0x1000193;
      lVar27 = lVar27 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
  }
  if (uVar42 == uVar7) {
LAB_1400fc50d:
    lVar29 = plVar22[6];
    uVar42 = *(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
    lVar27 = lVar29 + (ulonglong)uVar42;
    if ((ulonglong)uVar42 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar27 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fc4b5;
        uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar27 + 0x20) + lVar29 + uVar36 * 4);
        cVar44 = *(char *)(lVar29 + uVar28);
        if (cVar44 == '\0') {
          uVar40 = 0x2292570b;
        }
        else {
          pcVar26 = (char *)(uVar28 + lVar29 + 1);
          uVar40 = 0x2292570b;
          do {
            uVar40 = ((int)cVar44 ^ uVar40) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar40 != uVar35);
      uVar7 = *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c) + lVar29 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar27 + 0x24) + lVar29 + (uVar36 & 0xffffffff) * 2) *
                       4);
      pcVar37 = (code *)((ulonglong)uVar7 + lVar29);
      if ((uVar7 <= uVar42) ||
         ((code *)(lVar27 + (ulonglong)*(uint *)(lVar29 + 0x8c + (longlong)*(int *)(lVar29 + 0x3c)))
          <= pcVar37)) goto LAB_1400fc630;
      uVar35 = 0x2292570b;
      uVar7 = 0x2292570b;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar7 = ((int)(char)cVar21 ^ uVar7) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar35 = 0x2292570b;
        do {
          uVar35 = ((int)(char)cVar21 ^ uVar35) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar27 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fc4b5;
LAB_1400fc630:
  puVar10 = (ulonglong *)(*pcVar37)(0,local_88,0x3000,4);
  uVar7 = uVar17;
  if (local_50 != (ulonglong *)0x0) {
    uVar17 = 0;
    lVar27 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    uVar35 = 0x28188289;
LAB_1400fc695:
    plVar22 = (longlong *)*plVar22;
    if (uVar17 != 0) goto code_r0x0001400fc69c;
    goto LAB_1400fc6ed;
  }
  goto LAB_1400fc2a0;
code_r0x0001400fc69c:
  uVar42 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar27 = 0;
    do {
      uVar42 = ((int)*(char *)(plVar22[0xc] + lVar27) ^ uVar42) * 0x1000193;
      lVar27 = lVar27 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar27);
  }
  if (uVar42 == uVar17) {
LAB_1400fc6ed:
    lVar29 = plVar22[6];
    uVar42 = *(uint *)(lVar29 + 0x88 + (longlong)*(int *)(lVar29 + 0x3c));
    lVar27 = lVar29 + (ulonglong)uVar42;
    if ((ulonglong)uVar42 != 0) {
      uVar36 = (ulonglong)*(uint *)(lVar27 + 0x18);
      do {
        bVar46 = uVar36 == 0;
        uVar36 = uVar36 - 1;
        if (bVar46) goto LAB_1400fc695;
        uVar28 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar27 + 0x20) + lVar29 + uVar36 * 4);
        cVar44 = *(char *)(lVar29 + uVar28);
        if (cVar44 == '\0') {
          uVar40 = 0xf7e491c8;
        }
        else {
          pcVar26 = (char *)(uVar28 + lVar29 + 1);
          uVar40 = 0xf7e491c8;
          do {
            uVar40 = ((int)cVar44 ^ uVar40) * 0x1000193;
            cVar44 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar44 != '\0');
        }
      } while (uVar40 != uVar35);
      uVar17 = *(uint *)((ulonglong)*(uint *)(lVar27 + 0x1c) + lVar29 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar27 + 0x24) + lVar29 + (uVar36 & 0xffffffff) * 2)
                        * 4);
      pcVar37 = (code *)((ulonglong)uVar17 + lVar29);
      if ((uVar17 <= uVar42) ||
         ((code *)(lVar27 + (ulonglong)*(uint *)(lVar29 + 0x8c + (longlong)*(int *)(lVar29 + 0x3c)))
          <= pcVar37)) goto LAB_1400fc810;
      uVar35 = 0xf7e491c8;
      uVar17 = 0xf7e491c8;
      cVar21 = *pcVar37;
      while (cVar21 != (code)0x2e) {
        uVar17 = ((int)(char)cVar21 ^ uVar17) * 0x1000193;
        pcVar1 = pcVar37 + 1;
        pcVar37 = pcVar37 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar37[1];
      if (cVar21 != (code)0x0) {
        pcVar37 = pcVar37 + 2;
        uVar35 = 0xf7e491c8;
        do {
          uVar35 = ((int)(char)cVar21 ^ uVar35) * 0x1000193;
          cVar21 = *pcVar37;
          pcVar37 = pcVar37 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar27 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar27 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fc695;
LAB_1400fc810:
  (*pcVar37)(local_50,0,0x8000);
  goto LAB_1400fc2a0;
}

