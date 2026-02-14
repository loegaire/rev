
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400de180(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 uVar6;
  LSTATUS LVar7;
  uint uVar8;
  undefined1 (*pauVar9) [32];
  undefined8 *puVar10;
  int *piVar11;
  longlong *plVar12;
  void *pvVar13;
  longlong *plVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 auVar18 [8];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [32];
  longlong *plVar22;
  longlong *plVar23;
  ulonglong uVar24;
  void *pvVar25;
  longlong *plVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  longlong *plVar34;
  ulonglong uVar35;
  undefined1 (*pauVar36) [32];
  ulonglong uVar37;
  undefined1 (*pauVar38) [32];
  undefined1 *puVar39;
  undefined1 (*pauVar40) [32];
  code *pcVar41;
  undefined4 *_Buf1;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [16];
  undefined8 uVar50;
  undefined8 uVar52;
  undefined1 auVar51 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar55 [64];
  undefined1 in_ZMM9 [64];
  undefined1 auVar56 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar57 [64];
  undefined8 local_248 [3];
  undefined1 (*local_230) [32];
  undefined1 (*local_228) [16];
  undefined1 (*local_220) [16];
  undefined1 (*local_218) [32];
  longlong local_210;
  longlong local_208;
  void *local_200;
  undefined1 local_1f8 [8];
  HKEY pHStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  undefined1 local_1d8 [16];
  ulonglong uStack_1c8;
  undefined1 (*pauStack_1c0) [32];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined1 (*pauStack_1b0) [32];
  ulonglong uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 (*local_190) [32];
  undefined8 local_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *plStack_170;
  longlong local_168;
  undefined2 uStack_160;
  undefined6 uStack_15e;
  longlong lStack_158;
  longlong lStack_150;
  int *local_148;
  undefined1 local_140 [16];
  longlong local_130;
  wchar_t *local_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined1 (*local_100) [16];
  undefined1 (*local_f8) [32];
  undefined1 (*local_f0) [16];
  longlong local_e8;
  undefined1 (*local_e0) [16];
  int *local_d8;
  undefined1 (*local_d0) [16];
  undefined1 (*local_c8) [32];
  undefined1 (*local_c0) [32];
  undefined1 (*local_b8) [32];
  undefined1 (*local_b0) [32];
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM10._0_16_;
  local_68 = in_ZMM9._0_16_;
  local_78 = in_ZMM8._0_16_;
  local_88 = in_ZMM7._0_16_;
  local_a0 = 0xfffffffffffffffe;
  if (DAT_14012abf8 != '\0') {
    return;
  }
  _local_1f8 = ZEXT816(0xffffffff80000002);
  LVar7 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,L"SYSTEM\\CurrentControlSet\\Enum",0,0x20019,
                        (PHKEY)(local_1f8 + 8));
  if (LVar7 == 0) {
    local_128 = L"SYSTEM\\CurrentControlSet\\Enum";
    uStack_120 = 0x1d;
    local_248[0] = local_1f8;
    local_248[1] = pHStack_1f0;
    FUN_1400cf330((undefined1 (*) [32])local_1d8,local_248,&local_128);
    RegCloseKey(pHStack_1f0);
    auVar43 = in_ZMM9._0_16_;
    if (lStack_150 == 0) goto LAB_1400de2eb;
    local_b8 = operator_new(0x50);
    *(undefined1 (**) [32])*local_b8 = local_b8;
    *(undefined1 (**) [32])((longlong)*local_b8 + 8) = local_b8;
    puVar10 = operator_new(0x80);
    pauVar21 = pauStack_1b0;
    local_210 = local_130;
    local_208 = local_168;
    local_218 = local_190;
    local_190 = (undefined1 (*) [32])(puVar10 + 0x10);
    *puVar10 = local_b8;
    puVar10[1] = local_b8;
    puVar10[2] = local_b8;
    puVar10[3] = local_b8;
    puVar10[4] = local_b8;
    puVar10[5] = local_b8;
    puVar10[6] = local_b8;
    puVar10[7] = local_b8;
    puVar10[8] = local_b8;
    puVar10[9] = local_b8;
    puVar10[10] = local_b8;
    puVar10[0xb] = local_b8;
    puVar10[0xc] = local_b8;
    puVar10[0xd] = local_b8;
    puVar10[0xe] = local_b8;
    puVar10[0xf] = local_b8;
    pauStack_1b0 = local_b8;
    uStack_1a8 = 0;
    auVar51 = ZEXT1664(auStack_1a0);
    auStack_1a0._8_8_ = local_190;
    auStack_1a0._0_8_ = puVar10;
    local_188 = 7;
    local_180 = 8;
    auVar53 = ZEXT1664(CONCAT88(plStack_170,local_178));
    local_178 = (longlong *)0x0;
    plStack_170 = (longlong *)0x0;
    local_168 = 0;
    local_200 = (void *)CONCAT62(uStack_15e,uStack_160);
    local_d8 = local_148;
    lStack_150 = 0;
    local_148 = (int *)0x7;
    uStack_160 = 0;
    auVar55 = ZEXT1664(local_140);
LAB_1400de548:
    local_140 = (undefined1  [16])0x0;
    local_130 = 0;
  }
  else {
    pauStack_1b0 = (undefined1 (*) [32])0x0;
    uStack_1a8 = 0;
    _local_1d8 = ZEXT1232(ZEXT812(0));
    local_1b8 = 0;
    uVar50 = 0;
    uVar52 = 0;
    auVar51 = ZEXT1664(in_ZMM9._0_16_);
    pauStack_1b0 = operator_new(0x50);
    *(undefined1 (**) [32])*pauStack_1b0 = pauStack_1b0;
    *(undefined1 (**) [32])((longlong)*pauStack_1b0 + 8) = pauStack_1b0;
    local_190 = (undefined1 (*) [32])0x0;
    local_188 = 7;
    local_180 = 8;
    local_1b8 = 0x3f800000;
    local_b8 = pauStack_1b0;
    auStack_1a0._0_8_ = uVar50;
    auStack_1a0._8_8_ = uVar52;
    auStack_1a0._0_8_ = operator_new(0x80);
    auVar43 = auVar51._0_16_;
    local_190 = (undefined1 (*) [32])(auStack_1a0._0_8_ + 0x80);
    auStack_1a0._8_8_ = local_190;
    *(undefined1 (**) [32])auStack_1a0._0_8_ = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 8) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x10) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x18) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x20) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x28) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x30) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x38) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x40) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x48) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x50) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x58) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x60) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x68) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x70) = local_b8;
    *(undefined1 (**) [32])(auStack_1a0._0_8_ + 0x78) = local_b8;
    local_178 = (longlong *)0x0;
    lStack_158 = 0;
    lStack_150 = 0;
    plStack_170 = SUB328(ZEXT832(0),4);
    uStack_160 = 0;
    uStack_15e = 0;
    local_148 = (int *)0x7;
    local_140 = ZEXT816(0) << 0x20;
    local_130 = 0;
    local_168 = lStack_158;
LAB_1400de2eb:
    in_ZMM9 = ZEXT1664(auVar43);
    local_f8 = operator_new(0x50);
    *(undefined1 (**) [32])*local_f8 = local_f8;
    *(undefined1 (**) [32])((longlong)*local_f8 + 8) = local_f8;
    pauVar9 = operator_new(0x80);
    pauVar21 = local_f8;
    auVar54 = in_ZMM9._0_16_;
    local_218 = pauVar9 + 4;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = pauVar9;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = local_218;
    auVar43 = vpunpcklqdq_avx(auVar43,auVar49);
    auVar51 = ZEXT1664(auVar43);
    auVar47._8_8_ = local_f8;
    auVar47._0_8_ = local_f8;
    auVar47._16_8_ = local_f8;
    auVar47._24_8_ = local_f8;
    *pauVar9 = auVar47;
    pauVar9[1] = auVar47;
    pauVar9[2] = auVar47;
    pauVar9[3] = auVar47;
    if ((void *)local_140._0_8_ != (void *)0x0) {
      uVar50 = local_140._8_8_;
      pvVar25 = (void *)local_140._0_8_;
      if (local_140._0_8_ != local_140._8_8_) {
        do {
          auVar51 = ZEXT1664(auVar51._0_16_);
          in_ZMM9 = ZEXT1664(in_ZMM9._0_16_);
          FUN_1400dc310((longlong)pvVar25);
          auVar54 = in_ZMM9._0_16_;
          auVar43 = auVar51._0_16_;
          pvVar25 = (void *)((longlong)pvVar25 + 0xb0);
        } while (pvVar25 != (void *)uVar50);
      }
      pvVar25 = (void *)local_140._0_8_;
      if ((0xfff < (ulonglong)(local_130 - local_140._0_8_)) &&
         (pvVar25 = *(void **)(local_140._0_8_ + -8),
         0x1f < (ulonglong)(local_140._0_8_ + (-8 - (longlong)pvVar25)))) goto LAB_1400e0439;
      auVar51 = ZEXT1664(auVar43);
      in_ZMM9 = ZEXT1664(auVar54);
      free(pvVar25);
      local_d8 = (int *)0x7;
      auVar55 = ZEXT1664((undefined1  [16])0x0);
      local_200 = (void *)0x0;
      local_210 = 0;
      auVar53 = ZEXT1664((undefined1  [16])0x0);
      local_208 = 0;
      goto LAB_1400de548;
    }
    local_d8 = (int *)0x7;
    auVar55 = ZEXT1664((undefined1  [16])0x0);
    local_200 = (void *)0x0;
    local_210 = 0;
    auVar53 = ZEXT1664((undefined1  [16])0x0);
    local_208 = 0;
  }
  if ((int *)0x7 < local_148) {
    pvVar13 = (void *)CONCAT62(uStack_15e,uStack_160);
    pvVar25 = pvVar13;
    if ((0xfff < (longlong)local_148 * 2 + 2U) &&
       (pvVar25 = *(void **)((longlong)pvVar13 + -8),
       0x1f < (ulonglong)((longlong)pvVar13 + (-8 - (longlong)pvVar25)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar53._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    in_ZMM9 = ZEXT1664(in_ZMM9._0_16_);
    free(pvVar25);
  }
  plVar22 = plStack_170;
  auVar46 = in_ZMM9._0_16_;
  auVar54 = auVar55._0_16_;
  auVar49 = auVar53._0_16_;
  auVar43 = auVar51._0_16_;
  lStack_150 = 0;
  local_148 = (int *)0x7;
  uStack_160 = 0;
  local_f8 = pauVar21;
  plVar12 = local_178;
  if (local_178 != (longlong *)0x0) {
    for (; plVar12 != plVar22; plVar12 = plVar12 + 5) {
      if (7 < (ulonglong)plVar12[3]) {
        pvVar25 = (void *)*plVar12;
        pvVar13 = pvVar25;
        if ((0xfff < plVar12[3] * 2 + 2U) &&
           (pvVar13 = *(void **)((longlong)pvVar25 + -8),
           0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
        auVar51 = ZEXT1664(auVar51._0_16_);
        auVar53 = ZEXT1664(auVar53._0_16_);
        auVar55 = ZEXT1664(auVar55._0_16_);
        in_ZMM9 = ZEXT1664(in_ZMM9._0_16_);
        free(pvVar13);
      }
      auVar46 = in_ZMM9._0_16_;
      auVar54 = auVar55._0_16_;
      auVar49 = auVar53._0_16_;
      auVar43 = auVar51._0_16_;
      plVar12[2] = 0;
      plVar12[3] = 7;
      *(undefined2 *)plVar12 = 0;
    }
    plVar12 = local_178;
    if ((0xfff < (ulonglong)(local_168 - (longlong)local_178)) &&
       (plVar12 = (longlong *)local_178[-1],
       0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)plVar12)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar43);
    auVar53 = ZEXT1664(auVar49);
    auVar55 = ZEXT1664(auVar54);
    auVar56 = ZEXT1664(auVar46);
    free(plVar12);
    auVar46 = auVar56._0_16_;
    local_178 = (longlong *)0x0;
    plStack_170 = (longlong *)0x0;
    local_168 = 0;
  }
  if ((void *)auStack_1a0._0_8_ != (void *)0x0) {
    pvVar25 = (void *)auStack_1a0._0_8_;
    if ((0xfff < (ulonglong)((longlong)local_190 - auStack_1a0._0_8_)) &&
       (pvVar25 = *(void **)(auStack_1a0._0_8_ + -8),
       0x1f < (ulonglong)(auStack_1a0._0_8_ + (-8 - (longlong)pvVar25)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar53._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    auVar56 = ZEXT1664(auVar46);
    free(pvVar25);
    auVar46 = auVar56._0_16_;
    auStack_1a0 = (undefined1  [16])0x0;
    local_190 = (undefined1 (*) [32])0x0;
  }
  auVar54 = auVar55._0_16_;
  auVar49 = auVar53._0_16_;
  auVar43 = auVar51._0_16_;
  **(undefined8 **)((longlong)*pauStack_1b0 + 8) = 0;
  if (*(longlong **)*pauStack_1b0 != (longlong *)0x0) {
    auVar56 = ZEXT1664((undefined1  [16])0x0);
    plVar12 = *(longlong **)*pauStack_1b0;
    do {
      auVar46 = auVar56._0_16_;
      auVar54 = auVar55._0_16_;
      auVar49 = auVar53._0_16_;
      auVar43 = auVar51._0_16_;
      plVar22 = (longlong *)*plVar12;
      pvVar25 = (void *)plVar12[7];
      if (pvVar25 != (void *)0x0) {
        pvVar13 = pvVar25;
        if ((0xfff < (ulonglong)(plVar12[9] - (longlong)pvVar25)) &&
           (pvVar13 = *(void **)((longlong)pvVar25 + -8),
           0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
        auVar51 = ZEXT1664(auVar43);
        auVar53 = ZEXT1664(auVar49);
        auVar55 = ZEXT1664(auVar54);
        auVar56 = ZEXT1664(auVar46);
        free(pvVar13);
        auVar54 = auVar55._0_16_;
        auVar49 = auVar53._0_16_;
        auVar43 = auVar51._0_16_;
        auVar46 = auVar56._0_16_;
        *(undefined1 (*) [16])(plVar12 + 7) = auVar46;
        plVar12[9] = 0;
      }
      if (7 < (ulonglong)plVar12[5]) {
        pvVar25 = (void *)plVar12[2];
        pvVar13 = pvVar25;
        if ((0xfff < plVar12[5] * 2 + 2U) &&
           (pvVar13 = *(void **)((longlong)pvVar25 + -8),
           0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
        auVar51 = ZEXT1664(auVar43);
        auVar53 = ZEXT1664(auVar49);
        auVar55 = ZEXT1664(auVar54);
        auVar56 = ZEXT1664(auVar46);
        free(pvVar13);
        auVar46 = auVar56._0_16_;
        auVar54 = auVar55._0_16_;
        auVar49 = auVar53._0_16_;
        auVar43 = auVar51._0_16_;
      }
      auVar51 = ZEXT1664(auVar43);
      auVar53 = ZEXT1664(auVar49);
      auVar55 = ZEXT1664(auVar54);
      auVar56 = ZEXT1664(auVar46);
      free(plVar12);
      auVar46 = auVar56._0_16_;
      auVar54 = auVar55._0_16_;
      auVar49 = auVar53._0_16_;
      auVar43 = auVar51._0_16_;
      plVar12 = plVar22;
    } while (plVar22 != (longlong *)0x0);
  }
  auVar51 = ZEXT1664(auVar43);
  auVar53 = ZEXT1664(auVar49);
  auVar55 = ZEXT1664(auVar54);
  auVar56 = ZEXT1664(auVar46);
  free(pauStack_1b0);
  local_e8 = 0;
  local_f0 = operator_new(0x60);
  *(undefined1 (**) [16])*local_f0 = local_f0;
  *(undefined1 (**) [16])(*local_f0 + 8) = local_f0;
  *(undefined1 (**) [16])local_f0[1] = local_f0;
  *(undefined2 *)(local_f0[1] + 8) = 0x101;
  pauVar17 = auVar55._0_8_;
  local_220 = (undefined1 (*) [16])vpextrq_avx(auVar55._0_16_,1);
  auVar55 = ZEXT1664(_DAT_14010b200);
  auVar43 = vpcmpeqd_avx(auVar56._0_16_,auVar56._0_16_);
  auVar56 = ZEXT1664(auVar43);
  auVar57 = ZEXT1664(_DAT_14010b210);
  pauVar21 = (undefined1 (*) [32])0x0;
  pauVar9 = (undefined1 (*) [32])0x0;
  pauVar38 = (undefined1 (*) [32])0x0;
  piVar11 = local_d8;
  local_228 = pauVar17;
  while (pauVar17 != local_220) {
    pauVar40 = *(undefined1 (**) [32])pauVar17[6];
    local_c0 = *(undefined1 (**) [32])(pauVar17[6] + 8);
    local_d0 = pauVar17;
LAB_1400de922:
    if (pauVar40 != local_c0) {
      pauVar36 = pauVar40;
      if (7 < *(ulonglong *)((longlong)*pauVar40 + 0x18)) {
        pauVar36 = *(undefined1 (**) [32])*pauVar40;
      }
      lVar29 = *(longlong *)((longlong)*pauVar40 + 0x10);
      uVar37 = lVar29 * 4;
      local_1d8 = ZEXT816(0);
      uStack_1c8 = 0;
      pauStack_1c0 = (undefined1 (*) [32])0x0;
      local_b8 = pauVar9;
      if ((longlong)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140086cb0();
      }
      auVar43 = auVar51._0_16_;
      auVar49 = auVar53._0_16_;
      auVar54 = auVar55._0_16_;
      auVar46 = auVar56._0_16_;
      auVar44 = auVar57._0_16_;
      local_b0 = pauVar40;
      if (uVar37 < 0x10) {
        uStack_1c8 = uVar37;
        pauStack_1c0 = (undefined1 (*) [32])0xf;
        auVar51 = ZEXT1664(auVar43);
        auVar53 = ZEXT1664(auVar49);
        auVar55 = ZEXT1664(auVar54);
        auVar56 = ZEXT1664(auVar46);
        auVar57 = ZEXT1664(auVar44);
        memset(local_1d8,0,uVar37);
        puVar39 = local_1d8;
      }
      else {
        pauStack_1c0 = (undefined1 (*) [32])0xf;
        uVar28 = uVar37 | 0xf;
        if (uVar28 < 0x17) {
          uVar28 = 0x16;
        }
        if (uVar28 < 0xfff) {
          auVar51 = ZEXT1664(auVar43);
          auVar53 = ZEXT1664(auVar49);
          auVar55 = ZEXT1664(auVar54);
          auVar56 = ZEXT1664(auVar46);
          auVar57 = ZEXT1664(auVar44);
          puVar39 = operator_new(uVar28 + 1);
        }
        else {
          auVar51 = ZEXT1664(auVar43);
          auVar53 = ZEXT1664(auVar49);
          auVar55 = ZEXT1664(auVar54);
          auVar56 = ZEXT1664(auVar46);
          auVar57 = ZEXT1664(auVar44);
          pvVar25 = operator_new(uVar28 + 0x28);
          puVar39 = (undefined1 *)((longlong)pvVar25 + 0x27U & 0xffffffffffffffe0);
          *(void **)(puVar39 + -8) = pvVar25;
        }
        local_1d8._0_8_ = puVar39;
        uStack_1c8 = uVar37;
        pauStack_1c0 = (undefined1 (*) [32])uVar28;
        memset(puVar39,0,uVar37);
      }
      puVar39[uVar37] = 0;
      pauVar17 = &local_1d8;
      if (0xf < pauStack_1c0) {
        pauVar17 = (undefined1 (*) [16])local_1d8._0_8_;
      }
      auVar54 = auVar57._0_16_;
      auVar43 = auVar55._0_16_;
      auVar49 = auVar56._0_16_;
      pauVar16 = pauVar17;
      if (lVar29 != 0) {
        pauVar9 = (undefined1 (*) [32])((longlong)*pauVar36 + lVar29 * 2);
        do {
          if ((ulonglong)((longlong)pauVar9 - (longlong)pauVar36) < 0x1f) goto LAB_1400deea0;
          auVar47 = *pauVar36;
          auVar48 = vpmaxuw_avx2(auVar47,_DAT_14010b220);
          auVar48 = vpcmpeqw_avx2(auVar47,auVar48);
          auVar47 = vpand_avx2(auVar47,_DAT_14010b240);
          auVar46 = vpackuswb_avx(auVar47._0_16_,auVar47._16_16_);
          *pauVar16 = auVar46;
          if (auVar48 == (undefined1  [32])0x0) {
            uVar28 = (longlong)pauVar9 - (longlong)pauVar36 >> 1;
            uVar37 = 0;
            do {
              uVar24 = uVar37 + 0x10;
              uVar35 = uVar37 + 0x20;
              uVar37 = uVar24;
              if ((uVar28 < uVar35) && (uVar37 = uVar28 - 0x10, uVar24 == uVar28))
              goto LAB_1400debac;
              auVar47 = *(undefined1 (*) [32])((longlong)*pauVar36 + uVar37 * 2);
              auVar48 = vpmaxuw_avx2(auVar47,_DAT_14010b220);
              auVar48 = vpcmpeqw_avx2(auVar47,auVar48);
              auVar47 = vpand_avx2(auVar47,_DAT_14010b240);
              auVar46 = vpackuswb_avx(auVar47._0_16_,auVar47._16_16_);
              *(undefined1 (*) [16])(*pauVar16 + uVar37) = auVar46;
            } while (auVar48 == (undefined1  [32])0x0);
          }
          else {
            uVar37 = 0;
          }
          iVar27 = 0;
          uVar32 = (uint)(SUB321(auVar48 >> 7,0) & 1) | (uint)(SUB321(auVar48 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar48 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar48 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar48 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar48 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar48 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar48 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar48 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar48 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar48 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar48 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar48 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar48 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar48 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar48 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar48 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar48 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar48 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar48 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar48 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar48 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar48 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar48 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar48 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar48 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar48 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar48 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar48 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar48 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar48 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar48[0x1f] >> 7) << 0x1f;
          for (uVar8 = uVar32; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            iVar27 = iVar27 + 1;
          }
          if (uVar32 == 0) {
            iVar27 = -2;
          }
          uVar28 = ((ulonglong)(longlong)iVar27 >> 1) + uVar37;
LAB_1400debac:
          pauVar40 = (undefined1 (*) [32])((longlong)*pauVar36 + uVar28 * 2);
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + uVar28);
          if (pauVar40 == pauVar9) break;
          uVar3 = *(ushort *)*pauVar40;
          if ((uVar3 & 0xfc00) == 0xd800) {
            bVar42 = (longlong)pauVar9 - (longlong)pauVar40 != 2;
            uVar37 = (ulonglong)bVar42;
            iVar27 = (uint)uVar3 * 0x400 + -0x35fdc00;
            if (!bVar42) {
              iVar27 = 0;
            }
            lVar29 = uVar37 + 1;
            uVar32 = iVar27 + (uint)*(ushort *)((longlong)*pauVar40 + uVar37 * 2);
            if (uVar32 < 0x80) goto LAB_1400dec40;
LAB_1400dec08:
            if (uVar32 < 0x800) {
              uVar8 = 1;
              uVar33 = 0;
              do {
                if ((uVar8 & 0x73f3f3f) != 0) {
                  uVar33 = uVar33 | (uVar8 & 0x73f3f3f) * (uVar32 & 1);
                  uVar32 = uVar32 >> 1;
                }
                uVar8 = uVar8 << 1;
              } while (uVar8 != 0);
              uVar1 = swap_bytes((ushort)uVar33 | 0xc080);
              *(undefined2 *)*pauVar16 = uVar1;
              pauVar16 = (undefined1 (*) [16])(*pauVar16 + 2);
            }
            else {
              uVar33 = 1;
              uVar5 = 0;
              uVar8 = uVar32;
              do {
                if ((uVar33 & 0x73f3f3f) != 0) {
                  uVar5 = uVar5 | (uVar33 & 0x73f3f3f) * (uVar8 & 1);
                  uVar8 = uVar8 >> 1;
                }
                uVar33 = uVar33 << 1;
              } while (uVar33 != 0);
              if (uVar32 < 0x10000) {
                (*pauVar16)[0] = (char)((uVar5 | 0x80e08080) >> 0x10);
                uVar1 = swap_bytes((short)(uVar5 | 0x80e08080));
                *(undefined2 *)(*pauVar16 + 1) = uVar1;
                pauVar16 = (undefined1 (*) [16])(*pauVar16 + 3);
              }
              else {
                uVar2 = swap_bytes(uVar5 | 0xf0808080);
                *(undefined4 *)*pauVar16 = uVar2;
                pauVar16 = (undefined1 (*) [16])(*pauVar16 + 4);
              }
            }
          }
          else {
            uVar32 = (uint)uVar3;
            lVar29 = 1;
            if (0x7f < uVar32) goto LAB_1400dec08;
LAB_1400dec40:
            (*pauVar16)[0] = (char)uVar32;
            pauVar16 = (undefined1 (*) [16])(*pauVar16 + 1);
          }
          pauVar36 = (undefined1 (*) [32])((longlong)*pauVar40 + lVar29 * 2);
        } while (pauVar36 != pauVar9);
      }
      goto LAB_1400df160;
    }
    pauVar17 = local_d0 + 0xb;
  }
  auVar55 = ZEXT1664((undefined1  [16])0x0);
  pauVar40 = pauVar38;
  pcVar41 = tolower_exref;
  local_230 = pauVar21;
  local_b8 = pauVar9;
LAB_1400df1bd:
  auVar49 = auVar53._0_16_;
  auVar43 = auVar51._0_16_;
  if (pauVar40 != pauVar9) {
    pauVar21 = pauVar40;
    if (0xf < *(ulonglong *)((longlong)*pauVar40 + 0x18)) {
      pauVar21 = *(undefined1 (**) [32])*pauVar40;
    }
    uVar37 = *(ulonglong *)((longlong)*pauVar40 + 0x10);
    lVar29 = -1;
    bVar42 = true;
    uVar28 = 0;
    local_b0 = pauVar40;
    if (uVar37 != 0) {
      do {
        auVar51 = ZEXT1664(auVar51._0_16_);
        auVar53 = ZEXT1664(auVar53._0_16_);
        auVar55 = ZEXT1664(auVar55._0_16_);
        uVar6 = (*pcVar41)(*(undefined1 *)((longlong)*pauVar21 + uVar28));
        *(undefined1 *)((longlong)*pauVar21 + uVar28) = uVar6;
        uVar28 = uVar28 + 1;
      } while (uVar37 != uVar28);
      uVar28 = *(ulonglong *)((longlong)*local_b0 + 0x10);
      pauVar21 = local_b0;
      if (0xf < *(ulonglong *)((longlong)*local_b0 + 0x18)) {
        pauVar21 = *(undefined1 (**) [32])*local_b0;
      }
      if (3 < uVar28) {
        pauVar9 = pauVar21;
        while (piVar11 = memchr(pauVar9,0x76,(longlong)pauVar21 + ((uVar28 - 3) - (longlong)pauVar9)
                               ), piVar11 != (int *)0x0) {
          if (*piVar11 == 0x5f646976) {
            lVar29 = (longlong)piVar11 - (longlong)pauVar21;
            bVar42 = false;
            goto LAB_1400df290;
          }
          pauVar9 = (undefined1 (*) [32])((longlong)piVar11 + 1);
        }
        bVar42 = false;
      }
    }
LAB_1400df290:
    pauVar40 = local_b0;
    _local_1f8 = auVar55._0_16_;
    uStack_1c8 = 0;
    local_1d8 = _local_1f8;
    pauStack_1c0 = (undefined1 (*) [32])0xf;
    uStack_1e8 = 0;
    uStack_1e0 = 0xf;
    if (lVar29 != -1) {
      uVar37 = lVar29 + 4;
      local_128 = auVar55._0_8_;
      uStack_120 = auVar55._8_8_;
      uVar24 = uVar28 - uVar37;
      if (uVar28 < uVar37) {
        FUN_1400e1900();
LAB_1400e0db0:
                    /* WARNING: Subroutine does not return */
        FUN_140086cb0();
      }
      if (3 < uVar24) {
        uVar24 = 4;
      }
      uStack_110 = 0xf;
      auVar51 = ZEXT1664(auVar51._0_16_);
      auVar53 = ZEXT1664(auVar53._0_16_);
      auVar55 = ZEXT1664(_local_1f8);
      uStack_118 = uVar24;
      memcpy(&local_128,(void *)((longlong)*pauVar21 + uVar37),uVar24);
      pauVar40 = local_b0;
      *(undefined1 *)(uVar24 | (ulonglong)&local_128) = 0;
      pcVar41 = tolower_exref;
      local_1d8._8_8_ = uStack_120;
      local_1d8._0_8_ = local_128;
      uStack_1c8 = uStack_118;
      pauStack_1c0 = (undefined1 (*) [32])uStack_110;
      if (!bVar42) {
        pauVar9 = pauVar21;
        while( true ) {
          auVar51 = ZEXT1664(auVar51._0_16_);
          auVar53 = ZEXT1664(auVar53._0_16_);
          auVar55 = ZEXT1664(auVar55._0_16_);
          piVar11 = memchr(pauVar9,0x70,(longlong)pauVar21 + ((uVar28 - 3) - (longlong)pauVar9));
          if (piVar11 == (int *)0x0) break;
          if (*piVar11 == 0x5f646970) {
            if ((longlong)piVar11 - (longlong)pauVar21 != -1) {
              uVar37 = ((longlong)piVar11 - (longlong)pauVar21) + 4;
              local_128 = auVar55._0_8_;
              uStack_120 = auVar55._8_8_;
              uVar24 = uVar28 - uVar37;
              if (uVar28 < uVar37) {
                FUN_1400e1900();
                goto LAB_1400e0dc5;
              }
              if (3 < uVar24) {
                uVar24 = 4;
              }
              uStack_110 = 0xf;
              uStack_118 = uVar24;
              memcpy(&local_128,(void *)((longlong)pauVar21 + uVar37),uVar24);
              *(undefined1 *)(uVar24 | (ulonglong)&local_128) = 0;
              pHStack_1f0 = (HKEY)uStack_120;
              local_1f8 = (undefined1  [8])local_128;
              uStack_1e8 = uStack_118;
              uStack_1e0 = uStack_110;
              local_100 = local_f0;
              auVar51 = ZEXT1664(auVar51._0_16_);
              auVar53 = ZEXT1664(auVar53._0_16_);
              auVar55 = ZEXT1664(auVar55._0_16_);
              plVar12 = operator_new(0x60);
              plVar12[4] = 0;
              plVar12[5] = 0;
              plVar12[6] = 0;
              plVar12[7] = 0;
              puVar10 = (undefined8 *)local_1d8;
              if (0xf < pauStack_1c0) {
                puVar10 = (undefined8 *)local_1d8._0_8_;
              }
              uVar37 = uStack_1c8;
              local_a8 = plVar12;
              if ((longlong)uStack_1c8 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140086cb0();
              }
              pauVar21 = (undefined1 (*) [32])(plVar12 + 4);
              if (uStack_1c8 < 0x10) {
                plVar12[6] = uStack_1c8;
                plVar12[7] = 0xf;
                lVar29 = puVar10[1];
                *(undefined8 *)*pauVar21 = *puVar10;
                plVar12[5] = lVar29;
              }
              else {
                plVar12[7] = 0xf;
                uVar28 = uStack_1c8 | 0xf;
                if (uVar28 < 0x17) {
                  uVar28 = 0x16;
                }
                if (uVar28 < 0xfff) {
                  auVar51 = ZEXT1664(auVar51._0_16_);
                  auVar53 = ZEXT1664(auVar53._0_16_);
                  auVar55 = ZEXT1664(auVar55._0_16_);
                  pvVar25 = operator_new(uVar28 + 1);
                }
                else {
                  auVar51 = ZEXT1664(auVar51._0_16_);
                  auVar53 = ZEXT1664(auVar53._0_16_);
                  auVar55 = ZEXT1664(auVar55._0_16_);
                  pvVar13 = operator_new(uVar28 + 0x28);
                  pvVar25 = (void *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
                  *(void **)((longlong)pvVar25 - 8) = pvVar13;
                }
                plVar12 = local_a8;
                local_a8[4] = (longlong)pvVar25;
                local_a8[6] = uVar37;
                local_a8[7] = uVar28;
                memcpy(pvVar25,puVar10,uVar37 + 1);
              }
              uVar37 = uStack_1e8;
              plVar12[8] = 0;
              plVar12[9] = 0;
              plVar12[10] = 0;
              plVar12[0xb] = 0;
              auVar18 = (undefined1  [8])local_1f8;
              if (0xf < uStack_1e0) {
                auVar18 = local_1f8;
              }
              local_c8 = pauVar21;
              if ((longlong)uStack_1e8 < 0) goto LAB_1400e0db0;
              local_e0 = (undefined1 (*) [16])(plVar12 + 8);
              if (uStack_1e8 < 0x10) {
                plVar12[10] = uStack_1e8;
                plVar12[0xb] = 0xf;
                *(undefined1 (*) [16])(plVar12 + 8) = *(undefined1 (*) [16])auVar18;
              }
              else {
                plVar12[0xb] = 0xf;
                uVar28 = uStack_1e8 | 0xf;
                if (uVar28 < 0x17) {
                  uVar28 = 0x16;
                }
                if (uVar28 < 0xfff) {
                  auVar51 = ZEXT1664(auVar51._0_16_);
                  auVar53 = ZEXT1664(auVar53._0_16_);
                  auVar55 = ZEXT1664(auVar55._0_16_);
                  pvVar25 = operator_new(uVar28 + 1);
                }
                else {
                  auVar51 = ZEXT1664(auVar51._0_16_);
                  auVar53 = ZEXT1664(auVar53._0_16_);
                  auVar55 = ZEXT1664(auVar55._0_16_);
                  pvVar13 = operator_new(uVar28 + 0x28);
                  pvVar25 = (void *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
                  *(void **)((longlong)pvVar25 - 8) = pvVar13;
                }
                plVar12 = local_a8;
                local_a8[8] = (longlong)pvVar25;
                local_a8[10] = uVar37;
                local_a8[0xb] = uVar28;
                memcpy(pvVar25,(void *)auVar18,uVar37 + 1);
              }
              *plVar12 = (longlong)local_100;
              plVar12[1] = (longlong)local_100;
              plVar12[2] = (longlong)local_100;
              *(undefined2 *)(plVar12 + 3) = 0;
              pauVar17 = *(undefined1 (**) [16])(*local_100 + 8);
              iVar27 = 0;
              pauVar16 = local_100;
              if (pauVar17[1][9] != '\0') goto LAB_1400df843;
              local_c0 = local_c8;
              if (0xf < (ulonglong)plVar12[7]) {
                local_c0 = (undefined1 (*) [32])plVar12[4];
              }
              local_d0 = local_e0;
              if (0xf < (ulonglong)plVar12[0xb]) {
                local_d0 = (undefined1 (*) [16])plVar12[8];
              }
              uVar37 = plVar12[6];
              uVar28 = plVar12[10];
              pauVar19 = pauVar17;
              goto LAB_1400df92a;
            }
            break;
          }
          pauVar9 = (undefined1 (*) [32])((longlong)piVar11 + 1);
        }
      }
      goto LAB_1400df341;
    }
    if (!bVar42) {
      pauVar9 = pauVar21;
      while( true ) {
        auVar51 = ZEXT1664(auVar51._0_16_);
        auVar53 = ZEXT1664(auVar53._0_16_);
        auVar55 = ZEXT1664(auVar55._0_16_);
        piVar11 = memchr(pauVar9,0x76,(longlong)pauVar21 + ((uVar28 - 3) - (longlong)pauVar9));
        if (piVar11 == (int *)0x0) break;
        if (*piVar11 == 0x5f6e6576) {
          if ((longlong)piVar11 - (longlong)pauVar21 != -1) {
            uVar37 = ((longlong)piVar11 - (longlong)pauVar21) + 4;
            local_128 = auVar55._0_8_;
            uStack_120 = auVar55._8_8_;
            uVar24 = uVar28 - uVar37;
            if (uVar28 < uVar37) goto LAB_1400e0dcd;
            if (3 < uVar24) {
              uVar24 = 4;
            }
            uStack_110 = 0xf;
            uStack_118 = uVar24;
            memcpy(&local_128,(void *)(uVar37 + (longlong)pauVar21),uVar24);
            *(undefined1 *)(uVar24 | (ulonglong)&local_128) = 0;
            pcVar41 = tolower_exref;
            local_1d8._8_8_ = uStack_120;
            local_1d8._0_8_ = local_128;
            uStack_1c8 = uStack_118;
            pauStack_1c0 = (undefined1 (*) [32])uStack_110;
            pauVar9 = pauVar21;
            goto LAB_1400df5d0;
          }
          break;
        }
        pauVar9 = (undefined1 (*) [32])((longlong)piVar11 + 1);
      }
      goto LAB_1400df341;
    }
    goto LAB_1400df3a0;
  }
  pauVar40 = pauVar38;
  if (pauVar38 != (undefined1 (*) [32])0x0) {
    for (; pauVar40 != pauVar9; pauVar40 = pauVar40 + 1) {
      if (0xf < *(ulonglong *)((longlong)*pauVar40 + 0x18)) {
        pvVar25 = *(void **)*pauVar40;
        pvVar13 = pvVar25;
        if ((0xfff < *(ulonglong *)((longlong)*pauVar40 + 0x18) + 1) &&
           (pvVar13 = *(void **)((longlong)pvVar25 + -8),
           0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
        auVar51 = ZEXT1664(auVar51._0_16_);
        auVar53 = ZEXT1664(auVar53._0_16_);
        free(pvVar13);
      }
      auVar49 = auVar53._0_16_;
      auVar43 = auVar51._0_16_;
      *(undefined8 *)((longlong)*pauVar40 + 0x10) = 0;
      *(undefined8 *)((longlong)*pauVar40 + 0x18) = 0xf;
      (*pauVar40)[0] = 0;
    }
    pauVar9 = pauVar38;
    if ((0xfff < (ulonglong)((longlong)pauVar21 - (longlong)pauVar38)) &&
       (pauVar9 = *(undefined1 (**) [32])((longlong)pauVar38[-1] + 0x18),
       0x1f < (ulonglong)((longlong)pauVar38 + (-8 - (longlong)pauVar9)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar43);
    auVar53 = ZEXT1664(auVar49);
    free(pauVar9);
    piVar11 = local_d8;
  }
  pauVar19 = local_220;
  pauVar16 = local_228;
  auVar49 = auVar53._0_16_;
  auVar43 = auVar51._0_16_;
  pauVar17 = local_228;
  if (local_228 != (undefined1 (*) [16])0x0) {
    for (; pauVar17 != pauVar19; pauVar17 = pauVar17 + 0xb) {
      auVar51 = ZEXT1664(auVar51._0_16_);
      auVar53 = ZEXT1664(auVar53._0_16_);
      FUN_1400dc310((longlong)pauVar17);
      auVar49 = auVar53._0_16_;
      auVar43 = auVar51._0_16_;
    }
    pauVar17 = pauVar16;
    if ((0xfff < (ulonglong)(local_210 - (longlong)pauVar16)) &&
       (pauVar17 = *(undefined1 (**) [16])(pauVar16[-1] + 8),
       0x1f < (ulonglong)((longlong)pauVar16 + (-8 - (longlong)pauVar17)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar43);
    auVar53 = ZEXT1664(auVar49);
    free(pauVar17);
    auVar49 = auVar53._0_16_;
    piVar11 = local_d8;
  }
  if ((int *)0x7 < piVar11) {
    pvVar25 = local_200;
    if ((0xfff < (longlong)piVar11 * 2 + 2U) &&
       (pvVar25 = *(void **)((longlong)local_200 + -8),
       0x1f < (ulonglong)((longlong)local_200 + (-8 - (longlong)pvVar25)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar49);
    free(pvVar25);
    auVar49 = auVar53._0_16_;
  }
  auVar43 = auVar51._0_16_;
  pvVar25 = auVar51._0_8_;
  plVar12 = auVar49._0_8_;
  if (plVar12 != (longlong *)0x0) {
    plVar26 = (longlong *)vpextrq_avx(auVar49,1);
    for (plVar22 = plVar12; plVar22 != plVar26; plVar22 = plVar22 + 5) {
      if (7 < (ulonglong)plVar22[3]) {
        pvVar25 = (void *)*plVar22;
        pvVar13 = pvVar25;
        if ((0xfff < plVar22[3] * 2 + 2U) &&
           (pvVar13 = *(void **)((longlong)pvVar25 + -8),
           0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
        auVar51 = ZEXT1664(auVar51._0_16_);
        free(pvVar13);
      }
      auVar43 = auVar51._0_16_;
      plVar22[2] = 0;
      plVar22[3] = 7;
      *(undefined2 *)plVar22 = 0;
    }
    plVar22 = plVar12;
    if ((0xfff < (ulonglong)(local_208 - (longlong)plVar12)) &&
       (plVar22 = (longlong *)plVar12[-1],
       0x1f < (ulonglong)((longlong)plVar12 + (-8 - (longlong)plVar22)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar43);
    free(plVar22);
    pvVar25 = auVar51._0_8_;
  }
  pauVar21 = local_f8;
  if (pvVar25 != (void *)0x0) {
    pvVar13 = pvVar25;
    if ((0xfff < (ulonglong)((longlong)local_218 - (longlong)pvVar25)) &&
       (pvVar13 = *(void **)((longlong)pvVar25 + -8),
       0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) {
LAB_1400e0439:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar13);
  }
  **(undefined8 **)((longlong)*pauVar21 + 8) = 0;
  plVar12 = *(longlong **)*pauVar21;
  if (plVar12 != (longlong *)0x0) {
    auVar51 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar43 = auVar51._0_16_;
      plVar22 = (longlong *)*plVar12;
      pvVar25 = (void *)plVar12[7];
      if (pvVar25 != (void *)0x0) {
        pvVar13 = pvVar25;
        if ((0xfff < (ulonglong)(plVar12[9] - (longlong)pvVar25)) &&
           (pvVar13 = *(void **)((longlong)pvVar25 + -8),
           0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
        auVar51 = ZEXT1664(auVar43);
        free(pvVar13);
        auVar43 = auVar51._0_16_;
        *(undefined1 (*) [16])(plVar12 + 7) = auVar43;
        plVar12[9] = 0;
      }
      if (7 < (ulonglong)plVar12[5]) {
        pvVar25 = (void *)plVar12[2];
        pvVar13 = pvVar25;
        if ((0xfff < plVar12[5] * 2 + 2U) &&
           (pvVar13 = *(void **)((longlong)pvVar25 + -8),
           0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
        auVar51 = ZEXT1664(auVar43);
        free(pvVar13);
        auVar43 = auVar51._0_16_;
      }
      auVar51 = ZEXT1664(auVar43);
      free(plVar12);
      plVar12 = plVar22;
    } while (plVar22 != (longlong *)0x0);
  }
  free(local_f8);
  local_d0 = local_f0;
  pauVar17 = *(undefined1 (**) [16])*local_f0;
  pauVar21 = (undefined1 (*) [32])0x0;
  do {
    if (pauVar17 == local_d0) {
      if (((ulonglong)pauVar21 & 1) != 0) {
        LOCK();
        DAT_14012b250 = 1;
        UNLOCK();
        local_d0 = local_f0;
      }
      pauVar17 = local_d0;
      DAT_14012abf8 = '\x01';
      FUN_1400e1950(*(longlong **)(*local_d0 + 8));
      free(pauVar17);
                    /* WARNING: Read-only address (ram,0x00014010b200) is written */
                    /* WARNING: Read-only address (ram,0x00014010b210) is written */
                    /* WARNING: Read-only address (ram,0x00014010b220) is written */
                    /* WARNING: Read-only address (ram,0x00014010b240) is written */
      return;
    }
    local_1d8 = ZEXT816(0);
    auVar43 = local_1d8;
    _local_1d8 = ZEXT1632(local_1d8);
    if (*(ulonglong *)(pauVar17[3] + 8) < 0x10) {
      pauVar16 = pauVar17 + 2;
    }
    else {
      pauVar16 = *(undefined1 (**) [16])pauVar17[2];
    }
    uVar37 = *(ulonglong *)pauVar17[3];
    if ((longlong)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (uVar37 < 0x10) {
      uStack_1c8 = uVar37;
      _local_1d8 = CONCAT816(uStack_1c8,auVar43);
      pauStack_1c0 = (undefined1 (*) [32])0xf;
      local_1d8 = *pauVar16;
      pauVar9 = (undefined1 (*) [32])0xf;
    }
    else {
      pauVar9 = (undefined1 (*) [32])(uVar37 | 0xf);
      if (pauVar9 < (undefined1 (*) [32])0x17) {
        pauVar9 = (undefined1 (*) [32])0x16;
      }
      if (pauVar9 < (undefined1 (*) [32])0xfff) {
        pvVar25 = operator_new((longlong)*pauVar9 + 1);
      }
      else {
        pvVar13 = operator_new((__uint64)((longlong)pauVar9[1] + 8));
        pvVar25 = (void *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar25 - 8) = pvVar13;
      }
      local_1d8._0_8_ = pvVar25;
      uStack_1c8 = uVar37;
      pauStack_1c0 = pauVar9;
      memcpy(pvVar25,pauVar16,uVar37 + 1);
    }
    local_1b8 = 0;
    uStack_1b4 = 0;
    pauStack_1b0 = (undefined1 (*) [32])0x0;
    uStack_1a8 = 0;
    uVar50 = auStack_1a0._8_8_;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = auStack_1a0._8_8_;
    auStack_1a0 = auVar54 << 0x40;
    uVar28 = *(ulonglong *)pauVar17[5];
    if (*(ulonglong *)(pauVar17[5] + 8) < 0x10) {
      pauVar16 = pauVar17 + 4;
    }
    else {
      pauVar16 = *(undefined1 (**) [16])pauVar17[4];
    }
    if ((longlong)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (uVar28 < 0x10) {
      uStack_1a8 = uVar28;
      auStack_1a0._0_8_ = 0xf;
      auStack_1a0 = CONCAT88(uVar50,auStack_1a0._0_8_);
      auVar43 = *pauVar16;
      local_1b8 = auVar43._0_4_;
      uStack_1b4 = auVar43._4_4_;
      pauStack_1b0 = auVar43._8_8_;
      local_b8 = (undefined1 (*) [32])0xf;
    }
    else {
      auStack_1a0._0_8_ = 0xf;
      auStack_1a0 = CONCAT88(uVar50,auStack_1a0._0_8_);
      local_b8 = (undefined1 (*) [32])(uVar28 | 0xf);
      if (local_b8 < (undefined1 (*) [32])0x17) {
        local_b8 = (undefined1 (*) [32])0x16;
      }
      if (local_b8 < (undefined1 (*) [32])0xfff) {
        pvVar25 = operator_new((longlong)*local_b8 + 1);
      }
      else {
        pvVar13 = operator_new((__uint64)((longlong)local_b8[1] + 8));
        pvVar25 = (void *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar25 - 8) = pvVar13;
      }
      local_1b8 = SUB84(pvVar25,0);
      uStack_1b4 = (undefined4)((ulonglong)pvVar25 >> 0x20);
      auStack_1a0._0_8_ = local_b8;
      uStack_1a8 = uVar28;
      memcpy(pvVar25,pauVar16,uVar28 + 1);
    }
    local_c0 = pauVar21;
    local_b0 = pauVar9;
    local_d8 = (int *)local_1d8._0_8_;
    piVar11 = (int *)local_1d8;
    if ((undefined1 (*) [32])0xf < pauVar9) {
      piVar11 = (int *)local_1d8._0_8_;
    }
    uVar24 = 0xcbf29ce484222325;
    if (uVar37 != 0) {
      uVar35 = (ulonglong)((uint)uVar37 & 3);
      if (uVar37 < 4) {
        uVar31 = 0;
        uVar24 = 0xcbf29ce484222325;
      }
      else {
        uVar31 = 0;
        uVar24 = 0xcbf29ce484222325;
        do {
          uVar24 = ((ulonglong)*(byte *)((longlong)piVar11 + uVar31 + 3) ^
                   ((ulonglong)*(byte *)((longlong)piVar11 + uVar31 + 2) ^
                   ((ulonglong)*(byte *)((longlong)piVar11 + uVar31 + 1) ^
                   (*(byte *)((longlong)piVar11 + uVar31) ^ uVar24) * 0x100000001b3) * 0x100000001b3
                   ) * 0x100000001b3) * 0x100000001b3;
          uVar31 = uVar31 + 4;
        } while ((uVar37 & 0xfffffffffffffffc) != uVar31);
      }
      if (uVar35 != 0) {
        uVar30 = 0;
        do {
          uVar24 = (*(byte *)((longlong)piVar11 + uVar30 + uVar31) ^ uVar24) * 0x100000001b3;
          uVar30 = uVar30 + 1;
        } while (uVar35 != uVar30);
      }
    }
    lVar29 = *(longlong *)(DAT_14012ab90 + 8 + (uVar24 & DAT_14012aba8) * 0x10);
    if (lVar29 != DAT_14012ab80) {
      lVar4 = *(longlong *)(DAT_14012ab90 + (uVar24 & DAT_14012aba8) * 0x10);
      uVar24 = *(ulonglong *)(lVar29 + 0x20);
      while( true ) {
        if (uVar37 == uVar24) {
          if (*(ulonglong *)(lVar29 + 0x28) < 0x10) {
            pvVar25 = (void *)(lVar29 + 0x10);
          }
          else {
            pvVar25 = *(void **)(lVar29 + 0x10);
          }
          iVar27 = memcmp(piVar11,pvVar25,uVar37);
          if (iVar27 == 0) goto LAB_1400e0a72;
        }
        if (lVar29 == lVar4) break;
        lVar29 = *(longlong *)(lVar29 + 8);
        uVar24 = *(ulonglong *)(lVar29 + 0x20);
      }
    }
    lVar29 = 0;
LAB_1400e0a72:
    pauVar21 = (undefined1 (*) [32])((ulonglong)local_c0 & 0xff);
    if (lVar29 != 0) {
      pauVar21 = (undefined1 (*) [32])0x1;
    }
    pauVar9 = local_b0;
    if ((uVar37 == 4) && (*piVar11 == 0x36383038)) {
      _Buf1 = &local_1b8;
      if ((undefined1 (*) [32])0xf < local_b8) {
        _Buf1 = (undefined4 *)CONCAT44(uStack_1b4,local_1b8);
      }
      uVar37 = 0xcbf29ce484222325;
      if (uVar28 != 0) {
        uVar24 = (ulonglong)((uint)uVar28 & 3);
        if (uVar28 < 4) {
          uVar35 = 0;
          uVar37 = 0xcbf29ce484222325;
        }
        else {
          uVar35 = 0;
          uVar37 = 0xcbf29ce484222325;
          do {
            uVar37 = ((ulonglong)*(byte *)((longlong)_Buf1 + uVar35 + 3) ^
                     ((ulonglong)*(byte *)((longlong)_Buf1 + uVar35 + 2) ^
                     ((ulonglong)*(byte *)((longlong)_Buf1 + uVar35 + 1) ^
                     (*(byte *)((longlong)_Buf1 + uVar35) ^ uVar37) * 0x100000001b3) * 0x100000001b3
                     ) * 0x100000001b3) * 0x100000001b3;
            uVar35 = uVar35 + 4;
          } while ((uVar28 & 0xfffffffffffffffc) != uVar35);
        }
        if (uVar24 != 0) {
          uVar31 = 0;
          do {
            uVar37 = (*(byte *)((longlong)_Buf1 + uVar31 + uVar35) ^ uVar37) * 0x100000001b3;
            uVar31 = uVar31 + 1;
          } while (uVar24 != uVar31);
        }
      }
      lVar29 = *(longlong *)(DAT_14012abd0 + 8 + (uVar37 & DAT_14012abe8) * 0x10);
      if (lVar29 == DAT_14012abc0) {
        lVar29 = 0;
      }
      else {
        lVar4 = *(longlong *)(DAT_14012abd0 + (uVar37 & DAT_14012abe8) * 0x10);
        uVar37 = *(ulonglong *)(lVar29 + 0x20);
        while( true ) {
          if (uVar28 == uVar37) {
            if (*(ulonglong *)(lVar29 + 0x28) < 0x10) {
              pvVar25 = (void *)(lVar29 + 0x10);
            }
            else {
              pvVar25 = *(void **)(lVar29 + 0x10);
            }
            iVar27 = memcmp(_Buf1,pvVar25,uVar28);
            if (iVar27 == 0) goto LAB_1400e0c04;
          }
          if (lVar29 == lVar4) break;
          lVar29 = *(longlong *)(lVar29 + 8);
          uVar37 = *(ulonglong *)(lVar29 + 0x20);
        }
        lVar29 = 0;
      }
LAB_1400e0c04:
      pauVar9 = local_b0;
      if (lVar29 != 0) {
        pauVar21 = (undefined1 (*) [32])0x1;
      }
    }
    local_b0 = pauVar9;
    if ((undefined1 (*) [32])0xf < local_b8) {
      pvVar13 = (void *)CONCAT44(uStack_1b4,local_1b8);
      pvVar25 = pvVar13;
      if ((0xfff < (longlong)*local_b8 + 1U) &&
         (pvVar25 = *(void **)((longlong)pvVar13 + -8),
         0x1f < (ulonglong)((longlong)pvVar13 + (-8 - (longlong)pvVar25)))) goto LAB_1400e0439;
      free(pvVar25);
    }
    if ((undefined1 (*) [32])0xf < pauVar9) {
      piVar11 = local_d8;
      if ((0xfff < (longlong)*pauVar9 + 1U) &&
         (piVar11 = *(int **)(local_d8 + -2),
         0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)piVar11)))) goto LAB_1400e0439;
      free(piVar11);
    }
    pauVar16 = *(undefined1 (**) [16])pauVar17[1];
    pauVar19 = pauVar17;
    if ((*(undefined1 (**) [16])pauVar17[1])[1][9] == '\0') {
      do {
        pauVar17 = pauVar16;
        pauVar16 = *(undefined1 (**) [16])*pauVar17;
      } while ((*(undefined1 (**) [16])*pauVar17)[1][9] == '\0');
    }
    else {
      do {
        pauVar17 = *(undefined1 (**) [16])(*pauVar19 + 8);
        if (pauVar17[1][9] != '\0') break;
        bVar42 = pauVar19 == *(undefined1 (**) [16])pauVar17[1];
        pauVar19 = pauVar17;
      } while (bVar42);
    }
  } while( true );
LAB_1400deea0:
  do {
    if ((ulonglong)((longlong)pauVar9 - (longlong)pauVar36) < 7) goto LAB_1400df0b0;
    uVar37 = *(ulonglong *)*pauVar36;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar37;
    auVar46 = vpminuw_avx(auVar44,auVar43);
    auVar46 = vpcmpeqw_avx(auVar44,auVar46);
    auVar44 = vpinsrb_avx(ZEXT416((uint)uVar37),(uint)(uVar37 >> 0x10) & 0xffff,1);
    auVar44 = vpinsrb_avx(auVar44,(int)(uVar37 >> 0x20),2);
    auVar44 = vpinsrb_avx(auVar44,(uint)(ushort)(uVar37 >> 0x30),3);
    *(int *)*pauVar16 = auVar44._0_4_;
    auVar44 = vpmovsxwd_avx(auVar49 ^ auVar46);
    iVar27 = vmovmskps_avx(auVar44);
    if (iVar27 == 0) {
      uVar28 = (longlong)pauVar9 - (longlong)pauVar36 >> 1;
      uVar37 = 0;
      do {
        uVar24 = uVar37 + 4;
        uVar35 = uVar37 + 8;
        uVar37 = uVar24;
        if ((uVar28 < uVar35) && (uVar37 = uVar28 - 4, uVar24 == uVar28)) goto LAB_1400defb4;
        uVar24 = *(ulonglong *)((longlong)*pauVar36 + uVar37 * 2);
        auVar45._8_8_ = 0;
        auVar45._0_8_ = uVar24;
        auVar46 = vpminuw_avx(auVar45,auVar43);
        auVar46 = vpcmpeqw_avx(auVar45,auVar46);
        auVar44 = vpinsrb_avx(ZEXT416((uint)uVar24),(uint)(uVar24 >> 0x10) & 0xffff,1);
        auVar44 = vpinsrb_avx(auVar44,(int)(uVar24 >> 0x20),2);
        auVar44 = vpinsrb_avx(auVar44,(uint)(ushort)(uVar24 >> 0x30),3);
        *(int *)(*pauVar16 + uVar37) = auVar44._0_4_;
        auVar44 = vpmovsxwd_avx(auVar49 ^ auVar46);
        iVar27 = vmovmskps_avx(auVar44);
      } while (iVar27 == 0);
      auVar46 = vpmovzxwd_avx(auVar49 ^ auVar46);
    }
    else {
      auVar46 = vpmovzxwd_avx(auVar49 ^ auVar46);
      uVar37 = 0;
    }
    auVar46 = vpshufb_avx(auVar46,auVar54);
    auVar46 = vpsllw_avx(auVar46,0xf);
    auVar46 = vpsraw_avx(auVar46,0xf);
    uVar32 = 0;
    uVar33 = (uint)(ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar46[0xf] >> 7) << 0xf);
    for (uVar8 = uVar33; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar32 = uVar32 + 1;
    }
    uVar28 = (ulonglong)(uVar32 >> 1);
    if (uVar33 == 0) {
      uVar28 = 0x7fffffffffffffff;
    }
    uVar28 = uVar28 + uVar37;
LAB_1400defb4:
    pauVar40 = (undefined1 (*) [32])((longlong)*pauVar36 + uVar28 * 2);
    pauVar16 = (undefined1 (*) [16])(*pauVar16 + uVar28);
    if (pauVar40 == pauVar9) break;
    uVar3 = *(ushort *)*pauVar40;
    if ((uVar3 & 0xfc00) == 0xd800) {
      bVar42 = (longlong)pauVar9 - (longlong)pauVar40 != 2;
      uVar37 = (ulonglong)bVar42;
      iVar27 = (uint)uVar3 * 0x400 + -0x35fdc00;
      if (!bVar42) {
        iVar27 = 0;
      }
      lVar29 = uVar37 + 1;
      uVar32 = iVar27 + (uint)*(ushort *)((longlong)*pauVar40 + uVar37 * 2);
      if (uVar32 < 0x80) goto LAB_1400df050;
LAB_1400df010:
      if (uVar32 < 0x800) {
        uVar8 = 1;
        uVar33 = 0;
        do {
          if ((uVar8 & 0x73f3f3f) != 0) {
            uVar33 = uVar33 | (uVar8 & 0x73f3f3f) * (uVar32 & 1);
            uVar32 = uVar32 >> 1;
          }
          uVar8 = uVar8 << 1;
        } while (uVar8 != 0);
        uVar1 = swap_bytes((ushort)uVar33 | 0xc080);
        *(undefined2 *)*pauVar16 = uVar1;
        pauVar16 = (undefined1 (*) [16])(*pauVar16 + 2);
      }
      else {
        uVar33 = 1;
        uVar5 = 0;
        uVar8 = uVar32;
        do {
          if ((uVar33 & 0x73f3f3f) != 0) {
            uVar5 = uVar5 | (uVar33 & 0x73f3f3f) * (uVar8 & 1);
            uVar8 = uVar8 >> 1;
          }
          uVar33 = uVar33 << 1;
        } while (uVar33 != 0);
        if (uVar32 < 0x10000) {
          (*pauVar16)[0] = (char)((uVar5 | 0x80e08080) >> 0x10);
          uVar1 = swap_bytes((short)(uVar5 | 0x80e08080));
          *(undefined2 *)(*pauVar16 + 1) = uVar1;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 3);
        }
        else {
          uVar2 = swap_bytes(uVar5 | 0xf0808080);
          *(undefined4 *)*pauVar16 = uVar2;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 4);
        }
      }
    }
    else {
      uVar32 = (uint)uVar3;
      lVar29 = 1;
      if (0x7f < uVar32) goto LAB_1400df010;
LAB_1400df050:
      (*pauVar16)[0] = (char)uVar32;
      pauVar16 = (undefined1 (*) [16])(*pauVar16 + 1);
    }
    pauVar36 = (undefined1 (*) [32])((longlong)*pauVar40 + lVar29 * 2);
  } while (pauVar36 != pauVar9);
  goto LAB_1400df160;
LAB_1400df0b0:
  do {
    uVar3 = *(ushort *)*pauVar36;
    if ((uVar3 & 0xfc00) == 0xd800) {
      bVar42 = (longlong)pauVar9 - (longlong)pauVar36 != 2;
      uVar37 = (ulonglong)bVar42;
      iVar27 = (uint)uVar3 * 0x400 + -0x35fdc00;
      if (!bVar42) {
        iVar27 = 0;
      }
      lVar29 = uVar37 + 1;
      uVar32 = iVar27 + (uint)*(ushort *)((longlong)*pauVar36 + uVar37 * 2);
      if (uVar32 < 0x80) goto LAB_1400df140;
LAB_1400df0fd:
      if (uVar32 < 0x800) {
        uVar8 = 1;
        uVar33 = 0;
        do {
          if ((uVar8 & 0x73f3f3f) != 0) {
            uVar33 = uVar33 | (uVar8 & 0x73f3f3f) * (uVar32 & 1);
            uVar32 = uVar32 >> 1;
          }
          uVar8 = uVar8 << 1;
        } while (uVar8 != 0);
        uVar1 = swap_bytes((ushort)uVar33 | 0xc080);
        *(undefined2 *)*pauVar16 = uVar1;
        pauVar16 = (undefined1 (*) [16])(*pauVar16 + 2);
      }
      else {
        uVar33 = 1;
        uVar5 = 0;
        uVar8 = uVar32;
        do {
          if ((uVar33 & 0x73f3f3f) != 0) {
            uVar5 = uVar5 | (uVar33 & 0x73f3f3f) * (uVar8 & 1);
            uVar8 = uVar8 >> 1;
          }
          uVar33 = uVar33 << 1;
        } while (uVar33 != 0);
        if (uVar32 < 0x10000) {
          (*pauVar16)[0] = (char)((uVar5 | 0x80e08080) >> 0x10);
          uVar1 = swap_bytes((short)(uVar5 | 0x80e08080));
          *(undefined2 *)(*pauVar16 + 1) = uVar1;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 3);
        }
        else {
          uVar2 = swap_bytes(uVar5 | 0xf0808080);
          *(undefined4 *)*pauVar16 = uVar2;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 4);
        }
      }
    }
    else {
      uVar32 = (uint)uVar3;
      lVar29 = 1;
      if (0x7f < uVar3) goto LAB_1400df0fd;
LAB_1400df140:
      (*pauVar16)[0] = (char)uVar32;
      pauVar16 = (undefined1 (*) [16])(*pauVar16 + 1);
    }
    pauVar36 = (undefined1 (*) [32])((longlong)*pauVar36 + lVar29 * 2);
  } while (pauVar36 != pauVar9);
LAB_1400df160:
  puVar39 = local_1d8;
  if (0xf < pauStack_1c0) {
    puVar39 = (undefined1 *)local_1d8._0_8_;
  }
  uStack_1c8 = (longlong)pauVar16 - (longlong)pauVar17;
  puVar39[(longlong)pauVar16 - (longlong)pauVar17] = 0;
  if (local_b8 == pauVar21) {
    uVar35 = (longlong)pauVar21 - (longlong)pauVar38;
    uVar24 = (longlong)uVar35 >> 5;
    uVar37 = uVar24 + 1;
    uVar28 = (uVar24 >> 1) + uVar24;
    if (uVar28 <= uVar37) {
      uVar28 = uVar37;
    }
    if (0x7ffffffffffffff - (uVar24 >> 1) < uVar24) {
      uVar28 = 0x7ffffffffffffff;
    }
    if (uVar28 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    if (uVar28 < 0x80) {
      if (uVar28 == 0) {
        pauVar40 = (undefined1 (*) [32])0x0;
      }
      else {
        auVar51 = ZEXT1664(auVar51._0_16_);
        auVar53 = ZEXT1664(auVar53._0_16_);
        auVar55 = ZEXT1664(auVar43);
        auVar56 = ZEXT1664(auVar49);
        auVar57 = ZEXT1664(auVar54);
        pauVar40 = operator_new(uVar28 * 0x20);
      }
    }
    else {
      if (0x7fffffffffffffe < uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_1400bb790();
      }
      auVar51 = ZEXT1664(auVar51._0_16_);
      auVar53 = ZEXT1664(auVar53._0_16_);
      auVar55 = ZEXT1664(auVar43);
      auVar56 = ZEXT1664(auVar49);
      auVar57 = ZEXT1664(auVar54);
      pvVar25 = operator_new(uVar28 * 0x20 + 0x27);
      pauVar40 = (undefined1 (*) [32])((longlong)pvVar25 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pauVar40[-1] + 0x18) = pvVar25;
    }
    auVar44 = auVar57._0_16_;
    auVar46 = auVar56._0_16_;
    auVar54 = auVar55._0_16_;
    auVar49 = auVar53._0_16_;
    auVar43 = auVar51._0_16_;
    pauVar9 = pauVar40 + uVar24;
    *(undefined8 *)*pauVar9 = 0;
    *(undefined8 *)((longlong)*pauVar9 + 8) = 0;
    *(undefined8 *)((longlong)*pauVar9 + 0x10) = 0;
    *(undefined8 *)((longlong)*pauVar9 + 0x18) = 0;
    pauVar40[uVar24] = _local_1d8;
    uStack_1c8 = 0;
    pauStack_1c0 = (undefined1 (*) [32])0xf;
    auVar48[0x1f] = 0;
    auVar48._0_31_ = stack0xfffffffffffffe29;
    _local_1d8 = auVar48 << 8;
    pauVar9 = pauVar21;
    if (pauVar38 != pauVar21) {
      lVar29 = 0;
      do {
        *(undefined1 (*) [32])((longlong)*pauVar40 + lVar29) =
             SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        *(undefined1 (*) [32])((longlong)*pauVar40 + lVar29) =
             *(undefined1 (*) [32])((longlong)*pauVar38 + lVar29);
        *(undefined8 *)((longlong)*pauVar38 + lVar29 + 0x10) = 0;
        *(undefined8 *)((longlong)*pauVar38 + lVar29 + 0x18) = 0xf;
        *(undefined1 *)((longlong)*pauVar38 + lVar29) = 0;
        pauVar36 = (undefined1 (*) [32])((longlong)pauVar38[1] + lVar29);
        lVar29 = lVar29 + 0x20;
        pauVar9 = pauVar38;
      } while (pauVar36 != pauVar21);
    }
    if (pauVar9 != (undefined1 (*) [32])0x0) {
      if (pauVar9 != pauVar21) {
        do {
          if (0xf < *(ulonglong *)((longlong)*pauVar9 + 0x18)) {
            pvVar25 = *(void **)*pauVar9;
            pvVar13 = pvVar25;
            if ((0xfff < *(ulonglong *)((longlong)*pauVar9 + 0x18) + 1) &&
               (pvVar13 = *(void **)((longlong)pvVar25 + -8),
               0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13))))
            goto LAB_1400e0439;
            auVar51 = ZEXT1664(auVar51._0_16_);
            auVar53 = ZEXT1664(auVar53._0_16_);
            auVar55 = ZEXT1664(auVar55._0_16_);
            auVar56 = ZEXT1664(auVar56._0_16_);
            auVar57 = ZEXT1664(auVar57._0_16_);
            free(pvVar13);
          }
          auVar44 = auVar57._0_16_;
          auVar46 = auVar56._0_16_;
          auVar54 = auVar55._0_16_;
          auVar49 = auVar53._0_16_;
          auVar43 = auVar51._0_16_;
          *(undefined8 *)((longlong)*pauVar9 + 0x10) = 0;
          *(undefined8 *)((longlong)*pauVar9 + 0x18) = 0xf;
          (*pauVar9)[0] = 0;
          pauVar9 = pauVar9 + 1;
        } while (pauVar9 != pauVar21);
        pauVar21 = pauVar38;
        if ((0xfff < uVar35) &&
           (pauVar21 = *(undefined1 (**) [32])((longlong)pauVar38[-1] + 0x18),
           0x1f < (ulonglong)((longlong)pauVar38 + (-8 - (longlong)pauVar21)))) goto LAB_1400e0439;
      }
      auVar51 = ZEXT1664(auVar43);
      auVar53 = ZEXT1664(auVar49);
      auVar55 = ZEXT1664(auVar54);
      auVar56 = ZEXT1664(auVar46);
      auVar57 = ZEXT1664(auVar44);
      free(pauVar21);
    }
    pauVar9 = pauVar40 + uVar37;
    pauVar21 = pauVar40 + uVar28;
    pauVar38 = pauVar40;
    if (0xf < pauStack_1c0) {
      pvVar25 = (void *)local_1d8._0_8_;
      if ((0xfff < (longlong)pauStack_1c0 + 1U) &&
         (pvVar25 = *(void **)(local_1d8._0_8_ + -8),
         0x1f < (ulonglong)(local_1d8._0_8_ + (-8 - (longlong)pvVar25)))) goto LAB_1400e0439;
      auVar51 = ZEXT1664(auVar51._0_16_);
      auVar53 = ZEXT1664(auVar53._0_16_);
      auVar55 = ZEXT1664(auVar55._0_16_);
      auVar56 = ZEXT1664(auVar56._0_16_);
      auVar57 = ZEXT1664(auVar57._0_16_);
      free(pvVar25);
    }
  }
  else {
    *(undefined8 *)*local_b8 = 0;
    *(undefined8 *)((longlong)*local_b8 + 8) = 0;
    *(undefined8 *)((longlong)*local_b8 + 0x10) = 0;
    *(undefined8 *)((longlong)*local_b8 + 0x18) = 0;
    *local_b8 = _local_1d8;
    pauVar9 = local_b8 + 1;
  }
  pauVar40 = (undefined1 (*) [32])((longlong)local_b0[1] + 8);
  piVar11 = local_d8;
  goto LAB_1400de922;
LAB_1400df92a:
  do {
    pauVar17 = pauVar19;
    if (*(ulonglong *)(pauVar17[3] + 8) < 0x10) {
      pauVar19 = pauVar17 + 2;
    }
    else {
      pauVar19 = *(undefined1 (**) [16])pauVar17[2];
    }
    uVar24 = *(ulonglong *)pauVar17[3];
    uVar32 = (uint)(uVar37 < uVar24);
    uVar35 = uVar24;
    if (uVar37 < uVar24) {
      uVar35 = uVar37;
    }
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar53._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    uVar8 = memcmp(pauVar19,local_c0,uVar35);
    if (uVar24 < uVar37) {
      uVar32 = 0xffffffff;
    }
    if (uVar8 != 0) {
      uVar32 = uVar8;
    }
    pauVar15 = pauVar17;
    pauVar19 = pauVar17;
    if (uVar32 == 0) {
      if (*(ulonglong *)(pauVar17[5] + 8) < 0x10) {
        pauVar20 = pauVar17 + 4;
      }
      else {
        pauVar20 = *(undefined1 (**) [16])pauVar17[4];
      }
      uVar24 = *(ulonglong *)pauVar17[5];
      uVar35 = uVar24;
      if (uVar28 < uVar24) {
        uVar35 = uVar28;
      }
      iVar27 = memcmp(pauVar20,local_d0,uVar35);
      bVar42 = uVar24 < uVar28;
      if (iVar27 != 0) {
        bVar42 = iVar27 < 0;
      }
      iVar27 = 1;
      if (bVar42) goto LAB_1400df910;
    }
    else {
      iVar27 = 1;
      if ((int)uVar32 < 0) {
LAB_1400df910:
        iVar27 = 0;
        pauVar15 = pauVar17 + 1;
        pauVar19 = pauVar16;
      }
    }
    pauVar16 = pauVar19;
    pauVar19 = *(undefined1 (**) [16])*pauVar15;
  } while ((*(undefined1 (**) [16])*pauVar15)[1][9] == '\0');
LAB_1400df843:
  if (pauVar16[1][9] == '\0') {
    if (*(ulonglong *)(pauVar16[3] + 8) < 0x10) {
      pauVar19 = pauVar16 + 2;
    }
    else {
      pauVar19 = *(undefined1 (**) [16])pauVar16[2];
    }
    local_c0 = (undefined1 (*) [32])CONCAT44(local_c0._4_4_,iVar27);
    uVar37 = local_a8[7];
    pauVar21 = local_c8;
    if (0xf < uVar37) {
      pauVar21 = (undefined1 (*) [32])local_a8[4];
    }
    uVar28 = *(ulonglong *)pauVar16[3];
    uVar24 = local_a8[6];
    uVar32 = (uint)(uVar28 < uVar24);
    uVar35 = uVar24;
    if (uVar28 < uVar24) {
      uVar35 = uVar28;
    }
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar53._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    uVar8 = memcmp(pauVar21,pauVar19,uVar35);
    if (uVar24 < uVar28) {
      uVar32 = 0xffffffff;
    }
    if (uVar8 != 0) {
      uVar32 = uVar8;
    }
    if (uVar32 == 0) {
      if (*(ulonglong *)(pauVar16[5] + 8) < 0x10) {
        pauVar19 = pauVar16 + 4;
      }
      else {
        pauVar19 = *(undefined1 (**) [16])pauVar16[4];
      }
      uVar28 = local_a8[0xb];
      pauVar15 = local_e0;
      if (0xf < uVar28) {
        pauVar15 = (undefined1 (*) [16])local_a8[8];
      }
      uVar24 = *(ulonglong *)pauVar16[5];
      uVar35 = local_a8[10];
      uVar31 = uVar35;
      if (uVar24 < uVar35) {
        uVar31 = uVar24;
      }
      iVar27 = memcmp(pauVar15,pauVar19,uVar31);
      bVar42 = uVar35 < uVar24;
      if (iVar27 != 0) {
        bVar42 = iVar27 < 0;
      }
      iVar27 = (int)local_c0;
      if (!bVar42) goto LAB_1400dfd28;
    }
    else {
      iVar27 = (int)local_c0;
      if (-1 < (int)uVar32) goto LAB_1400dfa6e;
    }
  }
  pcVar41 = tolower_exref;
  if (local_e8 == 0x2aaaaaaaaaaaaaa) {
LAB_1400e0dc5:
    FUN_1400c0930();
LAB_1400e0dcd:
    FUN_1400e1900();
LAB_1400e0dd2:
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  plVar12 = local_a8 + 1;
  local_e8 = local_e8 + 1;
  *plVar12 = (longlong)pauVar17;
  if (pauVar17 == local_100) goto LAB_1400dff85;
  if (iVar27 == 0) {
    *(longlong **)pauVar17[1] = local_a8;
    if (pauVar17 == *(undefined1 (**) [16])local_100[1]) {
      pauVar16 = local_100 + 1;
      goto LAB_1400dfa8c;
    }
  }
  else {
    *(longlong **)*pauVar17 = local_a8;
    pauVar16 = local_100;
    if (pauVar17 == *(undefined1 (**) [16])*local_100) {
LAB_1400dfa8c:
      *(longlong **)*pauVar16 = local_a8;
    }
  }
  plVar22 = (longlong *)*plVar12;
  if ((char)plVar22[3] == '\0') {
    plVar14 = (longlong *)(*local_f0 + 8);
    plVar26 = local_a8;
    do {
      puVar10 = (undefined8 *)plVar22[1];
      plVar34 = (longlong *)*puVar10;
      plVar23 = plVar26;
      if (plVar22 == plVar34) {
        plVar34 = (longlong *)puVar10[2];
        if ((char)plVar34[3] != '\0') {
          if (plVar26 == (longlong *)plVar22[2]) {
            plVar22[2] = *plVar26;
            if (*(char *)(*plVar26 + 0x19) == '\0') {
              *(longlong **)(*plVar26 + 8) = plVar22;
              puVar10 = (undefined8 *)plVar22[1];
            }
            plVar26[1] = (longlong)puVar10;
            plVar12 = plVar14;
            if ((longlong *)*plVar14 != plVar22) {
              plVar23 = (longlong *)plVar22[1];
              plVar12 = plVar23 + 2;
              if ((longlong *)*plVar23 == plVar22) {
                plVar12 = plVar23;
              }
            }
            *plVar12 = (longlong)plVar26;
            *plVar26 = (longlong)plVar22;
            plVar22[1] = (longlong)plVar26;
            plVar23 = plVar22;
            plVar22 = plVar26;
          }
          *(undefined1 *)(plVar22 + 3) = 1;
          *(undefined1 *)(*(longlong *)(plVar23[1] + 8) + 0x18) = 0;
          plVar12 = *(longlong **)(plVar23[1] + 8);
          plVar22 = (longlong *)*plVar12;
          *plVar12 = plVar22[2];
          if (*(char *)(plVar22[2] + 0x19) == '\0') {
            *(longlong **)(plVar22[2] + 8) = plVar12;
          }
          plVar22[1] = plVar12[1];
          plVar26 = plVar14;
          if ((longlong *)*plVar14 != plVar12) {
            plVar34 = (longlong *)plVar12[1];
            plVar26 = plVar34 + 2;
            if ((longlong *)plVar34[2] != plVar12) {
              plVar26 = plVar34;
            }
          }
          *plVar26 = (longlong)plVar22;
          plVar22[2] = (longlong)plVar12;
          goto LAB_1400dfc66;
        }
LAB_1400dfac0:
        *(undefined1 *)(plVar22 + 3) = 1;
        *(undefined1 *)(plVar34 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar12 + 8) + 0x18) = 0;
        plVar23 = *(longlong **)(*plVar12 + 8);
      }
      else {
        if ((char)plVar34[3] == '\0') goto LAB_1400dfac0;
        if (plVar26 == (longlong *)*plVar22) {
          *plVar22 = plVar26[2];
          if (*(char *)(plVar26[2] + 0x19) == '\0') {
            *(longlong **)(plVar26[2] + 8) = plVar22;
            puVar10 = (undefined8 *)plVar22[1];
          }
          plVar26[1] = (longlong)puVar10;
          plVar12 = plVar14;
          if ((longlong *)*plVar14 != plVar22) {
            plVar23 = (longlong *)plVar22[1];
            plVar12 = plVar23 + 2;
            if ((longlong *)plVar23[2] != plVar22) {
              plVar12 = plVar23;
            }
          }
          *plVar12 = (longlong)plVar26;
          plVar26[2] = (longlong)plVar22;
          plVar22[1] = (longlong)plVar26;
          plVar23 = plVar22;
          plVar22 = plVar26;
        }
        *(undefined1 *)(plVar22 + 3) = 1;
        *(undefined1 *)(*(longlong *)(plVar23[1] + 8) + 0x18) = 0;
        plVar12 = *(longlong **)(plVar23[1] + 8);
        plVar22 = (longlong *)plVar12[2];
        plVar12[2] = *plVar22;
        if (*(char *)(*plVar22 + 0x19) == '\0') {
          *(longlong **)(*plVar22 + 8) = plVar12;
        }
        plVar22[1] = plVar12[1];
        plVar26 = plVar14;
        if ((longlong *)*plVar14 != plVar12) {
          plVar34 = (longlong *)plVar12[1];
          plVar26 = plVar34 + 2;
          if ((longlong *)*plVar34 == plVar12) {
            plVar26 = plVar34;
          }
        }
        *plVar26 = (longlong)plVar22;
        *plVar22 = (longlong)plVar12;
LAB_1400dfc66:
        plVar12[1] = (longlong)plVar22;
      }
      plVar12 = plVar23 + 1;
      plVar22 = (longlong *)plVar23[1];
      plVar26 = plVar23;
    } while ((char)plVar22[3] == '\0');
  }
  goto LAB_1400dfa98;
LAB_1400df5d0:
  auVar51 = ZEXT1664(auVar51._0_16_);
  auVar53 = ZEXT1664(auVar53._0_16_);
  auVar55 = ZEXT1664(auVar55._0_16_);
  piVar11 = memchr(pauVar9,100,(longlong)pauVar21 + ((uVar28 - 3) - (longlong)pauVar9));
  if (piVar11 == (int *)0x0) goto LAB_1400df341;
  if (*piVar11 == 0x5f766564) {
    if ((longlong)piVar11 - (longlong)pauVar21 != -1) {
      uVar37 = ((longlong)piVar11 - (longlong)pauVar21) + 4;
      local_128 = auVar55._0_8_;
      uStack_120 = auVar55._8_8_;
      uVar24 = uVar28 - uVar37;
      if (uVar28 < uVar37) {
        FUN_1400e1900();
        goto LAB_1400e0de7;
      }
      if (3 < uVar24) {
        uVar24 = 4;
      }
      uStack_110 = 0xf;
      uStack_118 = uVar24;
      memcpy(&local_128,(void *)((longlong)pauVar21 + uVar37),uVar24);
      *(undefined1 *)(uVar24 | (ulonglong)&local_128) = 0;
      pHStack_1f0 = (HKEY)uStack_120;
      local_1f8 = (undefined1  [8])local_128;
      uStack_1e8 = uStack_118;
      uStack_1e0 = uStack_110;
      local_100 = local_f0;
      auVar51 = ZEXT1664(auVar51._0_16_);
      auVar53 = ZEXT1664(auVar53._0_16_);
      auVar55 = ZEXT1664(auVar55._0_16_);
      plVar12 = operator_new(0x60);
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      puVar10 = (undefined8 *)local_1d8;
      if (0xf < pauStack_1c0) {
        puVar10 = (undefined8 *)local_1d8._0_8_;
      }
      uVar37 = uStack_1c8;
      local_a8 = plVar12;
      if ((longlong)uStack_1c8 < 0) goto LAB_1400e0dd2;
      pauVar21 = (undefined1 (*) [32])(plVar12 + 4);
      if (uStack_1c8 < 0x10) {
        plVar12[6] = uStack_1c8;
        plVar12[7] = 0xf;
        lVar29 = puVar10[1];
        *(undefined8 *)*pauVar21 = *puVar10;
        plVar12[5] = lVar29;
      }
      else {
        plVar12[7] = 0xf;
        uVar28 = uStack_1c8 | 0xf;
        if (uVar28 < 0x17) {
          uVar28 = 0x16;
        }
        if (uVar28 < 0xfff) {
          auVar51 = ZEXT1664(auVar51._0_16_);
          auVar53 = ZEXT1664(auVar53._0_16_);
          auVar55 = ZEXT1664(auVar55._0_16_);
          pvVar25 = operator_new(uVar28 + 1);
        }
        else {
          auVar51 = ZEXT1664(auVar51._0_16_);
          auVar53 = ZEXT1664(auVar53._0_16_);
          auVar55 = ZEXT1664(auVar55._0_16_);
          pvVar13 = operator_new(uVar28 + 0x28);
          pvVar25 = (void *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
          *(void **)((longlong)pvVar25 - 8) = pvVar13;
        }
        plVar12 = local_a8;
        local_a8[4] = (longlong)pvVar25;
        local_a8[6] = uVar37;
        local_a8[7] = uVar28;
        memcpy(pvVar25,puVar10,uVar37 + 1);
      }
      uVar37 = uStack_1e8;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[10] = 0;
      plVar12[0xb] = 0;
      auVar18 = (undefined1  [8])local_1f8;
      if (0xf < uStack_1e0) {
        auVar18 = local_1f8;
      }
      local_c8 = pauVar21;
      if ((longlong)uStack_1e8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140086cb0();
      }
      local_e0 = (undefined1 (*) [16])(plVar12 + 8);
      if (uStack_1e8 < 0x10) {
        plVar12[10] = uStack_1e8;
        plVar12[0xb] = 0xf;
        *(undefined1 (*) [16])(plVar12 + 8) = *(undefined1 (*) [16])auVar18;
      }
      else {
        plVar12[0xb] = 0xf;
        uVar28 = uStack_1e8 | 0xf;
        if (uVar28 < 0x17) {
          uVar28 = 0x16;
        }
        if (uVar28 < 0xfff) {
          auVar51 = ZEXT1664(auVar51._0_16_);
          auVar53 = ZEXT1664(auVar53._0_16_);
          auVar55 = ZEXT1664(auVar55._0_16_);
          pvVar25 = operator_new(uVar28 + 1);
        }
        else {
          auVar51 = ZEXT1664(auVar51._0_16_);
          auVar53 = ZEXT1664(auVar53._0_16_);
          auVar55 = ZEXT1664(auVar55._0_16_);
          pvVar13 = operator_new(uVar28 + 0x28);
          pvVar25 = (void *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
          *(void **)((longlong)pvVar25 - 8) = pvVar13;
        }
        plVar12 = local_a8;
        local_a8[8] = (longlong)pvVar25;
        local_a8[10] = uVar37;
        local_a8[0xb] = uVar28;
        memcpy(pvVar25,(void *)auVar18,uVar37 + 1);
      }
      *plVar12 = (longlong)local_100;
      plVar12[1] = (longlong)local_100;
      plVar12[2] = (longlong)local_100;
      *(undefined2 *)(plVar12 + 3) = 0;
      pauVar17 = *(undefined1 (**) [16])(*local_100 + 8);
      iVar27 = 0;
      pauVar16 = local_100;
      if (pauVar17[1][9] != '\0') goto LAB_1400dff0d;
      local_c0 = local_c8;
      if (0xf < (ulonglong)plVar12[7]) {
        local_c0 = (undefined1 (*) [32])plVar12[4];
      }
      local_d0 = local_e0;
      if (0xf < (ulonglong)plVar12[0xb]) {
        local_d0 = (undefined1 (*) [16])plVar12[8];
      }
      uVar37 = plVar12[6];
      uVar28 = plVar12[10];
      pauVar19 = pauVar17;
      goto LAB_1400e000a;
    }
    goto LAB_1400df341;
  }
  pauVar9 = (undefined1 (*) [32])((longlong)piVar11 + 1);
  goto LAB_1400df5d0;
LAB_1400e000a:
  do {
    pauVar17 = pauVar19;
    if (*(ulonglong *)(pauVar17[3] + 8) < 0x10) {
      pauVar19 = pauVar17 + 2;
    }
    else {
      pauVar19 = *(undefined1 (**) [16])pauVar17[2];
    }
    uVar24 = *(ulonglong *)pauVar17[3];
    uVar32 = (uint)(uVar37 < uVar24);
    uVar35 = uVar24;
    if (uVar37 < uVar24) {
      uVar35 = uVar37;
    }
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar53._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    uVar8 = memcmp(pauVar19,local_c0,uVar35);
    if (uVar24 < uVar37) {
      uVar32 = 0xffffffff;
    }
    if (uVar8 != 0) {
      uVar32 = uVar8;
    }
    pauVar15 = pauVar17;
    pauVar19 = pauVar17;
    if (uVar32 == 0) {
      if (*(ulonglong *)(pauVar17[5] + 8) < 0x10) {
        pauVar20 = pauVar17 + 4;
      }
      else {
        pauVar20 = *(undefined1 (**) [16])pauVar17[4];
      }
      uVar24 = *(ulonglong *)pauVar17[5];
      uVar35 = uVar24;
      if (uVar28 < uVar24) {
        uVar35 = uVar28;
      }
      iVar27 = memcmp(pauVar20,local_d0,uVar35);
      bVar42 = uVar24 < uVar28;
      if (iVar27 != 0) {
        bVar42 = iVar27 < 0;
      }
      iVar27 = 1;
      if (bVar42) goto LAB_1400dfff0;
    }
    else {
      iVar27 = 1;
      if ((int)uVar32 < 0) {
LAB_1400dfff0:
        iVar27 = 0;
        pauVar15 = pauVar17 + 1;
        pauVar19 = pauVar16;
      }
    }
    pauVar16 = pauVar19;
    pauVar19 = *(undefined1 (**) [16])*pauVar15;
  } while ((*(undefined1 (**) [16])*pauVar15)[1][9] == '\0');
LAB_1400dff0d:
  if (pauVar16[1][9] == '\0') {
    if (*(ulonglong *)(pauVar16[3] + 8) < 0x10) {
      pauVar19 = pauVar16 + 2;
    }
    else {
      pauVar19 = *(undefined1 (**) [16])pauVar16[2];
    }
    local_c0 = (undefined1 (*) [32])CONCAT44(local_c0._4_4_,iVar27);
    uVar37 = local_a8[7];
    pauVar21 = local_c8;
    if (0xf < uVar37) {
      pauVar21 = (undefined1 (*) [32])local_a8[4];
    }
    uVar28 = *(ulonglong *)pauVar16[3];
    uVar24 = local_a8[6];
    uVar32 = (uint)(uVar28 < uVar24);
    uVar35 = uVar24;
    if (uVar28 < uVar24) {
      uVar35 = uVar28;
    }
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar53._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    uVar8 = memcmp(pauVar21,pauVar19,uVar35);
    if (uVar24 < uVar28) {
      uVar32 = 0xffffffff;
    }
    if (uVar8 != 0) {
      uVar32 = uVar8;
    }
    if (uVar32 == 0) {
      if (*(ulonglong *)(pauVar16[5] + 8) < 0x10) {
        pauVar19 = pauVar16 + 4;
      }
      else {
        pauVar19 = *(undefined1 (**) [16])pauVar16[4];
      }
      uVar28 = local_a8[0xb];
      pauVar15 = local_e0;
      if (0xf < uVar28) {
        pauVar15 = (undefined1 (*) [16])local_a8[8];
      }
      uVar24 = *(ulonglong *)pauVar16[5];
      uVar35 = local_a8[10];
      uVar31 = uVar35;
      if (uVar24 < uVar35) {
        uVar31 = uVar24;
      }
      iVar27 = memcmp(pauVar15,pauVar19,uVar31);
      bVar42 = uVar35 < uVar24;
      if (iVar27 != 0) {
        bVar42 = iVar27 < 0;
      }
      iVar27 = (int)local_c0;
      if (!bVar42) goto LAB_1400dfd28;
    }
    else {
      iVar27 = (int)local_c0;
      if (-1 < (int)uVar32) {
LAB_1400dfa6e:
        uVar28 = local_a8[0xb];
LAB_1400dfd28:
        pauVar40 = local_b0;
        pcVar41 = tolower_exref;
        if (0xf < uVar28) {
          pvVar25 = *(void **)*local_e0;
          pvVar13 = pvVar25;
          if ((0xfff < uVar28 + 1) &&
             (pvVar13 = *(void **)((longlong)pvVar25 + -8),
             0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
          free(pvVar13);
          uVar37 = local_a8[7];
        }
        plVar12 = local_a8;
        local_a8[10] = 0;
        local_a8[0xb] = 0xf;
        *(undefined1 *)(local_a8 + 8) = 0;
        if (0xf < uVar37) {
          pvVar25 = *(void **)*local_c8;
          pvVar13 = pvVar25;
          if ((0xfff < uVar37 + 1) &&
             (pvVar13 = *(void **)((longlong)pvVar25 + -8),
             0x1f < (ulonglong)((longlong)pvVar25 + (-8 - (longlong)pvVar13)))) goto LAB_1400e0439;
          free(pvVar13);
        }
        free(plVar12);
        goto LAB_1400df341;
      }
    }
  }
  pcVar41 = tolower_exref;
  if (local_e8 == 0x2aaaaaaaaaaaaaa) {
LAB_1400e0de7:
    FUN_1400c0930();
    pcVar41 = (code *)swi(3);
    (*pcVar41)();
    return;
  }
  plVar12 = local_a8 + 1;
  local_e8 = local_e8 + 1;
  *plVar12 = (longlong)pauVar17;
  if (pauVar17 == local_100) {
LAB_1400dff85:
    *(longlong **)*local_100 = local_a8;
    *(longlong **)(*local_100 + 8) = local_a8;
    *(longlong **)local_100[1] = local_a8;
    *(undefined1 *)(local_a8 + 3) = 1;
    pauVar40 = local_b0;
    goto LAB_1400df341;
  }
  if (iVar27 == 0) {
    *(longlong **)pauVar17[1] = local_a8;
    if (pauVar17 == *(undefined1 (**) [16])local_100[1]) {
      pauVar16 = local_100 + 1;
      goto LAB_1400e0161;
    }
  }
  else {
    *(longlong **)*pauVar17 = local_a8;
    pauVar16 = local_100;
    if (pauVar17 == *(undefined1 (**) [16])*local_100) {
LAB_1400e0161:
      *(longlong **)*pauVar16 = local_a8;
    }
  }
  plVar22 = (longlong *)*plVar12;
  if ((char)plVar22[3] == '\0') {
    plVar14 = (longlong *)(*local_f0 + 8);
    plVar26 = local_a8;
    do {
      puVar10 = (undefined8 *)plVar22[1];
      plVar34 = (longlong *)*puVar10;
      plVar23 = plVar26;
      if (plVar22 == plVar34) {
        plVar34 = (longlong *)puVar10[2];
        if ((char)plVar34[3] != '\0') {
          if (plVar26 == (longlong *)plVar22[2]) {
            plVar22[2] = *plVar26;
            if (*(char *)(*plVar26 + 0x19) == '\0') {
              *(longlong **)(*plVar26 + 8) = plVar22;
              puVar10 = (undefined8 *)plVar22[1];
            }
            plVar26[1] = (longlong)puVar10;
            plVar12 = plVar14;
            if ((longlong *)*plVar14 != plVar22) {
              plVar23 = (longlong *)plVar22[1];
              plVar12 = plVar23 + 2;
              if ((longlong *)*plVar23 == plVar22) {
                plVar12 = plVar23;
              }
            }
            *plVar12 = (longlong)plVar26;
            *plVar26 = (longlong)plVar22;
            plVar22[1] = (longlong)plVar26;
            plVar23 = plVar22;
            plVar22 = plVar26;
          }
          *(undefined1 *)(plVar22 + 3) = 1;
          *(undefined1 *)(*(longlong *)(plVar23[1] + 8) + 0x18) = 0;
          plVar12 = *(longlong **)(plVar23[1] + 8);
          plVar22 = (longlong *)*plVar12;
          *plVar12 = plVar22[2];
          if (*(char *)(plVar22[2] + 0x19) == '\0') {
            *(longlong **)(plVar22[2] + 8) = plVar12;
          }
          plVar22[1] = plVar12[1];
          plVar26 = plVar14;
          if ((longlong *)*plVar14 != plVar12) {
            plVar34 = (longlong *)plVar12[1];
            plVar26 = plVar34 + 2;
            if ((longlong *)plVar34[2] != plVar12) {
              plVar26 = plVar34;
            }
          }
          *plVar26 = (longlong)plVar22;
          plVar22[2] = (longlong)plVar12;
          goto LAB_1400e0346;
        }
LAB_1400e0190:
        *(undefined1 *)(plVar22 + 3) = 1;
        *(undefined1 *)(plVar34 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar12 + 8) + 0x18) = 0;
        plVar23 = *(longlong **)(*plVar12 + 8);
      }
      else {
        if ((char)plVar34[3] == '\0') goto LAB_1400e0190;
        if (plVar26 == (longlong *)*plVar22) {
          *plVar22 = plVar26[2];
          if (*(char *)(plVar26[2] + 0x19) == '\0') {
            *(longlong **)(plVar26[2] + 8) = plVar22;
            puVar10 = (undefined8 *)plVar22[1];
          }
          plVar26[1] = (longlong)puVar10;
          plVar12 = plVar14;
          if ((longlong *)*plVar14 != plVar22) {
            plVar23 = (longlong *)plVar22[1];
            plVar12 = plVar23 + 2;
            if ((longlong *)plVar23[2] != plVar22) {
              plVar12 = plVar23;
            }
          }
          *plVar12 = (longlong)plVar26;
          plVar26[2] = (longlong)plVar22;
          plVar22[1] = (longlong)plVar26;
          plVar23 = plVar22;
          plVar22 = plVar26;
        }
        *(undefined1 *)(plVar22 + 3) = 1;
        *(undefined1 *)(*(longlong *)(plVar23[1] + 8) + 0x18) = 0;
        plVar12 = *(longlong **)(plVar23[1] + 8);
        plVar22 = (longlong *)plVar12[2];
        plVar12[2] = *plVar22;
        if (*(char *)(*plVar22 + 0x19) == '\0') {
          *(longlong **)(*plVar22 + 8) = plVar12;
        }
        plVar22[1] = plVar12[1];
        plVar26 = plVar14;
        if ((longlong *)*plVar14 != plVar12) {
          plVar34 = (longlong *)plVar12[1];
          plVar26 = plVar34 + 2;
          if ((longlong *)*plVar34 == plVar12) {
            plVar26 = plVar34;
          }
        }
        *plVar26 = (longlong)plVar22;
        *plVar22 = (longlong)plVar12;
LAB_1400e0346:
        plVar12[1] = (longlong)plVar22;
      }
      plVar12 = plVar23 + 1;
      plVar22 = (longlong *)plVar23[1];
      plVar26 = plVar23;
    } while ((char)plVar22[3] == '\0');
  }
LAB_1400dfa98:
  *(undefined1 *)(*(longlong *)(*local_100 + 8) + 0x18) = 1;
  pauVar40 = local_b0;
LAB_1400df341:
  if (0xf < uStack_1e0) {
    auVar18 = local_1f8;
    if ((0xfff < uStack_1e0 + 1) &&
       (auVar18 = *(undefined1 (*) [8])((longlong)local_1f8 + -8),
       0x1f < (ulonglong)((longlong)local_1f8 + (-8 - (longlong)auVar18)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar53._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    free((void *)auVar18);
  }
LAB_1400df3a0:
  pauVar9 = local_b8;
  pauVar21 = local_230;
  if (0xf < pauStack_1c0) {
    pvVar25 = (void *)local_1d8._0_8_;
    if ((0xfff < (longlong)pauStack_1c0 + 1U) &&
       (pvVar25 = *(void **)(local_1d8._0_8_ + -8),
       0x1f < (ulonglong)(local_1d8._0_8_ + (-8 - (longlong)pvVar25)))) goto LAB_1400e0439;
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar53 = ZEXT1664(auVar53._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    free(pvVar25);
  }
  pauVar40 = pauVar40 + 1;
  piVar11 = local_d8;
  goto LAB_1400df1bd;
}

