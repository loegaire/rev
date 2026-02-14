
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140104520(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [32];
  ushort uVar5;
  longlong *plVar6;
  undefined1 auVar7 [32];
  undefined8 uVar8;
  LSTATUS LVar9;
  int iVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  void *pvVar15;
  undefined1 (*pauVar16) [16];
  uintptr_t uVar17;
  __time64_t _Var18;
  tm *ptVar19;
  uint uVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [16];
  undefined8 *puVar24;
  undefined1 auVar25 [8];
  uint uVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong uVar29;
  __uint64 _Var30;
  ulonglong uVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong lVar34;
  undefined1 auVar35 [8];
  undefined1 (*pauVar36) [32];
  undefined1 (*pauVar37) [32];
  undefined1 *puVar38;
  code cVar39;
  ulonglong uVar40;
  code *pcVar41;
  longlong *plVar42;
  undefined *puVar43;
  ulonglong uVar44;
  longlong *plVar45;
  uint uVar46;
  char cVar47;
  uint uVar48;
  longlong *plVar49;
  char *pcVar50;
  ulonglong uVar51;
  undefined8 *puVar52;
  void *pvVar53;
  HKEY pHVar54;
  char *pcVar55;
  bool bVar56;
  float fVar57;
  undefined1 auVar59 [16];
  undefined1 auVar58 [12];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar65 [64];
  undefined1 local_1118 [16];
  size_t sStack_1108;
  ulonglong uStack_1100;
  float local_10f8;
  longlong *local_10f0;
  longlong local_10e8;
  undefined8 *local_10e0;
  undefined8 *local_10d8;
  undefined8 *local_10d0;
  ulonglong local_10c8;
  ulonglong local_10c0;
  longlong *local_10b8;
  longlong *local_10b0;
  longlong local_10a8;
  void *pvStack_10a0;
  longlong lStack_1098;
  void *pvStack_1090;
  ulonglong local_1088;
  undefined1 local_1080 [16];
  longlong local_1070;
  ulonglong local_110;
  wchar_t *local_108;
  longlong *local_100;
  char *local_f8;
  HKEY pHStack_f0;
  HKEY local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  HKEY pHStack_c0;
  size_t sStack_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [8];
  undefined1 (*pauStack_80) [32];
  longlong *plStack_78;
  ulonglong uStack_70;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x140104536;
  local_58 = in_ZMM6._0_16_;
  local_60 = 0xfffffffffffffffe;
  if (DAT_1401270e8 == '\0') {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (DAT_14012b510 != '\0') {
    return;
  }
  FUN_1400bd5c0((longlong *)local_88);
  auVar25 = local_88;
  _local_1118 = ZEXT1232(ZEXT812(0));
  auVar65 = ZEXT1664(in_ZMM1._0_16_);
  sVar11 = strlen((char *)local_88);
  if ((longlong)sVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar11 < 0x10) {
    sStack_1108 = sVar11;
    uStack_1100 = 0xf;
    memcpy(local_1118,(void *)auVar25,sVar11);
    puVar38 = local_1118;
  }
  else {
    uVar29 = 0x16;
    if (0x16 < (sVar11 | 0xf)) {
      uVar29 = sVar11 | 0xf;
    }
    if (uVar29 < 0xfff) {
      puVar38 = operator_new(uVar29 + 1);
    }
    else {
      pvVar15 = operator_new(uVar29 + 0x28);
      puVar38 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar38 + -8) = pvVar15;
    }
    local_1118._0_8_ = puVar38;
    sStack_1108 = sVar11;
    uStack_1100 = uVar29;
    memcpy(puVar38,(void *)auVar25,sVar11);
  }
  puVar38[sVar11] = 0;
  if (local_88 != (undefined1  [8])0x0) {
    uVar20 = 0;
    lVar28 = readgsbase();
    puVar24 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar28 + 0x60) + 0x18) + 0x10);
    uVar26 = 0x95ed46c;
    puVar52 = puVar24;
    do {
      if (uVar20 == 0) {
LAB_1401046fd:
        lVar32 = puVar52[6];
        uVar46 = *(uint *)(lVar32 + 0x88 + (longlong)*(int *)(lVar32 + 0x3c));
        lVar28 = lVar32 + (ulonglong)uVar46;
        if ((ulonglong)uVar46 != 0) {
          uVar29 = (ulonglong)*(uint *)(lVar28 + 0x18);
          do {
            bVar56 = uVar29 == 0;
            uVar29 = uVar29 - 1;
            if (bVar56) goto LAB_1401046b3;
            uVar44 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar28 + 0x20) + lVar32 + uVar29 * 4)
            ;
            cVar47 = *(char *)(lVar32 + uVar44);
            if (cVar47 == '\0') {
              uVar48 = 0xca89e2eb;
            }
            else {
              pcVar55 = (char *)(uVar44 + lVar32 + 1);
              uVar48 = 0xca89e2eb;
              do {
                uVar48 = ((int)cVar47 ^ uVar48) * 0x1000193;
                cVar47 = *pcVar55;
                pcVar55 = pcVar55 + 1;
              } while (cVar47 != '\0');
            }
          } while (uVar48 != uVar26);
          uVar20 = *(uint *)((ulonglong)*(uint *)(lVar28 + 0x1c) + lVar32 +
                            (ulonglong)
                            *(ushort *)
                             ((ulonglong)*(uint *)(lVar28 + 0x24) + lVar32 +
                             (uVar29 & 0xffffffff) * 2) * 4);
          pcVar41 = (code *)(lVar32 + (ulonglong)uVar20);
          if ((uVar20 <= uVar46) ||
             ((code *)(lVar28 + (ulonglong)
                                *(uint *)(lVar32 + 0x8c + (longlong)*(int *)(lVar32 + 0x3c))) <=
              pcVar41)) goto LAB_14010482f;
          uVar26 = 0xca89e2eb;
          uVar20 = 0xca89e2eb;
          cVar39 = *pcVar41;
          while (cVar39 != (code)0x2e) {
            uVar20 = ((int)(char)cVar39 ^ uVar20) * 0x1000193;
            pcVar1 = pcVar41 + 1;
            pcVar41 = pcVar41 + 1;
            cVar39 = *pcVar1;
          }
          cVar39 = pcVar41[1];
          if (cVar39 != (code)0x0) {
            pcVar41 = pcVar41 + 2;
            uVar26 = 0xca89e2eb;
            do {
              uVar26 = ((int)(char)cVar39 ^ uVar26) * 0x1000193;
              cVar39 = *pcVar41;
              pcVar41 = pcVar41 + 1;
            } while (cVar39 != (code)0x0);
          }
          puVar52 = (undefined8 *)*puVar24;
        }
      }
      else {
        uVar46 = 0xca89e2eb;
        if (1 < (ushort)(*(int *)(puVar52 + 0xb) - 8U)) {
          lVar28 = 0;
          do {
            uVar46 = ((int)*(char *)(puVar52[0xc] + lVar28) ^ uVar46) * 0x1000193;
            lVar28 = lVar28 + 2;
          } while ((ulonglong)((*(int *)(puVar52 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar28);
        }
        if (uVar46 == uVar20) goto LAB_1401046fd;
      }
LAB_1401046b3:
      puVar52 = (undefined8 *)*puVar52;
    } while( true );
  }
LAB_140104841:
  if (uStack_1100 < 0x10) {
    puVar38 = local_1118;
  }
  else {
    puVar38 = (undefined1 *)local_1118._0_8_;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_14012b5f8) && (FUN_140109684(&DAT_14012b5f8), DAT_14012b5f8 == -1)) {
    _DAT_14012b538 = 2;
    _DAT_14012b540 = 0;
    _DAT_14012b548 = ZEXT1232(ZEXT812(0));
    _DAT_14012b588 = 0;
    auVar65 = ZEXT1664(auVar65._0_16_);
    _DAT_14012b568 = _DAT_14012b548;
    _Mtx_init_in_situ(&DAT_14012b540,2);
    _DAT_14012b590 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b5f0 = "%T  %d-%m-%Y";
    atexit(FUN_1400f9950);
    _Init_thread_footer(&DAT_14012b5f8);
  }
  DAT_14012b590 = (ulonglong)puVar38;
  if (DAT_14012b598 != (HANDLE)0x0) {
    CloseHandle(DAT_14012b598);
    DAT_14012b598 = (HANDLE)0x0;
  }
  uVar20 = 0;
  lVar28 = readgsbase();
  plVar27 = (longlong *)(*(longlong *)(*(longlong *)(lVar28 + 0x60) + 0x18) + 0x10);
  uVar26 = 0x7fee6d1a;
LAB_1401048e5:
  plVar27 = (longlong *)*plVar27;
  if (uVar20 != 0) goto code_r0x0001401048ec;
  goto LAB_14010493d;
LAB_14010482f:
  (*pcVar41)(local_88,0,0x8000);
  goto LAB_140104841;
code_r0x0001401048ec:
  uVar46 = 0xe5834b69;
  if (1 < (ushort)(*(int *)(plVar27 + 0xb) - 8U)) {
    lVar28 = 0;
    do {
      uVar46 = ((int)*(char *)(plVar27[0xc] + lVar28) ^ uVar46) * 0x1000193;
      lVar28 = lVar28 + 2;
    } while ((ulonglong)((*(int *)(plVar27 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar28);
  }
  if (uVar46 == uVar20) {
LAB_14010493d:
    lVar32 = plVar27[6];
    uVar46 = *(uint *)(lVar32 + 0x88 + (longlong)*(int *)(lVar32 + 0x3c));
    lVar28 = lVar32 + (ulonglong)uVar46;
    if ((ulonglong)uVar46 != 0) {
      uVar29 = (ulonglong)*(uint *)(lVar28 + 0x18);
      do {
        bVar56 = uVar29 == 0;
        uVar29 = uVar29 - 1;
        if (bVar56) goto LAB_1401048e5;
        uVar44 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar28 + 0x20) + lVar32 + uVar29 * 4);
        cVar47 = *(char *)(lVar32 + uVar44);
        if (cVar47 == '\0') {
          uVar48 = 0xe5834b69;
        }
        else {
          pcVar55 = (char *)(uVar44 + lVar32 + 1);
          uVar48 = 0xe5834b69;
          do {
            uVar48 = ((int)cVar47 ^ uVar48) * 0x1000193;
            cVar47 = *pcVar55;
            pcVar55 = pcVar55 + 1;
          } while (cVar47 != '\0');
        }
      } while (uVar48 != uVar26);
      uVar20 = *(uint *)((ulonglong)*(uint *)(lVar28 + 0x1c) + lVar32 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar28 + 0x24) + lVar32 + (uVar29 & 0xffffffff) * 2)
                        * 4);
      pcVar41 = (code *)((ulonglong)uVar20 + lVar32);
      if ((uVar20 <= uVar46) ||
         ((code *)(lVar28 + (ulonglong)*(uint *)(lVar32 + 0x8c + (longlong)*(int *)(lVar32 + 0x3c)))
          <= pcVar41)) goto LAB_140104a5b;
      uVar26 = 0xe5834b69;
      uVar20 = 0xe5834b69;
      cVar39 = *pcVar41;
      while (cVar39 != (code)0x2e) {
        uVar20 = ((int)(char)cVar39 ^ uVar20) * 0x1000193;
        pcVar1 = pcVar41 + 1;
        pcVar41 = pcVar41 + 1;
        cVar39 = *pcVar1;
      }
      cVar39 = pcVar41[1];
      if (cVar39 != (code)0x0) {
        pcVar41 = pcVar41 + 2;
        uVar26 = 0xe5834b69;
        do {
          uVar26 = ((int)(char)cVar39 ^ uVar26) * 0x1000193;
          cVar39 = *pcVar41;
          pcVar41 = pcVar41 + 1;
        } while (cVar39 != (code)0x0);
      }
      lVar28 = readgsbase();
      plVar27 = *(longlong **)(*(longlong *)(*(longlong *)(lVar28 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1401048e5;
LAB_140104a5b:
  uVar12 = (*pcVar41)(DAT_14012b590,0xc0000000,3,0,4,0x80,0);
  DAT_14012b598 = (HANDLE)uVar12;
  if (0xf < uStack_1100) {
    pvVar15 = (void *)local_1118._0_8_;
    if ((0xfff < uStack_1100 + 1) &&
       (pvVar15 = *(void **)(local_1118._0_8_ + -8),
       0x1f < (ulonglong)(local_1118._0_8_ + (-8 - (longlong)pvVar15)))) goto LAB_1401066a6;
    free(pvVar15);
  }
  FUN_140108cd0((longlong *)local_1118);
  uVar12 = local_1118._0_8_;
  _local_88 = ZEXT1232(ZEXT812(0));
  auVar65 = ZEXT1664(auVar65._0_16_);
  sVar11 = wcslen((wchar_t *)local_1118._0_8_);
  if (0x7ffffffffffffffe < sVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar11 < 8) {
    plStack_78 = (longlong *)sVar11;
    uStack_70 = 7;
    memcpy(local_88,(void *)uVar12,sVar11 * 2);
    puVar13 = (undefined2 *)(local_88 + sVar11 * 2);
  }
  else {
    uStack_70 = 7;
    uVar29 = sVar11 | 7;
    if (0x7ffffffffffffffe < uVar29) {
LAB_14010801e:
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    uVar44 = 10;
    if (10 < uVar29) {
      uVar44 = uVar29;
    }
    if (uVar44 < 0x7ff) {
      pvVar15 = operator_new(uVar44 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar44) goto LAB_14010801e;
      pvVar53 = operator_new(uVar44 * 2 + 0x29);
      pvVar15 = (void *)((longlong)pvVar53 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar15 - 8) = pvVar53;
    }
    local_88 = (undefined1  [8])pvVar15;
    plStack_78 = (longlong *)sVar11;
    uStack_70 = uVar44;
    memcpy(pvVar15,(void *)uVar12,sVar11 * 2);
    puVar13 = (undefined2 *)((longlong)pvVar15 + sVar11 * 2);
  }
  *puVar13 = 0;
  if (local_1118._0_8_ != 0) {
    uVar20 = 0;
    lVar28 = readgsbase();
    puVar24 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar28 + 0x60) + 0x18) + 0x10);
    uVar26 = 0x95ed46c;
    puVar52 = puVar24;
    do {
      if (uVar20 == 0) {
LAB_140104dcd:
        lVar32 = puVar52[6];
        uVar46 = *(uint *)(lVar32 + 0x88 + (longlong)*(int *)(lVar32 + 0x3c));
        lVar28 = lVar32 + (ulonglong)uVar46;
        if ((ulonglong)uVar46 != 0) {
          uVar29 = (ulonglong)*(uint *)(lVar28 + 0x18);
          do {
            bVar56 = uVar29 == 0;
            uVar29 = uVar29 - 1;
            if (bVar56) goto LAB_140104d83;
            uVar44 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar28 + 0x20) + lVar32 + uVar29 * 4)
            ;
            cVar47 = *(char *)(lVar32 + uVar44);
            if (cVar47 == '\0') {
              uVar48 = 0xca89e2eb;
            }
            else {
              pcVar55 = (char *)(uVar44 + lVar32 + 1);
              uVar48 = 0xca89e2eb;
              do {
                uVar48 = ((int)cVar47 ^ uVar48) * 0x1000193;
                cVar47 = *pcVar55;
                pcVar55 = pcVar55 + 1;
              } while (cVar47 != '\0');
            }
          } while (uVar48 != uVar26);
          uVar20 = *(uint *)((ulonglong)*(uint *)(lVar28 + 0x1c) + lVar32 +
                            (ulonglong)
                            *(ushort *)
                             ((ulonglong)*(uint *)(lVar28 + 0x24) + lVar32 +
                             (uVar29 & 0xffffffff) * 2) * 4);
          pcVar41 = (code *)(lVar32 + (ulonglong)uVar20);
          if ((uVar20 <= uVar46) ||
             ((code *)(lVar28 + (ulonglong)
                                *(uint *)(lVar32 + 0x8c + (longlong)*(int *)(lVar32 + 0x3c))) <=
              pcVar41)) goto LAB_140104eff;
          uVar26 = 0xca89e2eb;
          uVar20 = 0xca89e2eb;
          cVar39 = *pcVar41;
          while (cVar39 != (code)0x2e) {
            uVar20 = ((int)(char)cVar39 ^ uVar20) * 0x1000193;
            pcVar1 = pcVar41 + 1;
            pcVar41 = pcVar41 + 1;
            cVar39 = *pcVar1;
          }
          cVar39 = pcVar41[1];
          if (cVar39 != (code)0x0) {
            pcVar41 = pcVar41 + 2;
            uVar26 = 0xca89e2eb;
            do {
              uVar26 = ((int)(char)cVar39 ^ uVar26) * 0x1000193;
              cVar39 = *pcVar41;
              pcVar41 = pcVar41 + 1;
            } while (cVar39 != (code)0x0);
          }
          puVar52 = (undefined8 *)*puVar24;
        }
      }
      else {
        uVar46 = 0xca89e2eb;
        if (1 < (ushort)(*(int *)(puVar52 + 0xb) - 8U)) {
          lVar28 = 0;
          do {
            uVar46 = ((int)*(char *)(puVar52[0xc] + lVar28) ^ uVar46) * 0x1000193;
            lVar28 = lVar28 + 2;
          } while ((ulonglong)((*(int *)(puVar52 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar28);
        }
        if (uVar46 == uVar20) goto LAB_140104dcd;
      }
LAB_140104d83:
      puVar52 = (undefined8 *)*puVar52;
    } while( true );
  }
  goto LAB_140104f11;
LAB_140104eff:
  (*pcVar41)(local_1118._0_8_,0);
LAB_140104f11:
  auVar25 = (undefined1  [8])local_88;
  if (7 < uStack_70) {
    auVar25 = local_88;
  }
  _local_c8 = ZEXT816(0xffffffff80000002);
  plVar27 = (longlong *)0x20019;
  LVar9 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,(LPCWSTR)auVar25,0,0x20019,&pHStack_c0);
  if (LVar9 == 0) {
    local_a8._0_8_ = auVar25;
    sVar11 = wcslen((wchar_t *)auVar25);
    local_a8._8_8_ = sVar11;
    local_f8 = (char *)local_c8;
    pHStack_f0 = pHStack_c0;
    FUN_1400cf330((undefined1 (*) [32])local_1118,&local_f8,(undefined8 *)local_a8);
    RegCloseKey(pHStack_c0);
    auVar59 = auVar65._0_16_;
  }
  else {
    local_10e8 = 0;
    _local_1118 = ZEXT1232(ZEXT812(0));
    auVar65 = ZEXT1664(auVar65._0_16_);
    local_10f0 = operator_new(0x50);
    *local_10f0 = (longlong)local_10f0;
    local_10f0[1] = (longlong)local_10f0;
    local_10c8 = 7;
    local_10c0 = 8;
    local_10f8 = 1.0;
    local_d0 = local_10f0;
    local_10e0 = operator_new(0x80);
    auVar59 = auVar65._0_16_;
    local_10d8 = local_10e0 + 0x10;
    *local_10e0 = local_d0;
    local_10e0[1] = local_d0;
    local_10e0[2] = local_d0;
    local_10e0[3] = local_d0;
    local_10e0[4] = local_d0;
    local_10e0[5] = local_d0;
    local_10e0[6] = local_d0;
    local_10e0[7] = local_d0;
    local_10e0[8] = local_d0;
    local_10e0[9] = local_d0;
    local_10e0[10] = local_d0;
    local_10e0[0xb] = local_d0;
    local_10e0[0xc] = local_d0;
    local_10e0[0xd] = local_d0;
    local_10e0[0xe] = local_d0;
    local_10e0[0xf] = local_d0;
    local_10b8 = (longlong *)0x0;
    lStack_1098 = 0;
    pvStack_1090 = (void *)0x0;
    local_10b0 = SUB328(ZEXT832(0),4);
    local_1088 = 7;
    local_1080 = ZEXT816(0) << 0x20;
    local_1070 = 0;
    local_10d0 = local_10d8;
    local_10a8 = lStack_1098;
    pvStack_10a0 = pvStack_1090;
  }
  if (7 < uStack_70) {
    auVar25 = local_88;
    if ((0xfff < uStack_70 * 2 + 2) &&
       (auVar25 = *(undefined1 (*) [8])((longlong)local_88 + -8),
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)auVar25)))) goto LAB_1401066a6;
    auVar65 = ZEXT1664(auVar59);
    free((void *)auVar25);
    auVar59 = auVar65._0_16_;
  }
  _local_c8 = ZEXT816((ulonglong)0x44004900550047);
  sStack_b8 = 4;
  uStack_b0 = 7;
  _local_88 = ZEXT1232(ZEXT812(0));
  local_108 = (wchar_t *)local_c8;
  auVar65 = ZEXT1664(auVar59);
  sVar11 = wcslen(local_108);
  if (0x7ffffffffffffffe < sVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar11 < 8) {
    plStack_78 = (longlong *)sVar11;
    uStack_70 = 7;
    memcpy(local_88,local_c8,sVar11 * 2);
    puVar13 = (undefined2 *)(local_88 + sVar11 * 2);
  }
  else {
    uVar29 = sVar11 | 7;
    if (0x7ffffffffffffffe < uVar29) {
LAB_140108023:
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    uVar44 = 10;
    if (10 < uVar29) {
      uVar44 = uVar29;
    }
    if (uVar44 < 0x7ff) {
      pvVar15 = operator_new(uVar44 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar44) goto LAB_140108023;
      pvVar53 = operator_new(uVar44 * 2 + 0x29);
      pvVar15 = (void *)((longlong)pvVar53 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar15 - 8) = pvVar53;
    }
    local_88 = (undefined1  [8])pvVar15;
    plStack_78 = (longlong *)sVar11;
    uStack_70 = uVar44;
    memcpy(pvVar15,local_c8,sVar11 * 2);
    puVar13 = (undefined2 *)((longlong)pvVar15 + sVar11 * 2);
  }
  *puVar13 = 0;
  puVar24 = local_10e0;
  lVar28 = local_10e8;
  plVar33 = local_10f0;
  if (uStack_70 < 8) {
    auVar25 = (undefined1  [8])local_88;
  }
  else {
    auVar25 = local_88;
  }
  uVar29 = (longlong)plStack_78 * 2;
  if (uVar29 == 0) {
    uVar44 = 0xcbf29ce484222325;
  }
  else {
    uVar51 = (ulonglong)((uint)uVar29 & 2);
    if (uVar29 < 4) {
      uVar44 = 0xcbf29ce484222325;
      plVar27 = (longlong *)0x0;
    }
    else {
      uVar44 = 0xcbf29ce484222325;
      plVar27 = (longlong *)0x0;
      do {
        uVar44 = ((ulonglong)(byte)((undefined1 *)((longlong)auVar25 + 3))[(longlong)plVar27] ^
                 ((ulonglong)(byte)((undefined1 *)((longlong)auVar25 + 2))[(longlong)plVar27] ^
                 ((ulonglong)(byte)((undefined1 *)((longlong)auVar25 + 1))[(longlong)plVar27] ^
                 (*(byte *)((longlong)auVar25 + (longlong)plVar27) ^ uVar44) * 0x100000001b3) *
                 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
        plVar27 = (longlong *)((longlong)plVar27 + 4);
      } while ((longlong *)(uVar29 & 0xfffffffffffffffc) != plVar27);
    }
    if (uVar51 != 0) {
      plVar27 = (longlong *)((longlong)plVar27 + (longlong)auVar25);
      uVar29 = 0;
      do {
        uVar44 = (*(byte *)((longlong)plVar27 + uVar29) ^ uVar44) * 0x100000001b3;
        uVar29 = uVar29 + 1;
      } while (uVar51 != uVar29);
    }
  }
  plVar45 = (longlong *)local_10e0[(local_10c8 & uVar44) * 2 + 1];
  plVar42 = plVar45;
  if (plVar45 != local_10f0) {
    plVar42 = (longlong *)local_10e0[(local_10c8 & uVar44) * 2];
    plVar21 = (longlong *)plVar45[4];
    while( true ) {
      if (plStack_78 == plVar21) {
        if (plStack_78 == (longlong *)0x0) goto LAB_140105a5f;
        if ((ulonglong)plVar45[5] < 8) {
          plVar21 = plVar45 + 2;
        }
        else {
          plVar21 = (longlong *)plVar45[2];
        }
        plVar27 = (longlong *)0x0;
        while (*(short *)((longlong)auVar25 + (longlong)plVar27 * 2) ==
               *(short *)((longlong)plVar21 + (longlong)plVar27 * 2)) {
          plVar27 = (longlong *)((longlong)plVar27 + 1);
          if (plStack_78 == plVar27) goto LAB_140105a5f;
        }
      }
      if (plVar45 == plVar42) break;
      plVar45 = (longlong *)plVar45[1];
      plVar21 = (longlong *)plVar45[4];
    }
  }
  if (local_10e8 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("unordered_map/set too long");
  }
  local_d8 = operator_new(0x50);
  local_d8[2] = (longlong)local_88;
  local_d8[3] = (longlong)pauStack_80;
  local_d8[4] = (longlong)plStack_78;
  local_d8[5] = uStack_70;
  plStack_78 = (longlong *)0x0;
  uStack_70 = 7;
  auVar4._30_2_ = 0;
  auVar4._0_30_ = stack0xffffffffffffff7a;
  _local_88 = auVar4 << 0x10;
  *(undefined4 *)(local_d8 + 6) = 0;
  *(undefined1 (*) [16])(local_d8 + 7) = ZEXT816(0) << 0x20;
  local_d8[9] = 0;
  auVar58 = auVar65._4_12_;
  if ((longlong)(lVar28 + 1U) < 0) {
    auVar58 = (undefined1  [12])0x0;
  }
  fVar57 = (float)(lVar28 + 1U);
  local_100 = local_d8;
  if (local_10f8 < fVar57 / (float)local_10c0) {
    auVar59._0_4_ = fVar57 / local_10f8;
    auVar59._4_12_ = auVar58;
    auVar59 = vroundss_avx(auVar59,auVar59,10);
    uVar51 = (ulonglong)auVar59._0_4_;
    uVar51 = (longlong)(auVar59._0_4_ - 9.223372e+18) & (longlong)uVar51 >> 0x3f | uVar51;
    uVar29 = 8;
    if (8 < uVar51) {
      uVar29 = uVar51;
    }
    uVar51 = local_10c0;
    if (local_10c0 < uVar29) {
      uVar51 = local_10c0 * 8;
      if (local_10c0 * 8 < uVar29) {
        uVar51 = uVar29;
      }
      if (0x1ff < local_10c0) {
        uVar51 = uVar29;
      }
    }
    local_100 = local_d8 + 2;
    if (0x800000000000000 < uVar51) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("invalid hash bucket count");
    }
    lVar28 = LZCOUNT(uVar51 - 1 | 1);
    uVar29 = -lVar28;
    uVar51 = 2L << (uVar29 & 0x3f);
    plVar42 = plVar33;
    if ((ulonglong)((longlong)local_10d8 - (longlong)puVar24 >> 3) < uVar51) {
      if (uVar51 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400bb790();
      }
      _Var30 = 0x10L << (0x40U - lVar28 & 0x3f);
      if (uVar51 < 0x200) {
        puVar52 = operator_new(_Var30);
      }
      else {
        if (0x1ffffffffffffffb < uVar51) {
                    /* WARNING: Subroutine does not return */
          FUN_1400bb790();
        }
        pvVar15 = operator_new(_Var30 + 0x27);
        puVar52 = (undefined8 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
        puVar52[-1] = pvVar15;
      }
      if (local_10d0 != puVar24) {
        puVar22 = puVar24;
        if ((0xfff < (ulonglong)((longlong)local_10d0 - (longlong)puVar24)) &&
           (puVar22 = (undefined8 *)puVar24[-1],
           0x1f < (ulonglong)((longlong)puVar24 + (-8 - (longlong)puVar22)))) goto LAB_1401066a6;
        free(puVar22);
      }
      local_10d8 = puVar52 + uVar51;
      local_10e0 = puVar52;
      local_10d0 = local_10d8;
      if (0x77 < _Var30 - 8) {
        uVar31 = (_Var30 - 8 >> 3) + 1;
        uVar51 = uVar31 & 0xfffffffffffffff0;
        auVar61._8_8_ = plVar33;
        auVar61._0_8_ = plVar33;
        auVar61._16_8_ = plVar33;
        auVar61._24_8_ = plVar33;
        uVar40 = 0;
        do {
          *(undefined1 (*) [32])(puVar52 + uVar40) = auVar61;
          *(undefined1 (*) [32])(puVar52 + uVar40 + 4) = auVar61;
          *(undefined1 (*) [32])(puVar52 + uVar40 + 8) = auVar61;
          *(undefined1 (*) [32])(puVar52 + uVar40 + 0xc) = auVar61;
          uVar40 = uVar40 + 0x10;
        } while (uVar51 != uVar40);
        if (uVar31 == uVar51) goto LAB_1401056d3;
        puVar52 = puVar52 + uVar51;
      }
      do {
        *puVar52 = plVar33;
        puVar52 = puVar52 + 1;
        plVar42 = local_10f0;
      } while (puVar52 != local_10d8);
    }
    else if (puVar24 != local_10d8) {
      uVar51 = ((longlong)local_10d8 - (longlong)puVar24) - 8;
      if (0x77 < uVar51) {
        uVar51 = (uVar51 >> 3) + 1;
        uVar31 = uVar51 & 0xfffffffffffffff0;
        auVar60._8_8_ = plVar33;
        auVar60._0_8_ = plVar33;
        auVar60._16_8_ = plVar33;
        auVar60._24_8_ = plVar33;
        uVar40 = 0;
        do {
          *(undefined1 (*) [32])(puVar24 + uVar40) = auVar60;
          *(undefined1 (*) [32])(puVar24 + uVar40 + 4) = auVar60;
          *(undefined1 (*) [32])(puVar24 + uVar40 + 8) = auVar60;
          *(undefined1 (*) [32])(puVar24 + uVar40 + 0xc) = auVar60;
          uVar40 = uVar40 + 0x10;
        } while (uVar31 != uVar40);
        if (uVar51 == uVar31) goto LAB_1401056d3;
        puVar24 = puVar24 + uVar31;
      }
      do {
        *puVar24 = plVar33;
        puVar24 = puVar24 + 1;
      } while (puVar24 != local_10d8);
    }
LAB_1401056d3:
    local_10c0 = 1L << (uVar29 & 0x3f);
    local_10c8 = local_10c0 - 1;
    plVar27 = plVar42;
    if ((longlong *)*plVar42 != plVar33) {
      local_d0 = plVar33;
      plVar45 = (longlong *)*plVar42;
      do {
        plVar27 = plVar45;
        if ((ulonglong)plVar27[5] < 8) {
          plVar21 = plVar27 + 2;
        }
        else {
          plVar21 = (longlong *)plVar27[2];
        }
        lVar28 = plVar27[4];
        uVar51 = 0xcbf29ce484222325;
        uVar29 = lVar28 * 2;
        if (uVar29 != 0) {
          uVar31 = (ulonglong)((uint)uVar29 & 2);
          if (uVar29 < 4) {
            uVar40 = 0;
            uVar51 = 0xcbf29ce484222325;
          }
          else {
            uVar40 = 0;
            uVar51 = 0xcbf29ce484222325;
            do {
              uVar51 = ((ulonglong)*(byte *)((longlong)plVar21 + uVar40 + 3) ^
                       ((ulonglong)*(byte *)((longlong)plVar21 + uVar40 + 2) ^
                       ((ulonglong)*(byte *)((longlong)plVar21 + uVar40 + 1) ^
                       (*(byte *)((longlong)plVar21 + uVar40) ^ uVar51) * 0x100000001b3) *
                       0x100000001b3) * 0x100000001b3) * 0x100000001b3;
              uVar40 = uVar40 + 4;
            } while ((uVar29 & 0xfffffffffffffffc) != uVar40);
          }
          if (uVar31 != 0) {
            uVar29 = 0;
            do {
              uVar51 = (*(byte *)((longlong)plVar21 + uVar29 + uVar40) ^ uVar51) * 0x100000001b3;
              uVar29 = uVar29 + 1;
            } while (uVar31 != uVar29);
          }
        }
        plVar45 = (longlong *)*plVar27;
        uVar51 = uVar51 & local_10c8;
        lVar32 = uVar51 * 2 + 1;
        plVar6 = (longlong *)local_10e0[uVar51 * 2];
        if (plVar6 == plVar33) {
          local_10e0[uVar51 * 2] = plVar27;
          local_10e0[lVar32] = plVar27;
        }
        else {
          plVar49 = (longlong *)local_10e0[lVar32];
          if (lVar28 == plVar49[4]) {
            if (lVar28 != 0) {
              if ((ulonglong)plVar49[5] < 8) {
                plVar14 = plVar49 + 2;
              }
              else {
                plVar14 = (longlong *)plVar49[2];
              }
              lVar34 = 0;
              do {
                if (*(short *)((longlong)plVar21 + lVar34 * 2) !=
                    *(short *)((longlong)plVar14 + lVar34 * 2)) goto LAB_1401058f0;
                lVar34 = lVar34 + 1;
              } while (lVar28 != lVar34);
            }
            plVar49 = (longlong *)*plVar49;
            if (plVar49 != plVar27) {
              puVar24 = (undefined8 *)plVar27[1];
              *puVar24 = plVar45;
              puVar52 = (undefined8 *)plVar45[1];
              *puVar52 = plVar49;
              puVar22 = (undefined8 *)plVar49[1];
              *puVar22 = plVar27;
              plVar49[1] = (longlong)puVar52;
              plVar45[1] = (longlong)puVar24;
              plVar27[1] = (longlong)puVar22;
            }
            local_10e0[lVar32] = plVar27;
          }
          else {
LAB_1401058f0:
            if (plVar6 != plVar49) {
              plVar49 = (longlong *)plVar49[1];
              if (lVar28 == plVar49[4]) {
                if (lVar28 == 0) {
LAB_140105943:
                  lVar28 = *plVar49;
                  puVar24 = (undefined8 *)plVar27[1];
                  *puVar24 = plVar45;
                  plVar21 = (longlong *)plVar45[1];
                  *plVar21 = lVar28;
                  puVar52 = *(undefined8 **)(lVar28 + 8);
                  *puVar52 = plVar27;
                  *(longlong **)(lVar28 + 8) = plVar21;
                  plVar45[1] = (longlong)puVar24;
                  plVar27[1] = (longlong)puVar52;
                  goto LAB_140105752;
                }
                if ((ulonglong)plVar49[5] < 8) {
                  plVar14 = plVar49 + 2;
                }
                else {
                  plVar14 = (longlong *)plVar49[2];
                }
                lVar32 = 0;
                while (*(short *)((longlong)plVar21 + lVar32 * 2) ==
                       *(short *)((longlong)plVar14 + lVar32 * 2)) {
                  lVar32 = lVar32 + 1;
                  if (lVar28 == lVar32) goto LAB_140105943;
                }
              }
              goto LAB_1401058f0;
            }
            puVar24 = (undefined8 *)plVar27[1];
            *puVar24 = plVar45;
            puVar52 = (undefined8 *)plVar45[1];
            *puVar52 = plVar6;
            puVar22 = (undefined8 *)plVar6[1];
            *puVar22 = plVar27;
            plVar6[1] = (longlong)puVar52;
            plVar45[1] = (longlong)puVar24;
            plVar27[1] = (longlong)puVar22;
            local_10e0[uVar51 * 2] = plVar27;
          }
        }
LAB_140105752:
        local_e0 = plVar42;
      } while (plVar45 != plVar33);
    }
    plVar33 = (longlong *)local_10e0[(local_10c8 & uVar44) * 2 + 1];
    local_110 = local_10c8;
    if (plVar33 != plVar42) {
      plVar45 = local_100;
      if (7 < (ulonglong)local_d8[5]) {
        plVar45 = (longlong *)local_d8[2];
      }
      plVar42 = (longlong *)local_10e0[(local_10c8 & uVar44) * 2];
      lVar28 = local_d8[4];
      lVar32 = plVar33[4];
      do {
        if (lVar28 == lVar32) {
          if (lVar28 == 0) {
LAB_1401059f7:
            plVar42 = (longlong *)*plVar33;
            break;
          }
          if ((ulonglong)plVar33[5] < 8) {
            plVar21 = plVar33 + 2;
          }
          else {
            plVar21 = (longlong *)plVar33[2];
          }
          lVar32 = 0;
          while (uVar5 = *(ushort *)((longlong)plVar45 + lVar32 * 2),
                plVar27 = (longlong *)(ulonglong)uVar5,
                uVar5 == *(ushort *)((longlong)plVar21 + lVar32 * 2)) {
            lVar32 = lVar32 + 1;
            if (lVar28 == lVar32) goto LAB_1401059f7;
          }
        }
        if (plVar33 == plVar42) break;
        plVar33 = (longlong *)plVar33[1];
        lVar32 = plVar33[4];
      } while( true );
    }
  }
  puVar24 = (undefined8 *)plVar42[1];
  local_10e8 = local_10e8 + 1;
  *local_d8 = (longlong)plVar42;
  local_d8[1] = (longlong)puVar24;
  *puVar24 = local_d8;
  plVar42[1] = (longlong)local_d8;
  uVar44 = uVar44 & local_10c8;
  puVar52 = local_10e0 + uVar44 * 2 + 1;
  plVar45 = local_d8;
  if ((longlong *)local_10e0[uVar44 * 2] == local_10f0) {
    local_10e0[uVar44 * 2] = local_d8;
    puVar22 = puVar52;
LAB_140105a5c:
    *puVar22 = local_d8;
  }
  else {
    puVar22 = local_10e0 + uVar44 * 2;
    if (((longlong *)local_10e0[uVar44 * 2] == plVar42) ||
       (puVar22 = puVar52, (undefined8 *)*puVar52 == puVar24)) goto LAB_140105a5c;
  }
LAB_140105a5f:
  if (7 < uStack_70) {
    auVar25 = local_88;
    if ((0xfff < uStack_70 * 2 + 2) &&
       (auVar25 = *(undefined1 (*) [8])((longlong)local_88 + -8),
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)auVar25)))) goto LAB_1401066a6;
    free((void *)auVar25);
  }
  if (7 < uStack_b0) {
    auVar25 = local_c8;
    if ((0xfff < uStack_b0 * 2 + 2) &&
       (auVar25 = *(undefined1 (*) [8])((longlong)local_c8 + -8),
       0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)auVar25)))) goto LAB_1401066a6;
    free((void *)auVar25);
  }
  sStack_b8 = 0;
  uStack_b0 = 7;
  auVar7._30_2_ = 0;
  auVar7._0_30_ = stack0xffffffffffffff3a;
  _local_c8 = auVar7 << 0x10;
  lVar28 = plVar45[6];
  local_88._0_4_ = (int)lVar28;
  _local_88 = ZEXT2032(CONCAT128(ZEXT812(0),local_88));
  uVar29 = plVar45[8] - plVar45[7];
  if (uVar29 == 0) {
    pauVar36 = (undefined1 (*) [32])0x0;
    lVar32 = 0;
  }
  else {
    if ((longlong)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400bf760();
    }
    if (uVar29 < 0x1000) {
      pauVar36 = operator_new(uVar29);
    }
    else {
      pvVar15 = operator_new(uVar29 + 0x27);
      pauVar36 = (undefined1 (*) [32])((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
      *(void **)(pauVar36[-1] + 0x18) = pvVar15;
    }
    pauStack_80 = pauVar36;
    uStack_70 = uVar29 + (longlong)pauVar36;
    sVar11 = plVar45[8] - plVar45[7];
    memmove(pauVar36,(void *)plVar45[7],sVar11);
    lVar32 = sVar11 + (longlong)pauVar36;
    plStack_78 = (longlong *)lVar32;
  }
  switch((int)lVar28) {
  case 1:
  case 2:
  case 7:
    uVar44 = (ulonglong)(lVar32 - (longlong)pauVar36) >> 1;
    uVar29 = uVar44 * 4 - 4;
    auVar59 = ZEXT816(0);
    local_a8 = ZEXT1632(auVar59);
    if ((longlong)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (uVar29 < 0x10) {
      local_a8._16_8_ = uVar29;
      local_a8._0_16_ = auVar59;
      local_a8._24_8_ = 0xf;
      memset(local_a8,0,uVar29);
      puVar38 = local_a8;
    }
    else {
      local_a8._16_8_ = 0;
      local_a8._0_16_ = auVar59;
      local_a8._24_8_ = 0xf;
      uVar51 = 0x16;
      if (0x16 < (uVar29 | 0xf)) {
        uVar51 = uVar29 | 0xf;
      }
      if (uVar51 < 0xfff) {
        puVar38 = operator_new(uVar51 + 1);
      }
      else {
        pvVar15 = operator_new(uVar51 + 0x28);
        puVar38 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar38 + -8) = pvVar15;
      }
      local_a8._0_8_ = puVar38;
      local_a8._16_8_ = uVar29;
      local_a8._24_8_ = uVar51;
      memset(puVar38,0,uVar29);
    }
    puVar38[uVar29] = 0;
    if ((ulonglong)local_a8._24_8_ < 0x10) {
      pauVar16 = (undefined1 (*) [16])local_a8;
    }
    else {
      pauVar16 = (undefined1 (*) [16])local_a8._0_8_;
    }
    pauVar23 = pauVar16;
    if (uVar44 != 1) {
      pauVar37 = (undefined1 (*) [32])(pauVar36[-1] + uVar44 * 2 + 0x1e);
      do {
        if ((ulonglong)((longlong)pauVar37 - (longlong)pauVar36) < 0x1f) {
          auVar59 = vpcmpeqd_avx(DAT_14010b240._0_16_,DAT_14010b240._0_16_);
          goto LAB_140106080;
        }
        auVar4 = *pauVar36;
        auVar60 = vpmaxuw_avx2(auVar4,_DAT_14010b220);
        auVar60 = vpcmpeqw_avx2(auVar4,auVar60);
        auVar4 = vpand_avx2(auVar4,_DAT_14010b240);
        auVar59 = vpackuswb_avx(auVar4._0_16_,auVar4._16_16_);
        *pauVar23 = auVar59;
        if (auVar60 == (undefined1  [32])0x0) {
          uVar44 = (longlong)pauVar37 - (longlong)pauVar36 >> 1;
          uVar29 = 0;
          do {
            uVar51 = uVar29 + 0x10;
            uVar31 = uVar29 + 0x20;
            uVar29 = uVar51;
            if ((uVar44 < uVar31) && (uVar29 = uVar44 - 0x10, uVar51 == uVar44)) goto LAB_140105f85;
            auVar4 = *(undefined1 (*) [32])(*pauVar36 + uVar29 * 2);
            auVar60 = vpmaxuw_avx2(auVar4,_DAT_14010b220);
            auVar60 = vpcmpeqw_avx2(auVar4,auVar60);
            auVar4 = vpand_avx2(auVar4,_DAT_14010b240);
            auVar59 = vpackuswb_avx(auVar4._0_16_,auVar4._16_16_);
            *(undefined1 (*) [16])(*pauVar23 + uVar29) = auVar59;
          } while (auVar60 == (undefined1  [32])0x0);
        }
        else {
          uVar29 = 0;
        }
        iVar10 = 0;
        uVar20 = (uint)(SUB321(auVar60 >> 7,0) & 1) | (uint)(SUB321(auVar60 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar60 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar60 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar60 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar60 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar60 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar60 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar60 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar60 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar60 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar60 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar60 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar60 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar60 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar60 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar60 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar60 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar60 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar60 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar60 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar60 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar60 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar60 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar60 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar60 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar60 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar60 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar60 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar60 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar60 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar60[0x1f] >> 7) << 0x1f;
        for (uVar26 = uVar20; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
          iVar10 = iVar10 + 1;
        }
        if (uVar20 == 0) {
          iVar10 = -2;
        }
        uVar44 = ((ulonglong)(longlong)iVar10 >> 1) + uVar29;
LAB_140105f85:
        pauVar36 = (undefined1 (*) [32])(*pauVar36 + uVar44 * 2);
        pauVar23 = (undefined1 (*) [16])(*pauVar23 + uVar44);
        if (pauVar36 == pauVar37) break;
        uVar5 = *(ushort *)*pauVar36;
        if ((uVar5 & 0xfc00) == 0xd800) {
          bVar56 = (longlong)pauVar37 - (longlong)pauVar36 != 2;
          uVar29 = (ulonglong)bVar56;
          iVar10 = (uint)uVar5 * 0x400 + -0x35fdc00;
          if (!bVar56) {
            iVar10 = 0;
          }
          lVar28 = uVar29 + 1;
          uVar20 = iVar10 + (uint)*(ushort *)(*pauVar36 + uVar29 * 2);
        }
        else {
          uVar20 = (uint)uVar5;
          lVar28 = 1;
        }
        if (uVar20 < 0x80) {
          (*pauVar23)[0] = (char)uVar20;
          pauVar23 = (undefined1 (*) [16])(*pauVar23 + 1);
        }
        else {
          uVar46 = 1;
          uVar48 = 0;
          uVar26 = uVar20;
          do {
            if ((uVar46 & 0x73f3f3f) != 0) {
              uVar48 = uVar48 | (uVar46 & 0x73f3f3f) * (uVar26 & 1);
              uVar26 = uVar26 >> 1;
            }
            uVar46 = uVar46 << 1;
          } while (uVar46 != 0);
          if (uVar20 < 0x800) {
            uVar2 = swap_bytes((ushort)uVar48 | 0xc080);
            *(undefined2 *)*pauVar23 = uVar2;
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 2);
          }
          else if (uVar20 < 0x10000) {
            (*pauVar23)[0] = (char)((uVar48 | 0x80e08080) >> 0x10);
            uVar2 = swap_bytes((short)(uVar48 | 0x80e08080));
            *(undefined2 *)(*pauVar23 + 1) = uVar2;
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 3);
          }
          else {
            uVar3 = swap_bytes(uVar48 | 0xf0808080);
            *(undefined4 *)*pauVar23 = uVar3;
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 4);
          }
        }
        pauVar36 = (undefined1 (*) [32])(*pauVar36 + lVar28 * 2);
      } while (pauVar36 != pauVar37);
    }
    goto LAB_14010635c;
  default:
    pcVar55 = operator_new(0x400);
    pHVar54 = (HKEY)(pcVar55 + 0x400);
    uVar12 = 0;
    local_f8 = pcVar55;
    local_e8 = pHVar54;
    memset(pcVar55,0,0x400);
    uVar29 = lVar32 - (longlong)pauVar36;
    if (uVar29 == 0) {
      uVar29 = 0;
LAB_140107cc1:
      pHStack_f0 = (HKEY)(pcVar55 + uVar29);
    }
    else {
      uVar44 = 1;
      if (1 < uVar29) {
        uVar44 = uVar29;
      }
      uVar51 = 0;
      pcVar50 = pcVar55;
      pHStack_f0 = pHVar54;
      do {
        FUN_1400dc0e0(pcVar50,uVar12,(ulonglong)(byte)(*pauVar36)[uVar51],plVar27);
        uVar51 = uVar51 + 1;
        pcVar50 = pcVar50 + 2;
      } while (uVar44 != uVar51);
      if (uVar29 < 0x400) goto LAB_140107cc1;
      if (uVar29 != 0x400) {
        if ((longlong)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1400bf760();
        }
        uVar44 = 0x600;
        if (0x600 < uVar29) {
          uVar44 = uVar29;
        }
        if (uVar44 < 0x1000) {
          pcVar50 = operator_new(uVar44);
        }
        else {
          pvVar15 = operator_new(uVar44 + 0x27);
          pcVar50 = (char *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
          *(void **)(pcVar50 + -8) = pvVar15;
        }
        memset(pcVar50 + 0x400,0,uVar29 - 0x400);
        memmove(pcVar50,pcVar55,0x400);
        free(pcVar55);
        pHStack_f0 = (HKEY)(pcVar50 + uVar29);
        pHVar54 = (HKEY)(pcVar50 + uVar44);
        pcVar55 = pcVar50;
        local_f8 = pcVar50;
        local_e8 = pHVar54;
      }
    }
    sVar11 = strlen(pcVar55);
    auVar58 = ZEXT812(0);
    local_a8 = ZEXT1232(auVar58);
    if ((longlong)sVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (sVar11 < 0x10) {
      local_a8._12_4_ = 0;
      local_a8._0_12_ = auVar58;
      local_a8._16_8_ = sVar11;
      local_a8._24_8_ = 0xf;
      memcpy(local_a8,pcVar55,sVar11);
      puVar38 = local_a8;
    }
    else {
      local_a8._0_24_ = ZEXT1224(auVar58);
      local_a8._24_8_ = 0xf;
      uVar29 = 0x16;
      if (0x16 < (sVar11 | 0xf)) {
        uVar29 = sVar11 | 0xf;
      }
      if (uVar29 < 0xfff) {
        puVar38 = operator_new(uVar29 + 1);
      }
      else {
        pvVar15 = operator_new(uVar29 + 0x28);
        puVar38 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar38 + -8) = pvVar15;
      }
      local_a8._0_8_ = puVar38;
      local_a8._16_8_ = sVar11;
      local_a8._24_8_ = uVar29;
      memcpy(puVar38,pcVar55,sVar11);
    }
    puVar38[sVar11] = 0;
    if (pcVar55 != (char *)0x0) {
      pcVar50 = pcVar55;
      if ((0xfff < (ulonglong)((longlong)pHVar54 - (longlong)pcVar55)) &&
         (pcVar50 = *(char **)(pcVar55 + -8), (char *)0x1f < pcVar55 + (-8 - (longlong)pcVar50)))
      goto LAB_1401066a6;
      free(pcVar50);
    }
    goto LAB_14010638b;
  case 4:
    uVar20 = swap_bytes(*(undefined4 *)*pauVar36);
    local_a8._8_8_ = 0;
    auVar59 = vpmovzxbw_avx(ZEXT416(uVar20));
    auVar59 = vpmullw_avx(auVar59,_DAT_14010b1c0);
    local_a8._16_8_ = 8;
    auVar59 = vpsrlw_avx(auVar59,4);
    auVar59 = vpaddb_avx(auVar59,_s_00000000_14010b1d0);
    local_a8._24_8_ = 0xf;
    auVar64 = vpminub_avx(auVar59,_s_99999999_14010b1e0);
    auVar64 = vpcmpeqb_avx(auVar59,auVar64);
    auVar64 = vpandn_avx(auVar64,_DAT_14010b1f0);
    auVar59 = vpaddb_avx(auVar64,auVar59);
    local_a8._0_8_ = auVar59._0_8_;
    break;
  case 0xb:
    uVar29 = *(ulonglong *)*pauVar36;
    local_a8._0_16_ = ZEXT816(0);
    local_a8._16_8_ = 0;
    local_a8._24_8_ = 0xf;
    pauVar16 = operator_new(0x20);
    local_a8._0_8_ = pauVar16;
    local_a8._16_8_ = 0x10;
    auVar64._8_8_ = 0;
    auVar64._0_8_ =
         uVar29 >> 0x38 | (uVar29 & 0xff000000000000) >> 0x28 | (uVar29 & 0xff0000000000) >> 0x18 |
         (uVar29 & 0xff00000000) >> 8 | (uVar29 & 0xff000000) << 8 | (uVar29 & 0xff0000) << 0x18 |
         (uVar29 & 0xff00) << 0x28 | uVar29 << 0x38;
    auVar59 = vpmovzxbw_avx(auVar64);
    auVar59 = vpmullw_avx(auVar59,_DAT_14010b180);
    local_a8._24_8_ = 0x1f;
    auVar59 = vpsrlw_avx(auVar59,4);
    auVar59 = vpaddb_avx(auVar59,_DAT_14010b190);
    pauVar16[1][0] = 0;
    auVar64 = vpmaxub_avx(auVar59,_DAT_14010b1a0);
    auVar64 = vpcmpeqb_avx(auVar59,auVar64);
    auVar64 = vpand_avx(auVar64,_DAT_14010b1b0);
    auVar59 = vpaddb_avx(auVar64,auVar59);
    *pauVar16 = auVar59;
  }
  goto LAB_140106390;
LAB_140106290:
  do {
    uVar5 = *(ushort *)*pauVar36;
    if ((uVar5 & 0xfc00) == 0xd800) {
      iVar10 = (uint)uVar5 * 0x400 + -0x35fdc00;
      bVar56 = (longlong)pauVar37 - (longlong)pauVar36 != 2;
      uVar29 = (ulonglong)bVar56;
      if (!bVar56) {
        iVar10 = 0;
      }
      lVar28 = uVar29 + 1;
      uVar20 = iVar10 + (uint)*(ushort *)(*pauVar36 + uVar29 * 2);
    }
    else {
      uVar20 = (uint)uVar5;
      lVar28 = 1;
    }
    if (uVar20 < 0x80) {
      (*pauVar23)[0] = (char)uVar20;
      pauVar23 = (undefined1 (*) [16])(*pauVar23 + 1);
    }
    else if (uVar20 < 0x800) {
      uVar26 = 1;
      uVar46 = 0;
      do {
        if ((uVar26 & 0x73f3f3f) != 0) {
          uVar46 = uVar46 | (uVar26 & 0x73f3f3f) * (uVar20 & 1);
          uVar20 = uVar20 >> 1;
        }
        uVar26 = uVar26 << 1;
      } while (uVar26 != 0);
      uVar2 = swap_bytes((ushort)uVar46 | 0xc080);
      *(undefined2 *)*pauVar23 = uVar2;
      pauVar23 = (undefined1 (*) [16])(*pauVar23 + 2);
    }
    else {
      uVar46 = 1;
      uVar48 = 0;
      uVar26 = uVar20;
      do {
        if ((uVar46 & 0x73f3f3f) != 0) {
          uVar48 = uVar48 | (uVar46 & 0x73f3f3f) * (uVar26 & 1);
          uVar26 = uVar26 >> 1;
        }
        uVar46 = uVar46 << 1;
      } while (uVar46 != 0);
      if (uVar20 < 0x10000) {
        (*pauVar23)[0] = (char)((uVar48 | 0x80e08080) >> 0x10);
        uVar2 = swap_bytes((short)(uVar48 | 0x80e08080));
        *(undefined2 *)(*pauVar23 + 1) = uVar2;
        pauVar23 = (undefined1 (*) [16])(*pauVar23 + 3);
      }
      else {
        uVar3 = swap_bytes(uVar48 | 0xf0808080);
        *(undefined4 *)*pauVar23 = uVar3;
        pauVar23 = (undefined1 (*) [16])(*pauVar23 + 4);
      }
    }
    pauVar36 = (undefined1 (*) [32])(*pauVar36 + lVar28 * 2);
  } while (pauVar36 != pauVar37);
  goto LAB_14010635c;
LAB_1401069df:
  iVar10 = (*pcVar41)(DAT_14012b2c0,100);
  if (iVar10 == 0x102) {
    LOCK();
    DAT_14012b200 = 1;
    UNLOCK();
    FUN_1400bdcc0((longlong *)local_1118);
    uVar12 = local_1118._0_8_;
    _local_c8 = ZEXT1232(ZEXT812(0));
    sVar11 = strlen((char *)local_1118._0_8_);
    if ((longlong)sVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (sVar11 < 0x10) {
      sStack_b8 = sVar11;
      uStack_b0 = 0xf;
      memcpy(local_c8,(void *)uVar12,sVar11);
      puVar38 = local_c8;
    }
    else {
      uVar29 = 0x16;
      if (0x16 < (sVar11 | 0xf)) {
        uVar29 = sVar11 | 0xf;
      }
      if (uVar29 < 0xfff) {
        puVar38 = operator_new(uVar29 + 1);
      }
      else {
        pvVar15 = operator_new(uVar29 + 0x28);
        puVar38 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar38 + -8) = pvVar15;
      }
      local_c8 = (undefined1  [8])puVar38;
      sStack_b8 = sVar11;
      uStack_b0 = uVar29;
      memcpy(puVar38,(void *)uVar12,sVar11);
    }
    puVar38[sVar11] = 0;
    if (local_1118._0_8_ != 0) {
      uVar20 = 0;
      lVar28 = readgsbase();
      puVar24 = (undefined8 *)
                **(undefined8 **)(*(longlong *)(*(longlong *)(lVar28 + 0x60) + 0x18) + 0x10);
      uVar26 = 0x95ed46c;
      puVar52 = puVar24;
      do {
        if (uVar20 == 0) {
LAB_140106d5d:
          lVar32 = puVar52[6];
          uVar46 = *(uint *)(lVar32 + 0x88 + (longlong)*(int *)(lVar32 + 0x3c));
          lVar28 = lVar32 + (ulonglong)uVar46;
          if ((ulonglong)uVar46 != 0) {
            uVar29 = (ulonglong)*(uint *)(lVar28 + 0x18);
            do {
              bVar56 = uVar29 == 0;
              uVar29 = uVar29 - 1;
              if (bVar56) goto LAB_140106d13;
              uVar44 = (ulonglong)
                       *(uint *)((ulonglong)*(uint *)(lVar28 + 0x20) + lVar32 + uVar29 * 4);
              cVar47 = *(char *)(lVar32 + uVar44);
              if (cVar47 == '\0') {
                uVar48 = 0xca89e2eb;
              }
              else {
                pcVar55 = (char *)(uVar44 + lVar32 + 1);
                uVar48 = 0xca89e2eb;
                do {
                  uVar48 = ((int)cVar47 ^ uVar48) * 0x1000193;
                  cVar47 = *pcVar55;
                  pcVar55 = pcVar55 + 1;
                } while (cVar47 != '\0');
              }
            } while (uVar48 != uVar26);
            uVar20 = *(uint *)((ulonglong)*(uint *)(lVar28 + 0x1c) + lVar32 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar28 + 0x24) + lVar32 +
                               (uVar29 & 0xffffffff) * 2) * 4);
            pcVar41 = (code *)(lVar32 + (ulonglong)uVar20);
            if ((uVar20 <= uVar46) ||
               ((code *)(lVar28 + (ulonglong)
                                  *(uint *)(lVar32 + 0x8c + (longlong)*(int *)(lVar32 + 0x3c))) <=
                pcVar41)) goto LAB_140106e8f;
            uVar26 = 0xca89e2eb;
            uVar20 = 0xca89e2eb;
            cVar39 = *pcVar41;
            while (cVar39 != (code)0x2e) {
              uVar20 = ((int)(char)cVar39 ^ uVar20) * 0x1000193;
              pcVar1 = pcVar41 + 1;
              pcVar41 = pcVar41 + 1;
              cVar39 = *pcVar1;
            }
            cVar39 = pcVar41[1];
            if (cVar39 != (code)0x0) {
              pcVar41 = pcVar41 + 2;
              uVar26 = 0xca89e2eb;
              do {
                uVar26 = ((int)(char)cVar39 ^ uVar26) * 0x1000193;
                cVar39 = *pcVar41;
                pcVar41 = pcVar41 + 1;
              } while (cVar39 != (code)0x0);
            }
            puVar52 = (undefined8 *)*puVar24;
          }
        }
        else {
          uVar46 = 0xca89e2eb;
          if (1 < (ushort)(*(int *)(puVar52 + 0xb) - 8U)) {
            lVar28 = 0;
            do {
              uVar46 = ((int)*(char *)(puVar52[0xc] + lVar28) ^ uVar46) * 0x1000193;
              lVar28 = lVar28 + 2;
            } while ((ulonglong)((*(int *)(puVar52 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar28);
          }
          if (uVar46 == uVar20) goto LAB_140106d5d;
        }
LAB_140106d13:
        puVar52 = (undefined8 *)*puVar52;
      } while( true );
    }
    goto LAB_140106ea1;
  }
LAB_140107187:
  FUN_1400bb6a0((longlong *)local_1118);
  uVar12 = local_1118._0_8_;
  _local_c8 = ZEXT1232(ZEXT812(0));
  sVar11 = strlen((char *)local_1118._0_8_);
  if ((longlong)sVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar11 < 0x10) {
    sStack_b8 = sVar11;
    uStack_b0 = 0xf;
    memcpy(local_c8,(void *)uVar12,sVar11);
    puVar38 = local_c8;
  }
  else {
    uVar29 = 0x16;
    if (0x16 < (sVar11 | 0xf)) {
      uVar29 = sVar11 | 0xf;
    }
    if (uVar29 < 0xfff) {
      puVar38 = operator_new(uVar29 + 1);
    }
    else {
      pvVar15 = operator_new(uVar29 + 0x28);
      puVar38 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar38 + -8) = pvVar15;
    }
    local_c8 = (undefined1  [8])puVar38;
    sStack_b8 = sVar11;
    uStack_b0 = uVar29;
    memcpy(puVar38,(void *)uVar12,sVar11);
  }
  puVar38[sVar11] = 0;
  if (local_1118._0_8_ != 0) {
    uVar20 = 0;
    lVar28 = readgsbase();
    puVar24 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar28 + 0x60) + 0x18) + 0x10);
    uVar26 = 0x95ed46c;
    puVar52 = puVar24;
    do {
      if (uVar20 == 0) {
LAB_1401072fd:
        lVar32 = puVar52[6];
        uVar46 = *(uint *)(lVar32 + 0x88 + (longlong)*(int *)(lVar32 + 0x3c));
        lVar28 = lVar32 + (ulonglong)uVar46;
        if ((ulonglong)uVar46 != 0) {
          uVar29 = (ulonglong)*(uint *)(lVar28 + 0x18);
          do {
            bVar56 = uVar29 == 0;
            uVar29 = uVar29 - 1;
            if (bVar56) goto LAB_1401072b3;
            uVar44 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar28 + 0x20) + lVar32 + uVar29 * 4)
            ;
            cVar47 = *(char *)(lVar32 + uVar44);
            if (cVar47 == '\0') {
              uVar48 = 0xca89e2eb;
            }
            else {
              pcVar55 = (char *)(uVar44 + lVar32 + 1);
              uVar48 = 0xca89e2eb;
              do {
                uVar48 = ((int)cVar47 ^ uVar48) * 0x1000193;
                cVar47 = *pcVar55;
                pcVar55 = pcVar55 + 1;
              } while (cVar47 != '\0');
            }
          } while (uVar48 != uVar26);
          uVar20 = *(uint *)((ulonglong)*(uint *)(lVar28 + 0x1c) + lVar32 +
                            (ulonglong)
                            *(ushort *)
                             ((ulonglong)*(uint *)(lVar28 + 0x24) + lVar32 +
                             (uVar29 & 0xffffffff) * 2) * 4);
          pcVar41 = (code *)(lVar32 + (ulonglong)uVar20);
          if ((uVar20 <= uVar46) ||
             ((code *)(lVar28 + (ulonglong)
                                *(uint *)(lVar32 + 0x8c + (longlong)*(int *)(lVar32 + 0x3c))) <=
              pcVar41)) goto LAB_14010742f;
          uVar26 = 0xca89e2eb;
          uVar20 = 0xca89e2eb;
          cVar39 = *pcVar41;
          while (cVar39 != (code)0x2e) {
            uVar20 = ((int)(char)cVar39 ^ uVar20) * 0x1000193;
            pcVar1 = pcVar41 + 1;
            pcVar41 = pcVar41 + 1;
            cVar39 = *pcVar1;
          }
          cVar39 = pcVar41[1];
          if (cVar39 != (code)0x0) {
            pcVar41 = pcVar41 + 2;
            uVar26 = 0xca89e2eb;
            do {
              uVar26 = ((int)(char)cVar39 ^ uVar26) * 0x1000193;
              cVar39 = *pcVar41;
              pcVar41 = pcVar41 + 1;
            } while (cVar39 != (code)0x0);
          }
          puVar52 = (undefined8 *)*puVar24;
        }
      }
      else {
        uVar46 = 0xca89e2eb;
        if (1 < (ushort)(*(int *)(puVar52 + 0xb) - 8U)) {
          lVar28 = 0;
          do {
            uVar46 = ((int)*(char *)(puVar52[0xc] + lVar28) ^ uVar46) * 0x1000193;
            lVar28 = lVar28 + 2;
          } while ((ulonglong)((*(int *)(puVar52 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar28);
        }
        if (uVar46 == uVar20) goto LAB_1401072fd;
      }
LAB_1401072b3:
      puVar52 = (undefined8 *)*puVar52;
    } while( true );
  }
  goto LAB_140107441;
LAB_14010795f:
  (*pcVar41)(local_1118._0_8_,0,0x8000);
  goto LAB_140107971;
LAB_140106e8f:
  (*pcVar41)(local_1118._0_8_,0,0x8000);
LAB_140106ea1:
  if (uStack_b0 < 0x10) {
    auVar25 = (undefined1  [8])local_c8;
  }
  else {
    auVar25 = local_c8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_14012b5f8) && (FUN_140109684(&DAT_14012b5f8), DAT_14012b5f8 == -1)) {
    _DAT_14012b538 = 2;
    _DAT_14012b540 = 0;
    _DAT_14012b548 = ZEXT1232(ZEXT812(0));
    _DAT_14012b588 = 0;
    _DAT_14012b568 = _DAT_14012b548;
    _Mtx_init_in_situ(&DAT_14012b540,2);
    _DAT_14012b590 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b5f0 = "%T  %d-%m-%Y";
    atexit(FUN_1400f9950);
    _Init_thread_footer(&DAT_14012b5f8);
  }
  iVar10 = _Mtx_lock();
  if (iVar10 == 0) {
    if (DAT_14012b58c != 0x7fffffff) {
      _Var18 = _time64((__time64_t *)0x0);
      local_a8._0_8_ = _Var18;
      ptVar19 = _localtime64((__time64_t *)local_a8);
      strftime(&DAT_14012b5a0,0x50,DAT_14012b5f0,ptVar19);
      memset(local_1118,0,0x1000);
      puVar43 = &DAT_14012b5a0;
      iVar10 = FUN_1400f9990(local_1118,0x1000,"%s => %s",&DAT_14012b5a0);
      FUN_1400f9990(local_1118 + iVar10,(longlong)(0x1000 - iVar10),auVar25,puVar43);
      _local_88 = ZEXT1232(ZEXT812(0));
      sVar11 = strlen(local_1118);
      if ((longlong)sVar11 < 0) goto LAB_1401080f2;
      if (sVar11 < 0x10) {
        plStack_78 = (longlong *)sVar11;
        uStack_70 = 0xf;
        memcpy(local_88,local_1118,sVar11);
        puVar38 = local_88;
      }
      else {
        uVar29 = 0x16;
        if (0x16 < (sVar11 | 0xf)) {
          uVar29 = sVar11 | 0xf;
        }
        if (uVar29 < 0xfff) {
          puVar38 = operator_new(uVar29 + 1);
        }
        else {
          pvVar15 = operator_new(uVar29 + 0x28);
          puVar38 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
          *(void **)(puVar38 + -8) = pvVar15;
        }
        local_88 = (undefined1  [8])puVar38;
        plStack_78 = (longlong *)sVar11;
        uStack_70 = uVar29;
        memcpy(puVar38,local_1118,sVar11);
      }
      puVar38[sVar11] = 0;
      pvVar15 = operator_new(0x1027);
      pvVar53 = (void *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar53 + -8) = pvVar15;
      memset(pvVar53,0,0x1000);
      uVar29 = uStack_70;
      auVar25 = local_88;
      auVar35 = (undefined1  [8])local_88;
      if (0xf < uStack_70) {
        auVar35 = local_88;
      }
      memmove(pvVar53,(void *)auVar35,(size_t)plStack_78);
      puts((char *)auVar35);
      if (pvVar53 != (void *)0x0) {
        if (0x1f < (ulonglong)
                   ((longlong)pvVar53 + (-8 - (longlong)*(void **)((longlong)pvVar53 + -8))))
        goto LAB_1401066a6;
        free(*(void **)((longlong)pvVar53 + -8));
      }
      if (0xf < uVar29) {
        auVar35 = auVar25;
        if ((0xfff < uVar29 + 1) &&
           (auVar35 = *(undefined1 (*) [8])((longlong)auVar25 + -8),
           (char *)0x1f < (char *)((longlong)auVar25 + (-8 - (longlong)auVar35))))
        goto LAB_1401066a6;
        free((void *)auVar35);
      }
      _Mtx_unlock(&DAT_14012b540);
      if (0xf < uStack_b0) {
        auVar25 = local_c8;
        if ((0xfff < uStack_b0 + 1) &&
           (auVar25 = *(undefined1 (*) [8])((longlong)local_c8 + -8),
           0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)auVar25)))) goto LAB_1401066a6;
        free((void *)auVar25);
      }
      goto LAB_140107187;
    }
  }
  else {
    std::_Throw_Cpp_error(5);
  }
  _DAT_14012b588 = CONCAT44(0x7ffffffe,_DAT_14012b588);
  std::_Throw_Cpp_error(6);
LAB_1401080f2:
                    /* WARNING: Subroutine does not return */
  FUN_140086cb0();
  while( true ) {
    uVar5 = *(ushort *)*pauVar36;
    if ((uVar5 & 0xfc00) == 0xd800) {
      bVar56 = (longlong)pauVar37 - (longlong)pauVar36 != 2;
      uVar29 = (ulonglong)bVar56;
      iVar10 = (uint)uVar5 * 0x400 + -0x35fdc00;
      if (!bVar56) {
        iVar10 = 0;
      }
      lVar28 = uVar29 + 1;
      uVar20 = iVar10 + (uint)*(ushort *)(*pauVar36 + uVar29 * 2);
    }
    else {
      uVar20 = (uint)uVar5;
      lVar28 = 1;
    }
    if (uVar20 < 0x80) {
      (*pauVar23)[0] = (char)uVar20;
      pauVar23 = (undefined1 (*) [16])(*pauVar23 + 1);
    }
    else if (uVar20 < 0x800) {
      uVar26 = 1;
      uVar46 = 0;
      do {
        if ((uVar26 & 0x73f3f3f) != 0) {
          uVar46 = uVar46 | (uVar26 & 0x73f3f3f) * (uVar20 & 1);
          uVar20 = uVar20 >> 1;
        }
        uVar26 = uVar26 << 1;
      } while (uVar26 != 0);
      uVar2 = swap_bytes((ushort)uVar46 | 0xc080);
      *(undefined2 *)*pauVar23 = uVar2;
      pauVar23 = (undefined1 (*) [16])(*pauVar23 + 2);
    }
    else {
      uVar46 = 1;
      uVar48 = 0;
      uVar26 = uVar20;
      do {
        if ((uVar46 & 0x73f3f3f) != 0) {
          uVar48 = uVar48 | (uVar46 & 0x73f3f3f) * (uVar26 & 1);
          uVar26 = uVar26 >> 1;
        }
        uVar46 = uVar46 << 1;
      } while (uVar46 != 0);
      if (uVar20 < 0x10000) {
        (*pauVar23)[0] = (char)((uVar48 | 0x80e08080) >> 0x10);
        uVar2 = swap_bytes((short)(uVar48 | 0x80e08080));
        *(undefined2 *)(*pauVar23 + 1) = uVar2;
        pauVar23 = (undefined1 (*) [16])(*pauVar23 + 3);
      }
      else {
        uVar3 = swap_bytes(uVar48 | 0xf0808080);
        *(undefined4 *)*pauVar23 = uVar3;
        pauVar23 = (undefined1 (*) [16])(*pauVar23 + 4);
      }
    }
    pauVar36 = (undefined1 (*) [32])(*pauVar36 + lVar28 * 2);
    if (pauVar36 == pauVar37) break;
LAB_140106080:
    if ((ulonglong)((longlong)pauVar37 - (longlong)pauVar36) < 7) goto LAB_140106290;
    uVar29 = *(ulonglong *)*pauVar36;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar29;
    auVar64 = vpminuw_avx(auVar62,_DAT_14010b200);
    auVar64 = vpcmpeqw_avx(auVar62,auVar64);
    auVar62 = vpinsrb_avx(ZEXT416((uint)uVar29),(uint)(uVar29 >> 0x10) & 0xffff,1);
    auVar62 = vpinsrb_avx(auVar62,(int)(uVar29 >> 0x20),2);
    auVar62 = vpinsrb_avx(auVar62,(uint)(ushort)(uVar29 >> 0x30),3);
    *(int *)*pauVar23 = auVar62._0_4_;
    auVar62 = vpmovsxwd_avx(auVar64 ^ auVar59);
    iVar10 = vmovmskps_avx(auVar62);
    if (iVar10 == 0) {
      uVar44 = (longlong)pauVar37 - (longlong)pauVar36 >> 1;
      uVar29 = 0;
      do {
        uVar31 = uVar29 + 4;
        uVar51 = uVar29 + 8;
        uVar29 = uVar31;
        if ((uVar44 < uVar51) && (uVar29 = uVar44 - 4, uVar31 == uVar44)) goto LAB_140106193;
        uVar51 = *(ulonglong *)(*pauVar36 + uVar29 * 2);
        auVar63._8_8_ = 0;
        auVar63._0_8_ = uVar51;
        auVar64 = vpminuw_avx(auVar63,_DAT_14010b200);
        auVar64 = vpcmpeqw_avx(auVar63,auVar64);
        auVar62 = vpinsrb_avx(ZEXT416((uint)uVar51),(uint)(uVar51 >> 0x10) & 0xffff,1);
        auVar62 = vpinsrb_avx(auVar62,(int)(uVar51 >> 0x20),2);
        auVar62 = vpinsrb_avx(auVar62,(uint)(ushort)(uVar51 >> 0x30),3);
        *(int *)(*pauVar23 + uVar29) = auVar62._0_4_;
        auVar62 = vpmovsxwd_avx(auVar64 ^ auVar59);
        iVar10 = vmovmskps_avx(auVar62);
      } while (iVar10 == 0);
      auVar64 = vpmovzxwd_avx(auVar64 ^ auVar59);
    }
    else {
      auVar64 = vpmovzxwd_avx(auVar64 ^ auVar59);
      uVar29 = 0;
    }
    auVar64 = vpshufb_avx(auVar64,_DAT_14010b210);
    auVar64 = vpsllw_avx(auVar64,0xf);
    auVar64 = vpsraw_avx(auVar64,0xf);
    uVar20 = 0;
    uVar46 = (uint)(ushort)((ushort)(SUB161(auVar64 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar64[0xf] >> 7) << 0xf);
    for (uVar26 = uVar46; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
      uVar20 = uVar20 + 1;
    }
    uVar44 = (ulonglong)(uVar20 >> 1);
    if (uVar46 == 0) {
      uVar44 = 0x7fffffffffffffff;
    }
    uVar44 = uVar44 + uVar29;
LAB_140106193:
    pauVar36 = (undefined1 (*) [32])(*pauVar36 + uVar44 * 2);
    pauVar23 = (undefined1 (*) [16])(*pauVar23 + uVar44);
    if (pauVar36 == pauVar37) break;
  }
LAB_14010635c:
  if ((ulonglong)local_a8._24_8_ < 0x10) {
    puVar38 = local_a8;
  }
  else {
    puVar38 = (undefined1 *)local_a8._0_8_;
  }
  local_a8._16_8_ = (longlong)pauVar23 - (longlong)pauVar16;
  puVar38[(longlong)pauVar23 - (longlong)pauVar16] = 0;
  pauVar36 = pauStack_80;
LAB_14010638b:
  if (pauVar36 != (undefined1 (*) [32])0x0) {
LAB_140106390:
    pauVar37 = pauVar36;
    if ((0xfff < uStack_70 - (longlong)pauVar36) &&
       (pauVar37 = *(undefined1 (**) [32])(pauVar36[-1] + 0x18),
       0x1f < (ulonglong)((longlong)pauVar36 + (-8 - (longlong)pauVar37)))) goto LAB_1401066a6;
    free(pauVar37);
  }
  uVar12 = local_1080._0_8_;
  if ((void *)local_1080._0_8_ != (void *)0x0) {
    uVar8 = local_1080._8_8_;
    for (pvVar15 = (void *)local_1080._0_8_; pvVar15 != (void *)uVar8;
        pvVar15 = (void *)((longlong)pvVar15 + 0xb0)) {
      FUN_1400dc310((longlong)pvVar15);
    }
    pvVar15 = (void *)uVar12;
    if ((0xfff < (ulonglong)(local_1070 - uVar12)) &&
       (pvVar15 = *(void **)(uVar12 + -8), 0x1f < (ulonglong)(uVar12 + (-8 - (longlong)pvVar15))))
    goto LAB_1401066a6;
    free(pvVar15);
    local_1080 = (undefined1  [16])0x0;
    local_1070 = 0;
  }
  if (7 < local_1088) {
    pvVar15 = pvStack_10a0;
    if ((0xfff < local_1088 * 2 + 2) &&
       (pvVar15 = *(void **)((longlong)pvStack_10a0 + -8),
       0x1f < (ulonglong)((longlong)pvStack_10a0 + (-8 - (longlong)pvVar15)))) goto LAB_1401066a6;
    free(pvVar15);
  }
  plVar45 = local_10b0;
  plVar33 = local_10b8;
  pvStack_1090 = (void *)0x0;
  local_1088 = 7;
  plVar27 = local_10b8;
  if (local_10b8 != (longlong *)0x0) {
    for (; plVar27 != plVar45; plVar27 = plVar27 + 5) {
      if (7 < (ulonglong)plVar27[3]) {
        pvVar15 = (void *)*plVar27;
        pvVar53 = pvVar15;
        if ((0xfff < plVar27[3] * 2 + 2U) &&
           (pvVar53 = *(void **)((longlong)pvVar15 + -8),
           0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar53)))) goto LAB_1401066a6;
        free(pvVar53);
      }
      plVar27[2] = 0;
      plVar27[3] = 7;
      *(undefined2 *)plVar27 = 0;
    }
    plVar27 = plVar33;
    if ((0xfff < (ulonglong)(local_10a8 - (longlong)plVar33)) &&
       (plVar27 = (longlong *)plVar33[-1],
       0x1f < (ulonglong)((longlong)plVar33 + (-8 - (longlong)plVar27)))) goto LAB_1401066a6;
    free(plVar27);
  }
  if (local_10e0 != (undefined8 *)0x0) {
    puVar24 = local_10e0;
    if ((0xfff < (ulonglong)((longlong)local_10d0 - (longlong)local_10e0)) &&
       (puVar24 = (undefined8 *)local_10e0[-1],
       0x1f < (ulonglong)((longlong)local_10e0 + (-8 - (longlong)puVar24)))) goto LAB_1401066a6;
    free(puVar24);
  }
  plVar27 = local_10f0;
  *(undefined8 *)local_10f0[1] = 0;
  if ((longlong *)*local_10f0 != (longlong *)0x0) {
    auVar65 = ZEXT1264(ZEXT812(0));
    plVar33 = (longlong *)*local_10f0;
    do {
      auVar59 = auVar65._0_16_;
      plVar45 = (longlong *)*plVar33;
      pvVar15 = (void *)plVar33[7];
      if (pvVar15 != (void *)0x0) {
        pvVar53 = pvVar15;
        if ((0xfff < (ulonglong)(plVar33[9] - (longlong)pvVar15)) &&
           (pvVar53 = *(void **)((longlong)pvVar15 + -8),
           0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar53)))) goto LAB_1401066a6;
        auVar65 = ZEXT1664(auVar59);
        free(pvVar53);
        auVar59 = auVar65._0_16_;
        *(undefined1 (*) [16])(plVar33 + 7) = auVar59;
        plVar33[9] = 0;
      }
      if (7 < (ulonglong)plVar33[5]) {
        pvVar15 = (void *)plVar33[2];
        pvVar53 = pvVar15;
        if ((0xfff < plVar33[5] * 2 + 2U) &&
           (pvVar53 = *(void **)((longlong)pvVar15 + -8),
           0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar53)))) goto LAB_1401066a6;
        auVar65 = ZEXT1664(auVar59);
        free(pvVar53);
        auVar59 = auVar65._0_16_;
      }
      auVar65 = ZEXT1664(auVar59);
      free(plVar33);
      plVar33 = plVar45;
    } while (plVar45 != (longlong *)0x0);
  }
  free(plVar27);
  if (0xf < DAT_14012b098) {
    pvVar15 = DAT_14012b080;
    if ((0xfff < DAT_14012b098 + 1) &&
       (pvVar15 = *(void **)((longlong)DAT_14012b080 + -8),
       0x1f < (ulonglong)((longlong)DAT_14012b080 + (-8 - (longlong)pvVar15)))) goto LAB_1401066a6;
    free(pvVar15);
  }
  DAT_14012b080 = (void *)local_a8._0_8_;
  uRam000000014012b088 = local_a8._8_8_;
  _DAT_14012b090 = local_a8._16_8_;
  DAT_14012b098 = local_a8._24_8_;
  plVar27 = operator_new(8);
  *plVar27 = (longlong)FUN_140108de0;
  uVar17 = _beginthreadex((void *)0x0,0,FUN_140109430,plVar27,0,(uint *)&pauStack_80);
  auVar4 = _local_88;
  local_88 = (undefined1  [8])uVar17;
  auVar60 = _local_88;
  if (uVar17 == 0) {
    stack0xffffffffffffff84 = auVar4._12_20_;
    _local_88 = ZEXT812(0);
    local_d0 = plVar27;
    std::_Throw_Cpp_error(6);
LAB_140107f11:
    std::_Throw_Cpp_error(1);
LAB_140107f1b:
    std::_Throw_Cpp_error(1);
LAB_140107f25:
    pHStack_c0._0_4_ = 0;
    local_d0 = plVar27;
    std::_Throw_Cpp_error(6);
LAB_140107f40:
    std::_Throw_Cpp_error(1);
  }
  else {
    pauStack_80._0_4_ = auVar4._8_4_;
    bVar56 = (int)pauStack_80 == 0;
    _local_88 = auVar60;
    if (bVar56) goto LAB_140107f11;
    pauStack_80 = auVar4._8_8_;
    local_1118._8_8_ = pauStack_80;
    local_1118._0_8_ = uVar17;
    iVar10 = _Thrd_detach(local_1118);
    if (iVar10 != 0) goto LAB_140107f1b;
    _local_88 = ZEXT812(0);
    plVar27 = operator_new(8);
    *plVar27 = (longlong)FUN_1401031a0;
    uVar17 = _beginthreadex((void *)0x0,0,FUN_140109430,plVar27,0,(uint *)&pHStack_c0);
    auVar4 = _local_c8;
    local_c8 = (undefined1  [8])uVar17;
    auVar60 = _local_c8;
    if (uVar17 == 0) goto LAB_140107f25;
    pHStack_c0._0_4_ = auVar4._8_4_;
    bVar56 = (int)pHStack_c0 == 0;
    _local_c8 = auVar60;
    if (bVar56) goto LAB_140107f40;
    pHStack_c0 = auVar4._8_8_;
    local_1118._8_8_ = pHStack_c0;
    local_1118._0_8_ = uVar17;
    iVar10 = _Thrd_detach();
    if (iVar10 == 0) {
      if ((int)pauStack_80 == 0) {
        DAT_14012b510 = '\x01';
        uVar20 = 0;
        lVar28 = readgsbase();
        puVar24 = (undefined8 *)
                  **(undefined8 **)(*(longlong *)(*(longlong *)(lVar28 + 0x60) + 0x18) + 0x10);
        uVar26 = 0x31ab6dbb;
        puVar52 = puVar24;
        do {
          if (uVar20 == 0) {
LAB_1401068ad:
            lVar32 = puVar52[6];
            uVar46 = *(uint *)(lVar32 + 0x88 + (longlong)*(int *)(lVar32 + 0x3c));
            lVar28 = lVar32 + (ulonglong)uVar46;
            if ((ulonglong)uVar46 != 0) {
              uVar29 = (ulonglong)*(uint *)(lVar28 + 0x18);
              do {
                bVar56 = uVar29 == 0;
                uVar29 = uVar29 - 1;
                if (bVar56) goto LAB_140106863;
                uVar44 = (ulonglong)
                         *(uint *)((ulonglong)*(uint *)(lVar28 + 0x20) + lVar32 + uVar29 * 4);
                cVar47 = *(char *)(lVar32 + uVar44);
                if (cVar47 == '\0') {
                  uVar48 = 0xa599f784;
                }
                else {
                  pcVar55 = (char *)(uVar44 + lVar32 + 1);
                  uVar48 = 0xa599f784;
                  do {
                    uVar48 = ((int)cVar47 ^ uVar48) * 0x1000193;
                    cVar47 = *pcVar55;
                    pcVar55 = pcVar55 + 1;
                  } while (cVar47 != '\0');
                }
              } while (uVar48 != uVar26);
              uVar20 = *(uint *)((ulonglong)*(uint *)(lVar28 + 0x1c) + lVar32 +
                                (ulonglong)
                                *(ushort *)
                                 ((ulonglong)*(uint *)(lVar28 + 0x24) + lVar32 +
                                 (uVar29 & 0xffffffff) * 2) * 4);
              pcVar41 = (code *)(lVar32 + (ulonglong)uVar20);
              if ((uVar20 <= uVar46) ||
                 ((code *)(lVar28 + (ulonglong)
                                    *(uint *)(lVar32 + 0x8c + (longlong)*(int *)(lVar32 + 0x3c))) <=
                  pcVar41)) goto LAB_1401069df;
              uVar26 = 0xa599f784;
              uVar20 = 0xa599f784;
              cVar39 = *pcVar41;
              while (cVar39 != (code)0x2e) {
                uVar20 = ((int)(char)cVar39 ^ uVar20) * 0x1000193;
                pcVar1 = pcVar41 + 1;
                pcVar41 = pcVar41 + 1;
                cVar39 = *pcVar1;
              }
              cVar39 = pcVar41[1];
              if (cVar39 != (code)0x0) {
                pcVar41 = pcVar41 + 2;
                uVar26 = 0xa599f784;
                do {
                  uVar26 = ((int)(char)cVar39 ^ uVar26) * 0x1000193;
                  cVar39 = *pcVar41;
                  pcVar41 = pcVar41 + 1;
                } while (cVar39 != (code)0x0);
              }
              puVar52 = (undefined8 *)*puVar24;
            }
          }
          else {
            uVar46 = 0xa599f784;
            if (1 < (ushort)(*(int *)(puVar52 + 0xb) - 8U)) {
              lVar28 = 0;
              do {
                uVar46 = ((int)*(char *)(puVar52[0xc] + lVar28) ^ uVar46) * 0x1000193;
                lVar28 = lVar28 + 2;
              } while ((ulonglong)((*(int *)(puVar52 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar28);
            }
            if (uVar46 == uVar20) goto LAB_1401068ad;
          }
LAB_140106863:
          puVar52 = (undefined8 *)*puVar52;
        } while( true );
      }
      goto LAB_140107f54;
    }
  }
  std::_Throw_Cpp_error(1);
LAB_140107f54:
                    /* WARNING: Subroutine does not return */
  terminate();
LAB_14010742f:
  (*pcVar41)(local_1118._0_8_,0,0x8000);
LAB_140107441:
  if (0xf < uStack_b0) {
    local_108 = (wchar_t *)local_c8;
  }
  FUN_140109480((longlong *)local_1118);
  uVar12 = local_1118._0_8_;
  local_a8 = ZEXT1232(ZEXT812(0));
  sVar11 = strlen((char *)local_1118._0_8_);
  if ((longlong)sVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar11 < 0x10) {
    local_a8._16_8_ = sVar11;
    local_a8._24_8_ = 0xf;
    memcpy(local_a8,(void *)uVar12,sVar11);
    puVar38 = local_a8;
  }
  else {
    uVar29 = 0x16;
    if (0x16 < (sVar11 | 0xf)) {
      uVar29 = sVar11 | 0xf;
    }
    if (uVar29 < 0xfff) {
      puVar38 = operator_new(uVar29 + 1);
    }
    else {
      pvVar15 = operator_new(uVar29 + 0x28);
      puVar38 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar38 + -8) = pvVar15;
    }
    local_a8._0_8_ = puVar38;
    local_a8._16_8_ = sVar11;
    local_a8._24_8_ = uVar29;
    memcpy(puVar38,(void *)uVar12,sVar11);
  }
  puVar38[sVar11] = 0;
  if (local_1118._0_8_ != 0) {
    uVar20 = 0;
    lVar28 = readgsbase();
    puVar24 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar28 + 0x60) + 0x18) + 0x10);
    uVar26 = 0x95ed46c;
    puVar52 = puVar24;
    do {
      if (uVar20 == 0) {
LAB_14010782d:
        lVar32 = puVar52[6];
        uVar46 = *(uint *)(lVar32 + 0x88 + (longlong)*(int *)(lVar32 + 0x3c));
        lVar28 = lVar32 + (ulonglong)uVar46;
        if ((ulonglong)uVar46 != 0) {
          uVar29 = (ulonglong)*(uint *)(lVar28 + 0x18);
          do {
            bVar56 = uVar29 == 0;
            uVar29 = uVar29 - 1;
            if (bVar56) goto LAB_1401077e3;
            uVar44 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar28 + 0x20) + lVar32 + uVar29 * 4)
            ;
            cVar47 = *(char *)(lVar32 + uVar44);
            if (cVar47 == '\0') {
              uVar48 = 0xca89e2eb;
            }
            else {
              pcVar55 = (char *)(uVar44 + lVar32 + 1);
              uVar48 = 0xca89e2eb;
              do {
                uVar48 = ((int)cVar47 ^ uVar48) * 0x1000193;
                cVar47 = *pcVar55;
                pcVar55 = pcVar55 + 1;
              } while (cVar47 != '\0');
            }
          } while (uVar48 != uVar26);
          uVar20 = *(uint *)((ulonglong)*(uint *)(lVar28 + 0x1c) + lVar32 +
                            (ulonglong)
                            *(ushort *)
                             ((ulonglong)*(uint *)(lVar28 + 0x24) + lVar32 +
                             (uVar29 & 0xffffffff) * 2) * 4);
          pcVar41 = (code *)(lVar32 + (ulonglong)uVar20);
          if ((uVar20 <= uVar46) ||
             ((code *)(lVar28 + (ulonglong)
                                *(uint *)(lVar32 + 0x8c + (longlong)*(int *)(lVar32 + 0x3c))) <=
              pcVar41)) goto LAB_14010795f;
          uVar26 = 0xca89e2eb;
          uVar20 = 0xca89e2eb;
          cVar39 = *pcVar41;
          while (cVar39 != (code)0x2e) {
            uVar20 = ((int)(char)cVar39 ^ uVar20) * 0x1000193;
            pcVar1 = pcVar41 + 1;
            pcVar41 = pcVar41 + 1;
            cVar39 = *pcVar1;
          }
          cVar39 = pcVar41[1];
          if (cVar39 != (code)0x0) {
            pcVar41 = pcVar41 + 2;
            uVar26 = 0xca89e2eb;
            do {
              uVar26 = ((int)(char)cVar39 ^ uVar26) * 0x1000193;
              cVar39 = *pcVar41;
              pcVar41 = pcVar41 + 1;
            } while (cVar39 != (code)0x0);
          }
          puVar52 = (undefined8 *)*puVar24;
        }
      }
      else {
        uVar46 = 0xca89e2eb;
        if (1 < (ushort)(*(int *)(puVar52 + 0xb) - 8U)) {
          lVar28 = 0;
          do {
            uVar46 = ((int)*(char *)(puVar52[0xc] + lVar28) ^ uVar46) * 0x1000193;
            lVar28 = lVar28 + 2;
          } while ((ulonglong)((*(int *)(puVar52 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar28);
        }
        if (uVar46 == uVar20) goto LAB_14010782d;
      }
LAB_1401077e3:
      puVar52 = (undefined8 *)*puVar52;
    } while( true );
  }
LAB_140107971:
  if ((ulonglong)local_a8._24_8_ < 0x10) {
    puVar38 = local_a8;
  }
  else {
    puVar38 = (undefined1 *)local_a8._0_8_;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_14012b5f8) && (FUN_140109684(&DAT_14012b5f8), DAT_14012b5f8 == -1)) {
    _DAT_14012b538 = 2;
    _DAT_14012b540 = 0;
    _DAT_14012b548 = ZEXT1232(ZEXT812(0));
    _DAT_14012b588 = 0;
    _DAT_14012b568 = _DAT_14012b548;
    _Mtx_init_in_situ(&DAT_14012b540,2);
    _DAT_14012b590 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b5f0 = "%T  %d-%m-%Y";
    atexit(FUN_1400f9950);
    _Init_thread_footer(&DAT_14012b5f8);
  }
  iVar10 = _Mtx_lock();
  if (iVar10 == 0) {
    if (DAT_14012b58c != 0x7fffffff) {
      local_f8 = (char *)_time64((__time64_t *)0x0);
      ptVar19 = _localtime64((__time64_t *)&local_f8);
      strftime(&DAT_14012b5a0,0x50,DAT_14012b5f0,ptVar19);
      memset(local_1118,0,0x1000);
      iVar10 = FUN_1400f9990(local_1118,0x1000,"%s => %s",&DAT_14012b5a0);
      FUN_1400f9990(local_1118 + iVar10,(longlong)(0x1000 - iVar10),puVar38,local_108);
      _local_88 = ZEXT1232(ZEXT812(0));
      sVar11 = strlen(local_1118);
      if (-1 < (longlong)sVar11) {
        if (sVar11 < 0x10) {
          plStack_78 = (longlong *)sVar11;
          uStack_70 = 0xf;
          memcpy(local_88,local_1118,sVar11);
          puVar38 = local_88;
        }
        else {
          uVar29 = 0x16;
          if (0x16 < (sVar11 | 0xf)) {
            uVar29 = sVar11 | 0xf;
          }
          if (uVar29 < 0xfff) {
            puVar38 = operator_new(uVar29 + 1);
          }
          else {
            pvVar15 = operator_new(uVar29 + 0x28);
            puVar38 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
            *(void **)(puVar38 + -8) = pvVar15;
          }
          local_88 = (undefined1  [8])puVar38;
          plStack_78 = (longlong *)sVar11;
          uStack_70 = uVar29;
          memcpy(puVar38,local_1118,sVar11);
        }
        puVar38[sVar11] = 0;
        pvVar15 = operator_new(0x1027);
        pvVar53 = (void *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar53 + -8) = pvVar15;
        memset(pvVar53,0,0x1000);
        uVar29 = uStack_70;
        auVar25 = local_88;
        auVar35 = (undefined1  [8])local_88;
        if (0xf < uStack_70) {
          auVar35 = local_88;
        }
        memmove(pvVar53,(void *)auVar35,(size_t)plStack_78);
        puts((char *)auVar35);
        if (pvVar53 != (void *)0x0) {
          if (0x1f < (ulonglong)
                     ((longlong)pvVar53 + (-8 - (longlong)*(void **)((longlong)pvVar53 + -8))))
          goto LAB_1401066a6;
          free(*(void **)((longlong)pvVar53 + -8));
        }
        if (0xf < uVar29) {
          auVar35 = auVar25;
          if ((0xfff < uVar29 + 1) &&
             (auVar35 = *(undefined1 (*) [8])((longlong)auVar25 + -8),
             (char *)0x1f < (char *)((longlong)auVar25 + (-8 - (longlong)auVar35))))
          goto LAB_1401066a6;
          free((void *)auVar35);
        }
        _Mtx_unlock(&DAT_14012b540);
        if (0xf < (ulonglong)local_a8._24_8_) {
          pvVar15 = (void *)local_a8._0_8_;
          if ((0xfff < local_a8._24_8_ + 1) &&
             (pvVar15 = *(void **)(local_a8._0_8_ + -8),
             0x1f < (ulonglong)(local_a8._0_8_ + (-8 - (longlong)pvVar15)))) goto LAB_1401066a6;
          free(pvVar15);
        }
        if (0xf < uStack_b0) {
          auVar25 = local_c8;
          if ((0xfff < uStack_b0 + 1) &&
             (auVar25 = *(undefined1 (*) [8])((longlong)local_c8 + -8),
             0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)auVar25)))) {
LAB_1401066a6:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free((void *)auVar25);
        }
                    /* WARNING: Read-only address (ram,0x00014010b180) is written */
                    /* WARNING: Read-only address (ram,0x00014010b190) is written */
                    /* WARNING: Read-only address (ram,0x00014010b1a0) is written */
                    /* WARNING: Read-only address (ram,0x00014010b1b0) is written */
                    /* WARNING: Read-only address (ram,0x00014010b1c0) is written */
                    /* WARNING: Read-only address (ram,0x00014010b1d0) is written */
                    /* WARNING: Read-only address (ram,0x00014010b1e0) is written */
                    /* WARNING: Read-only address (ram,0x00014010b1f0) is written */
                    /* WARNING: Read-only address (ram,0x00014010b200) is written */
                    /* WARNING: Read-only address (ram,0x00014010b210) is written */
                    /* WARNING: Read-only address (ram,0x00014010b220) is written */
                    /* WARNING: Read-only address (ram,0x00014010b240) is written */
        return;
      }
      goto LAB_140108019;
    }
  }
  else {
    std::_Throw_Cpp_error(5);
  }
  _DAT_14012b588 = CONCAT44(0x7ffffffe,_DAT_14012b588);
  std::_Throw_Cpp_error(6);
LAB_140108019:
                    /* WARNING: Subroutine does not return */
  FUN_140086cb0();
}

