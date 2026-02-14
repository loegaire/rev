
void FUN_1400c13a0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  longlong lVar13;
  longlong *plVar14;
  undefined1 (*pauVar15) [32];
  int iVar16;
  undefined4 uVar17;
  size_t sVar18;
  void *pvVar19;
  undefined1 (*pauVar20) [32];
  ulonglong uVar21;
  undefined1 auVar22 [8];
  byte bVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  code cVar27;
  byte bVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  longlong lVar31;
  undefined1 (*pauVar32) [32];
  undefined1 (*pauVar33) [32];
  undefined1 auVar34 [8];
  uint uVar35;
  ulonglong uVar36;
  byte *pbVar37;
  undefined8 *puVar38;
  code *pcVar39;
  ulonglong uVar40;
  uint uVar41;
  char cVar42;
  uint uVar43;
  void *pvVar44;
  longlong *plVar45;
  ulonglong uVar46;
  undefined1 *_Dst;
  byte *pbVar47;
  char *pcVar48;
  undefined1 (*pauVar49) [32];
  longlong *plVar50;
  longlong *plVar51;
  bool bVar52;
  undefined1 auVar53 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar54 [64];
  longlong local_128;
  uint local_120;
  byte *local_118;
  undefined1 (*local_110) [32];
  undefined1 local_108 [8];
  undefined1 auStack_100 [24];
  undefined1 local_e8 [8];
  longlong lStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong local_c0;
  byte *local_b8;
  undefined4 local_b0;
  byte *local_a8;
  undefined1 (*local_a0) [32];
  byte *local_98;
  byte *local_90;
  undefined1 local_88 [8];
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = 0xfffffffffffffffe;
  auVar5._24_8_ = 0;
  auVar5._0_24_ = auStack_100;
  _local_108 = auVar5 << 0x40;
  local_88 = (undefined1  [8])0x1000;
  uVar35 = 0;
  iVar16 = NtAllocateVirtualMemory(0xffffffffffffffff,local_108,0,local_88,0x1000,4);
  local_120 = ~(iVar16 >> 0x1f) & local_88._0_4_;
  auVar22 = (undefined1  [8])0;
  if (-1 < iVar16) {
    auVar22 = local_108;
  }
  lVar31 = readgsbase();
  puVar38 = (undefined8 *)
            **(undefined8 **)(*(longlong *)(*(longlong *)(lVar31 + 0x60) + 0x18) + 0x10);
  uVar24 = 0x7fa2c5c3;
  puVar29 = puVar38;
  do {
    if (uVar35 == 0) {
LAB_1400c149d:
      lVar26 = puVar29[6];
      uVar41 = *(uint *)(lVar26 + 0x88 + (longlong)*(int *)(lVar26 + 0x3c));
      lVar31 = lVar26 + (ulonglong)uVar41;
      if ((ulonglong)uVar41 != 0) {
        uVar36 = (ulonglong)*(uint *)(lVar31 + 0x18);
        do {
          bVar52 = uVar36 == 0;
          uVar36 = uVar36 - 1;
          if (bVar52) goto LAB_1400c1453;
          uVar46 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar31 + 0x20) + lVar26 + uVar36 * 4);
          cVar42 = *(char *)(lVar26 + uVar46);
          if (cVar42 == '\0') {
            uVar43 = 0x844be677;
          }
          else {
            pcVar48 = (char *)(uVar46 + lVar26 + 1);
            uVar43 = 0x844be677;
            do {
              uVar43 = ((int)cVar42 ^ uVar43) * 0x1000193;
              cVar42 = *pcVar48;
              pcVar48 = pcVar48 + 1;
            } while (cVar42 != '\0');
          }
        } while (uVar43 != uVar24);
        uVar35 = *(uint *)((ulonglong)*(uint *)(lVar31 + 0x1c) + lVar26 +
                          (ulonglong)
                          *(ushort *)
                           ((ulonglong)*(uint *)(lVar31 + 0x24) + lVar26 + (uVar36 & 0xffffffff) * 2
                           ) * 4);
        pcVar39 = (code *)(lVar26 + (ulonglong)uVar35);
        if ((uVar35 <= uVar41) ||
           ((code *)(lVar31 + (ulonglong)
                              *(uint *)(lVar26 + 0x8c + (longlong)*(int *)(lVar26 + 0x3c))) <=
            pcVar39)) break;
        uVar24 = 0x844be677;
        uVar35 = 0x844be677;
        cVar27 = *pcVar39;
        while (cVar27 != (code)0x2e) {
          uVar35 = ((int)(char)cVar27 ^ uVar35) * 0x1000193;
          pcVar1 = pcVar39 + 1;
          pcVar39 = pcVar39 + 1;
          cVar27 = *pcVar1;
        }
        cVar27 = pcVar39[1];
        if (cVar27 != (code)0x0) {
          pcVar39 = pcVar39 + 2;
          uVar24 = 0x844be677;
          do {
            uVar24 = ((int)(char)cVar27 ^ uVar24) * 0x1000193;
            cVar27 = *pcVar39;
            pcVar39 = pcVar39 + 1;
          } while (cVar27 != (code)0x0);
        }
        puVar29 = (undefined8 *)*puVar38;
      }
    }
    else {
      uVar41 = 0x844be677;
      if (1 < (ushort)(*(int *)(puVar29 + 0xb) - 8U)) {
        lVar31 = 0;
        do {
          uVar41 = ((int)*(char *)(puVar29[0xc] + lVar31) ^ uVar41) * 0x1000193;
          lVar31 = lVar31 + 2;
        } while ((ulonglong)((*(int *)(puVar29 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar31);
      }
      if (uVar41 == uVar35) goto LAB_1400c149d;
    }
LAB_1400c1453:
    puVar29 = (undefined8 *)*puVar29;
  } while( true );
  local_128 = (longlong)auVar22;
  (*pcVar39)(0x41435049,auVar22,0x1000);
  for (local_98 = (byte *)0x0; pauVar20 = DAT_14012b260,
      iVar16 = *(int *)((longlong)auVar22 + (longlong)local_98 * 4), iVar16 != 0;
      local_98 = (byte *)(ulonglong)((int)local_98 + 1)) {
    auVar53._11_5_ = 0;
    auVar53._0_11_ = stack0xffffffffffffff7d;
    _local_88 = auVar53 << 0x28;
    local_88._0_4_ = iVar16;
    if (DAT_14012ab50 == '\0') {
      if (DAT_14012b260 == DAT_14012b268) {
        lVar31 = (longlong)DAT_14012b260 - (longlong)DAT_14012b258 >> 3;
        uVar46 = lVar31 * -0x3333333333333333;
        local_90 = (byte *)(uVar46 + 1);
        uVar36 = 0x666666666666666 - (uVar46 >> 1);
        pbVar30 = (byte *)((uVar46 >> 1) + uVar46);
        if (pbVar30 <= local_90) {
          pbVar30 = local_90;
        }
        if (uVar36 <= uVar46 && uVar46 - uVar36 != 0) {
          pbVar30 = (byte *)0x666666666666666;
        }
        if ((byte *)0x666666666666666 < pbVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_1400bb790();
        }
        local_a8 = pbVar30;
        if (pbVar30 < (byte *)0x67) {
          if (pbVar30 == (byte *)0x0) {
            pauVar49 = (undefined1 (*) [32])0x0;
          }
          else {
            pauVar49 = operator_new((longlong)pbVar30 * 0x28);
          }
        }
        else {
          if ((byte *)0x666666666666665 < pbVar30) {
                    /* WARNING: Subroutine does not return */
            FUN_1400bb790();
          }
          pvVar19 = operator_new((longlong)pbVar30 * 0x28 + 0x27);
          pauVar49 = (undefined1 (*) [32])((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
          *(void **)(pauVar49[-1] + 0x18) = pvVar19;
        }
        pauVar33 = (undefined1 (*) [32])(pauVar49[1] + lVar31 * 8 + 8);
        *(undefined1 (*) [32])(*pauVar49 + lVar31 * 8) = ZEXT1232(ZEXT812(0));
        sVar18 = strlen(local_88);
        if ((longlong)sVar18 < 0) {
          local_110 = pauVar33;
          local_a0 = pauVar49;
                    /* WARNING: Subroutine does not return */
          FUN_140086cb0();
        }
        local_118 = *pauVar49 + lVar31 * 8;
        if (sVar18 < 0x10) {
          *(size_t *)(local_118 + 0x10) = sVar18;
          local_118[0x18] = 0xf;
          local_118[0x19] = 0;
          local_118[0x1a] = 0;
          local_118[0x1b] = 0;
          local_118[0x1c] = 0;
          local_118[0x1d] = 0;
          local_118[0x1e] = 0;
          local_118[0x1f] = 0;
          memcpy(local_118,local_88,sVar18);
          pbVar30 = local_118;
        }
        else {
          local_118[0x18] = 0xf;
          local_118[0x19] = 0;
          local_118[0x1a] = 0;
          local_118[0x1b] = 0;
          local_118[0x1c] = 0;
          local_118[0x1d] = 0;
          local_118[0x1e] = 0;
          local_118[0x1f] = 0;
          uVar36 = sVar18 | 0xf;
          if (uVar36 < 0x17) {
            uVar36 = 0x16;
          }
          if (uVar36 < 0xfff) {
            local_110 = pauVar33;
            local_a0 = pauVar49;
            pbVar30 = operator_new(uVar36 + 1);
          }
          else {
            local_110 = pauVar33;
            local_a0 = pauVar49;
            pvVar19 = operator_new(uVar36 + 0x28);
            pbVar30 = (byte *)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
            *(void **)(pbVar30 + -8) = pvVar19;
          }
          *(byte **)local_118 = pbVar30;
          *(size_t *)(local_118 + 0x10) = sVar18;
          *(ulonglong *)(local_118 + 0x18) = uVar36;
          memcpy(pbVar30,local_88,sVar18);
          pauVar33 = local_110;
          pauVar49 = local_a0;
        }
        pbVar37 = local_a8;
        pbVar30[sVar18] = 0;
        *(int *)(pauVar49[1] + lVar31 * 8) = iVar16;
        pauVar15 = DAT_14012b258;
        if (DAT_14012b260 == pauVar20) {
          pauVar32 = pauVar20;
          if (DAT_14012b258 != pauVar20) {
            lVar31 = 0;
            do {
              *(undefined1 (*) [32])(*pauVar49 + lVar31) = ZEXT1632(ZEXT816(0));
              *(undefined1 (*) [32])(*pauVar49 + lVar31) =
                   *(undefined1 (*) [32])(*pauVar15 + lVar31);
              *(undefined8 *)(*pauVar15 + lVar31 + 0x10) = 0;
              *(undefined8 *)(*pauVar15 + lVar31 + 0x18) = 0xf;
              (*pauVar15)[lVar31] = 0;
              *(undefined4 *)(pauVar49[1] + lVar31) = *(undefined4 *)(pauVar15[1] + lVar31);
              lVar26 = lVar31 + 8;
              lVar31 = lVar31 + 0x28;
              pauVar32 = DAT_14012b258;
            } while ((undefined1 (*) [32])(pauVar15[1] + lVar26) != pauVar20);
          }
        }
        else {
          if (DAT_14012b258 != pauVar20) {
            lVar31 = 0;
            do {
              puVar38 = (undefined8 *)(*pauVar49 + lVar31);
              *puVar38 = 0;
              puVar38[1] = 0;
              puVar38[2] = 0;
              puVar38[3] = 0;
              *(undefined1 (*) [32])(*pauVar49 + lVar31) =
                   *(undefined1 (*) [32])(*pauVar15 + lVar31);
              *(undefined8 *)(*pauVar15 + lVar31 + 0x10) = 0;
              *(undefined8 *)(*pauVar15 + lVar31 + 0x18) = 0xf;
              (*pauVar15)[lVar31] = 0;
              *(undefined4 *)(pauVar49[1] + lVar31) = *(undefined4 *)(pauVar15[1] + lVar31);
              lVar26 = lVar31 + 8;
              lVar31 = lVar31 + 0x28;
            } while ((undefined1 (*) [32])(pauVar15[1] + lVar26) != pauVar20);
          }
          pauVar15 = DAT_14012b260;
          pauVar32 = DAT_14012b258;
          if (DAT_14012b260 != pauVar20) {
            lVar31 = 0;
            do {
              *(undefined1 (*) [32])(*pauVar33 + lVar31) = ZEXT1232(ZEXT812(0));
              *(undefined1 (*) [32])(*pauVar33 + lVar31) =
                   *(undefined1 (*) [32])(*pauVar20 + lVar31);
              *(undefined8 *)(*pauVar20 + lVar31 + 0x10) = 0;
              *(undefined8 *)(*pauVar20 + lVar31 + 0x18) = 0xf;
              (*pauVar20)[lVar31] = 0;
              *(undefined4 *)(pauVar33[1] + lVar31) = *(undefined4 *)(pauVar20[1] + lVar31);
              lVar26 = lVar31 + 8;
              lVar31 = lVar31 + 0x28;
              pauVar32 = DAT_14012b258;
            } while ((undefined1 (*) [32])(pauVar20[1] + lVar26) != pauVar15);
          }
        }
        pauVar33 = DAT_14012b260;
        pauVar20 = pauVar32;
        if (pauVar32 != (undefined1 (*) [32])0x0) {
          for (; pauVar32 != pauVar33; pauVar32 = (undefined1 (*) [32])(pauVar32[1] + 8)) {
            if (0xf < *(ulonglong *)(*pauVar32 + 0x18)) {
              pvVar19 = *(void **)*pauVar32;
              pvVar44 = pvVar19;
              if ((0xfff < *(ulonglong *)(*pauVar32 + 0x18) + 1) &&
                 (pvVar44 = *(void **)((longlong)pvVar19 + -8),
                 0x1f < (ulonglong)((longlong)pvVar19 + (-8 - (longlong)pvVar44))))
              goto LAB_1400c2da0;
              free(pvVar44);
            }
            *(undefined8 *)(*pauVar32 + 0x10) = 0;
            *(undefined8 *)(*pauVar32 + 0x18) = 0xf;
            (*pauVar32)[0] = 0;
            pauVar20 = DAT_14012b258;
          }
          pauVar33 = pauVar20;
          if ((0xfff < (ulonglong)((longlong)DAT_14012b268 - (longlong)pauVar20)) &&
             (pauVar33 = *(undefined1 (**) [32])(pauVar20[-1] + 0x18),
             0x1f < (ulonglong)((longlong)pauVar20 + (-8 - (longlong)pauVar33))))
          goto LAB_1400c2da0;
          free(pauVar33);
        }
        DAT_14012b260 = (undefined1 (*) [32])((longlong)pauVar49 + (longlong)local_90 * 0x28);
        DAT_14012b268 = (undefined1 (*) [32])((longlong)pauVar49 + (longlong)pbVar37 * 0x28);
        DAT_14012b258 = pauVar49;
      }
      else {
        *DAT_14012b260 = ZEXT1232(ZEXT812(0));
        sVar18 = strlen(local_88);
        if ((longlong)sVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140086cb0();
        }
        if (sVar18 < 0x10) {
          *(size_t *)(*pauVar20 + 0x10) = sVar18;
          *(undefined8 *)(*pauVar20 + 0x18) = 0xf;
          memcpy(pauVar20,local_88,sVar18);
          pauVar49 = pauVar20;
        }
        else {
          *(undefined8 *)(*pauVar20 + 0x18) = 0xf;
          uVar36 = sVar18 | 0xf;
          if (uVar36 < 0x17) {
            uVar36 = 0x16;
          }
          if (uVar36 < 0xfff) {
            pauVar49 = operator_new(uVar36 + 1);
          }
          else {
            pvVar19 = operator_new(uVar36 + 0x28);
            pauVar49 = (undefined1 (*) [32])((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
            *(void **)(pauVar49[-1] + 0x18) = pvVar19;
          }
          *(undefined1 (**) [32])*pauVar20 = pauVar49;
          *(size_t *)(*pauVar20 + 0x10) = sVar18;
          *(ulonglong *)(*pauVar20 + 0x18) = uVar36;
          memcpy(pauVar49,local_88,sVar18);
        }
        (*pauVar49)[sVar18] = 0;
        *(int *)pauVar20[1] = iVar16;
        DAT_14012b260 = (undefined1 (*) [32])(DAT_14012b260[1] + 8);
      }
    }
    _local_108 = ZEXT1232(ZEXT812(0));
    sVar18 = strlen(local_88);
    if ((longlong)sVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (sVar18 < 0x10) {
      auStack_100._8_8_ = sVar18;
      auStack_100._16_8_ = 0xf;
      memcpy(local_108,local_88,sVar18);
      _Dst = local_108;
    }
    else {
      uVar36 = sVar18 | 0xf;
      if (uVar36 < 0x17) {
        uVar36 = 0x16;
      }
      if (uVar36 < 0xfff) {
        _Dst = operator_new(uVar36 + 1);
      }
      else {
        pvVar19 = operator_new(uVar36 + 0x28);
        _Dst = (undefined1 *)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
        *(void **)(_Dst + -8) = pvVar19;
      }
      local_108 = (undefined1  [8])_Dst;
      auStack_100._8_8_ = sVar18;
      auStack_100._16_8_ = uVar36;
      memcpy(_Dst,local_88,sVar18);
    }
    _Dst[sVar18] = 0;
    auVar22 = local_108;
    uVar2 = auStack_100._8_8_;
    uVar3 = auStack_100._16_8_;
    auVar34 = (undefined1  [8])local_108;
    if (0xf < (ulonglong)auStack_100._16_8_) {
      auVar34 = local_108;
    }
    uVar36 = 0xcbf29ce484222325;
    if (auStack_100._8_8_ != 0) {
      uVar46 = (ulonglong)(local_108._16_4_ & 3);
      if ((ulonglong)auStack_100._8_8_ < 4) {
        uVar25 = 0;
        uVar36 = 0xcbf29ce484222325;
      }
      else {
        uVar25 = 0;
        uVar36 = 0xcbf29ce484222325;
        do {
          uVar36 = ((ulonglong)*(byte *)((longlong)auVar34 + uVar25 + 3) ^
                   ((ulonglong)*(byte *)((longlong)auVar34 + uVar25 + 2) ^
                   ((ulonglong)*(byte *)((longlong)auVar34 + uVar25 + 1) ^
                   (*(byte *)((longlong)auVar34 + uVar25) ^ uVar36) * 0x100000001b3) * 0x100000001b3
                   ) * 0x100000001b3) * 0x100000001b3;
          uVar25 = uVar25 + 4;
        } while ((auStack_100._8_8_ & 0xfffffffffffffffc) != uVar25);
      }
      if (uVar46 != 0) {
        uVar40 = 0;
        do {
          uVar36 = (*(byte *)((longlong)auVar34 + uVar40 + uVar25) ^ uVar36) * 0x100000001b3;
          uVar40 = uVar40 + 1;
        } while (uVar46 != uVar40);
      }
    }
    lVar31 = *(longlong *)(DAT_14012aae8 + 8 + (uVar36 & DAT_14012ab00) * 0x10);
    if (lVar31 != DAT_14012aad8) {
      lVar26 = *(longlong *)(DAT_14012aae8 + (uVar36 & DAT_14012ab00) * 0x10);
      uVar36 = *(ulonglong *)(lVar31 + 0x20);
      while( true ) {
        if (uVar2 == uVar36) {
          if (*(ulonglong *)(lVar31 + 0x28) < 0x10) {
            pvVar19 = (void *)(lVar31 + 0x10);
          }
          else {
            pvVar19 = *(void **)(lVar31 + 0x10);
          }
          iVar16 = memcmp((void *)auVar34,pvVar19,uVar2);
          if (iVar16 == 0) goto LAB_1400c1ca3;
        }
        if (lVar31 == lVar26) break;
        lVar31 = *(longlong *)(lVar31 + 8);
        uVar36 = *(ulonglong *)(lVar31 + 0x20);
      }
    }
    lVar31 = 0;
LAB_1400c1ca3:
    if (0xf < (ulonglong)uVar3) {
      auVar34 = auVar22;
      if ((0xfff < uVar3 + 1) &&
         (auVar34 = *(undefined1 (*) [8])((longlong)auVar22 + -8),
         (undefined1 *)0x1f < (undefined1 *)((longlong)auVar22 + (-8 - (longlong)auVar34))))
      goto LAB_1400c2da0;
      free((void *)auVar34);
    }
    if (lVar31 != 0) {
      LOCK();
      DAT_14012b250 = 1;
      UNLOCK();
    }
    auVar22 = (undefined1  [8])local_128;
  }
  local_110 = DAT_14012b260;
  auVar54 = ZEXT1264(ZEXT812(0));
  pauVar20 = DAT_14012b258;
LAB_1400c1d14:
  if (pauVar20 == local_110) {
    if (DAT_14012ab50 == '\0') {
      DAT_14012ab50 = '\x01';
    }
    if (local_128 != 0) {
      auVar12._24_8_ = 0;
      auVar12._0_24_ = auStack_100;
      _local_108 = auVar12 << 0x40;
      NtFreeVirtualMemory(0xffffffffffffffff,&local_128,local_108,0x8000);
    }
    return;
  }
  local_b8 = (byte *)0x0;
  local_b0 = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uStack_80;
  _local_88 = auVar6 << 0x40;
  local_c0 = 0x1000;
  auVar54 = ZEXT1664(auVar54._0_16_);
  iVar16 = NtAllocateVirtualMemory(0xffffffffffffffff,local_88,0,&local_c0,0x1000,4);
  if (iVar16 < 0) {
    auStack_100._0_8_ = 0;
    uVar17 = 0;
    auVar22 = (undefined1  [8])0x0;
  }
  else {
    auVar22 = local_88;
    uVar17 = (undefined4)local_c0;
  }
  auStack_100._0_4_ = local_b0;
  local_108 = (undefined1  [8])local_b8;
  bVar52 = local_b8 != (byte *)0x0;
  local_b8 = (byte *)auVar22;
  local_b0 = uVar17;
  local_a0 = pauVar20;
  if (bVar52) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uStack_80;
    _local_88 = auVar7 << 0x40;
    NtFreeVirtualMemory(0xffffffffffffffff,local_108,local_88,0x8000);
  }
  pauVar20 = local_a0;
  uVar35 = 0;
  lVar31 = readgsbase();
  puVar38 = (undefined8 *)
            **(undefined8 **)(*(longlong *)(*(longlong *)(lVar31 + 0x60) + 0x18) + 0x10);
  uVar24 = 0x1e50ba61;
  puVar29 = puVar38;
  do {
    if (uVar35 == 0) {
LAB_1400c1e4d:
      lVar26 = puVar29[6];
      uVar41 = *(uint *)(lVar26 + 0x88 + (longlong)*(int *)(lVar26 + 0x3c));
      lVar31 = lVar26 + (ulonglong)uVar41;
      if ((ulonglong)uVar41 != 0) {
        uVar36 = (ulonglong)*(uint *)(lVar31 + 0x18);
        do {
          bVar52 = uVar36 == 0;
          uVar36 = uVar36 - 1;
          if (bVar52) goto LAB_1400c1e03;
          uVar46 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar31 + 0x20) + lVar26 + uVar36 * 4);
          cVar42 = *(char *)(lVar26 + uVar46);
          if (cVar42 == '\0') {
            uVar43 = 0x9dbbe17d;
          }
          else {
            pcVar48 = (char *)(uVar46 + lVar26 + 1);
            uVar43 = 0x9dbbe17d;
            do {
              uVar43 = ((int)cVar42 ^ uVar43) * 0x1000193;
              cVar42 = *pcVar48;
              pcVar48 = pcVar48 + 1;
            } while (cVar42 != '\0');
          }
        } while (uVar43 != uVar24);
        uVar35 = *(uint *)((ulonglong)*(uint *)(lVar31 + 0x1c) + lVar26 +
                          (ulonglong)
                          *(ushort *)
                           ((ulonglong)*(uint *)(lVar31 + 0x24) + lVar26 + (uVar36 & 0xffffffff) * 2
                           ) * 4);
        pcVar39 = (code *)(lVar26 + (ulonglong)uVar35);
        if ((uVar35 <= uVar41) ||
           ((code *)(lVar31 + (ulonglong)
                              *(uint *)(lVar26 + 0x8c + (longlong)*(int *)(lVar26 + 0x3c))) <=
            pcVar39)) break;
        uVar24 = 0x9dbbe17d;
        uVar35 = 0x9dbbe17d;
        cVar27 = *pcVar39;
        while (cVar27 != (code)0x2e) {
          uVar35 = ((int)(char)cVar27 ^ uVar35) * 0x1000193;
          pcVar1 = pcVar39 + 1;
          pcVar39 = pcVar39 + 1;
          cVar27 = *pcVar1;
        }
        cVar27 = pcVar39[1];
        if (cVar27 != (code)0x0) {
          pcVar39 = pcVar39 + 2;
          uVar24 = 0x9dbbe17d;
          do {
            uVar24 = ((int)(char)cVar27 ^ uVar24) * 0x1000193;
            cVar27 = *pcVar39;
            pcVar39 = pcVar39 + 1;
          } while (cVar27 != (code)0x0);
        }
        puVar29 = (undefined8 *)*puVar38;
      }
    }
    else {
      uVar41 = 0x9dbbe17d;
      if (1 < (ushort)(*(int *)(puVar29 + 0xb) - 8U)) {
        lVar31 = 0;
        do {
          uVar41 = ((int)*(char *)(puVar29[0xc] + lVar31) ^ uVar41) * 0x1000193;
          lVar31 = lVar31 + 2;
        } while ((ulonglong)((*(int *)(puVar29 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar31);
      }
      if (uVar41 == uVar35) goto LAB_1400c1e4d;
    }
LAB_1400c1e03:
    puVar29 = (undefined8 *)*puVar29;
  } while( true );
  iVar16 = (*pcVar39)(0x41435049,*(undefined4 *)local_a0[1],local_b8,local_b0);
  pbVar30 = local_b8;
  if (iVar16 == 0) goto LAB_1400c2d04;
  local_c0 = CONCAT26((short)(local_c0 >> 0x30),*(undefined6 *)(local_b8 + 10)) & 0xff00ffffffffffff
  ;
  if ((DAT_14012ab50 == '\0') && (uVar35 = *(uint *)(local_b8 + 4), uVar35 - 1 < 0x400)) {
    if (*(longlong *)(*local_a0 + 0x10) == 4) {
      pauVar20 = local_a0;
      if (0xf < *(ulonglong *)(*local_a0 + 0x18)) {
        pauVar20 = *(undefined1 (**) [32])*local_a0;
      }
      if (*(int *)*pauVar20 == 0x54445353) goto LAB_1400c2cb0;
    }
    _local_88 = auVar54._0_16_;
    local_78 = 0;
    local_70 = 0xf;
    local_90 = (byte *)(ulonglong)uVar35;
    uVar36 = (longlong)(ulonglong)uVar35 * 3;
    if (0xf < uVar36) {
      uVar36 = uVar36 | 0xf;
      if (uVar36 < 0x17) {
        uVar36 = 0x16;
      }
      if (uVar36 < 0xfff) {
        pcVar48 = operator_new(uVar36 + 1);
      }
      else {
        pvVar19 = operator_new(uVar36 + 0x28);
        pcVar48 = (char *)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar48 + -8) = pvVar19;
      }
      local_70 = uVar36;
      *pcVar48 = local_88[0];
      local_88 = (undefined1  [8])pcVar48;
      local_78 = 0;
    }
    local_78 = 0;
    local_a8 = pbVar30 + (longlong)local_90;
    local_118 = local_90 + -1;
    pbVar47 = (byte *)0x0;
    pbVar37 = local_90;
    while (pbVar47 < pbVar37) {
      local_98 = pbVar47;
      for (pbVar47 = (byte *)0x0; uVar46 = local_70, uVar36 = local_78, pbVar47 != pbVar37;
          pbVar47 = pbVar47 + 1) {
        if (pbVar30 == local_a8) {
          if (local_70 - local_78 < 2) {
            if (local_78 >> 1 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_140086cb0();
            }
            uVar25 = local_78 + 2;
            uVar21 = uVar25 | 0xf;
            uVar40 = 0x7fffffffffffffff;
            if (((longlong)uVar21 < 0) || ((local_70 >> 1 ^ 0x7fffffffffffffff) < local_70)) {
LAB_1400c2281:
              pvVar19 = operator_new(uVar40 + 0x28);
              pvVar44 = (void *)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
              *(void **)((longlong)pvVar44 - 8) = pvVar19;
            }
            else {
              uVar40 = (local_70 >> 1) + local_70;
              if (uVar40 < uVar21) {
                uVar40 = uVar21;
              }
              uVar21 = uVar40 + 1;
              if (0xfff < uVar21) {
                if (0xffffffffffffffd8 < uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_1400bb790();
                }
                goto LAB_1400c2281;
              }
              pvVar44 = operator_new(uVar21);
            }
            local_78 = uVar25;
            local_70 = uVar40;
            if (uVar46 < 0x10) {
              memcpy(pvVar44,local_88,uVar36);
              *(undefined2 *)((longlong)pvVar44 + uVar36) = 0x2020;
              *(undefined1 *)((longlong)pvVar44 + uVar36 + 2) = local_88[uVar36];
              local_88 = (undefined1  [8])pvVar44;
              pbVar30 = local_a8;
              pbVar37 = local_90;
            }
            else {
              auVar34 = local_88;
              memcpy(pvVar44,(void *)local_88,uVar36);
              pbVar37 = local_90;
              *(undefined2 *)((longlong)pvVar44 + uVar36) = 0x2020;
              *(undefined1 *)((longlong)pvVar44 + uVar36 + 2) =
                   *(undefined1 *)((longlong)auVar34 + uVar36);
              auVar22 = auVar34;
              if ((0xfff < uVar46 + 1) &&
                 (auVar22 = *(undefined1 (*) [8])((longlong)auVar34 + -8),
                 0x1f < (ulonglong)((longlong)auVar34 + (-8 - (longlong)auVar22))))
              goto LAB_1400c2da0;
              free((void *)auVar22);
              local_88 = (undefined1  [8])pvVar44;
              pbVar30 = local_a8;
            }
          }
          else {
            auVar22 = (undefined1  [8])local_88;
            if (0xf < local_70) {
              auVar22 = local_88;
            }
            local_78 = local_78 + 2;
            *(undefined1 *)((longlong)auVar22 + uVar36 + 2) =
                 *(undefined1 *)((longlong)auVar22 + uVar36);
            *(undefined2 *)((longlong)auVar22 + uVar36) = 0x2020;
            pbVar30 = local_a8;
          }
        }
        else {
          uVar25 = local_78 + 2;
          if (local_78 < 0xfffffffffffffffe) {
            if (1 < local_70 - local_78) {
              local_78 = uVar25;
              auVar22 = (undefined1  [8])local_88;
              if (0xf < local_70) {
                auVar22 = local_88;
              }
              *(undefined2 *)((longlong)auVar22 + uVar36) = 0;
              goto LAB_1400c237d;
            }
            if (local_78 >> 1 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_140086cb0();
            }
            uVar21 = uVar25 | 0xf;
            uVar40 = 0x7fffffffffffffff;
            if (((longlong)uVar21 < 0) || ((local_70 >> 1 ^ 0x7fffffffffffffff) < local_70)) {
LAB_1400c2178:
              pvVar19 = operator_new(uVar40 + 0x28);
              pvVar44 = (void *)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
              *(void **)((longlong)pvVar44 - 8) = pvVar19;
            }
            else {
              uVar40 = (local_70 >> 1) + local_70;
              if (uVar40 < uVar21) {
                uVar40 = uVar21;
              }
              uVar21 = uVar40 + 1;
              if (0xfff < uVar21) {
                if (0xffffffffffffffd8 < uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_1400bb790();
                }
                goto LAB_1400c2178;
              }
              pvVar44 = operator_new(uVar21);
            }
            local_78 = uVar25;
            local_70 = uVar40;
            if (uVar46 < 0x10) {
              memcpy(pvVar44,local_88,uVar36);
              *(undefined2 *)((longlong)pvVar44 + uVar36) = 0;
              *(undefined1 *)((longlong)pvVar44 + uVar25) = 0;
              pbVar37 = local_90;
            }
            else {
              auVar34 = local_88;
              memcpy(pvVar44,(void *)local_88,uVar36);
              pbVar37 = local_90;
              *(undefined2 *)((longlong)pvVar44 + uVar36) = 0;
              *(undefined1 *)((longlong)pvVar44 + uVar25) = 0;
              auVar22 = auVar34;
              if ((0xfff < uVar46 + 1) &&
                 (auVar22 = *(undefined1 (*) [8])((longlong)auVar34 + -8),
                 0x1f < (ulonglong)((longlong)auVar34 + (-8 - (longlong)auVar22))))
              goto LAB_1400c2da0;
              free((void *)auVar22);
            }
            local_88 = (undefined1  [8])pvVar44;
          }
          else {
            auVar22 = (undefined1  [8])local_88;
            if (0xf < local_70) {
              auVar22 = local_88;
            }
            local_78 = uVar25;
LAB_1400c237d:
            *(undefined1 *)((longlong)auVar22 + uVar25) = 0;
            pbVar37 = local_90;
          }
          bVar23 = *pbVar30;
          auVar22 = (undefined1  [8])local_88;
          if (0xf < local_70) {
            auVar22 = local_88;
          }
          bVar28 = bVar23 >> 4 | 0x30;
          if (0x9f < bVar23) {
            bVar28 = (bVar23 >> 4) + 0x37;
          }
          *(byte *)((longlong)auVar22 + uVar36) = bVar28;
          bVar23 = bVar23 & 0xf;
          cVar42 = bVar23 + 0x30;
          if (9 < bVar23) {
            cVar42 = bVar23 + 0x37;
          }
          *(char *)((longlong)auVar22 + uVar36 + 1) = cVar42;
          pbVar30 = pbVar30 + 1;
        }
        uVar46 = local_70;
        uVar36 = local_78;
        if (pbVar47 != local_118) {
          if (local_70 == local_78) {
            uVar36 = 0x7fffffffffffffff;
            if (local_70 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_140086cb0();
            }
            uVar25 = local_70 + 1;
            uVar40 = uVar25 | 0xf;
            if (((longlong)uVar40 < 0) || ((local_70 >> 1 ^ 0x7fffffffffffffff) < local_70)) {
LAB_1400c24a0:
              pvVar19 = operator_new(uVar36 + 0x28);
              pvVar44 = (void *)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
              *(void **)((longlong)pvVar44 - 8) = pvVar19;
            }
            else {
              uVar36 = (local_70 >> 1) + local_70;
              if (uVar36 < uVar40) {
                uVar36 = uVar40;
              }
              uVar40 = uVar36 + 1;
              if (0xfff < uVar40) {
                if (0xffffffffffffffd8 < uVar40) {
                    /* WARNING: Subroutine does not return */
                  FUN_1400bb790();
                }
                goto LAB_1400c24a0;
              }
              pvVar44 = operator_new(uVar40);
            }
            local_78 = uVar25;
            local_70 = uVar36;
            if (uVar46 < 0x10) {
              memcpy(pvVar44,local_88,uVar46);
              *(undefined1 *)((longlong)pvVar44 + uVar46) = 0x20;
              *(undefined1 *)((longlong)pvVar44 + uVar46 + 1) = local_88[uVar46];
              pbVar37 = local_90;
            }
            else {
              auVar34 = local_88;
              memcpy(pvVar44,(void *)local_88,uVar46);
              pbVar37 = local_90;
              *(undefined1 *)((longlong)pvVar44 + uVar46) = 0x20;
              *(undefined1 *)((longlong)pvVar44 + uVar46 + 1) =
                   *(undefined1 *)((longlong)auVar34 + uVar46);
              auVar22 = auVar34;
              if ((0xfff < uVar25) &&
                 (auVar22 = *(undefined1 (*) [8])((longlong)auVar34 + -8),
                 0x1f < (ulonglong)((longlong)auVar34 + (-8 - (longlong)auVar22))))
              goto LAB_1400c2da0;
              free((void *)auVar22);
            }
            local_88 = (undefined1  [8])pvVar44;
          }
          else {
            auVar22 = (undefined1  [8])local_88;
            if (0xf < local_70) {
              auVar22 = local_88;
            }
            local_78 = local_78 + 1;
            *(undefined1 *)((longlong)auVar22 + uVar36 + 1) =
                 *(undefined1 *)((longlong)auVar22 + uVar36);
            *(undefined1 *)((longlong)auVar22 + uVar36) = 0x20;
          }
        }
      }
      pbVar47 = local_98 + (longlong)pbVar37;
      if (CARRY8((ulonglong)local_98,(ulonglong)pbVar37)) {
        if (local_70 == local_78) {
          uVar36 = 0x7fffffffffffffff;
          if (local_70 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140086cb0();
          }
          uVar25 = local_70 + 1;
          uVar40 = uVar25 | 0xf;
          if (((longlong)uVar40 < 0) || ((local_70 >> 1 ^ 0x7fffffffffffffff) < local_70)) {
LAB_1400c2620:
            pvVar19 = operator_new(uVar36 + 0x28);
            pvVar44 = (void *)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
            *(void **)((longlong)pvVar44 - 8) = pvVar19;
          }
          else {
            uVar36 = (local_70 >> 1) + local_70;
            if (uVar36 < uVar40) {
              uVar36 = uVar40;
            }
            uVar40 = uVar36 + 1;
            if (0xfff < uVar40) {
              if (0xffffffffffffffd8 < uVar40) {
                    /* WARNING: Subroutine does not return */
                FUN_1400bb790();
              }
              goto LAB_1400c2620;
            }
            pvVar44 = operator_new(uVar40);
          }
          local_78 = uVar25;
          local_70 = uVar36;
          if (uVar46 < 0x10) {
            memcpy(pvVar44,local_88,uVar46);
            *(undefined1 *)((longlong)pvVar44 + uVar46) = 10;
            *(undefined1 *)((longlong)pvVar44 + uVar46 + 1) = local_88[uVar46];
            local_88 = (undefined1  [8])pvVar44;
            pbVar37 = local_90;
          }
          else {
            auVar34 = local_88;
            memcpy(pvVar44,(void *)local_88,uVar46);
            pbVar37 = local_90;
            *(undefined1 *)((longlong)pvVar44 + uVar46) = 10;
            *(undefined1 *)((longlong)pvVar44 + uVar46 + 1) =
                 *(undefined1 *)((longlong)auVar34 + uVar46);
            auVar22 = auVar34;
            if ((0xfff < uVar25) &&
               (auVar22 = *(undefined1 (*) [8])((longlong)auVar34 + -8),
               0x1f < (ulonglong)((longlong)auVar34 + (-8 - (longlong)auVar22))))
            goto LAB_1400c2da0;
            free((void *)auVar22);
            local_88 = (undefined1  [8])pvVar44;
          }
        }
        else {
          auVar22 = (undefined1  [8])local_88;
          if (0xf < local_70) {
            auVar22 = local_88;
          }
          local_78 = local_78 + 1;
          *(undefined1 *)((longlong)auVar22 + uVar36 + 1) =
               *(undefined1 *)((longlong)auVar22 + uVar36);
          *(undefined1 *)((longlong)auVar22 + uVar36) = 10;
        }
      }
    }
    _local_108 = ZEXT1232(ZEXT812(0));
    pauVar20 = local_a0;
    if (0xf < *(ulonglong *)(*local_a0 + 0x18)) {
      pauVar20 = *(undefined1 (**) [32])*local_a0;
    }
    uVar36 = *(ulonglong *)(*local_a0 + 0x10);
    if ((longlong)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (uVar36 < 0x10) {
      auStack_100._4_4_ = 0;
      _local_108 = ZEXT812(0);
      auStack_100._8_8_ = uVar36;
      auStack_100._16_8_ = 0xf;
      _local_108 = *(undefined1 (*) [16])*pauVar20;
      pbVar30 = (byte *)0xf;
    }
    else {
      pbVar30 = (byte *)(uVar36 | 0xf);
      if (pbVar30 < (byte *)0x17) {
        pbVar30 = (byte *)0x16;
      }
      if (pbVar30 < (byte *)0xfff) {
        auVar54 = ZEXT1664(auVar54._0_16_);
        pvVar19 = operator_new((__uint64)(pbVar30 + 1));
      }
      else {
        auVar54 = ZEXT1664(auVar54._0_16_);
        pvVar44 = operator_new((__uint64)(pbVar30 + 0x28));
        pvVar19 = (void *)((longlong)pvVar44 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar19 - 8) = pvVar44;
      }
      local_108 = (undefined1  [8])pvVar19;
      auStack_100._8_8_ = uVar36;
      auStack_100._16_8_ = pbVar30;
      memcpy(pvVar19,pauVar20,uVar36 + 1);
    }
    uVar36 = local_78;
    _local_e8 = ZEXT1232(ZEXT812(0));
    auVar22 = (undefined1  [8])local_88;
    if (0xf < local_70) {
      auVar22 = local_88;
    }
    if ((longlong)local_78 < 0) {
      local_98 = pbVar30;
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (local_78 < 0x10) {
      lStack_e0._4_4_ = 0;
      _local_e8 = ZEXT812(0);
      uStack_d8 = local_78;
      uStack_d0 = 0xf;
      _local_e8 = *(undefined1 (*) [16])auVar22;
    }
    else {
      uVar46 = local_78 | 0xf;
      if (uVar46 < 0x17) {
        uVar46 = 0x16;
      }
      if (uVar46 < 0xfff) {
        auVar54 = ZEXT1664(auVar54._0_16_);
        local_98 = pbVar30;
        pvVar19 = operator_new(uVar46 + 1);
      }
      else {
        auVar54 = ZEXT1664(auVar54._0_16_);
        local_98 = pbVar30;
        pvVar44 = operator_new(uVar46 + 0x28);
        pvVar19 = (void *)((longlong)pvVar44 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar19 - 8) = pvVar44;
      }
      local_e8 = (undefined1  [8])pvVar19;
      uStack_d8 = uVar36;
      uStack_d0 = uVar46;
      memcpy(pvVar19,(void *)auVar22,uVar36 + 1);
    }
    plVar14 = DAT_14012b278;
    if (DAT_14012b278 == DAT_14012b280) {
      lVar31 = (longlong)DAT_14012b278 - (longlong)DAT_14012b270;
      uVar25 = lVar31 >> 6;
      uVar36 = uVar25 + 1;
      uVar46 = (uVar25 >> 1) + uVar25;
      if (uVar46 <= uVar36) {
        uVar46 = uVar36;
      }
      if (0x3ffffffffffffff - (uVar25 >> 1) < uVar25) {
        uVar46 = 0x3ffffffffffffff;
      }
      if (uVar46 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400bb790();
      }
      if (uVar46 < 0x40) {
        if (uVar46 == 0) {
          plVar45 = (longlong *)0x0;
        }
        else {
          auVar54 = ZEXT1664(auVar54._0_16_);
          plVar45 = operator_new(uVar46 * 0x40);
        }
      }
      else {
        auVar54 = ZEXT1664(auVar54._0_16_);
        pvVar19 = operator_new(uVar46 * 0x40 | 0x27);
        plVar45 = (longlong *)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
        plVar45[-1] = (longlong)pvVar19;
      }
      auVar53 = auVar54._0_16_;
      plVar51 = plVar45 + uVar25 * 8;
      *plVar51 = (longlong)local_108;
      plVar51[1] = auStack_100._0_8_;
      plVar51[2] = auStack_100._8_8_;
      plVar51[3] = auStack_100._16_8_;
      auStack_100._8_8_ = 0;
      auStack_100._16_8_ = 0xf;
      auVar9[0x1f] = 0;
      auVar9._0_31_ = stack0xfffffffffffffef9;
      _local_108 = auVar9 << 8;
      plVar51 = plVar45 + uVar25 * 8 + 4;
      *plVar51 = (longlong)local_e8;
      plVar51[1] = lStack_e0;
      plVar51[2] = uStack_d8;
      plVar51[3] = uStack_d0;
      plVar51 = DAT_14012b270;
      uStack_d8 = 0;
      uStack_d0 = 0xf;
      auVar10[0x1f] = 0;
      auVar10._0_31_ = stack0xffffffffffffff19;
      _local_e8 = auVar10 << 8;
      if (DAT_14012b278 == plVar14) {
        plVar50 = plVar14;
        if (DAT_14012b270 != plVar14) {
          lVar31 = 0;
          do {
            *(undefined1 (*) [32])((longlong)plVar45 + lVar31) = ZEXT1632(ZEXT816(0));
            puVar38 = (undefined8 *)((longlong)plVar51 + lVar31);
            uVar2 = puVar38[1];
            uVar3 = puVar38[2];
            uVar4 = puVar38[3];
            puVar29 = (undefined8 *)((longlong)plVar45 + lVar31);
            *puVar29 = *puVar38;
            puVar29[1] = uVar2;
            puVar29[2] = uVar3;
            puVar29[3] = uVar4;
            *(undefined8 *)((longlong)plVar51 + lVar31 + 0x10) = 0;
            *(undefined8 *)((longlong)plVar51 + lVar31 + 0x18) = 0xf;
            *(undefined1 *)((longlong)plVar51 + lVar31) = 0;
            *(undefined1 (*) [32])((longlong)plVar45 + lVar31 + 0x20) = ZEXT1632(ZEXT816(0));
            puVar38 = (undefined8 *)((longlong)plVar51 + lVar31 + 0x20);
            uVar2 = puVar38[1];
            uVar3 = puVar38[2];
            uVar4 = puVar38[3];
            puVar29 = (undefined8 *)((longlong)plVar45 + lVar31 + 0x20);
            *puVar29 = *puVar38;
            puVar29[1] = uVar2;
            puVar29[2] = uVar3;
            puVar29[3] = uVar4;
            *(undefined8 *)((longlong)plVar51 + lVar31 + 0x30) = 0;
            *(undefined8 *)((longlong)plVar51 + lVar31 + 0x38) = 0xf;
            *(undefined1 *)((longlong)plVar51 + lVar31 + 0x20) = 0;
            lVar26 = lVar31 + 0x40;
            lVar31 = lVar31 + 0x40;
            plVar50 = DAT_14012b270;
          } while ((longlong *)((longlong)plVar51 + lVar26) != plVar14);
        }
      }
      else {
        if (DAT_14012b270 != plVar14) {
          lVar26 = 0;
          do {
            puVar38 = (undefined8 *)((longlong)plVar45 + lVar26);
            *puVar38 = 0;
            puVar38[1] = 0;
            puVar38[2] = 0;
            puVar38[3] = 0;
            puVar38 = (undefined8 *)((longlong)plVar51 + lVar26);
            uVar2 = puVar38[1];
            uVar3 = puVar38[2];
            uVar4 = puVar38[3];
            puVar29 = (undefined8 *)((longlong)plVar45 + lVar26);
            *puVar29 = *puVar38;
            puVar29[1] = uVar2;
            puVar29[2] = uVar3;
            puVar29[3] = uVar4;
            *(undefined8 *)((longlong)plVar51 + lVar26 + 0x10) = 0;
            *(undefined8 *)((longlong)plVar51 + lVar26 + 0x18) = 0xf;
            *(undefined1 *)((longlong)plVar51 + lVar26) = 0;
            puVar38 = (undefined8 *)((longlong)plVar45 + lVar26 + 0x20);
            *puVar38 = 0;
            puVar38[1] = 0;
            puVar38[2] = 0;
            puVar38[3] = 0;
            puVar38 = (undefined8 *)((longlong)plVar51 + lVar26 + 0x20);
            uVar2 = puVar38[1];
            uVar3 = puVar38[2];
            uVar4 = puVar38[3];
            puVar29 = (undefined8 *)((longlong)plVar45 + lVar26 + 0x20);
            *puVar29 = *puVar38;
            puVar29[1] = uVar2;
            puVar29[2] = uVar3;
            puVar29[3] = uVar4;
            *(undefined8 *)((longlong)plVar51 + lVar26 + 0x30) = 0;
            *(undefined8 *)((longlong)plVar51 + lVar26 + 0x38) = 0xf;
            *(undefined1 *)((longlong)plVar51 + lVar26 + 0x20) = 0;
            lVar13 = lVar26 + 0x40;
            lVar26 = lVar26 + 0x40;
          } while ((longlong *)((longlong)plVar51 + lVar13) != plVar14);
        }
        plVar51 = DAT_14012b278;
        plVar50 = DAT_14012b270;
        if (DAT_14012b278 != plVar14) {
          lVar26 = 0;
          do {
            *(undefined1 (*) [32])((longlong)plVar45 + lVar26 + lVar31 + 0x40) =
                 ZEXT1232(ZEXT812(0));
            puVar38 = (undefined8 *)((longlong)plVar14 + lVar26);
            uVar2 = puVar38[1];
            uVar3 = puVar38[2];
            uVar4 = puVar38[3];
            puVar29 = (undefined8 *)((longlong)plVar45 + lVar26 + lVar31 + 0x40);
            *puVar29 = *puVar38;
            puVar29[1] = uVar2;
            puVar29[2] = uVar3;
            puVar29[3] = uVar4;
            *(undefined8 *)((longlong)plVar14 + lVar26 + 0x10) = 0;
            *(undefined8 *)((longlong)plVar14 + lVar26 + 0x18) = 0xf;
            *(undefined1 *)((longlong)plVar14 + lVar26) = 0;
            *(undefined1 (*) [32])((longlong)plVar45 + lVar26 + lVar31 + 0x60) =
                 ZEXT1232(ZEXT812(0));
            puVar29 = (undefined8 *)((longlong)plVar14 + lVar26 + 0x20);
            uVar2 = puVar29[1];
            uVar3 = puVar29[2];
            uVar4 = puVar29[3];
            puVar38 = (undefined8 *)((longlong)plVar45 + lVar26 + lVar31 + 0x60);
            *puVar38 = *puVar29;
            puVar38[1] = uVar2;
            puVar38[2] = uVar3;
            puVar38[3] = uVar4;
            *(undefined8 *)((longlong)plVar14 + lVar26 + 0x30) = 0;
            *(undefined8 *)((longlong)plVar14 + lVar26 + 0x38) = 0xf;
            *(undefined1 *)((longlong)plVar14 + lVar26 + 0x20) = 0;
            lVar13 = lVar26 + 0x40;
            lVar26 = lVar26 + 0x40;
            plVar50 = DAT_14012b270;
          } while ((longlong *)((longlong)plVar14 + lVar13) != plVar51);
        }
      }
      plVar51 = DAT_14012b278;
      plVar14 = plVar50;
      if (plVar50 != (longlong *)0x0) {
        for (; plVar50 != plVar51; plVar50 = plVar50 + 8) {
          if (0xf < (ulonglong)plVar50[7]) {
            pvVar19 = (void *)plVar50[4];
            pvVar44 = pvVar19;
            if ((0xfff < plVar50[7] + 1U) &&
               (pvVar44 = *(void **)((longlong)pvVar19 + -8),
               0x1f < (ulonglong)((longlong)pvVar19 + (-8 - (longlong)pvVar44))))
            goto LAB_1400c2da0;
            auVar54 = ZEXT1664(auVar54._0_16_);
            free(pvVar44);
          }
          plVar50[6] = 0;
          plVar50[7] = 0xf;
          *(undefined1 *)(plVar50 + 4) = 0;
          if (0xf < (ulonglong)plVar50[3]) {
            pvVar19 = (void *)*plVar50;
            pvVar44 = pvVar19;
            if ((0xfff < plVar50[3] + 1U) &&
               (pvVar44 = *(void **)((longlong)pvVar19 + -8),
               0x1f < (ulonglong)((longlong)pvVar19 + (-8 - (longlong)pvVar44))))
            goto LAB_1400c2da0;
            auVar54 = ZEXT1664(auVar54._0_16_);
            free(pvVar44);
          }
          auVar53 = auVar54._0_16_;
          plVar50[2] = 0;
          plVar50[3] = 0xf;
          *(undefined1 *)plVar50 = 0;
          plVar14 = DAT_14012b270;
        }
        plVar51 = plVar14;
        if ((0xfff < (ulonglong)((longlong)DAT_14012b280 - (longlong)plVar14)) &&
           (plVar51 = (longlong *)plVar14[-1],
           (undefined1 *)0x1f < (undefined1 *)((longlong)plVar14 + (-8 - (longlong)plVar51)))) {
LAB_1400c2da0:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        auVar54 = ZEXT1664(auVar53);
        free(plVar51);
      }
      DAT_14012b278 = plVar45 + uVar36 * 8;
      DAT_14012b280 = plVar45 + uVar46 * 8;
      DAT_14012b270 = plVar45;
    }
    else {
      *DAT_14012b278 = (longlong)local_108;
      plVar14[1] = auStack_100._0_8_;
      plVar14[2] = auStack_100._8_8_;
      plVar14[3] = auStack_100._16_8_;
      auStack_100._8_8_ = 0;
      auStack_100._16_8_ = 0xf;
      auVar8[0x1f] = 0;
      auVar8._0_31_ = stack0xfffffffffffffef9;
      _local_108 = auVar8 << 8;
      plVar14[4] = (longlong)local_e8;
      plVar14[5] = lStack_e0;
      plVar14[6] = uStack_d8;
      plVar14[7] = uStack_d0;
      uStack_d8 = 0;
      DAT_14012b278 = DAT_14012b278 + 8;
    }
    if (0xf < local_70) {
      auVar22 = local_88;
      if ((0xfff < local_70 + 1) &&
         (auVar22 = *(undefined1 (*) [8])((longlong)local_88 + -8),
         0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)auVar22)))) goto LAB_1400c2da0;
      auVar54 = ZEXT1664(auVar54._0_16_);
      free((void *)auVar22);
    }
  }
LAB_1400c2cb0:
  puVar29 = DAT_14012ab18;
  for (puVar38 = (undefined8 *)*DAT_14012ab18; pauVar20 = local_a0, puVar38 != puVar29;
      puVar38 = (undefined8 *)*puVar38) {
    if ((ulonglong)puVar38[5] < 0x10) {
      pcVar48 = (char *)(puVar38 + 2);
    }
    else {
      pcVar48 = (char *)puVar38[2];
    }
    auVar54 = ZEXT1664(auVar54._0_16_);
    pcVar48 = strstr((char *)&local_c0,pcVar48);
    if (pcVar48 != (char *)0x0) {
      LOCK();
      DAT_14012b250 = 1;
      UNLOCK();
    }
  }
LAB_1400c2d04:
  if (local_b8 != (byte *)0x0) {
    auVar11._24_8_ = 0;
    auVar11._0_24_ = auStack_100;
    _local_108 = auVar11 << 0x40;
    auVar54 = ZEXT1664(auVar54._0_16_);
    NtFreeVirtualMemory(0xffffffffffffffff,&local_b8,local_108,0x8000);
  }
  pauVar20 = (undefined1 (*) [32])(pauVar20[1] + 8);
  goto LAB_1400c1d14;
}

