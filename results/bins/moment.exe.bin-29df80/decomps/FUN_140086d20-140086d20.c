
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140086d20(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,
                  undefined1 (*param_4) [16])

{
  undefined1 (**ppauVar1) [16];
  byte *pbVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  size_t sVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined1 (*pauVar18) [16];
  void *pvVar19;
  uint *puVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined8 *puVar23;
  void *pvVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  char *pcVar27;
  undefined1 (*pauVar28) [16];
  longlong lVar29;
  undefined8 *puVar30;
  undefined1 (*pauVar31) [32];
  undefined1 (*extraout_RAX) [16];
  ushort uVar32;
  ushort uVar33;
  error_type eVar34;
  ulonglong uVar35;
  uint *puVar36;
  undefined1 (*pauVar37) [16];
  void *pvVar38;
  ulonglong uVar39;
  undefined1 *puVar40;
  undefined1 (*unaff_RBX) [16];
  byte *pbVar41;
  ushort uVar42;
  undefined1 (*unaff_RSI) [16];
  undefined7 uVar44;
  char *pcVar43;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  error_type eVar49;
  undefined1 (*unaff_RDI) [16];
  longlong lVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  undefined *puVar53;
  longlong lVar54;
  undefined8 unaff_R12;
  undefined **ppuVar55;
  undefined1 (*pauVar56) [16];
  ulonglong uVar57;
  int iVar58;
  undefined **ppuVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [64];
  undefined1 auVar72 [64];
  undefined1 local_168 [32];
  undefined1 (*local_140) [16];
  undefined1 local_138 [16];
  size_t sStack_128;
  undefined1 (*pauStack_120) [16];
  undefined1 (*local_110 [2]) [16];
  longlong lStack_100;
  ulonglong uStack_f8;
  error_type local_ec;
  undefined1 (*local_e8) [16];
  error_type local_dc;
  undefined1 (*local_d8) [16];
  undefined1 (*local_d0) [16];
  undefined1 (*local_c8) [16];
  uint *local_c0;
  undefined1 (*local_b8) [16];
  undefined1 (*local_b0) [16];
  undefined1 (*local_a8) [16];
  undefined1 (*local_a0) [16];
  undefined1 (*local_98) [16];
  undefined1 (*local_90) [16];
  uint *local_88;
  undefined1 (*local_80) [16];
  undefined1 (*local_78) [16];
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_a0 = (undefined1 (*) [16])((longlong)param_1[4] + 8);
  lVar50 = *(longlong *)((longlong)param_1[4] + 8);
  local_78 = (undefined1 (*) [16])((longlong)param_1[7] + 0xc);
  local_80 = param_1 + 8;
  local_88 = (uint *)((longlong)param_1[7] + 8);
  local_c0 = (uint *)((longlong)param_1[1] + 0xc);
  local_d0 = (undefined1 (*) [16])((longlong)param_1[5] + 8);
  local_b0 = (undefined1 (*) [16])((longlong)param_1[7] + 4);
  auVar72 = ZEXT1664((undefined1  [16])0x0);
  auVar71 = ZEXT1664(_DAT_14010b170);
  local_140 = &local_138;
  ppuVar55 = (undefined **)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  local_98 = param_1;
LAB_140086dd0:
  uVar15 = *(uint *)*local_78;
  pauVar26 = unaff_RBX;
LAB_140086dff:
  uVar45 = (uint)ppuVar55;
  pcVar43 = (char *)&DAT_1400a4460;
  auVar69 = auVar71._0_16_;
  auVar70 = auVar72._0_16_;
  switch(uVar15) {
  case 0x24:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x20);
    *puVar23 = std::_Node_base::vftable;
    *(undefined4 *)(puVar23 + 1) = 3;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    puVar23[3] = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      puVar23[2] = *(longlong *)pauVar26[1];
      *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar26[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    unaff_RBX = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != unaff_RBX) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != unaff_RBX)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == unaff_RBX) goto LAB_140086de0;
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    ppuVar55 = (undefined **)0x0;
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    pauVar26 = unaff_RBX;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      goto code_r0x0001400887f3;
    default:
      goto LAB_140086dff;
    case (undefined1 (*) [16])0x1a:
      if ((*(uint *)*local_80 & 0x2000000) == 0) {
        ppuVar55 = (undefined **)0x0;
      }
      else {
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        if (unaff_RSI == unaff_RBX) {
          ppuVar55 = (undefined **)0x0;
        }
        else {
          if ((char)*(uint *)*unaff_RSI != '\n') break;
          ppuVar55 = (undefined **)0x0;
        }
      }
      goto LAB_140086dd0;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      if ((*(uint *)*local_80 & 8) != 0) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
      break;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) {
        ppuVar55 = (undefined **)0x0;
      }
      else {
        pauVar26 = *(undefined1 (**) [16])*local_a0;
        ppuVar55 = (undefined **)0x0;
        switch(*(undefined4 *)(*pauVar26 + 8)) {
        case 2:
          goto code_r0x00014008fdd9;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014008fe00;
        }
      }
      goto LAB_140086dd0;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      if ((*(uint *)*local_80 & 1) != 0) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      ppuVar55 = (undefined **)0x0;
      if (unaff_RSI == unaff_RBX) goto LAB_140086dff;
      if (((*(uint *)*local_80 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*unaff_RSI, (bVar10 & 0xfe) == 0x28)) goto code_r0x00014008fe5b;
      if ((*(uint *)*local_80 & 0x10) != 0) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
      bVar10 = (byte)*(uint *)*unaff_RSI;
      if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
      goto code_r0x00014008fe5b;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) == 0) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
      ppuVar55 = (undefined **)0x0;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto LAB_140086dd0;
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      if ((*(uint *)*local_80 & 0x10) != 0) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
      break;
    case (undefined1 (*) [16])0x72:
      if ((*(uint *)*local_80 & 2) != 0) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
    }
    goto code_r0x00014008fef3;
  case 0x28:
    goto code_r0x0001400901d4;
  case 0x29:
    if (*local_c0 != 0) {
      if (((ulonglong)ppuVar55 & 1) != 0) {
        return;
      }
      goto LAB_140094517;
    }
    if ((*(uint *)*local_80 & 0x10000000) == 0) goto code_r0x0001400a1955;
    break;
  case 0x2a:
  case 0x2b:
  case 0x3f:
  case 0x7b:
    goto code_r0x0001400a1948;
  case 0x2e:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x20);
    *puVar23 = std::_Node_base::vftable;
    *(undefined4 *)(puVar23 + 1) = 5;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    puVar23[3] = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      puVar23[2] = *(longlong *)pauVar26[1];
      *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar26[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    unaff_RBX = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != unaff_RBX) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != unaff_RBX)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == unaff_RBX) goto LAB_140086de0;
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      goto code_r0x00014008fb16;
    default:
      goto LAB_1400900b1;
    case (undefined1 (*) [16])0x1a:
      goto code_r0x00014008fb4d;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      goto code_r0x00014008fac2;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) != 0) {
        switch(*(undefined4 *)(puVar23 + 1)) {
        case 2:
          lVar29 = puVar23[3];
          goto code_r0x00014008fbb3;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014008fe00;
        }
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      goto code_r0x00014008fad7;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (unaff_RSI != unaff_RBX) goto code_r0x0001400903bd;
      break;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(puVar23 + 1)) {
        case 2:
          lVar29 = puVar23[3];
          goto code_r0x00014008fc0d;
        default:
          goto code_r0x00014008fe00;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      goto code_r0x00014008faec;
    case (undefined1 (*) [16])0x72:
      goto code_r0x00014008fb01;
    }
    goto code_r0x0001400900a8;
  case 0x5b:
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar18 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar18) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar18) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      pauVar21 = param_4;
      goto code_r0x000140088393;
    }
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    auVar70 = auVar72._0_16_;
    auVar69 = auVar71._0_16_;
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    pauVar21 = param_4;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI != pauVar18)) &&
         ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x000140088386;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x000140087ded;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x000140088386;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140088386;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140087ded:
      if (bVar10 == 0) {
code_r0x000140088386:
        *(uint *)*local_78 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (unaff_RSI != pauVar18) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140088183:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*unaff_RSI;
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140088183;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x000140088386;
          break;
        default:
          goto code_r0x000140088386;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x000140087f86;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140087f86:
      if (bVar10 != 0) break;
      goto code_r0x000140088386;
    }
code_r0x000140088393:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar22 = operator_new(0x50);
    *(undefined4 *)((longlong)*pauVar22 + 8) = 7;
    *(undefined8 *)((longlong)*pauVar22 + 0xc) = 0;
    *(undefined4 *)(pauVar22[1] + 4) = 0;
    *(undefined ***)*pauVar22 = std::_Node_class<char,class_std::regex_traits<char>_>::vftable;
    *(undefined8 *)(pauVar22[4] + 8) = 0;
    *(undefined1 (*) [32])(pauVar22 + 2) = ZEXT1232(ZEXT812(0));
    *(undefined2 *)pauVar22[4] = 0;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    *(undefined1 (**) [16])(pauVar22[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar22[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar22;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar22;
    *(undefined1 (**) [16])*local_a0 = pauVar22;
    pauVar56 = (undefined1 (*) [16])(ulonglong)*(uint *)*local_78;
    if (*(uint *)*local_78 != 0x5e) goto code_r0x0001400889ab;
    pbVar41 = (byte *)((longlong)*pauVar22 + 0xc);
    *pbVar41 = *pbVar41 ^ 1;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar18 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar18) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar18) goto code_r0x000140088afb;
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    pauVar56 = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) break;
      goto code_r0x000140088bb8;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI != pauVar18)) &&
         ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x000140088cf3;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x000140088862;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)((longlong)*pauVar22 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)(pauVar22[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x0001400889ab;
        break;
      default:
        goto code_r0x0001400889ab;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
      goto code_r0x000140088cf3;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
      goto joined_r0x000140088862;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (unaff_RSI != pauVar18) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*unaff_RSI, pauVar26 = (undefined1 (*) [16])(ulonglong)bVar10,
           (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400888fb:
          *(char *)local_88 = (char)pauVar26;
          *(uint *)*local_78 = (uint)pauVar26;
          pauVar56 = pauVar26;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*unaff_RSI;
          pauVar26 = (undefined1 (*) [16])(ulonglong)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400888fb;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)((longlong)*pauVar22 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)(pauVar22[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x0001400889ab;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x0001400889ab;
        }
        goto code_r0x000140088cf3;
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x000140088862;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140088862:
      if (bVar10 != 0) break;
      goto code_r0x000140088cf3;
    }
code_r0x0001400889ab:
    if (((*(uint *)*local_80 & 0x20000000) == 0) || ((int)pauVar56 != 0x5d))
    goto code_r0x000140088d33;
    bVar10 = 0x5d;
    if ((*(uint *)local_98[5] & 0x100) != 0) {
      plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      bVar10 = (**(code **)(*plVar3 + 0x20))(plVar3,0x5d);
      pauVar22 = *(undefined1 (**) [16])*local_a0;
    }
    pauVar31 = *(undefined1 (**) [32])(pauVar22[2] + 8);
    if (pauVar31 == (undefined1 (*) [32])0x0) {
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pauVar31 = operator_new(0x20);
      *pauVar31 = ZEXT1232(ZEXT812(0));
      *(undefined1 (**) [32])(pauVar22[2] + 8) = pauVar31;
    }
    pbVar41 = (byte *)((longlong)*pauVar31 + (ulonglong)(bVar10 >> 3));
    *pbVar41 = *pbVar41 | '\x01' << (bVar10 & 7);
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar18 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar18) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar18) {
code_r0x000140088afb:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      pauVar56 = (undefined1 (*) [16])0xffffffff;
      goto code_r0x000140088d33;
    }
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    pauVar56 = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
code_r0x000140088bb8:
        *(uint *)*local_78 = 0x7c;
        pauVar56 = (undefined1 (*) [16])0x7c;
      }
    default:
      goto code_r0x000140088d33;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) == 0) ||
          (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI == pauVar18)) ||
         ((char)*(uint *)*unaff_RSI == '\n')) goto code_r0x000140088d33;
      goto code_r0x000140088cf3;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      break;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) goto code_r0x000140088d33;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x000140088d33;
        break;
      default:
        goto code_r0x000140088d33;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
      goto code_r0x000140088cf3;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
      break;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (unaff_RSI != pauVar18) {
        if (((*(uint *)*local_80 & 8) != 0) ||
           (bVar10 = (byte)*(uint *)*unaff_RSI, pauVar26 = (undefined1 (*) [16])(ulonglong)bVar10,
           (bVar10 & 0xfe) != 0x28)) {
          if ((*(uint *)*local_80 & 0x10) != 0) goto code_r0x000140088d33;
          bVar10 = (byte)*(uint *)*unaff_RSI;
          pauVar26 = (undefined1 (*) [16])(ulonglong)bVar10;
          if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x000140088d33;
        }
        *(char *)local_88 = (char)pauVar26;
        *(uint *)*local_78 = (uint)pauVar26;
        pauVar56 = pauVar26;
      }
      goto code_r0x000140088d33;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) == 0) goto code_r0x000140088d33;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x000140088d33;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140088d33;
      }
      goto code_r0x000140088cf3;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      break;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
    }
    if (bVar10 == 0) {
code_r0x000140088cf3:
      *(uint *)*local_78 = 0;
      pauVar56 = (undefined1 (*) [16])0x0;
    }
code_r0x000140088d33:
    uVar15 = (uint)pauVar56;
    auVar69 = auVar71._0_16_;
    auVar70 = auVar72._0_16_;
    param_4 = pauVar21;
    if (0x5b < (int)uVar15) {
      if (uVar15 == 0x5c) {
        pauVar22 = *(undefined1 (**) [16])*local_98;
        pauVar26 = *(undefined1 (**) [16])local_98[1];
        if (pauVar22 != pauVar26) {
          if ((((char)*(uint *)*pauVar22 == '\\') &&
              (pauVar21 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar21 != pauVar26)) &&
             ((((*(uint *)*local_80 & 8) == 0 &&
               (((ulonglong)*(undefined1 (**) [16])*pauVar21 & 0xfe) == 0x28)) ||
              (((*(uint *)*local_80 & 0x10) == 0 &&
               (((*pauVar21)[0] == '}' || ((*pauVar21)[0] == '{')))))))) {
            pauVar22 = pauVar21;
          }
          pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar22;
        }
        if (pauVar22 == pauVar26) {
          *(uint *)*local_78 = 0xffffffff;
          *(undefined1 *)local_88 = 0xff;
          bVar10 = 0xff;
          goto code_r0x000140089600;
        }
        bVar10 = (byte)*(uint *)*pauVar22;
        uVar46 = (uint)(char)bVar10;
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
        uVar45 = uVar46;
        if (pvVar19 == (void *)0x0) {
          uVar45 = 0;
        }
        *(uint *)*local_78 = uVar45;
        *(byte *)local_88 = bVar10;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
        pauVar18 = pauVar26;
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
            *(uint *)*local_78 = 0x7c;
          }
          break;
        case (undefined1 (*) [16])0x1a:
          if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
              (pauVar21 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar21 != pauVar26)) &&
             ((char)*(uint *)*pauVar21 != '\n')) goto code_r0x0001400895ed;
          break;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          bVar11 = (byte)*(uint *)*local_80 & 8;
          goto joined_r0x00014008906b;
        case (undefined1 (*) [16])0x20:
          if ((*(uint *)*local_80 & 0x4000000) == 0) break;
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0))
            goto code_r0x0001400895ed;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x0001400895ed;
          }
          break;
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          bVar11 = (byte)*(uint *)*local_80 & 1;
joined_r0x00014008906b:
          if (bVar11 == 0) {
code_r0x0001400895ed:
            *(uint *)*local_78 = 0;
          }
          break;
        case (undefined1 (*) [16])0x52:
          pauVar21 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
          if ((pauVar21 != pauVar26) &&
             ((((*(uint *)*local_80 & 8) == 0 &&
               (bVar11 = (byte)*(uint *)*pauVar21, (bVar11 & 0xfe) == 0x28)) ||
              (((*(uint *)*local_80 & 0x10) == 0 &&
               ((bVar11 = (byte)*(uint *)*pauVar21, bVar11 == 0x7d || (bVar11 == 0x7b)))))))) {
            bVar10 = bVar11;
            *(byte *)local_88 = bVar10;
            *(uint *)*local_78 = (uint)bVar10;
          }
          break;
        case (undefined1 (*) [16])0x54:
          if ((*(uint *)*local_80 & 0x2000000) != 0) {
            switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
              if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
              goto code_r0x0001400895ed;
              break;
            default:
              goto code_r0x0001400895ed;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
          }
          break;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          bVar11 = (byte)*(uint *)*local_80 & 0x10;
          goto joined_r0x0001400890e9;
        case (undefined1 (*) [16])0x72:
          bVar11 = (byte)*(uint *)*local_80 & 2;
joined_r0x0001400890e9:
          if (bVar11 != 0) break;
          goto code_r0x0001400895ed;
        }
code_r0x000140089600:
        uVar45 = *(uint *)*local_80;
        uVar39 = (ulonglong)uVar45;
        param_4 = pauVar26;
        pauVar21 = pauVar26;
        if ((uVar45 & 0x200000) != 0) {
          if (((uVar45 & 0x4000) == 0) || (bVar10 != 0x5c)) {
            ppuVar55 = (undefined **)pauVar22;
            if (((uVar45 & 0x20000) == 0) ||
               (ppuVar55 = (undefined **)pauVar26, pauVar22 == pauVar26)) {
code_r0x000140089b53:
              *(uint *)*local_b0 = 0;
              local_a8 = *(undefined1 (**) [16])*local_a0;
              local_b8 = (undefined1 (*) [16])
                         CONCAT71(local_b8._1_7_,*local_c0 == 0 & (byte)(uVar39 >> 2) & 0x3f);
              unaff_RSI = (undefined1 (*) [16])0x0;
              pcVar43 = (char *)0x0;
              local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,(int)uVar39);
              pauVar22 = (undefined1 (*) [16])ppuVar55;
              while( true ) {
                auVar69 = auVar71._0_16_;
                auVar70 = auVar72._0_16_;
                pauVar26 = pauVar18;
                if (9 < (byte)(bVar10 - 0x30)) break;
                if ((int)((0x8000002f - bVar10) / 10) < (int)pcVar43) goto code_r0x0001400a1917;
                uVar15 = ((uint)bVar10 + (int)pcVar43 * 10) - 0x30;
                pcVar43 = (char *)(ulonglong)uVar15;
                *(uint *)*local_b0 = uVar15;
                if ((undefined1 (*) [16])ppuVar55 == param_4) {
code_r0x000140089b90:
                  *(uint *)*local_78 = 0xffffffff;
                  *(undefined1 *)local_88 = 0xff;
                  bVar10 = 0xff;
                  ppuVar55 = (undefined **)param_4;
                  pauVar18 = pauVar22;
                  goto code_r0x000140089bb0;
                }
                pauVar26 = (undefined1 (*) [16])ppuVar55;
                if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
                    (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
                    pauVar18 != param_4)) &&
                   ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
                    (((uVar39 & 0x10) == 0 &&
                     ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
                  pauVar26 = pauVar18;
                }
                ppuVar55 = (undefined **)((longlong)*pauVar26 + 1);
                *(undefined ***)*local_98 = ppuVar55;
                pauVar22 = param_4;
                if ((undefined1 (*) [16])ppuVar55 == param_4) goto code_r0x000140089b90;
                bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
                uVar45 = (uint)(char)bVar10;
                auVar71 = ZEXT1664(auVar69);
                auVar72 = ZEXT1664(auVar70);
                pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
                uVar15 = uVar45;
                if (pvVar19 == (void *)0x0) {
                  uVar15 = 0;
                }
                *(uint *)*local_78 = uVar15;
                *(byte *)local_88 = bVar10;
                unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
                pauVar18 = (undefined1 (*) [16])ppuVar55;
                if (0x73 < uVar45 - 10) {
                  uVar39 = (ulonglong)local_90 & 0xffffffff;
                  goto code_r0x000140089bb0;
                }
                uVar39 = (ulonglong)local_90 & 0xffffffff;
                switch(unaff_RDI) {
                case (undefined1 (*) [16])0x0:
                  if ((char)local_b8 != '\0') {
                    *(uint *)*local_78 = 0x7c;
                  }
                  break;
                case (undefined1 (*) [16])0x1a:
                  if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                      (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2),
                      pauVar26 != param_4)) && ((char)*(uint *)*pauVar26 != '\n'))
                  goto code_r0x000140089e49;
                  break;
                case (undefined1 (*) [16])0x1e:
                case (undefined1 (*) [16])0x1f:
                  uVar57 = (ulonglong)local_90 & 8;
                  goto joined_r0x000140089ce9;
                case (undefined1 (*) [16])0x20:
                  if (((ulonglong)local_90 & 0x4000000) == 0) break;
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                    if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                    goto code_r0x000140089e49;
                    break;
                  case 8:
                  case 0xd:
                  case 0x14:
                    goto code_r0x000140089e49;
                  }
                  break;
                case (undefined1 (*) [16])0x21:
                case (undefined1 (*) [16])0x35:
                  uVar57 = (ulonglong)local_90 & 1;
joined_r0x000140089ce9:
                  if (uVar57 == 0) {
code_r0x000140089e49:
                    *(uint *)*local_78 = 0;
                  }
                  break;
                case (undefined1 (*) [16])0x52:
                  pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
                  if ((pauVar26 != param_4) &&
                     (((((ulonglong)local_90 & 8) == 0 &&
                       (bVar11 = (byte)*(uint *)*pauVar26, (bVar11 & 0xfe) == 0x28)) ||
                      ((((ulonglong)local_90 & 0x10) == 0 &&
                       ((bVar11 = (byte)*(uint *)*pauVar26, bVar11 == 0x7d || (bVar11 == 0x7b)))))))
                     ) {
                    bVar10 = bVar11;
                    *(byte *)local_88 = bVar10;
                    *(uint *)*local_78 = (uint)bVar10;
                  }
                  break;
                case (undefined1 (*) [16])0x54:
                  if (((ulonglong)local_90 & 0x2000000) != 0) {
                    switch(*(uint *)((longlong)*local_a8 + 8)) {
                    case 2:
                      uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                      if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                      goto code_r0x000140089e49;
                      break;
                    default:
                      goto code_r0x000140089e49;
                    case 8:
                    case 0xd:
                    case 0x14:
                      break;
                    }
                  }
                  break;
                case (undefined1 (*) [16])0x71:
                case (undefined1 (*) [16])0x73:
                  uVar57 = (ulonglong)local_90 & 0x10;
                  goto joined_r0x000140089d07;
                case (undefined1 (*) [16])0x72:
                  uVar57 = (ulonglong)local_90 & 2;
joined_r0x000140089d07:
                  if (uVar57 != 0) break;
                  goto code_r0x000140089e49;
                }
code_r0x000140089bb0:
                uVar15 = (int)unaff_RSI + 1;
                unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
                pauVar22 = pauVar18;
                if (uVar15 == 0x7fffffff) goto code_r0x000140089e74;
              }
              if ((int)unaff_RSI != 0) goto code_r0x000140089e74;
              if (*(uint *)*local_78 == 0xffffffff) goto code_r0x0001400a1917;
              pauVar21 = param_4;
              if ((((uVar39 & 0x10000) != 0) &&
                  (bVar11 = (byte)(bVar10 + 0x9a) >> 1 | bVar10 << 7, bVar11 < 9)) &&
                 ((0x1d1U >> (bVar11 & 0x1f) & 1) != 0)) {
                pcVar43 = (char *)(ulonglong)*(uint *)(&UNK_14010b538 + (ulonglong)bVar11 * 4);
                goto code_r0x00014008b64c;
              }
              uVar44 = (undefined7)((ulonglong)unaff_RSI >> 8);
              if (-1 < (short)uVar39) {
                if (bVar10 == 0x78) goto code_r0x00014008b176;
                if (bVar10 == 0x75) goto code_r0x00014008b09c;
                if (bVar10 == 99) goto code_r0x00014008afc5;
code_r0x00014008b183:
                if ((uVar39 & 0x2000) == 0) goto code_r0x00014008b18c;
                *(uint *)*local_b0 = 0;
                unaff_RSI = (undefined1 (*) [16])0x0;
                pcVar43 = (char *)0x0;
                ppuVar55 = (undefined **)pauVar22;
                goto code_r0x00014008b211;
              }
              pcVar43 = (char *)0x7;
              switch(bVar10) {
              case 0x61:
                goto code_r0x00014008b64c;
              case 0x62:
                pcVar43 = (char *)0x8;
code_r0x00014008b64c:
                *(uint *)*local_b0 = (uint)pcVar43;
                if (pauVar22 == param_4) {
code_r0x00014008b710:
                  *(uint *)*local_78 = 0xffffffff;
                  *(undefined1 *)local_88 = 0xff;
                  goto code_r0x00014008ed0d;
                }
                if ((((char)*(uint *)*pauVar22 == '\\') &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar26 != param_4)
                    ) && ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                          (((uVar39 & 0x10) == 0 &&
                           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))
                          ))) {
                  pauVar22 = pauVar26;
                }
                pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
                *(undefined1 (**) [16])*local_98 = pauVar26;
                if (pauVar26 == param_4) goto code_r0x00014008b710;
                cVar14 = (char)*(uint *)*pauVar26;
                uVar45 = (uint)cVar14;
                auVar71 = ZEXT1664(auVar69);
                auVar72 = ZEXT1664(auVar70);
                pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
                uVar15 = uVar45;
                if (pvVar19 == (void *)0x0) {
                  uVar15 = 0;
                }
                break;
              case 99:
code_r0x00014008afc5:
                if ((uVar39 & 0x40000) == 0) goto code_r0x00014008b183;
                if (pauVar22 == param_4) {
code_r0x00014008b89c:
                  *(uint *)*local_78 = 0xffffffff;
                  *(undefined1 *)local_88 = 0xff;
                  bVar10 = 0xff;
                  bVar62 = true;
                  unaff_RSI = param_4;
                  goto code_r0x00014008ebf2;
                }
                if ((((char)*(uint *)*pauVar22 == '\\') &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar26 != param_4)
                    ) && ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                          (((uVar39 & 0x10) == 0 &&
                           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))
                          ))) {
                  pauVar22 = pauVar26;
                }
                unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
                *(undefined1 (**) [16])*local_98 = unaff_RSI;
                if (unaff_RSI == param_4) goto code_r0x00014008b89c;
                bVar10 = (byte)*(uint *)*unaff_RSI;
                uVar45 = (uint)(char)bVar10;
                auVar71 = ZEXT1664(auVar69);
                auVar72 = ZEXT1664(auVar70);
                pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
                bVar62 = false;
                uVar15 = uVar45;
                if (pvVar19 == (void *)0x0) {
                  uVar15 = 0;
                }
                *(uint *)*local_78 = uVar15;
                *(byte *)local_88 = bVar10;
                unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
                if (0x73 < uVar45 - 10) {
                  uVar39 = (ulonglong)local_90 & 0xffffffff;
                  pauVar18 = param_4;
                  goto code_r0x00014008ebf2;
                }
                uVar39 = (ulonglong)local_90 & 0xffffffff;
                pauVar18 = param_4;
                switch(unaff_RDI) {
                case (undefined1 (*) [16])0x0:
                  if ((char)local_b8 != '\0') {
                    *(uint *)*local_78 = 0x7c;
                  }
                  break;
                default:
                  goto code_r0x00014008ebf2;
                case (undefined1 (*) [16])0x1a:
                  if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                      (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2),
                      pauVar26 != param_4)) && ((char)*(uint *)*pauVar26 != '\n'))
                  goto code_r0x00014008ebe3;
                  break;
                case (undefined1 (*) [16])0x1e:
                case (undefined1 (*) [16])0x1f:
                  uVar57 = (ulonglong)local_90 & 8;
                  goto joined_r0x00014008e3b8;
                case (undefined1 (*) [16])0x20:
                  if (((ulonglong)local_90 & 0x4000000) == 0) break;
                  bVar62 = false;
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                    bVar62 = false;
                    if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                    goto code_r0x00014008ebe3;
                    break;
                  case 8:
                  case 0xd:
                  case 0x14:
                    goto code_r0x00014008ebe3;
                  }
                  goto code_r0x00014008ebf2;
                case (undefined1 (*) [16])0x21:
                case (undefined1 (*) [16])0x35:
                  uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008e3b8:
                  if (uVar57 == 0) {
code_r0x00014008ebe3:
                    *(uint *)*local_78 = 0;
                  }
                  break;
                case (undefined1 (*) [16])0x52:
                  pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
                  if ((pauVar26 == param_4) ||
                     (((((ulonglong)local_90 & 8) != 0 ||
                       (bVar11 = (byte)*(uint *)*pauVar26, (bVar11 & 0xfe) != 0x28)) &&
                      ((((ulonglong)local_90 & 0x10) != 0 ||
                       ((bVar11 = (byte)*(uint *)*pauVar26, bVar11 != 0x7d && (bVar11 != 0x7b)))))))
                     ) break;
                  bVar10 = bVar11;
                  *(byte *)local_88 = bVar10;
                  *(uint *)*local_78 = (uint)bVar10;
                  bVar62 = false;
                  goto code_r0x00014008ebf2;
                case (undefined1 (*) [16])0x54:
                  if (((ulonglong)local_90 & 0x2000000) != 0) {
                    bVar62 = false;
                    switch(*(uint *)((longlong)*local_a8 + 8)) {
                    case 2:
                      uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                      goto code_r0x00014008ebf0;
                      break;
                    case 8:
                    case 0xd:
                    case 0x14:
                      goto code_r0x00014008ebf2;
                    }
                    goto code_r0x00014008ebe3;
                  }
                  break;
                case (undefined1 (*) [16])0x71:
                case (undefined1 (*) [16])0x73:
                  uVar57 = (ulonglong)local_90 & 0x10;
                  goto joined_r0x00014008e890;
                case (undefined1 (*) [16])0x72:
                  uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008e890:
                  if (uVar57 != 0) break;
                  goto code_r0x00014008ebe3;
                }
code_r0x00014008ebf0:
                bVar62 = false;
code_r0x00014008ebf2:
                pauVar26 = pauVar18;
                if ((*(ushort *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                      (ulonglong)bVar10 * 2) & 0x103) == 0) goto code_r0x0001400a1917;
                pcVar43 = (char *)(ulonglong)(uint)(int)((char)bVar10 % ' ');
                *(int *)*local_b0 = (int)((char)bVar10 % ' ');
                if (bVar62) {
code_r0x00014008ece9:
                  *(uint *)*local_78 = 0xffffffff;
                  *(undefined1 *)local_88 = 0xff;
                  goto code_r0x00014008ed00;
                }
                if ((((char)*(uint *)*unaff_RSI == '\\') &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != param_4
                    )) && ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                           (((uVar39 & 0x10) == 0 &&
                            ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{'))))
                           )))) {
                  unaff_RSI = pauVar26;
                }
                pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
                *(undefined1 (**) [16])*local_98 = pauVar26;
                if (pauVar26 == param_4) goto code_r0x00014008ece9;
                cVar14 = (char)*(uint *)*pauVar26;
                uVar45 = (uint)cVar14;
                auVar71 = ZEXT1664(auVar71._0_16_);
                auVar72 = ZEXT1664(auVar72._0_16_);
                pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
                uVar15 = uVar45;
                if (pvVar19 == (void *)0x0) {
                  uVar15 = 0;
                }
                *(uint *)*local_78 = uVar15;
                *(char *)local_88 = cVar14;
                unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
                pauVar18 = param_4;
                switch(unaff_RDI) {
                case (undefined1 (*) [16])0x0:
                  if ((char)local_b8 != '\0') {
                    *(uint *)*local_78 = 0x7c;
                  }
                default:
                  goto code_r0x00014008ed00;
                case (undefined1 (*) [16])0x1a:
                  if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                      (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2),
                      unaff_RSI != param_4)) && ((char)*(uint *)*unaff_RSI != '\n'))
                  goto code_r0x00014008f08f;
                  goto code_r0x00014008ed00;
                case (undefined1 (*) [16])0x1e:
                case (undefined1 (*) [16])0x1f:
                  uVar39 = (ulonglong)local_90 & 8;
                  break;
                case (undefined1 (*) [16])0x20:
                  if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014008ed00;
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                    if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                    goto code_r0x00014008f08f;
                  default:
                    goto code_r0x00014008ed00;
                  case 8:
                  case 0xd:
                  case 0x14:
                    goto code_r0x00014008f08f;
                  }
                case (undefined1 (*) [16])0x21:
                case (undefined1 (*) [16])0x35:
                  uVar39 = (ulonglong)local_90 & 1;
                  break;
                case (undefined1 (*) [16])0x52:
                  unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
                  if (unaff_RSI == param_4) goto code_r0x00014008ed00;
                  if ((((ulonglong)local_90 & 8) != 0) ||
                     (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10,
                     (bVar10 & 0xfe) != 0x28)) {
                    if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014008ed00;
                    bVar10 = (byte)*(uint *)*unaff_RSI;
                    uVar15 = (uint)bVar10;
                    if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014008ed00;
                  }
                  *(char *)local_88 = (char)uVar15;
                  *(uint *)*local_78 = uVar15;
                  goto code_r0x00014008ed00;
                case (undefined1 (*) [16])0x54:
                  if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014008ed00;
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                    if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
                  case 8:
                  case 0xd:
                  case 0x14:
                    goto code_r0x00014008ed00;
                  }
                  goto code_r0x00014008f08f;
                case (undefined1 (*) [16])0x71:
                case (undefined1 (*) [16])0x73:
                  uVar39 = (ulonglong)local_90 & 0x10;
                  break;
                case (undefined1 (*) [16])0x72:
                  uVar39 = (ulonglong)local_90 & 2;
                }
                if (uVar39 != 0) goto code_r0x00014008ed00;
code_r0x00014008f08f:
                *(uint *)*local_78 = 0;
                goto code_r0x00014008ed00;
              default:
                goto code_r0x00014008b183;
              case 0x75:
code_r0x00014008b09c:
                if ((uVar39 & 0x800) == 0) goto code_r0x00014008b183;
                if (pauVar22 == param_4) {
code_r0x00014008b8c0:
                  *(uint *)*local_78 = 0xffffffff;
                  *(undefined1 *)local_88 = 0xff;
                  unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,0xff);
                  pauVar56 = param_4;
                  goto code_r0x00014008b8dd;
                }
                if ((((char)*(uint *)*pauVar22 == '\\') &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar26 != param_4)
                    ) && ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                          (((uVar39 & 0x10) == 0 &&
                           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))
                          ))) {
                  pauVar22 = pauVar26;
                }
                pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
                *(undefined1 (**) [16])*local_98 = pauVar56;
                if (pauVar56 == param_4) goto code_r0x00014008b8c0;
                bVar10 = (byte)*(uint *)*pauVar56;
                unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
                uVar45 = (uint)(char)bVar10;
                auVar71 = ZEXT1664(auVar69);
                auVar72 = ZEXT1664(auVar70);
                pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
                uVar15 = uVar45;
                if (pvVar19 == (void *)0x0) {
                  uVar15 = 0;
                }
                *(uint *)*local_78 = uVar15;
                *(byte *)local_88 = bVar10;
                unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
                if (0x73 < uVar45 - 10) {
                  uVar39 = (ulonglong)local_90 & 0xffffffff;
                  goto code_r0x00014008b8dd;
                }
                uVar39 = (ulonglong)local_90 & 0xffffffff;
                switch(unaff_RDI) {
                case (undefined1 (*) [16])0x0:
                  if ((char)local_b8 != '\0') {
                    *(uint *)*local_78 = 0x7c;
                  }
                  break;
                case (undefined1 (*) [16])0x1a:
                  if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                      (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2),
                      pauVar26 != param_4)) && ((char)*(uint *)*pauVar26 != '\n'))
                  goto code_r0x00014008ed7b;
                  break;
                case (undefined1 (*) [16])0x1e:
                case (undefined1 (*) [16])0x1f:
                  uVar57 = (ulonglong)local_90 & 8;
                  goto joined_r0x00014008e3c7;
                case (undefined1 (*) [16])0x20:
                  if (((ulonglong)local_90 & 0x4000000) == 0) break;
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                    if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                    goto code_r0x00014008ed7b;
                    break;
                  case 8:
                  case 0xd:
                  case 0x14:
                    goto code_r0x00014008ed7b;
                  }
                  break;
                case (undefined1 (*) [16])0x21:
                case (undefined1 (*) [16])0x35:
                  uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008e3c7:
                  if (uVar57 == 0) {
code_r0x00014008ed7b:
                    *(uint *)*local_78 = 0;
                  }
                  break;
                case (undefined1 (*) [16])0x52:
                  pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
                  if (pauVar26 != param_4) {
                    if ((((ulonglong)local_90 & 8) == 0) &&
                       (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10,
                       (bVar10 & 0xfe) == 0x28)) {
code_r0x00014008ea21:
                      *(char *)local_88 = (char)uVar15;
                      *(uint *)*local_78 = uVar15;
                      unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
                    }
                    else if (((ulonglong)local_90 & 0x10) == 0) {
                      bVar10 = (byte)*(uint *)*pauVar26;
                      uVar15 = (uint)bVar10;
                      if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008ea21;
                    }
                  }
                  break;
                case (undefined1 (*) [16])0x54:
                  if (((ulonglong)local_90 & 0x2000000) != 0) {
                    switch(*(uint *)((longlong)*local_a8 + 8)) {
                    case 2:
                      uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                      if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                      goto code_r0x00014008ed7b;
                      break;
                    default:
                      goto code_r0x00014008ed7b;
                    case 8:
                    case 0xd:
                    case 0x14:
                      break;
                    }
                  }
                  break;
                case (undefined1 (*) [16])0x71:
                case (undefined1 (*) [16])0x73:
                  uVar57 = (ulonglong)local_90 & 0x10;
                  goto joined_r0x00014008e89f;
                case (undefined1 (*) [16])0x72:
                  uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008e89f:
                  if (uVar57 != 0) break;
                  goto code_r0x00014008ed7b;
                }
code_r0x00014008b8dd:
                *(uint *)*local_b0 = 0;
                pcVar43 = (char *)0x0;
                pauVar26 = (undefined1 (*) [16])0xfffffffc;
                goto code_r0x00014008b928;
              case 0x78:
code_r0x00014008b176:
                if ((uVar39 & 0x1000) == 0) goto code_r0x00014008b183;
                if (pauVar22 == param_4) {
code_r0x00014008bbe8:
                  *(uint *)*local_78 = 0xffffffff;
                  *(undefined1 *)local_88 = 0xff;
                  unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,0xff);
                  pauVar56 = param_4;
                  goto code_r0x00014008bc05;
                }
                if ((((char)*(uint *)*pauVar22 == '\\') &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar26 != param_4)
                    ) && ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                          (((uVar39 & 0x10) == 0 &&
                           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))
                          ))) {
                  pauVar22 = pauVar26;
                }
                pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
                *(undefined1 (**) [16])*local_98 = pauVar56;
                if (pauVar56 == param_4) goto code_r0x00014008bbe8;
                bVar10 = (byte)*(uint *)*pauVar56;
                unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
                uVar45 = (uint)(char)bVar10;
                auVar71 = ZEXT1664(auVar69);
                auVar72 = ZEXT1664(auVar70);
                pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
                uVar15 = uVar45;
                if (pvVar19 == (void *)0x0) {
                  uVar15 = 0;
                }
                *(uint *)*local_78 = uVar15;
                *(byte *)local_88 = bVar10;
                unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
                if (0x73 < uVar45 - 10) {
                  uVar39 = (ulonglong)local_90 & 0xffffffff;
                  goto code_r0x00014008bc05;
                }
                uVar39 = (ulonglong)local_90 & 0xffffffff;
                switch(unaff_RDI) {
                case (undefined1 (*) [16])0x0:
                  if ((char)local_b8 != '\0') {
                    *(uint *)*local_78 = 0x7c;
                  }
                  break;
                case (undefined1 (*) [16])0x1a:
                  if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                      (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2),
                      pauVar26 != param_4)) && ((char)*(uint *)*pauVar26 != '\n'))
                  goto code_r0x00014008edd7;
                  break;
                case (undefined1 (*) [16])0x1e:
                case (undefined1 (*) [16])0x1f:
                  uVar57 = (ulonglong)local_90 & 8;
                  goto joined_r0x00014008e3f4;
                case (undefined1 (*) [16])0x20:
                  if (((ulonglong)local_90 & 0x4000000) == 0) break;
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                    if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                    goto code_r0x00014008edd7;
                    break;
                  case 8:
                  case 0xd:
                  case 0x14:
                    goto code_r0x00014008edd7;
                  }
                  break;
                case (undefined1 (*) [16])0x21:
                case (undefined1 (*) [16])0x35:
                  uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008e3f4:
                  if (uVar57 == 0) {
code_r0x00014008edd7:
                    *(uint *)*local_78 = 0;
                  }
                  break;
                case (undefined1 (*) [16])0x52:
                  pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
                  if (pauVar26 != param_4) {
                    if ((((ulonglong)local_90 & 8) == 0) &&
                       (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10,
                       (bVar10 & 0xfe) == 0x28)) {
code_r0x00014008ea7a:
                      *(char *)local_88 = (char)uVar15;
                      *(uint *)*local_78 = uVar15;
                      unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
                    }
                    else if (((ulonglong)local_90 & 0x10) == 0) {
                      bVar10 = (byte)*(uint *)*pauVar26;
                      uVar15 = (uint)bVar10;
                      if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008ea7a;
                    }
                  }
                  break;
                case (undefined1 (*) [16])0x54:
                  if (((ulonglong)local_90 & 0x2000000) != 0) {
                    switch(*(uint *)((longlong)*local_a8 + 8)) {
                    case 2:
                      uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                      if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                      goto code_r0x00014008edd7;
                      break;
                    default:
                      goto code_r0x00014008edd7;
                    case 8:
                    case 0xd:
                    case 0x14:
                      break;
                    }
                  }
                  break;
                case (undefined1 (*) [16])0x71:
                case (undefined1 (*) [16])0x73:
                  uVar57 = (ulonglong)local_90 & 0x10;
                  goto joined_r0x00014008e8ae;
                case (undefined1 (*) [16])0x72:
                  uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008e8ae:
                  if (uVar57 != 0) break;
                  goto code_r0x00014008edd7;
                }
code_r0x00014008bc05:
                *(uint *)*local_b0 = 0;
                pauVar26 = (undefined1 (*) [16])0x0;
                pcVar43 = (char *)0x0;
                goto code_r0x00014008bc4b;
              }
              *(uint *)*local_78 = uVar15;
              *(char *)local_88 = cVar14;
              unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
              unaff_RSI = param_4;
              switch(unaff_RDI) {
              case (undefined1 (*) [16])0x0:
                if ((char)local_b8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
              default:
                goto code_r0x00014008ed0d;
              case (undefined1 (*) [16])0x1a:
                if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar26 != param_4)
                    ) && ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014008c1aa;
                goto code_r0x00014008ed0d;
              case (undefined1 (*) [16])0x1e:
              case (undefined1 (*) [16])0x1f:
                uVar39 = (ulonglong)local_90 & 8;
                break;
              case (undefined1 (*) [16])0x20:
                if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014008ed0d;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x00014008c1aa;
                default:
                  goto code_r0x00014008ed0d;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014008c1aa;
                }
              case (undefined1 (*) [16])0x21:
              case (undefined1 (*) [16])0x35:
                uVar39 = (ulonglong)local_90 & 1;
                break;
              case (undefined1 (*) [16])0x52:
                pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
                if (pauVar26 == param_4) goto code_r0x00014008ed0d;
                if ((((ulonglong)local_90 & 8) != 0) ||
                   (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10,
                   (bVar10 & 0xfe) != 0x28)) {
                  if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014008ed0d;
                  bVar10 = (byte)*(uint *)*pauVar26;
                  uVar15 = (uint)bVar10;
                  if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014008ed0d;
                }
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                goto code_r0x00014008ed0d;
              case (undefined1 (*) [16])0x54:
                if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014008ed0d;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
                  if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014008ed0d;
                }
                goto code_r0x00014008c1aa;
              case (undefined1 (*) [16])0x71:
              case (undefined1 (*) [16])0x73:
                uVar39 = (ulonglong)local_90 & 0x10;
                break;
              case (undefined1 (*) [16])0x72:
                uVar39 = (ulonglong)local_90 & 2;
              }
              if (uVar39 != 0) goto code_r0x00014008ed0d;
code_r0x00014008c1aa:
              *(uint *)*local_78 = 0;
              goto code_r0x00014008ed0d;
            }
            lVar29 = *(longlong *)((longlong)local_98[6] + 8);
            local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,*(uint *)local_98[7]);
            uVar39 = 0;
            ppuVar55 = &PTR_s_alpha_140111f78;
            bVar62 = false;
            pcVar43 = "alnum";
            do {
              if ((0x2810UL >> (uVar39 & 0x3f) & 1) != 0) {
                pauVar18 = (undefined1 (*) [16])(ulonglong)(byte)*pcVar43;
                plVar3 = *(longlong **)(lVar29 + 8);
                auVar71 = ZEXT1664(auVar71._0_16_);
                auVar72 = ZEXT1664(auVar72._0_16_);
                uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,(char)*(uint *)*pauVar22);
                unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
                plVar3 = *(longlong **)(lVar29 + 8);
                cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,pauVar18);
                if ((char)uVar15 == cVar14) {
                  if (!bVar62) {
                    uVar42 = (ushort)*(uint *)((longlong)
                                               *(undefined1 (*) [16])((longlong)ppuVar55 + -0x10) +
                                              0xc);
                    goto code_r0x000140089835;
                  }
                  break;
                }
              }
              uVar39 = uVar39 + 1;
              pcVar43 = *(char **)*(undefined1 (*) [16])ppuVar55;
              bVar62 = (byte *)pcVar43 == (byte *)0x0;
              ppuVar55 = (undefined **)
                         ((longlong)*(undefined1 (*) [16])((longlong)ppuVar55 + 0x10) + 8);
            } while (uVar39 != 0xf);
            uVar42 = 0;
code_r0x000140089835:
            uVar33 = uVar42 | 3;
            if ((uVar42 & 3) == 0) {
              uVar33 = uVar42;
            }
            if (((ulonglong)local_90 & 0x100) == 0) {
              uVar33 = uVar42;
            }
            if (uVar33 == 0) {
              uVar39 = (ulonglong)*(uint *)local_98[8];
              bVar10 = (byte)*(uint *)((longlong)local_98[7] + 8);
              param_4 = *(undefined1 (**) [16])local_98[1];
              ppuVar55 = (undefined **)*(undefined1 (**) [16])*local_98;
              goto code_r0x000140089b53;
            }
            unaff_RDI = *(undefined1 (**) [16])((longlong)local_98[4] + 8);
            uVar42 = *(ushort *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                      (ulonglong)(byte)*(uint *)((longlong)local_98[7] + 8) * 2);
            uVar39 = 0;
            do {
              uVar32 = uVar33;
              if ((uVar33 == 0xffff) && (uVar32 = 0x107, uVar39 == 0x5f)) {
                if ((uVar42 & 1) == 0) {
code_r0x0001400898e9:
                  pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RDI[2] + 8);
                  if (pauVar31 == (undefined1 (*) [32])0x0) {
                    auVar71 = ZEXT1664(auVar71._0_16_);
                    auVar72 = ZEXT1664(auVar72._0_16_);
                    pauVar31 = operator_new(0x20);
                    *pauVar31 = ZEXT1232(ZEXT812(0));
                    *(undefined1 (**) [32])((longlong)unaff_RDI[2] + 8) = pauVar31;
                  }
                  pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
                  *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
                }
              }
              else if ((bool)((byte)uVar42 & 1) !=
                       ((*(ushort *)
                          (*(longlong *)
                            (*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) +
                          uVar39 * 2) & uVar32) != 0)) goto code_r0x0001400898e9;
              uVar39 = uVar39 + 1;
            } while (uVar39 != 0x100);
            unaff_RSI = *(undefined1 (**) [16])*local_98;
            pauVar26 = *(undefined1 (**) [16])local_98[1];
            if (unaff_RSI != pauVar26) {
              if ((((*unaff_RSI)[0] == '\\') &&
                  (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)
                  ) && ((((*(uint *)*local_80 & 8) == 0 &&
                         (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
                        (((*(uint *)*local_80 & 0x10) == 0 &&
                         (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))))) {
                unaff_RSI = pauVar18;
              }
              unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
              *(undefined1 (**) [16])*local_98 = unaff_RSI;
            }
            if (unaff_RSI == pauVar26) goto code_r0x00014008ac54;
            cVar14 = (*unaff_RSI)[0];
            uVar45 = (uint)cVar14;
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
            uVar15 = uVar45;
            if (pvVar19 == (void *)0x0) {
              uVar15 = 0;
            }
            *(uint *)*local_78 = uVar15;
            *(char *)local_88 = cVar14;
            unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
            switch(unaff_RDI) {
            case (undefined1 (*) [16])0x0:
              goto code_r0x00014008acaf;
            case (undefined1 (*) [16])0x1a:
              if (((*(uint *)*local_80 & 0x2000000) == 0) ||
                 (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI == pauVar26
                 )) break;
              goto code_r0x00014008acfc;
            case (undefined1 (*) [16])0x1e:
            case (undefined1 (*) [16])0x1f:
              goto code_r0x00014008ac3f;
            case (undefined1 (*) [16])0x20:
              if ((*(uint *)*local_80 & 0x4000000) == 0) break;
              pauVar18 = *(undefined1 (**) [16])*local_a0;
              switch(*(undefined4 *)(*pauVar18 + 8)) {
              case 2:
                goto code_r0x00014008ad9d;
              default:
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014008b88a;
              }
            case (undefined1 (*) [16])0x21:
            case (undefined1 (*) [16])0x35:
              goto code_r0x00014008ac70;
            case (undefined1 (*) [16])0x52:
              unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
              if (unaff_RSI == pauVar26) break;
              goto code_r0x00014008ad17;
            case (undefined1 (*) [16])0x54:
              if ((*(uint *)*local_80 & 0x2000000) != 0) {
                pauVar18 = *(undefined1 (**) [16])*local_a0;
                switch(*(undefined4 *)(*pauVar18 + 8)) {
                case 2:
                  goto code_r0x00014008adf7;
                default:
                  goto code_r0x00014008b88a;
                case 8:
                case 0xd:
                case 0x14:
                  break;
                }
              }
              break;
            case (undefined1 (*) [16])0x71:
            case (undefined1 (*) [16])0x73:
              goto code_r0x00014008ac85;
            case (undefined1 (*) [16])0x72:
              goto code_r0x00014008ac9a;
            }
            goto code_r0x000140088d29;
          }
          *(uint *)*local_b0 = 0x5c;
          if (pauVar22 == pauVar26) {
code_r0x00014008977a:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            goto code_r0x000140089791;
          }
          if ((((char)*(uint *)*pauVar22 == '\\') &&
              (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar56 != pauVar26)) &&
             ((((uVar45 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar56 & 0xfe) == 0x28))
              || (((uVar45 & 0x10) == 0 && (((*pauVar56)[0] == '}' || ((*pauVar56)[0] == '{'))))))))
          {
            pauVar22 = pauVar56;
          }
          pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar56;
          if (pauVar56 == pauVar26) goto code_r0x00014008977a;
          cVar14 = (char)*(uint *)*pauVar56;
          uVar46 = (uint)cVar14;
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
          uVar15 = uVar46;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(char *)local_88 = cVar14;
          pauVar56 = (undefined1 (*) [16])0x5c;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
          switch(unaff_RDI) {
          case (undefined1 (*) [16])0x0:
            pauVar56 = (undefined1 (*) [16])0x5c;
            if (((uVar45 & 4) == 0) || (*local_c0 != 0)) goto code_r0x00014008c29f;
            *(uint *)*local_78 = 0x7c;
            pauVar18 = pauVar26;
            goto code_r0x000140089791;
          case (undefined1 (*) [16])0x1a:
            if ((uVar45 & 0x2000000) != 0) {
              pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
              pauVar56 = (undefined1 (*) [16])0x5c;
              if ((pauVar18 != pauVar26) && ((char)*(uint *)*pauVar18 != '\n'))
              goto code_r0x00014008af4a;
              goto code_r0x00014008c29f;
            }
            break;
          case (undefined1 (*) [16])0x1e:
          case (undefined1 (*) [16])0x1f:
            uVar45 = uVar45 & 8;
joined_r0x00014008af44:
            pauVar56 = (undefined1 (*) [16])0x5c;
            if (uVar45 == 0) goto code_r0x00014008af4a;
            goto code_r0x00014008c29f;
          case (undefined1 (*) [16])0x20:
            if ((uVar45 & 0x4000000) == 0) break;
            pauVar56 = (undefined1 (*) [16])0x5c;
            switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014008af4a;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014008af4a;
            }
            goto code_r0x00014008c29f;
          case (undefined1 (*) [16])0x21:
          case (undefined1 (*) [16])0x35:
            uVar45 = uVar45 & 1;
            goto joined_r0x000140089f56;
          case (undefined1 (*) [16])0x52:
            pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
            if (pauVar18 != pauVar26) {
              if (((uVar45 & 8) != 0) ||
                 (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)
                 ) {
                pauVar56 = (undefined1 (*) [16])0x5c;
                if ((uVar45 & 0x10) == 0) {
                  bVar10 = (byte)*(uint *)*pauVar18;
                  uVar15 = (uint)bVar10;
                  if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008af9d;
                }
                goto code_r0x00014008c29f;
              }
code_r0x00014008af9d:
              *(char *)local_88 = (char)uVar15;
              *(uint *)*local_78 = uVar15;
              pauVar56 = (undefined1 (*) [16])0x5c;
            }
            break;
          case (undefined1 (*) [16])0x54:
            if ((uVar45 & 0x2000000) != 0) {
              pauVar56 = (undefined1 (*) [16])0x5c;
              switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                if (uVar15 < 0x15) {
                  uVar45 = 0x102100U >> (uVar15 & 0x1f) & 1;
                  goto joined_r0x00014008af44;
                }
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014008c29f;
              }
              goto code_r0x00014008af4a;
            }
            break;
          case (undefined1 (*) [16])0x71:
          case (undefined1 (*) [16])0x73:
            uVar45 = uVar45 & 0x10;
joined_r0x000140089f56:
            pauVar56 = (undefined1 (*) [16])0x5c;
            if (uVar45 != 0) goto code_r0x00014008c29f;
code_r0x00014008af4a:
            *(uint *)*local_78 = 0;
            pauVar18 = pauVar26;
code_r0x000140089791:
            pauVar56 = (undefined1 (*) [16])0x5c;
            goto code_r0x00014008c3a0;
          case (undefined1 (*) [16])0x72:
            goto code_r0x00014008a910;
          }
          goto code_r0x00014008c2a8;
        }
        if ((((uVar45 & 0x10000) == 0) ||
            (bVar11 = (byte)(bVar10 + 0x9a) >> 1 | bVar10 << 7, 8 < bVar11)) ||
           ((0x1d1U >> (bVar11 & 0x1f) & 1) == 0)) {
          if ((short)uVar45 < 0) {
            if (bVar10 == 0x61) {
              pauVar56 = (undefined1 (*) [16])0x7;
            }
            else {
              if (bVar10 != 0x62) goto code_r0x000140089670;
              pauVar56 = (undefined1 (*) [16])0x8;
            }
            goto code_r0x000140089923;
          }
          goto code_r0x000140089670;
        }
        pauVar56 = (undefined1 (*) [16])(ulonglong)*(uint *)(&UNK_14010b538 + (ulonglong)bVar11 * 4)
        ;
code_r0x000140089923:
        *(uint *)*local_b0 = (uint)pauVar56;
        if (pauVar22 == pauVar26) {
code_r0x0001400899e6:
          *(uint *)*local_78 = 0xffffffff;
          *(undefined1 *)local_88 = 0xff;
          goto code_r0x00014008c3a0;
        }
        if ((((char)*(uint *)*pauVar22 == '\\') &&
            (pauVar37 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar37 != pauVar26)) &&
           ((((uVar45 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar37 & 0xfe) == 0x28))
            || (((uVar45 & 0x10) == 0 && (((*pauVar37)[0] == '}' || ((*pauVar37)[0] == '{')))))))) {
          pauVar22 = pauVar37;
        }
        pauVar37 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
        *(undefined1 (**) [16])*local_98 = pauVar37;
        if (pauVar37 == pauVar26) goto code_r0x0001400899e6;
        cVar14 = (char)*(uint *)*pauVar37;
        uVar46 = (uint)cVar14;
        auVar71 = ZEXT1664(auVar71._0_16_);
        auVar72 = ZEXT1664(auVar72._0_16_);
        pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
        uVar15 = uVar46;
        if (pvVar19 == (void *)0x0) {
          uVar15 = 0;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          if (((uVar45 & 4) == 0) || (*local_c0 != 0)) goto code_r0x00014008c29f;
          *(uint *)*local_78 = 0x7c;
          pauVar18 = pauVar26;
          goto code_r0x00014008c3a0;
        case (undefined1 (*) [16])0x1a:
          if ((uVar45 & 0x2000000) != 0) {
            pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
            if ((pauVar18 != pauVar26) && ((char)*(uint *)*pauVar18 != '\n'))
            goto code_r0x00014008ae30;
            goto code_r0x00014008c29f;
          }
          break;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          uVar45 = uVar45 & 8;
          goto joined_r0x00014008ae1e;
        case (undefined1 (*) [16])0x20:
          if ((uVar45 & 0x4000000) != 0) {
            switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014008b5a2;
              break;
            case 8:
            case 0xd:
            case 0x14:
code_r0x00014008b5a2:
              *(uint *)*local_78 = 0;
              pauVar18 = pauVar26;
              goto code_r0x00014008c3a0;
            }
            goto code_r0x00014008c29f;
          }
          break;
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          uVar45 = uVar45 & 1;
          goto joined_r0x00014008ae1e;
        case (undefined1 (*) [16])0x52:
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
          if (pauVar18 != pauVar26) {
            if (((uVar45 & 8) != 0) ||
               (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28))
            {
              if ((uVar45 & 0x10) == 0) {
                bVar10 = (byte)*(uint *)*pauVar18;
                uVar15 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008b538;
              }
              goto code_r0x00014008c29f;
            }
code_r0x00014008b538:
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
          }
          break;
        case (undefined1 (*) [16])0x54:
          if ((uVar45 & 0x2000000) != 0) {
            switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
              if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
              goto code_r0x00014008bf08;
              break;
            default:
code_r0x00014008bf08:
              *(uint *)*local_78 = 0;
              pauVar18 = pauVar26;
              goto code_r0x00014008c3a0;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
            goto code_r0x00014008c29f;
          }
          break;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          uVar45 = uVar45 & 0x10;
joined_r0x00014008ae1e:
          if (uVar45 != 0) goto code_r0x00014008c29f;
code_r0x00014008ae30:
          *(uint *)*local_78 = 0;
          pauVar18 = pauVar26;
          goto code_r0x00014008c3a0;
        case (undefined1 (*) [16])0x72:
code_r0x00014008a910:
          if ((uVar45 & 2) != 0) break;
          goto code_r0x00014008ae30;
        }
        goto code_r0x00014008c2a8;
      }
      if (uVar15 != 0x5d) goto code_r0x000140088f31;
      goto code_r0x00014008f9f0;
    }
    if (uVar15 != 0x5b) {
      if (uVar15 != 0xffffffff) {
code_r0x000140088f31:
        uVar15 = (uint)(char)*(uint *)((longlong)local_98[7] + 8);
        pauVar56 = (undefined1 (*) [16])(ulonglong)uVar15;
        *(uint *)((longlong)local_98[7] + 4) = uVar15;
        param_4 = *(undefined1 (**) [16])*local_98;
        pauVar18 = *(undefined1 (**) [16])local_98[1];
        if (param_4 != pauVar18) {
          if ((((char)*(uint *)*param_4 == '\\') &&
              (pauVar26 = (undefined1 (*) [16])((longlong)*param_4 + 1), pauVar26 != pauVar18)) &&
             ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
              (((*(uint *)*local_80 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
            param_4 = pauVar26;
          }
          param_4 = (undefined1 (*) [16])((longlong)*param_4 + 1);
          *(undefined1 (**) [16])*local_98 = param_4;
        }
        unaff_RSI = param_4;
        if (param_4 == pauVar18) goto code_r0x00014008bfee;
        cVar14 = (char)*(uint *)*param_4;
        uVar45 = (uint)cVar14;
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
        uVar15 = uVar45;
        if (pvVar19 == (void *)0x0) {
          uVar15 = 0;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) goto code_r0x00014008c280;
          goto code_r0x000140089184;
        default:
          goto code_r0x00014008c280;
        case (undefined1 (*) [16])0x1a:
          if (((*(uint *)*local_80 & 0x2000000) == 0) ||
             (param_4 = (undefined1 (*) [16])((longlong)*param_4 + 1), param_4 == pauVar18))
          goto code_r0x00014008c280;
          cVar14 = (char)*(uint *)*param_4;
          goto joined_r0x00014008c1fe;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          bVar10 = (byte)*(uint *)*local_80 & 8;
          break;
        case (undefined1 (*) [16])0x20:
          if ((*(uint *)*local_80 & 0x4000000) == 0) goto code_r0x00014008c280;
          pauVar26 = *(undefined1 (**) [16])*local_a0;
          switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            goto code_r0x000140089422;
          default:
            goto code_r0x00014008c280;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014008c26d;
          }
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          bVar10 = (byte)*(uint *)*local_80 & 1;
          break;
        case (undefined1 (*) [16])0x52:
          param_4 = (undefined1 (*) [16])((longlong)*param_4 + 1);
          if (param_4 == pauVar18) goto code_r0x00014008c280;
          if (((*(uint *)*local_80 & 8) != 0) ||
             (bVar10 = (byte)*(uint *)*param_4, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
            if ((*(uint *)*local_80 & 0x10) != 0) goto code_r0x00014008c280;
            bVar10 = (byte)*(uint *)*param_4;
            uVar15 = (uint)bVar10;
            if (bVar10 == 0x7d) goto code_r0x00014008931d;
            goto code_r0x000140089314;
          }
          goto code_r0x00014008931d;
        case (undefined1 (*) [16])0x54:
          if ((*(uint *)*local_80 & 0x2000000) != 0) {
            pauVar26 = *(undefined1 (**) [16])*local_a0;
            switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              goto code_r0x000140089b16;
            default:
              goto code_r0x00014008c26d;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
          }
          goto code_r0x00014008c280;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          bVar10 = (byte)*(uint *)*local_80 & 0x10;
          break;
        case (undefined1 (*) [16])0x72:
          bVar10 = (byte)*(uint *)*local_80 & 2;
        }
        if (bVar10 == 0) goto code_r0x00014008c26d;
        goto code_r0x00014008c280;
      }
      goto code_r0x00014008f9f0;
    }
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    ppuVar55 = *(undefined ***)local_98[1];
    if (unaff_RSI != (undefined1 (*) [16])ppuVar55) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1),
          pauVar26 != (undefined1 (*) [16])ppuVar55)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == (undefined1 (*) [16])ppuVar55) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      goto code_r0x000140089670;
    }
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar46 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar45 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar45 = 0;
    }
    param_4 = (undefined1 (*) [16])(ulonglong)uVar45;
    *(uint *)*local_78 = uVar45;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
        goto code_r0x000140089670;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1),
          pauVar26 != (undefined1 (*) [16])ppuVar55)) && ((char)*(uint *)*pauVar26 != '\n'))
      goto code_r0x0001400894f0;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x0001400890d4;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x0001400894f0;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400894f0;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
      goto joined_r0x0001400890d4;
    case (undefined1 (*) [16])0x52:
      pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (pauVar26 != (undefined1 (*) [16])ppuVar55) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar26, pauVar21 = (undefined1 (*) [16])(ulonglong)bVar10,
           (bVar10 & 0xfe) == 0x28)) {
code_r0x00014008925e:
          *(char *)local_88 = (char)pauVar21;
          *(uint *)*local_78 = (uint)pauVar21;
          param_4 = pauVar21;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar26;
          pauVar21 = (undefined1 (*) [16])(ulonglong)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008925e;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
          goto code_r0x0001400894f0;
          break;
        default:
          goto code_r0x0001400894f0;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x0001400890d4;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x0001400890d4:
      if (bVar10 != 0) break;
code_r0x0001400894f0:
      *(uint *)*local_78 = 0;
      goto code_r0x000140089670;
    }
    uVar45 = (uint)param_4;
    if ((0x3d < uVar45) || ((0x2400400000000000U >> ((ulonglong)param_4 & 0x3f) & 1) == 0)) {
code_r0x000140089670:
      *(uint *)*local_b0 = uVar15;
      pauVar26 = pauVar18;
      pauVar21 = param_4;
      goto code_r0x00014008c29f;
    }
    if ((((char)*(uint *)*unaff_RSI == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1),
        pauVar26 != (undefined1 (*) [16])ppuVar55)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
      unaff_RSI = pauVar26;
    }
    pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    *(undefined1 (**) [16])*local_98 = pauVar18;
    if (pauVar18 == (undefined1 (*) [16])ppuVar55) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      uVar15 = 0xffffffff;
      goto code_r0x00014008a0e9;
    }
    cVar14 = (char)*(uint *)*pauVar18;
    uVar46 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar15 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    switch(uVar46) {
    case 10:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
        uVar15 = 0x7c;
      }
      break;
    case 0x24:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2),
          unaff_RSI != (undefined1 (*) [16])ppuVar55)) && ((char)*(uint *)*unaff_RSI != '\n'))
      goto code_r0x00014008a0da;
      break;
    case 0x28:
    case 0x29:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x000140089ef3;
    case 0x2a:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0)) goto code_r0x00014008a0da;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008a0da;
      }
      break;
    case 0x2b:
    case 0x3f:
      bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140089ef3:
      if (bVar10 == 0) {
code_r0x00014008a0da:
        *(uint *)*local_78 = 0;
        uVar15 = 0;
      }
      break;
    case 0x5c:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
      if (unaff_RSI != (undefined1 (*) [16])ppuVar55) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*unaff_RSI, uVar46 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014008a030:
          uVar15 = uVar46;
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*unaff_RSI;
          uVar46 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008a030;
        }
      }
      break;
    case 0x5e:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0))
          goto code_r0x00014008a0da;
          break;
        default:
          goto code_r0x00014008a0da;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x000140089f80;
    case 0x7c:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140089f80:
      if (bVar10 != 0) break;
      goto code_r0x00014008a0da;
    }
code_r0x00014008a0e9:
    local_ec = 1;
    if (((uVar45 != 0x3a) && (local_ec = 0, uVar45 != 0x3d)) && (local_ec = 0xe, uVar45 == 0x2e)) {
      local_ec = 0;
    }
    uVar46 = *(uint *)*local_80;
    local_a8 = *(undefined1 (**) [16])*local_a0;
    auVar63._4_4_ = uVar46;
    auVar63._0_4_ = uVar46;
    auVar63._8_4_ = uVar46;
    auVar63._12_4_ = uVar46;
    auVar69 = vpand_avx(auVar63,auVar71._0_16_);
    auVar69 = vpcmpeqd_avx(auVar69,auVar72._0_16_);
    uVar17 = vmovmskps_avx(auVar69);
    bVar10 = (byte)uVar17;
    local_b8 = (undefined1 (*) [16])CONCAT71(local_b8._1_7_,(bVar10 & 2) >> 1);
    local_c8 = (undefined1 (*) [16])CONCAT71(local_c8._1_7_,(bVar10 & 4) >> 2);
    local_d8 = (undefined1 (*) [16])CONCAT44(local_d8._4_4_,uVar17);
    local_e8 = (undefined1 (*) [16])CONCAT71(local_e8._1_7_,bVar10 >> 3);
    local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,uVar46);
    local_dc = CONCAT31(local_dc._1_3_,*local_c0 == 0 & (byte)uVar46 >> 2);
    pcVar43 = (char *)0x0;
    pauVar26 = param_4;
    pauVar21 = pauVar18;
    while( true ) {
      pauVar22 = local_a8;
      auVar70 = auVar72._0_16_;
      auVar69 = auVar71._0_16_;
      uVar46 = (uint)pcVar43;
      if ((uVar15 + 1 < 0x3f) &&
         ((0x4800800000000001U >> ((ulonglong)(uVar15 + 1) & 0x3f) & 1) != 0)) break;
      if (pauVar21 == (undefined1 (*) [16])ppuVar55) {
code_r0x00014008a190:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        uVar15 = 0xffffffff;
        pauVar26 = (undefined1 (*) [16])ppuVar55;
        goto code_r0x00014008a1af;
      }
      if ((((char)*(uint *)*pauVar21 == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar21 + 1),
          pauVar26 != (undefined1 (*) [16])ppuVar55)) &&
         (((((ulonglong)local_90 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          ((((ulonglong)local_90 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        pauVar21 = pauVar26;
      }
      pauVar26 = (undefined1 (*) [16])((longlong)*pauVar21 + 1);
      *(undefined1 (**) [16])*local_98 = pauVar26;
      if (pauVar26 == (undefined1 (*) [16])ppuVar55) goto code_r0x00014008a190;
      cVar14 = (char)*(uint *)*pauVar26;
      uVar47 = (uint)cVar14;
      pvVar19 = memchr(&DAT_140111e80,uVar47,0x17);
      uVar15 = uVar47;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      unaff_RSI = param_4;
      switch(uVar47) {
      case 10:
        if ((undefined1)local_dc != '\0') {
          *(uint *)*local_78 = 0x7c;
          uVar15 = 0x7c;
        }
        break;
      case 0x24:
        if ((((char)local_b8 == '\0') &&
            (pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 2),
            pauVar21 != (undefined1 (*) [16])ppuVar55)) && ((char)*(uint *)*pauVar21 != '\n'))
        goto code_r0x00014008a410;
        break;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)local_90 & 8;
        goto joined_r0x00014008a2bb;
      case 0x2a:
        if (((ulonglong)local_d8 & 1) != 0) break;
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar47 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
          if ((uVar47 < 0x15) && ((0x102100U >> (uVar47 & 0x1f) & 1) != 0))
          goto code_r0x00014008a410;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014008a410;
        }
        break;
      case 0x2b:
      case 0x3f:
        cVar14 = (char)local_c8;
        goto joined_r0x00014008a2ca;
      case 0x5c:
        pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 2);
        if (pauVar21 != (undefined1 (*) [16])ppuVar55) {
          if ((((ulonglong)local_90 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*pauVar21, uVar47 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014008a35f:
            uVar15 = uVar47;
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
          }
          else if (((ulonglong)local_90 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*pauVar21;
            uVar47 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008a35f;
          }
        }
        break;
      case 0x5e:
        if ((char)local_b8 == '\0') {
          switch(*(uint *)((longlong)*local_a8 + 8)) {
          case 2:
            uVar47 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
            if ((0x14 < uVar47) || ((0x102100U >> (uVar47 & 0x1f) & 1) == 0))
            goto code_r0x00014008a410;
            break;
          default:
            goto code_r0x00014008a410;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)local_90 & 0x10;
joined_r0x00014008a2bb:
        if (uVar39 == 0) {
code_r0x00014008a410:
          *(uint *)*local_78 = 0;
          uVar15 = 0;
        }
        break;
      case 0x7c:
        cVar14 = (char)local_e8;
joined_r0x00014008a2ca:
        if (cVar14 == '\0') break;
        goto code_r0x00014008a410;
      }
code_r0x00014008a1af:
      pcVar43 = (char *)(ulonglong)(uVar46 + 1);
      pauVar21 = pauVar26;
    }
    if (uVar15 != uVar45) goto code_r0x0001400a1a14;
    local_90 = pauVar21;
    if (uVar45 == 0x3a) {
      ppuVar55 = *(undefined ***)((longlong)local_98[6] + 8);
      local_c8 = (undefined1 (*) [16])CONCAT44(local_c8._4_4_,*(uint *)local_98[7]);
      local_a8 = (undefined1 (*) [16])((longlong)pauVar21 - (longlong)pauVar18);
      uVar39 = 0;
      bVar62 = false;
      pcVar43 = "alnum";
      local_b8 = pauVar18;
      do {
        if (local_a8 == (undefined1 (*) [16])(ulonglong)(uint)(&DAT_140111f70)[uVar39 * 6]) {
          pauVar26 = local_b8;
          if (local_b8 == pauVar21) {
code_r0x00014008a560:
            uVar42 = (&DAT_140111f74)[(uVar39 & 0xffffffff) * 0xc];
            goto code_r0x00014008a573;
          }
          while( true ) {
            uVar12 = (*(undefined1 (*) [16])pcVar43)[0];
            cVar14 = (**(code **)(**(longlong **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8) +
                                 0x20))(*(longlong **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8)
                                        ,(char)*(uint *)*pauVar26);
            cVar13 = (**(code **)(**(longlong **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8) +
                                 0x20))(*(longlong **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8)
                                        ,uVar12);
            pauVar21 = local_90;
            if (cVar14 != cVar13) break;
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
            pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 1);
            if (pauVar26 == local_90) {
              if (!bVar62) goto code_r0x00014008a560;
              goto code_r0x00014008a500;
            }
          }
        }
        uVar39 = uVar39 + 1;
        pcVar43 = (&PTR_s_alnum_140111f60)[uVar39 * 3];
        bVar62 = (undefined1 (*) [16])pcVar43 == (undefined1 (*) [16])0x0;
      } while (uVar39 != 0xf);
code_r0x00014008a500:
      uVar42 = 0;
code_r0x00014008a573:
      uVar33 = uVar42 | 3;
      if ((uVar42 & 3) == 0) {
        uVar33 = uVar42;
      }
      if (((ulonglong)local_c8 & 0x100) == 0) {
        uVar33 = uVar42;
      }
      uVar42 = 0;
      if (uVar33 == 0) goto code_r0x0001400a2350;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      uVar39 = 0;
      do {
        uVar42 = uVar33;
        if (((uVar33 == 0xffff) && (uVar42 = 0x107, uVar39 == 0x5f)) ||
           ((*(ushort *)
              (*(longlong *)(*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) +
              uVar39 * 2) & uVar42) != 0)) {
          pauVar31 = *(undefined1 (**) [32])(pauVar26[2] + 8);
          if (pauVar31 == (undefined1 (*) [32])0x0) {
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            pauVar31 = operator_new(0x20);
            *pauVar31 = ZEXT1232(ZEXT812(0));
            *(undefined1 (**) [32])(pauVar26[2] + 8) = pauVar31;
          }
          pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
          *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
        }
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
        uVar39 = uVar39 + 1;
      } while (uVar39 != 0x100);
    }
    else if (uVar45 == 0x2e) {
      if (pauVar18 == pauVar21) goto LAB_1400a23e2;
      pauVar26 = local_a8 + 2;
      for (puVar36 = *(uint **)local_a8[2]; puVar36 != (uint *)0x0;
          puVar36 = *(uint **)(puVar36 + 6)) {
        if (*puVar36 <= uVar46) {
          if (*puVar36 == uVar46) goto code_r0x00014008a8d8;
          goto code_r0x00014008a89b;
        }
        pauVar26 = (undefined1 (*) [16])(puVar36 + 6);
      }
      puVar36 = (uint *)0x0;
code_r0x00014008a89b:
      puVar20 = operator_new(0x20);
      *puVar20 = uVar46;
      *(undefined1 (*) [16])(puVar20 + 2) = auVar72._0_16_;
      *(uint **)*pauVar26 = puVar20;
      *(uint **)(puVar20 + 6) = puVar36;
      puVar36 = *(uint **)*pauVar26;
      pauVar21 = local_90;
code_r0x00014008a8d8:
      do {
        uVar45 = *(uint *)*pauVar18;
        uVar15 = puVar36[3];
        if (uVar15 < puVar36[2]) {
          pvVar19 = *(void **)(puVar36 + 4);
        }
        else {
          pvVar19 = realloc(*(void **)(puVar36 + 4),(ulonglong)(uVar15 + 0x10));
          if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
          *(void **)(puVar36 + 4) = pvVar19;
          puVar36[2] = uVar15 + 0x10;
          uVar15 = puVar36[3];
          pauVar21 = local_90;
        }
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
        pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
        puVar36[3] = uVar15 + 1;
        *(char *)((longlong)pvVar19 + (ulonglong)uVar15) = (char)uVar45;
      } while (pauVar18 != pauVar21);
    }
    else if (uVar45 == 0x3d) {
      if (pauVar18 == pauVar21) goto LAB_1400a23e2;
      pauVar21 = (undefined1 (*) [16])((longlong)pauVar21 - (longlong)pauVar18);
      if ((longlong)pauVar21 < 0) goto code_r0x0001400a2320;
      pauVar26 = *(undefined1 (**) [16])*local_d0;
      if (pauVar21 < (undefined1 (*) [16])0x1000) {
        ppuVar55 = operator_new((__uint64)pauVar21);
      }
      else {
        pvVar19 = operator_new((longlong)pauVar21[2] + 7);
        ppuVar55 = (undefined **)((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)*(undefined1 (*) [16])((longlong)ppuVar55 + -0x10) + 8) = pvVar19;
      }
      param_4 = (undefined1 (*) [16])((longlong)ppuVar55 + (longlong)pauVar21);
      local_b8 = (undefined1 (*) [16])ppuVar55;
      local_90 = pauVar21;
      memmove(ppuVar55,pauVar18,(size_t)pauVar21);
      plVar3 = *(longlong **)(*pauVar26 + 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,ppuVar55,param_4);
      plVar3 = *(longlong **)*pauVar26;
      (**(code **)(*plVar3 + 0x20))(plVar3,local_110,local_b8);
      local_138._8_8_ = local_110[1];
      local_138._0_8_ = local_110[0];
      sStack_128 = lStack_100;
      pauStack_120 = (undefined1 (*) [16])uStack_f8;
      pauVar26 = local_b8;
      if (((undefined1 (*) [16])0xfff < local_90) &&
         (pauVar26 = *(undefined1 (**) [16])((longlong)local_b8[-1] + 8),
         0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pauVar26)))) goto LAB_1400a3888;
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      free(pauVar26);
      sVar9 = sStack_128;
      local_b8 = pauStack_120;
      local_c8 = (undefined1 (*) [16])local_138._0_8_;
      pauVar26 = &local_138;
      if ((undefined1 (*) [16])0xf < pauStack_120) {
        pauVar26 = (undefined1 (*) [16])local_138._0_8_;
      }
      uVar39 = 0;
      while( true ) {
        auVar69 = auVar71._0_16_;
        auVar70 = auVar72._0_16_;
        if (0xff < (uint)uVar39) break;
        pauVar18 = *(undefined1 (**) [16])*local_d0;
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        local_90 = operator_new(1);
        param_4 = (undefined1 (*) [16])((longlong)*local_90 + 1);
        (*local_90)[0] = (byte)uVar39;
        (**(code **)(**(longlong **)(*pauVar18 + 8) + 0x18))
                  (*(longlong **)(*pauVar18 + 8),local_90,param_4);
        (**(code **)(**(longlong **)*pauVar18 + 0x20))(*(longlong **)*pauVar18,local_110,local_90);
        local_168._8_8_ = local_110[1];
        local_168._0_8_ = local_110[0];
        local_168._16_8_ = lStack_100;
        local_168._24_8_ = uStack_f8;
        auVar71 = ZEXT1664(auVar71._0_16_);
        auVar72 = ZEXT1664(auVar72._0_16_);
        free(local_90);
        uVar5 = local_168._24_8_;
        if (local_168._16_8_ == sVar9) {
          puVar40 = local_168;
          if (0xf < (ulonglong)local_168._24_8_) {
            puVar40 = (undefined1 *)local_168._0_8_;
          }
          iVar58 = memcmp(puVar40,pauVar26,sVar9);
          ppuVar55 = (undefined **)CONCAT71((int7)((ulonglong)pauVar18 >> 8),iVar58 == 0);
        }
        else {
          ppuVar55 = (undefined **)0x0;
        }
        if (0xf < (ulonglong)uVar5) {
          puVar40 = (undefined1 *)local_168._0_8_;
          if ((0xfff < uVar5 + 1) &&
             (puVar40 = *(undefined1 **)(local_168._0_8_ + -8),
             (undefined1 *)0x1f < (undefined1 *)(local_168._0_8_ + (-8 - (longlong)puVar40))))
          goto LAB_1400a3888;
          free(puVar40);
        }
        if ((char)ppuVar55 != '\0') {
          pauVar31 = *(undefined1 (**) [32])((longlong)pauVar22[2] + 8);
          if (pauVar31 == (undefined1 (*) [32])0x0) {
            pauVar31 = operator_new(0x20);
            *pauVar31 = ZEXT1232(ZEXT812(0));
            *(undefined1 (**) [32])((longlong)pauVar22[2] + 8) = pauVar31;
          }
          pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3));
          *pbVar41 = *pbVar41 | (byte)(1 << ((byte)uVar39 & 7));
        }
        uVar39 = (ulonglong)((uint)uVar39 + 1);
      }
      if ((undefined1 (*) [16])0xf < local_b8) {
        pauVar26 = local_c8;
        if ((0xfff < (longlong)*local_b8 + 1U) &&
           (pauVar26 = *(undefined1 (**) [16])(local_c8[-1] + 8),
           0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pauVar26)))) goto LAB_1400a3888;
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        free(pauVar26);
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
      }
    }
    uVar45 = (uint)ppuVar55;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar26 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar26) {
      if ((((*unaff_RSI)[0] == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
         ((((*(uint *)*local_80 & 8) == 0 &&
           (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))
           ))))) {
        unaff_RSI = pauVar18;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI != pauVar26) {
      cVar14 = (*unaff_RSI)[0];
      uVar46 = (uint)cVar14;
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
      uVar15 = uVar46;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
      switch(unaff_RDI) {
      case (undefined1 (*) [16])0x0:
        if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) goto code_r0x0001400a1aca;
        break;
      case (undefined1 (*) [16])0x1a:
        if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
            (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
           ((*pauVar18)[0] != '\n')) goto code_r0x0001400a1a07;
        break;
      case (undefined1 (*) [16])0x1e:
      case (undefined1 (*) [16])0x1f:
        bVar10 = (byte)*(uint *)*local_80 & 8;
        goto joined_r0x00014008aa3a;
      case (undefined1 (*) [16])0x20:
        if ((*(uint *)*local_80 & 0x4000000) != 0) {
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0))
            goto code_r0x0001400a1a07;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x0001400a1a07;
          }
        }
        break;
      case (undefined1 (*) [16])0x21:
      case (undefined1 (*) [16])0x35:
        bVar10 = (byte)*(uint *)*local_80 & 1;
        goto joined_r0x00014008aa3a;
      case (undefined1 (*) [16])0x52:
        pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        if (pauVar18 != pauVar26) {
          if ((*(uint *)*local_80 & 8) == 0) {
            param_4 = (undefined1 (*) [16])((ulonglong)(byte)(*pauVar18)[0] & 0xfffffffffffffffe);
            uVar45 = (uint)(byte)(*pauVar18)[0];
            if ((char)param_4 != '(') goto code_r0x00014008aac0;
code_r0x00014008aadb:
            uVar15 = uVar45;
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
          }
          else {
code_r0x00014008aac0:
            if ((*(uint *)*local_80 & 0x10) == 0) {
              bVar10 = (*pauVar18)[0];
              uVar45 = (uint)bVar10;
              if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008aadb;
            }
          }
        }
        break;
      case (undefined1 (*) [16])0x54:
        if ((*(uint *)*local_80 & 0x2000000) != 0) {
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
            goto code_r0x0001400a1a07;
            break;
          default:
            goto code_r0x0001400a1a07;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case (undefined1 (*) [16])0x71:
      case (undefined1 (*) [16])0x73:
        bVar10 = (byte)*(uint *)*local_80 & 0x10;
        goto joined_r0x00014008aa3a;
      case (undefined1 (*) [16])0x72:
        bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014008aa3a:
        if (bVar10 == 0) goto code_r0x0001400a1a07;
      }
      if (uVar15 == 0x5d) {
        if ((((*unaff_RSI)[0] == '\\') &&
            (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
           ((((*(uint *)*local_80 & 8) == 0 &&
             (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
            (((*(uint *)*local_80 & 0x10) == 0 &&
             (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))))) {
          unaff_RSI = pauVar18;
        }
        pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        *(undefined1 (**) [16])*local_98 = pauVar18;
        if (pauVar18 == pauVar26) {
code_r0x00014008ac54:
          *(uint *)*local_78 = 0xffffffff;
          *(undefined1 *)local_88 = 0xff;
          goto code_r0x000140088d29;
        }
        cVar14 = (*pauVar18)[0];
        uVar45 = (uint)cVar14;
        pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
        uVar15 = uVar45;
        if (pvVar19 == (void *)0x0) {
          uVar15 = 0;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
code_r0x00014008acaf:
          if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
            *(uint *)*local_78 = 0x7c;
          }
          break;
        case (undefined1 (*) [16])0x1a:
          if (((*(uint *)*local_80 & 0x2000000) != 0) &&
             (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), unaff_RSI != pauVar26)) {
code_r0x00014008acfc:
            if ((*unaff_RSI)[0] != '\n') goto code_r0x00014008b88a;
          }
          break;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
code_r0x00014008ac3f:
          bVar10 = (byte)*(uint *)*local_80 & 8;
          goto joined_r0x00014008ac7a;
        case (undefined1 (*) [16])0x20:
          if ((*(uint *)*local_80 & 0x4000000) == 0) break;
          pauVar18 = *(undefined1 (**) [16])*local_a0;
          switch(*(undefined4 *)(*pauVar18 + 8)) {
          case 2:
code_r0x00014008ad9d:
            uVar15 = *(uint *)(*(longlong *)(pauVar18[1] + 8) + 8);
            if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
            goto code_r0x00014008b88a;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014008b88a;
          }
          break;
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
code_r0x00014008ac70:
          bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x00014008ac7a:
          if (bVar10 == 0) {
code_r0x00014008b88a:
            *(uint *)*local_78 = 0;
          }
          break;
        case (undefined1 (*) [16])0x52:
          unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
          if (unaff_RSI != pauVar26) {
code_r0x00014008ad17:
            if (((*(uint *)*local_80 & 8) == 0) &&
               (uVar15 = (uint)(byte)(*unaff_RSI)[0], ((*unaff_RSI)[0] & 0xfe) == 0x28)) {
code_r0x00014008ad4c:
              *(char *)local_88 = (char)uVar15;
              *(uint *)*local_78 = uVar15;
            }
            else if ((*(uint *)*local_80 & 0x10) == 0) {
              bVar10 = (*unaff_RSI)[0];
              uVar15 = (uint)bVar10;
              if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008ad4c;
            }
          }
          break;
        case (undefined1 (*) [16])0x54:
          if ((*(uint *)*local_80 & 0x2000000) != 0) {
            pauVar18 = *(undefined1 (**) [16])*local_a0;
            switch(*(undefined4 *)(*pauVar18 + 8)) {
            case 2:
code_r0x00014008adf7:
              uVar15 = *(uint *)(*(longlong *)(pauVar18[1] + 8) + 8);
              if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
              goto code_r0x00014008b88a;
              break;
            default:
              goto code_r0x00014008b88a;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
          }
          break;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
code_r0x00014008ac85:
          bVar10 = (byte)*(uint *)*local_80 & 0x10;
          goto joined_r0x00014008aca4;
        case (undefined1 (*) [16])0x72:
code_r0x00014008ac9a:
          bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014008aca4:
          if (bVar10 != 0) break;
          goto code_r0x00014008b88a;
        }
        goto code_r0x000140088d29;
      }
      goto code_r0x0001400a1a14;
    }
    goto code_r0x0001400a1962;
  case 0x5c:
    ppuVar55 = *(undefined ***)*local_98;
    unaff_RBX = *(undefined1 (**) [16])local_98[1];
    if ((undefined1 (*) [16])ppuVar55 != unaff_RBX) {
      if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
          pauVar26 != unaff_RBX)) &&
         ((((*(uint *)*local_80 & 8) == 0 &&
           (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))
           ))))) {
        ppuVar55 = (undefined **)pauVar26;
      }
      ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
      *(undefined ***)*local_98 = ppuVar55;
    }
    if ((undefined1 (*) [16])ppuVar55 == unaff_RBX) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      param_4 = (undefined1 (*) [16])(ulonglong)*(uint *)*local_80;
      unaff_RDI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0xff);
      uVar15 = 0xffffffff;
      goto code_r0x000140087678;
    }
    bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    unaff_RDI = unaff_RSI;
    switch(uVar45) {
    case 10:
      if ((*(uint *)*local_80 & 4) != 0) {
        uVar45 = 0x7c;
        uVar46 = *local_c0;
joined_r0x00014008856c:
        if (uVar46 == 0) goto code_r0x00014008856e;
      }
      break;
    case 0x24:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
          pauVar26 != unaff_RBX)) && (uVar45 = 0, (char)*(uint *)*pauVar26 != '\n'))
      goto code_r0x00014008856e;
      break;
    case 0x28:
    case 0x29:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x000140087e19;
    case 0x2a:
      if ((*(uint *)*local_80 & 0x4000000) != 0) {
        uVar45 = 0;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0))
          goto code_r0x00014008856e;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014008856e;
        }
      }
      break;
    case 0x2b:
    case 0x3f:
      bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140087e19:
      uVar45 = 0;
      if (bVar10 == 0) {
code_r0x00014008856e:
        *(uint *)*local_78 = uVar45;
        uVar15 = uVar45;
      }
      break;
    case 0x5c:
      pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
      if (pauVar26 != unaff_RBX) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar26, uVar45 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400881e6:
          *(char *)local_88 = (char)uVar45;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar45;
          goto code_r0x00014008856e;
        }
        if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar26;
          uVar45 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400881e6;
        }
      }
      break;
    case 0x5e:
      if ((*(uint *)*local_80 & 0x2000000) == 0) break;
      uVar45 = 0;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if (uVar46 < 0x15) {
          uVar46 = 0x102100U >> (uVar46 & 0x1f) & 1;
          goto joined_r0x00014008856c;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140088579;
      }
      goto code_r0x00014008856e;
    case 0x7b:
    case 0x7d:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x000140087ffc;
    case 0x7c:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140087ffc:
      uVar45 = 0;
      if (bVar10 != 0) break;
      goto code_r0x00014008856e;
    }
code_r0x000140088579:
    param_4 = (undefined1 (*) [16])(ulonglong)*(uint *)*local_80;
    cVar14 = (char)*(uint *)*local_80;
    if ((cVar14 < '\0') && ((char)unaff_RDI == 'b')) {
      puVar23 = operator_new(0x20);
      *puVar23 = std::_Node_base::vftable;
      *(undefined4 *)(puVar23 + 1) = 4;
      *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      puVar23[3] = pauVar26;
      if (*(longlong *)pauVar26[1] != 0) {
        puVar23[2] = *(longlong *)pauVar26[1];
        *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
        pauVar26 = *(undefined1 (**) [16])*local_a0;
      }
      *(undefined8 **)pauVar26[1] = puVar23;
      *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
      unaff_RSI = *(undefined1 (**) [16])*local_98;
      unaff_RBX = *(undefined1 (**) [16])local_98[1];
      if (unaff_RSI != unaff_RBX) {
        if ((((char)*(uint *)*unaff_RSI == '\\') &&
            (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != unaff_RBX)) &&
           ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
            (((*(uint *)*local_80 & 0x10) == 0 &&
             ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
          unaff_RSI = pauVar26;
        }
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        *(undefined1 (**) [16])*local_98 = unaff_RSI;
      }
      if (unaff_RSI == unaff_RBX) goto LAB_140086de0;
      cVar14 = (char)*(uint *)*unaff_RSI;
      uVar45 = (uint)cVar14;
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      ppuVar55 = (undefined **)0x0;
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
      pauVar26 = unaff_RBX;
      switch(unaff_RDI) {
      case (undefined1 (*) [16])0x0:
        goto code_r0x0001400887f3;
      default:
        goto LAB_140086dff;
      case (undefined1 (*) [16])0x1a:
        if ((*(uint *)*local_80 & 0x2000000) == 0) {
          ppuVar55 = (undefined **)0x0;
        }
        else {
          unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
          if (unaff_RSI == unaff_RBX) {
            ppuVar55 = (undefined **)0x0;
          }
          else {
            if ((char)*(uint *)*unaff_RSI != '\n') break;
            ppuVar55 = (undefined **)0x0;
          }
        }
        goto LAB_140086dd0;
      case (undefined1 (*) [16])0x1e:
      case (undefined1 (*) [16])0x1f:
        if ((*(uint *)*local_80 & 8) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        break;
      case (undefined1 (*) [16])0x20:
        if ((*(uint *)*local_80 & 0x4000000) == 0) {
          ppuVar55 = (undefined **)0x0;
        }
        else {
          pauVar26 = *(undefined1 (**) [16])*local_a0;
          ppuVar55 = (undefined **)0x0;
          switch(*(undefined4 *)(*pauVar26 + 8)) {
          case 2:
            goto code_r0x00014008fdd9;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014008fe00;
          }
        }
        goto LAB_140086dd0;
      case (undefined1 (*) [16])0x21:
      case (undefined1 (*) [16])0x35:
        if ((*(uint *)*local_80 & 1) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        break;
      case (undefined1 (*) [16])0x52:
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        ppuVar55 = (undefined **)0x0;
        if (unaff_RSI == unaff_RBX) goto LAB_140086dff;
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*unaff_RSI, (bVar10 & 0xfe) == 0x28)) goto code_r0x00014008fe5b;
        if ((*(uint *)*local_80 & 0x10) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        bVar10 = (byte)*(uint *)*unaff_RSI;
        if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        goto code_r0x00014008fe5b;
      case (undefined1 (*) [16])0x54:
        if ((*(uint *)*local_80 & 0x2000000) == 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        ppuVar55 = (undefined **)0x0;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) {
            ppuVar55 = (undefined **)0x0;
            goto LAB_140086dd0;
          }
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto LAB_140086dd0;
        }
        break;
      case (undefined1 (*) [16])0x71:
      case (undefined1 (*) [16])0x73:
        if ((*(uint *)*local_80 & 0x10) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        break;
      case (undefined1 (*) [16])0x72:
        if ((*(uint *)*local_80 & 2) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
      }
      goto code_r0x00014008fef3;
    }
    if ((cVar14 < '\0') && ((char)unaff_RDI == 'B')) {
      puVar23 = operator_new(0x20);
      *puVar23 = std::_Node_base::vftable;
      *(undefined4 *)(puVar23 + 1) = 4;
      *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      puVar23[3] = pauVar26;
      if (*(longlong *)pauVar26[1] != 0) {
        puVar23[2] = *(longlong *)pauVar26[1];
        *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
        pauVar26 = *(undefined1 (**) [16])*local_a0;
      }
      *(undefined8 **)pauVar26[1] = puVar23;
      *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
      *(byte *)((longlong)puVar23 + 0xc) = *(byte *)((longlong)puVar23 + 0xc) ^ 1;
      unaff_RSI = *(undefined1 (**) [16])*local_98;
      unaff_RBX = *(undefined1 (**) [16])local_98[1];
      if (unaff_RSI != unaff_RBX) {
        if ((((char)*(uint *)*unaff_RSI == '\\') &&
            (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != unaff_RBX)) &&
           ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
            (((*(uint *)*local_80 & 0x10) == 0 &&
             ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
          unaff_RSI = pauVar26;
        }
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        *(undefined1 (**) [16])*local_98 = unaff_RSI;
      }
      if (unaff_RSI == unaff_RBX) goto LAB_140086de0;
      cVar14 = (char)*(uint *)*unaff_RSI;
      uVar45 = (uint)cVar14;
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      ppuVar55 = (undefined **)0x0;
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
      pauVar26 = unaff_RBX;
      switch(unaff_RDI) {
      case (undefined1 (*) [16])0x0:
        goto code_r0x0001400887f3;
      default:
        goto LAB_140086dff;
      case (undefined1 (*) [16])0x1a:
        if ((*(uint *)*local_80 & 0x2000000) == 0) {
          ppuVar55 = (undefined **)0x0;
        }
        else {
          unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
          if (unaff_RSI == unaff_RBX) {
            ppuVar55 = (undefined **)0x0;
          }
          else {
            if ((char)*(uint *)*unaff_RSI != '\n') break;
            ppuVar55 = (undefined **)0x0;
          }
        }
        goto LAB_140086dd0;
      case (undefined1 (*) [16])0x1e:
      case (undefined1 (*) [16])0x1f:
        if ((*(uint *)*local_80 & 8) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        break;
      case (undefined1 (*) [16])0x20:
        if ((*(uint *)*local_80 & 0x4000000) == 0) {
          ppuVar55 = (undefined **)0x0;
        }
        else {
          pauVar26 = *(undefined1 (**) [16])*local_a0;
          ppuVar55 = (undefined **)0x0;
          switch(*(undefined4 *)(*pauVar26 + 8)) {
          case 2:
            goto code_r0x00014008fdd9;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014008fe00;
          }
        }
        goto LAB_140086dd0;
      case (undefined1 (*) [16])0x21:
      case (undefined1 (*) [16])0x35:
        if ((*(uint *)*local_80 & 1) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        break;
      case (undefined1 (*) [16])0x52:
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        ppuVar55 = (undefined **)0x0;
        if (unaff_RSI == unaff_RBX) goto LAB_140086dff;
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*unaff_RSI, (bVar10 & 0xfe) == 0x28)) goto code_r0x00014008fe5b;
        if ((*(uint *)*local_80 & 0x10) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        bVar10 = (byte)*(uint *)*unaff_RSI;
        if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        goto code_r0x00014008fe5b;
      case (undefined1 (*) [16])0x54:
        if ((*(uint *)*local_80 & 0x2000000) == 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        ppuVar55 = (undefined **)0x0;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) {
            ppuVar55 = (undefined **)0x0;
            goto LAB_140086dd0;
          }
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto LAB_140086dd0;
        }
        break;
      case (undefined1 (*) [16])0x71:
      case (undefined1 (*) [16])0x73:
        if ((*(uint *)*local_80 & 0x10) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
        break;
      case (undefined1 (*) [16])0x72:
        if ((*(uint *)*local_80 & 2) != 0) {
          ppuVar55 = (undefined **)0x0;
          goto LAB_140086dd0;
        }
      }
      goto code_r0x00014008fef3;
    }
code_r0x000140087678:
    local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,(int)param_4);
    cVar14 = (char)unaff_RDI;
    pauVar26 = unaff_RBX;
    if (((ulonglong)param_4 & 0x100) != 0) {
      *(uint *)*local_b0 = 0;
      if (0xf5 < (byte)(cVar14 - 0x3aU)) {
        local_a8 = *(undefined1 (**) [16])*local_a0;
        local_b8 = (undefined1 (*) [16])
                   CONCAT71(local_b8._1_7_,(byte)((ulonglong)param_4 >> 2) & 0x3f & *local_c0 == 0);
        uVar15 = 0;
        unaff_RSI = (undefined1 (*) [16])0x80000002;
        goto code_r0x000140090430;
      }
    }
    if (uVar15 == 0xffffffff) goto code_r0x0001400a1917;
    auVar69 = auVar71._0_16_;
    auVar70 = auVar72._0_16_;
    if (((((ulonglong)param_4 & 0x10000) != 0) &&
        (bVar10 = (byte)(cVar14 + 0x9aU) >> 1 | cVar14 << 7, bVar10 < 9)) &&
       ((0x1d1U >> (bVar10 & 0x1f) & 1) != 0)) {
      unaff_RDI = (undefined1 (*) [16])(ulonglong)*(uint *)(&UNK_14010b538 + (ulonglong)bVar10 * 4);
      goto code_r0x000140092546;
    }
    uVar15 = (uint)unaff_RDI & 0xff;
    uVar44 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (-1 < (short)param_4) {
      if (cVar14 != 'x') {
        if (uVar15 == 0x75) goto code_r0x000140087754;
        if (uVar15 == 99) goto code_r0x00014008770f;
        goto code_r0x00014008776f;
      }
code_r0x000140087762:
      if (((ulonglong)param_4 & 0x1000) == 0) goto code_r0x00014008776f;
      if ((undefined1 (*) [16])ppuVar55 == unaff_RBX) {
code_r0x000140091ebb:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,0xff);
        pcVar43 = (char *)unaff_RBX;
        goto code_r0x000140091ed8;
      }
      if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
          pauVar18 != unaff_RBX)) &&
         (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
          ((((ulonglong)param_4 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
        ppuVar55 = (undefined **)pauVar18;
      }
      pcVar43 = (char *)((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
      *(char **)*local_98 = pcVar43;
      if ((undefined1 (*) [16])pcVar43 == unaff_RBX) goto code_r0x000140091ebb;
      bVar10 = (byte)*(uint *)*(undefined1 (*) [16])pcVar43;
      unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
      uVar45 = (uint)(char)bVar10;
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(byte *)local_88 = bVar10;
      if (0x73 < uVar45 - 10) {
        param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
        goto code_r0x000140091ed8;
      }
      param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
      switch(uVar45) {
      case 10:
        if ((((ulonglong)local_90 & 4) != 0) && (*local_c0 == 0)) {
          *(uint *)*local_78 = 0x7c;
        }
        break;
      case 0x24:
        if (((((ulonglong)local_90 & 0x2000000) != 0) &&
            (ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 2),
            (undefined1 (*) [16])ppuVar55 != unaff_RBX)) &&
           ((char)*(uint *)*(undefined1 (*) [16])ppuVar55 != '\n')) goto code_r0x0001400940f1;
        break;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)local_90 & 8;
        goto joined_r0x000140093c81;
      case 0x2a:
        if (((ulonglong)local_90 & 0x4000000) == 0) break;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x0001400940f1;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x0001400940f1;
        }
        break;
      case 0x2b:
      case 0x3f:
        uVar39 = (ulonglong)local_90 & 1;
joined_r0x000140093c81:
        if (uVar39 == 0) {
code_r0x0001400940f1:
          *(uint *)*local_78 = 0;
        }
        break;
      case 0x5c:
        ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 2);
        if ((undefined1 (*) [16])ppuVar55 != unaff_RBX) {
          if ((((ulonglong)local_90 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55, uVar15 = (uint)bVar10,
             (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009403a:
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
            unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
          }
          else if (((ulonglong)local_90 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
            uVar15 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009403a;
          }
        }
        break;
      case 0x5e:
        if (((ulonglong)local_90 & 0x2000000) != 0) {
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
            goto code_r0x0001400940f1;
            break;
          default:
            goto code_r0x0001400940f1;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)local_90 & 0x10;
        goto joined_r0x000140093f9d;
      case 0x7c:
        uVar39 = (ulonglong)local_90 & 2;
joined_r0x000140093f9d:
        if (uVar39 != 0) break;
        goto code_r0x0001400940f1;
      }
code_r0x000140091ed8:
      *(uint *)*local_b0 = 0;
      local_a8 = *(undefined1 (**) [16])*local_a0;
      local_b8 = (undefined1 (*) [16])
                 CONCAT71(local_b8._1_7_,*local_c0 == 0 & (byte)((ulonglong)param_4 >> 2) & 0x3f);
      unaff_RDI = (undefined1 (*) [16])0x0;
      bVar62 = false;
      goto code_r0x000140091f3d;
    }
    switch(uVar15) {
    case 0x61:
      unaff_RDI = (undefined1 (*) [16])0x7;
      goto code_r0x000140092546;
    case 0x62:
      unaff_RDI = (undefined1 (*) [16])0x8;
code_r0x000140092546:
      *(uint *)*local_b0 = (uint)unaff_RDI;
      if ((undefined1 (*) [16])ppuVar55 == unaff_RBX) {
code_r0x00014009260f:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        goto code_r0x00014008ff2f;
      }
      if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
          pauVar26 != unaff_RBX)) &&
         (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          ((((ulonglong)param_4 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        ppuVar55 = (undefined **)pauVar26;
      }
      pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
      *(undefined1 (**) [16])*local_98 = pauVar26;
      if (pauVar26 == unaff_RBX) goto code_r0x00014009260f;
      cVar14 = (char)*(uint *)*pauVar26;
      uVar45 = (uint)cVar14;
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      switch(uVar45) {
      case 10:
        if ((((ulonglong)local_90 & 4) != 0) && (*local_c0 == 0)) {
          *(uint *)*local_78 = 0x7c;
        }
      default:
        goto code_r0x00014008ff2f;
      case 0x24:
        if (((((ulonglong)local_90 & 0x2000000) != 0) &&
            (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 2),
            pauVar26 != unaff_RBX)) && ((char)*(uint *)*pauVar26 != '\n'))
        goto code_r0x000140093c4d;
        goto code_r0x00014008ff2f;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)local_90 & 8;
        break;
      case 0x2a:
        if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014008ff2f;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x000140093c4d;
        default:
          goto code_r0x00014008ff2f;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x000140093c4d;
        }
      case 0x2b:
      case 0x3f:
        uVar39 = (ulonglong)local_90 & 1;
        break;
      case 0x5c:
        pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 2);
        if (pauVar26 == unaff_RBX) goto code_r0x00014008ff2f;
        if ((((ulonglong)local_90 & 8) != 0) ||
           (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
          if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014008ff2f;
          bVar10 = (byte)*(uint *)*pauVar26;
          uVar15 = (uint)bVar10;
          if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014008ff2f;
        }
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
        goto code_r0x00014008ff2f;
      case 0x5e:
        if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014008ff2f;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014008ff2f;
        }
        goto code_r0x000140093c4d;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)local_90 & 0x10;
        break;
      case 0x7c:
        uVar39 = (ulonglong)local_90 & 2;
      }
      if (uVar39 != 0) goto code_r0x00014008ff2f;
code_r0x000140093c4d:
      *(uint *)*local_78 = 0;
      goto code_r0x00014008ff2f;
    case 99:
code_r0x00014008770f:
      if (((ulonglong)param_4 & 0x40000) == 0) goto code_r0x00014008776f;
      if ((undefined1 (*) [16])ppuVar55 == unaff_RBX) {
code_r0x000140091e97:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        uVar39 = 0xff;
        bVar62 = true;
        unaff_RSI = unaff_RBX;
        goto code_r0x000140093e60;
      }
      if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
          pauVar18 != unaff_RBX)) &&
         (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
          ((((ulonglong)param_4 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
        ppuVar55 = (undefined **)pauVar18;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
      if (unaff_RSI == unaff_RBX) goto code_r0x000140091e97;
      bVar10 = (byte)*(uint *)*unaff_RSI;
      uVar39 = (ulonglong)bVar10;
      uVar45 = (uint)(char)bVar10;
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      bVar62 = false;
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(byte *)local_88 = bVar10;
      if (0x73 < uVar45 - 10) {
        param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
        goto code_r0x000140093e60;
      }
      param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
      switch(uVar45) {
      case 10:
        bVar62 = false;
        if ((((ulonglong)local_90 & 4) != 0) && (*local_c0 == 0)) {
          *(uint *)*local_78 = 0x7c;
          break;
        }
      default:
        goto code_r0x000140093e60;
      case 0x24:
        if (((((ulonglong)local_90 & 0x2000000) != 0) &&
            (ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 2),
            (undefined1 (*) [16])ppuVar55 != unaff_RBX)) &&
           ((char)*(uint *)*(undefined1 (*) [16])ppuVar55 != '\n')) goto code_r0x000140093e51;
        break;
      case 0x28:
      case 0x29:
        uVar57 = (ulonglong)local_90 & 8;
        goto joined_r0x000140093c63;
      case 0x2a:
        if (((ulonglong)local_90 & 0x4000000) == 0) break;
        bVar62 = false;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          bVar62 = false;
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x000140093e51;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x000140093e51;
        }
        goto code_r0x000140093e60;
      case 0x2b:
      case 0x3f:
        uVar57 = (ulonglong)local_90 & 1;
joined_r0x000140093c63:
        if (uVar57 == 0) {
code_r0x000140093e51:
          *(uint *)*local_78 = 0;
        }
        break;
      case 0x5c:
        ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 2);
        if ((undefined1 (*) [16])ppuVar55 != unaff_RBX) {
          if ((((ulonglong)local_90 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55, uVar15 = (uint)bVar10,
             (bVar10 & 0xfe) == 0x28)) {
code_r0x000140093da4:
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
            bVar62 = false;
            uVar39 = (ulonglong)uVar15;
            goto code_r0x000140093e60;
          }
          if (((ulonglong)local_90 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
            uVar15 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140093da4;
          }
        }
        break;
      case 0x5e:
        if (((ulonglong)local_90 & 0x2000000) != 0) {
          bVar62 = false;
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
            goto code_r0x000140093e5e;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x000140093e60;
          }
          goto code_r0x000140093e51;
        }
        break;
      case 0x7b:
      case 0x7d:
        uVar57 = (ulonglong)local_90 & 0x10;
        goto joined_r0x000140093d05;
      case 0x7c:
        uVar57 = (ulonglong)local_90 & 2;
joined_r0x000140093d05:
        if (uVar57 != 0) break;
        goto code_r0x000140093e51;
      }
code_r0x000140093e5e:
      bVar62 = false;
code_r0x000140093e60:
      if ((*(ushort *)
            (*(longlong *)(*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
            uVar39 * 2) & 0x103) == 0) goto code_r0x0001400a1917;
      uVar15 = (uint)(char)((char)uVar39 % ' ');
      unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
      *(uint *)*local_b0 = uVar15;
      if (bVar62) {
code_r0x000140093f61:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        goto code_r0x00014008ff1c;
      }
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != unaff_RBX)) &&
         (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
          ((((ulonglong)param_4 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar18;
      }
      pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = pauVar18;
      if (pauVar18 == unaff_RBX) goto code_r0x000140093f61;
      cVar14 = (char)*(uint *)*pauVar18;
      uVar45 = (uint)cVar14;
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      switch(uVar45) {
      case 10:
        if ((((ulonglong)local_90 & 4) != 0) && (*local_c0 == 0)) {
          *(uint *)*local_78 = 0x7c;
        }
      default:
        goto code_r0x00014008ff1c;
      case 0x24:
        if (((((ulonglong)local_90 & 0x2000000) != 0) &&
            (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), unaff_RSI != unaff_RBX))
           && ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x0001400943c6;
        goto code_r0x00014008ff1c;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)local_90 & 8;
        break;
      case 0x2a:
        if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014008ff1c;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x0001400943c6;
        default:
          goto code_r0x00014008ff1c;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x0001400943c6;
        }
      case 0x2b:
      case 0x3f:
        uVar39 = (ulonglong)local_90 & 1;
        break;
      case 0x5c:
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
        if (unaff_RSI == unaff_RBX) goto code_r0x00014008ff1c;
        if ((((ulonglong)local_90 & 8) != 0) ||
           (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
          if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014008ff1c;
          bVar10 = (byte)*(uint *)*unaff_RSI;
          uVar15 = (uint)bVar10;
          if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014008ff1c;
        }
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
        goto code_r0x00014008ff1c;
      case 0x5e:
        if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014008ff1c;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014008ff1c;
        }
        goto code_r0x0001400943c6;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)local_90 & 0x10;
        break;
      case 0x7c:
        uVar39 = (ulonglong)local_90 & 2;
      }
      if (uVar39 != 0) goto code_r0x00014008ff1c;
code_r0x0001400943c6:
      *(uint *)*local_78 = 0;
      goto code_r0x00014008ff1c;
    default:
code_r0x00014008776f:
      if (((ulonglong)param_4 & 0x2000) != 0) {
        *(uint *)*local_b0 = 0;
        local_a8 = *(undefined1 (**) [16])*local_a0;
        local_b8 = (undefined1 (*) [16])
                   CONCAT71(local_b8._1_7_,*local_c0 == 0 & (byte)((ulonglong)param_4 >> 2) & 0x3f);
        unaff_RSI = (undefined1 (*) [16])0x0;
        pcVar43 = (char *)0x0;
        pauVar18 = (undefined1 (*) [16])ppuVar55;
        while (((byte)unaff_RDI & 0xf8) == 0x30) {
          uVar15 = (uint)unaff_RDI & 0xff;
          if ((int)(0x8000002f - uVar15 >> 3) < (int)pcVar43) goto code_r0x0001400a1917;
          uVar15 = (uVar15 + (int)pcVar43 * 8) - 0x30;
          pcVar43 = (char *)(ulonglong)uVar15;
          *(uint *)*local_b0 = uVar15;
          if (pauVar18 == unaff_RBX) {
code_r0x0001400877b0:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            unaff_RDI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0xff);
            pauVar18 = unaff_RBX;
            goto code_r0x0001400877d0;
          }
          pauVar21 = pauVar18;
          if ((((char)*(uint *)*pauVar18 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar18 != unaff_RBX)) &&
             (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
              ((((ulonglong)param_4 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
            pauVar21 = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar21 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          ppuVar55 = (undefined **)unaff_RBX;
          if (pauVar18 == unaff_RBX) goto code_r0x0001400877b0;
          bVar10 = (byte)*(uint *)*pauVar18;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)bVar10;
          uVar45 = (uint)(char)bVar10;
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(byte *)local_88 = bVar10;
          ppuVar55 = (undefined **)pauVar18;
          if (0x73 < uVar45 - 10) {
            param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
            goto code_r0x0001400877d0;
          }
          param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
          switch(uVar45) {
          case 10:
            if ((char)local_b8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          case 0x24:
            if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                (pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 2), pauVar21 != unaff_RBX))
               && ((char)*(uint *)*pauVar21 != '\n')) goto code_r0x000140087a43;
            break;
          case 0x28:
          case 0x29:
            uVar39 = (ulonglong)local_90 & 8;
            goto joined_r0x0001400878e7;
          case 0x2a:
            if (((ulonglong)local_90 & 0x4000000) == 0) break;
            switch(*(uint *)((longlong)*local_a8 + 8)) {
            case 2:
              uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x000140087a43;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x000140087a43;
            }
            break;
          case 0x2b:
          case 0x3f:
            uVar39 = (ulonglong)local_90 & 1;
joined_r0x0001400878e7:
            if (uVar39 == 0) {
code_r0x000140087a43:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 2);
            if (pauVar21 != unaff_RBX) {
              if ((((ulonglong)local_90 & 8) == 0) &&
                 (bVar10 = (byte)*(uint *)*pauVar21, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)
                 ) {
code_r0x000140087990:
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
              }
              else if (((ulonglong)local_90 & 0x10) == 0) {
                bVar10 = (byte)*(uint *)*pauVar21;
                uVar15 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140087990;
              }
            }
            break;
          case 0x5e:
            if (((ulonglong)local_90 & 0x2000000) != 0) {
              switch(*(uint *)((longlong)*local_a8 + 8)) {
              case 2:
                uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                goto code_r0x000140087a43;
                break;
              default:
                goto code_r0x000140087a43;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar39 = (ulonglong)local_90 & 0x10;
            goto joined_r0x000140087905;
          case 0x7c:
            uVar39 = (ulonglong)local_90 & 2;
joined_r0x000140087905:
            if (uVar39 != 0) break;
            goto code_r0x000140087a43;
          }
code_r0x0001400877d0:
          uVar15 = (int)unaff_RSI + 1;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
          if (uVar15 == 3) goto code_r0x00014008ff10;
        }
        if ((int)unaff_RSI != 0) {
code_r0x00014008ff10:
          unaff_RDI = (undefined1 (*) [16])pcVar43;
          pcVar43 = (char *)unaff_RDI;
          if ((int)unaff_RDI == 0) goto code_r0x0001400a1917;
          goto code_r0x00014008ff1c;
        }
      }
      uVar15 = (uint)(char)unaff_RDI;
      if (((ulonglong)param_4 & 0x400000) == 0) {
        switch(uVar15) {
        case 0x22:
        case 0x2f:
          uVar39 = (ulonglong)param_4 & 0x1000000;
          break;
        default:
          goto code_r0x000140087ad3;
        case 0x24:
        case 0x2a:
        case 0x2e:
        case 0x5b:
        case 0x5c:
        case 0x5e:
        case 0x7c:
          goto code_r0x0001400902e4;
        case 0x28:
        case 0x29:
        case 0x2b:
        case 0x3f:
        case 0x7b:
        case 0x7d:
          uVar39 = (ulonglong)param_4 & 0x800000;
        }
        if (uVar39 != 0) goto code_r0x0001400902e4;
code_r0x000140087ad3:
        pcVar43 = (char *)&DAT_1400a4460;
        if ((((ulonglong)param_4 & 0x20000) != 0) && ((undefined1 (*) [16])ppuVar55 != unaff_RBX)) {
          lVar29 = *(longlong *)((longlong)local_98[6] + 8);
          local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,*(uint *)local_98[7]);
          uVar39 = 0;
          ppuVar59 = &PTR_s_alpha_140111f78;
          bVar62 = false;
          pcVar43 = "alnum";
          do {
            if ((0x2810UL >> (uVar39 & 0x3f) & 1) != 0) {
              unaff_RBX = (undefined1 (*) [16])(ulonglong)(byte)*pcVar43;
              plVar3 = *(longlong **)(lVar29 + 8);
              auVar71 = ZEXT1664(auVar71._0_16_);
              auVar72 = ZEXT1664(auVar72._0_16_);
              cVar14 = (**(code **)(*plVar3 + 0x20))
                                 (plVar3,(char)*(uint *)*(undefined1 (*) [16])ppuVar55);
              plVar3 = *(longlong **)(lVar29 + 8);
              cVar13 = (**(code **)(*plVar3 + 0x20))(plVar3,unaff_RBX);
              auVar70 = auVar72._0_16_;
              auVar69 = auVar71._0_16_;
              if (cVar14 == cVar13) {
                if (!bVar62) {
                  uVar15 = (uint)*(ushort *)((longlong)ppuVar59 + -4);
                  goto code_r0x000140087b76;
                }
                break;
              }
            }
            auVar70 = auVar72._0_16_;
            auVar69 = auVar71._0_16_;
            uVar39 = uVar39 + 1;
            pcVar43 = *ppuVar59;
            bVar62 = (byte *)pcVar43 == (byte *)0x0;
            ppuVar59 = ppuVar59 + 3;
          } while (uVar39 != 0xf);
          uVar15 = 0;
code_r0x000140087b76:
          pcVar43 = (char *)&DAT_1400a4460;
          uVar45 = uVar15 | 3;
          if ((uVar15 & 3) == 0) {
            uVar45 = uVar15;
          }
          if (((ulonglong)local_90 & 0x100) == 0) {
            uVar45 = uVar15;
          }
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar45;
          uVar42 = (ushort)uVar45;
          pauVar26 = unaff_RBX;
          if (uVar42 != 0) {
            auVar71 = ZEXT1664(auVar69);
            auVar72 = ZEXT1664(auVar70);
            puVar23 = operator_new(0x50);
            *(undefined4 *)(puVar23 + 1) = 7;
            *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
            *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
            *puVar23 = std::_Node_class<char,class_std::regex_traits<char>_>::vftable;
            puVar23[9] = 0;
            *(undefined1 (*) [32])(puVar23 + 4) = ZEXT1232(ZEXT812(0));
            *(undefined2 *)(puVar23 + 8) = 0;
            pauVar26 = *(undefined1 (**) [16])*local_a0;
            puVar23[3] = pauVar26;
            if (*(longlong *)pauVar26[1] != 0) {
              puVar23[2] = *(longlong *)pauVar26[1];
              *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
              pauVar26 = *(undefined1 (**) [16])*local_a0;
            }
            *(undefined8 **)pauVar26[1] = puVar23;
            *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
            uVar33 = *(ushort *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                      (ulonglong)(byte)*(uint *)((longlong)local_98[7] + 8) * 2);
            unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar33;
            uVar39 = 0;
            do {
              uVar32 = uVar42;
              if ((uVar42 == 0xffff) && (uVar32 = 0x107, uVar39 == 0x5f)) {
                if ((uVar33 & 1) == 0) {
code_r0x000140087c88:
                  pauVar31 = (undefined1 (*) [32])puVar23[5];
                  if (pauVar31 == (undefined1 (*) [32])0x0) {
                    auVar71 = ZEXT1664(auVar71._0_16_);
                    auVar72 = ZEXT1664(auVar72._0_16_);
                    pauVar31 = operator_new(0x20);
                    *pauVar31 = ZEXT1232(ZEXT812(0));
                    puVar23[5] = pauVar31;
                  }
                  pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
                  *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
                }
              }
              else if ((bool)((byte)uVar33 & 1) !=
                       ((*(ushort *)
                          (*(longlong *)
                            (*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) +
                          uVar39 * 2) & uVar32) != 0)) goto code_r0x000140087c88;
              uVar39 = uVar39 + 1;
            } while (uVar39 != 0x100);
            unaff_RSI = *(undefined1 (**) [16])*local_98;
            unaff_RBX = *(undefined1 (**) [16])local_98[1];
            if (unaff_RSI != unaff_RBX) {
              if ((((char)*(uint *)*unaff_RSI == '\\') &&
                  (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != unaff_RBX
                  )) && ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28))
                         || (((*(uint *)*local_80 & 0x10) == 0 &&
                             ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))
                             ))))) {
                unaff_RSI = pauVar26;
              }
              unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
              *(undefined1 (**) [16])*local_98 = unaff_RSI;
            }
            if (unaff_RSI == unaff_RBX) goto LAB_140086de0;
            cVar14 = (char)*(uint *)*unaff_RSI;
            uVar45 = (uint)cVar14;
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
            uVar15 = uVar45;
            if (pvVar19 == (void *)0x0) {
              uVar15 = 0;
            }
            *(uint *)*local_78 = uVar15;
            *(char *)local_88 = cVar14;
            unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
            switch(unaff_RDI) {
            case (undefined1 (*) [16])0x0:
              goto code_r0x00014008fb16;
            case (undefined1 (*) [16])0x1a:
              goto code_r0x00014008fb4d;
            case (undefined1 (*) [16])0x1e:
            case (undefined1 (*) [16])0x1f:
              goto code_r0x00014008fac2;
            case (undefined1 (*) [16])0x20:
              if ((*(uint *)*local_80 & 0x4000000) != 0) {
                pauVar26 = *(undefined1 (**) [16])*local_a0;
                switch(*(undefined4 *)(*pauVar26 + 8)) {
                case 2:
                  goto code_r0x00014008fbaf;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014008fe00;
                }
              }
              goto code_r0x0001400900a8;
            case (undefined1 (*) [16])0x21:
            case (undefined1 (*) [16])0x35:
              goto code_r0x00014008fad7;
            case (undefined1 (*) [16])0x52:
              goto code_r0x0001400903b1;
            case (undefined1 (*) [16])0x54:
              if ((*(uint *)*local_80 & 0x2000000) != 0) {
                pauVar26 = *(undefined1 (**) [16])*local_a0;
                switch(*(undefined4 *)(*pauVar26 + 8)) {
                case 2:
                  goto code_r0x00014008fc09;
                default:
                  goto code_r0x00014008fe00;
                case 8:
                case 0xd:
                case 0x14:
                  break;
                }
              }
              goto code_r0x0001400900a8;
            case (undefined1 (*) [16])0x71:
            case (undefined1 (*) [16])0x73:
              goto code_r0x00014008faec;
            case (undefined1 (*) [16])0x72:
              goto code_r0x00014008fb01;
            }
            goto LAB_1400900b1;
          }
        }
        goto code_r0x0001400a1917;
      }
      if ((uVar15 - 0x44 < 0x34) &&
         ((0x8800180088001U >> ((ulonglong)(uVar15 - 0x44) & 0x3f) & 1) != 0))
      goto code_r0x000140087ad3;
code_r0x0001400902e4:
      *(uint *)*local_b0 = uVar15;
      if ((undefined1 (*) [16])ppuVar55 == unaff_RBX) {
code_r0x00014009070d:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        goto code_r0x00014008ff39;
      }
      if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
          pauVar26 != unaff_RBX)) &&
         (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          ((((ulonglong)param_4 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        ppuVar55 = (undefined **)pauVar26;
      }
      pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
      *(undefined1 (**) [16])*local_98 = pauVar26;
      if (pauVar26 == unaff_RBX) goto code_r0x00014009070d;
      cVar14 = (char)*(uint *)*pauVar26;
      uVar45 = (uint)cVar14;
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      break;
    case 0x75:
code_r0x000140087754:
      if (((ulonglong)param_4 & 0x800) == 0) goto code_r0x00014008776f;
      if ((undefined1 (*) [16])ppuVar55 == unaff_RBX) {
code_r0x0001400921fa:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,0xff);
        pcVar43 = (char *)unaff_RBX;
        goto code_r0x000140092217;
      }
      if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
          pauVar18 != unaff_RBX)) &&
         (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
          ((((ulonglong)param_4 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
        ppuVar55 = (undefined **)pauVar18;
      }
      pcVar43 = (char *)((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
      *(char **)*local_98 = pcVar43;
      if ((undefined1 (*) [16])pcVar43 == unaff_RBX) goto code_r0x0001400921fa;
      bVar10 = (byte)*(uint *)*(undefined1 (*) [16])pcVar43;
      unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
      uVar45 = (uint)(char)bVar10;
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(byte *)local_88 = bVar10;
      if (0x73 < uVar45 - 10) {
        param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
        goto code_r0x000140092217;
      }
      param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
      switch(uVar45) {
      case 10:
        if ((((ulonglong)local_90 & 4) != 0) && (*local_c0 == 0)) {
          *(uint *)*local_78 = 0x7c;
        }
        break;
      case 0x24:
        if (((((ulonglong)local_90 & 0x2000000) != 0) &&
            (ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 2),
            (undefined1 (*) [16])ppuVar55 != unaff_RBX)) &&
           ((char)*(uint *)*(undefined1 (*) [16])ppuVar55 != '\n')) goto code_r0x00014009425b;
        break;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)local_90 & 8;
        goto joined_r0x000140093c9f;
      case 0x2a:
        if (((ulonglong)local_90 & 0x4000000) == 0) break;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x00014009425b;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014009425b;
        }
        break;
      case 0x2b:
      case 0x3f:
        uVar39 = (ulonglong)local_90 & 1;
joined_r0x000140093c9f:
        if (uVar39 == 0) {
code_r0x00014009425b:
          *(uint *)*local_78 = 0;
        }
        break;
      case 0x5c:
        ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 2);
        if ((undefined1 (*) [16])ppuVar55 != unaff_RBX) {
          if ((((ulonglong)local_90 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55, uVar15 = (uint)bVar10,
             (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400941a4:
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
            unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
          }
          else if (((ulonglong)local_90 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
            uVar15 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400941a4;
          }
        }
        break;
      case 0x5e:
        if (((ulonglong)local_90 & 0x2000000) != 0) {
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
            goto code_r0x00014009425b;
            break;
          default:
            goto code_r0x00014009425b;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)local_90 & 0x10;
        goto joined_r0x000140094107;
      case 0x7c:
        uVar39 = (ulonglong)local_90 & 2;
joined_r0x000140094107:
        if (uVar39 != 0) break;
        goto code_r0x00014009425b;
      }
code_r0x000140092217:
      *(uint *)*local_b0 = 0;
      local_a8 = *(undefined1 (**) [16])*local_a0;
      local_b8 = (undefined1 (*) [16])
                 CONCAT71(local_b8._1_7_,*local_c0 == 0 & (byte)((ulonglong)param_4 >> 2) & 0x3f);
      unaff_RDI = (undefined1 (*) [16])0x0;
      iVar58 = -4;
      goto code_r0x000140092279;
    case 0x78:
      goto code_r0x000140087762;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    switch(uVar45) {
    case 10:
      if ((((ulonglong)local_90 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
      }
    default:
      goto code_r0x00014008ff39;
    case 0x24:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 2),
          pauVar26 != unaff_RBX)) && ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x000140093484;
      goto code_r0x00014008ff39;
    case 0x28:
    case 0x29:
      uVar39 = (ulonglong)local_90 & 8;
      break;
    case 0x2a:
      if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014008ff39;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x000140093484;
      default:
        goto code_r0x00014008ff39;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140093484;
      }
    case 0x2b:
    case 0x3f:
      uVar39 = (ulonglong)local_90 & 1;
      break;
    case 0x5c:
      pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 2);
      if ((pauVar26 == unaff_RBX) ||
         (((((ulonglong)local_90 & 8) != 0 ||
           (bVar10 = (byte)*(uint *)*pauVar26, (bVar10 & 0xfe) != 0x28)) &&
          ((((ulonglong)local_90 & 0x10) != 0 ||
           ((bVar10 = (byte)*(uint *)*pauVar26, bVar10 != 0x7d && (bVar10 != 0x7b))))))))
      goto code_r0x00014008ff39;
      *(byte *)local_88 = bVar10;
      uVar15 = (uint)bVar10;
      pauVar26 = local_78;
      goto code_r0x00014008ff37;
    case 0x5e:
      if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014008ff39;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008ff39;
      }
      goto code_r0x000140093484;
    case 0x7b:
    case 0x7d:
      uVar39 = (ulonglong)local_90 & 0x10;
      break;
    case 0x7c:
      uVar39 = (ulonglong)local_90 & 2;
    }
    if (uVar39 != 0) goto code_r0x00014008ff39;
code_r0x000140093484:
    *(uint *)*local_78 = 0;
    goto code_r0x00014008ff39;
  case 0x5d:
    if ((*(uint *)*local_80 & 0x10000000) == 0) goto code_r0x0001400a19fa;
    break;
  case 0x5e:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x20);
    *puVar23 = std::_Node_base::vftable;
    *(undefined4 *)(puVar23 + 1) = 2;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    puVar23[3] = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      puVar23[2] = *(longlong *)pauVar26[1];
      *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar26[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    unaff_RBX = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != unaff_RBX) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != unaff_RBX)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == unaff_RBX) goto LAB_140086de0;
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    ppuVar55 = (undefined **)0x0;
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    goto code_r0x000140087031;
  case 0x7d:
    pauVar18 = (undefined1 (*) [16])ppuVar55;
    if ((*(uint *)*local_80 & 0x10000000) == 0) goto code_r0x0001400a1a8f;
    break;
  case 0xffffffff:
  case 0x7c:
    if (((ulonglong)ppuVar55 & 1) == 0) {
LAB_140094517:
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    else {
      if (uVar15 != 0x7c) {
        return;
      }
      auVar71 = ZEXT1664(auVar69);
      pauVar18 = operator_new(0x20);
      *(undefined ***)*pauVar18 = std::_Node_base::vftable;
      *(undefined4 *)((longlong)*pauVar18 + 8) = 8;
      *(undefined8 *)((longlong)*pauVar18 + 0xc) = 0;
      *(undefined4 *)(pauVar18[1] + 4) = 0;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
      if (*(longlong *)pauVar26[1] != 0) {
        *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
        *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
        pauVar26 = *(undefined1 (**) [16])*local_a0;
      }
      *(undefined1 (**) [16])pauVar26[1] = pauVar18;
      *(undefined1 (**) [16])*local_a0 = pauVar18;
      uVar15 = *(int *)((longlong)*pauVar18 + 8) - 8;
      uVar17 = 0xe;
      if (uVar15 < 4) {
        uVar17 = (&DAT_1401123dc)[uVar15];
      }
      pauVar26 = operator_new(0x28);
      auVar69 = auVar71._0_16_;
      *(undefined4 *)((longlong)*pauVar26 + 8) = uVar17;
      *(undefined8 *)((longlong)*pauVar26 + 0xc) = 0;
      *(undefined4 *)(pauVar26[1] + 4) = 0;
      *(undefined ***)*pauVar26 = std::_Node_end_group::vftable;
      *(undefined1 (**) [16])pauVar26[2] = pauVar18;
      *(undefined1 (**) [16])(pauVar26[1] + 8) = pauVar18;
      lVar29 = *(longlong *)pauVar18[1];
      if (lVar29 != 0) {
        *(longlong *)pauVar26[1] = lVar29;
        *(undefined1 (**) [16])(lVar29 + 0x18) = pauVar26;
        pauVar18 = *(undefined1 (**) [16])*local_a0;
      }
      *(undefined1 (**) [16])pauVar18[1] = pauVar26;
      *(undefined1 (**) [16])*local_a0 = pauVar26;
    }
    auVar71 = ZEXT1664(auVar69);
    pauVar21 = operator_new(0x20);
    *(undefined4 *)((longlong)*pauVar21 + 8) = 0x11;
    *(undefined8 *)((longlong)*pauVar21 + 0xc) = 0;
    *(undefined4 *)(pauVar21[1] + 4) = 0;
    *(undefined ***)*pauVar21 = std::_Node_endif::vftable;
    *(undefined1 (**) [16])(pauVar21[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar21[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar21;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar21;
    *(undefined1 (**) [16])*local_a0 = pauVar21;
    puVar23 = operator_new(0x30);
    puVar23[1] = 0x10;
    *puVar23 = std::_Node_if::vftable;
    puVar23[4] = pauVar21;
    puVar23[5] = 0;
    lVar29 = *(longlong *)(lVar50 + 0x10);
    *(undefined8 **)(*(longlong *)(lVar29 + 0x18) + 0x10) = puVar23;
    puVar23[3] = *(undefined8 *)(lVar29 + 0x18);
    *(undefined8 **)(lVar29 + 0x18) = puVar23;
    puVar23[2] = lVar29;
    auVar72 = ZEXT1664((undefined1  [16])0x0);
    goto LAB_1400945d0;
  }
  uVar12 = (undefined1)*local_88;
  pauVar26 = *(undefined1 (**) [16])*local_a0;
  if ((*(int *)(*pauVar26 + 8) != 6) || (((*pauVar26)[0xc] & 4) != 0)) {
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar18 = operator_new(0x30);
    *(undefined4 *)((longlong)*pauVar18 + 8) = 6;
    *(undefined8 *)((longlong)*pauVar18 + 0xc) = 0;
    *(undefined4 *)(pauVar18[1] + 4) = 0;
    *(undefined ***)*pauVar18 = std::_Node_str<char>::vftable;
    pauVar18[2] = auVar72._0_16_;
    *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar18;
    *(undefined1 (**) [16])*local_a0 = pauVar18;
  }
  if ((*(uint *)local_98[5] & 0x100) == 0) {
    if ((*(uint *)local_98[5] & 0x800) != 0) {
      local_138[0] = uVar12;
      plVar3 = *(longlong **)**(undefined1 (**) [16])*local_d0;
      param_4 = (undefined1 (*) [16])(local_138 + 1);
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 (*) [16])local_110,&local_138);
      unaff_RDI = (undefined1 (*) [16])local_110;
      if (0xf < uStack_f8) {
        unaff_RDI = local_110[0];
      }
      if (lStack_100 != 1) {
        unaff_RDI = &local_138;
      }
      uVar12 = (undefined1)*(uint *)*unaff_RDI;
      if (0xf < uStack_f8) {
        pauVar26 = local_110[0];
        if ((0xfff < uStack_f8 + 1) &&
           (pauVar26 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
           0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar26))))
        goto LAB_1400a3888;
        free(pauVar26);
      }
    }
  }
  else {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar12);
  }
  pauVar26 = *(undefined1 (**) [16])*local_a0;
  uVar15 = *(uint *)(pauVar26[2] + 4);
  if (uVar15 < *(uint *)pauVar26[2]) {
    pvVar19 = *(void **)(pauVar26[2] + 8);
  }
  else {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = realloc(*(void **)(pauVar26[2] + 8),(ulonglong)(uVar15 + 0x10));
    if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
    *(void **)(pauVar26[2] + 8) = pvVar19;
    *(uint *)pauVar26[2] = uVar15 + 0x10;
    uVar15 = *(uint *)(pauVar26[2] + 4);
  }
  *(uint *)(pauVar26[2] + 4) = uVar15 + 1;
  *(undefined1 *)((longlong)pvVar19 + (ulonglong)uVar15) = uVar12;
  unaff_RSI = *(undefined1 (**) [16])*local_98;
  unaff_RBX = *(undefined1 (**) [16])local_98[1];
  if (unaff_RSI != unaff_RBX) {
    if ((((char)*(uint *)*unaff_RSI == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != unaff_RBX)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
      unaff_RSI = pauVar26;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
  }
  if (unaff_RSI == unaff_RBX) goto LAB_140086de0;
  cVar14 = (char)*(uint *)*unaff_RSI;
  uVar45 = (uint)cVar14;
  auVar71 = ZEXT1664(auVar71._0_16_);
  auVar72 = ZEXT1664(auVar72._0_16_);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
    goto code_r0x00014008fb16;
  case (undefined1 (*) [16])0x1a:
    goto code_r0x00014008fb4d;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    goto code_r0x00014008fac2;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) != 0) {
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      switch(*(undefined4 *)(*pauVar26 + 8)) {
      case 2:
        goto code_r0x00014008fbaf;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008fe00;
      }
    }
    goto code_r0x0001400900a8;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    goto code_r0x00014008fad7;
  case (undefined1 (*) [16])0x52:
    goto code_r0x0001400903b1;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      switch(*(undefined4 *)(*pauVar26 + 8)) {
      case 2:
        goto code_r0x00014008fc09;
      default:
        goto code_r0x00014008fe00;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    goto code_r0x0001400900a8;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    goto code_r0x00014008faec;
  case (undefined1 (*) [16])0x72:
    goto code_r0x00014008fb01;
  }
  goto LAB_1400900b1;
code_r0x000140087031:
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  pauVar26 = unaff_RBX;
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
code_r0x0001400887f3:
    ppuVar55 = (undefined **)0x0;
    if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) goto LAB_140086dd0;
    goto code_r0x00014008fb33;
  default:
    goto LAB_140086dff;
  case (undefined1 (*) [16])0x1a:
    if ((*(uint *)*local_80 & 0x2000000) == 0) {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    if (unaff_RSI == unaff_RBX) {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
    if ((char)*(uint *)*unaff_RSI == '\n') {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    if ((*(uint *)*local_80 & 8) != 0) {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
    break;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) == 0) {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    ppuVar55 = (undefined **)0x0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
code_r0x00014008fdd9:
      uVar15 = *(uint *)(*(longlong *)(pauVar26[1] + 8) + 8);
      ppuVar55 = (undefined **)0x0;
      if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto LAB_140086dd0;
      break;
    default:
      goto LAB_140086dd0;
    case 8:
    case 0xd:
    case 0x14:
      break;
    }
    goto code_r0x00014008fe00;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    if ((*(uint *)*local_80 & 1) != 0) {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
    break;
  case (undefined1 (*) [16])0x52:
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    ppuVar55 = (undefined **)0x0;
    if (unaff_RSI == unaff_RBX) goto LAB_140086dff;
    if (((*(uint *)*local_80 & 8) != 0) ||
       (bVar10 = (byte)*(uint *)*unaff_RSI, (bVar10 & 0xfe) != 0x28)) {
      if ((*(uint *)*local_80 & 0x10) != 0) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
      bVar10 = (byte)*(uint *)*unaff_RSI;
      if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
    }
code_r0x00014008fe5b:
    *(byte *)local_88 = bVar10;
    uVar15 = (uint)bVar10;
    *(uint *)*local_78 = uVar15;
    ppuVar55 = (undefined **)0x0;
    pauVar26 = unaff_RBX;
    goto LAB_140086dff;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) == 0) {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
    ppuVar55 = (undefined **)0x0;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) {
        ppuVar55 = (undefined **)0x0;
        goto LAB_140086dd0;
      }
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto LAB_140086dd0;
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    if ((*(uint *)*local_80 & 0x10) != 0) {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
    break;
  case (undefined1 (*) [16])0x72:
    if ((*(uint *)*local_80 & 2) != 0) {
      ppuVar55 = (undefined **)0x0;
      goto LAB_140086dd0;
    }
  }
code_r0x00014008fef3:
  uVar15 = 0;
  *(uint *)*local_78 = 0;
  ppuVar55 = (undefined **)0x0;
  pauVar26 = unaff_RBX;
  goto LAB_140086dff;
code_r0x000140090430:
  do {
    uVar45 = (uint)unaff_RDI & 0xff;
    if ((int)((0x8000002f - uVar45) / 10) < (int)uVar15) goto code_r0x0001400a1a1c;
    uVar15 = (uVar45 + uVar15 * 10) - 0x30;
    *(uint *)*local_b0 = uVar15;
    if ((undefined1 (*) [16])ppuVar55 == unaff_RBX) {
code_r0x000140090729:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      break;
    }
    if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
        pauVar18 != unaff_RBX)) &&
       (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        ((((ulonglong)param_4 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      ppuVar55 = (undefined **)pauVar18;
    }
    pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar18;
    if (pauVar18 == unaff_RBX) goto code_r0x000140090729;
    bVar10 = (byte)*(uint *)*pauVar18;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar46 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar45 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar45 = 0;
    }
    *(uint *)*local_78 = uVar45;
    *(byte *)local_88 = bVar10;
    iVar58 = (int)unaff_RSI;
    if (0x73 < uVar46 - 10) goto joined_r0x0001400906df;
    param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
    switch(uVar46) {
    case 10:
      if ((char)local_b8 == '\0') break;
      *(uint *)*local_78 = 0x7c;
joined_r0x000140090611:
      if (iVar58 != 0) goto code_r0x0001400906c1;
      goto code_r0x000140090740;
    case 0x24:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 2),
          (undefined1 (*) [16])ppuVar55 != unaff_RBX)) &&
         ((char)*(uint *)*(undefined1 (*) [16])ppuVar55 != '\n')) goto code_r0x0001400906b0;
      break;
    case 0x28:
    case 0x29:
      uVar39 = (ulonglong)local_90 & 8;
      goto joined_r0x000140090542;
    case 0x2a:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
        if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x0001400906b0;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400906b0;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar39 = (ulonglong)local_90 & 1;
joined_r0x000140090542:
      if (uVar39 == 0) {
code_r0x0001400906b0:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      ppuVar55 = (undefined **)((longlong)*(undefined1 (*) [16])ppuVar55 + 2);
      if ((undefined1 (*) [16])ppuVar55 != unaff_RBX) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55, uVar45 = (uint)bVar10,
           (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400905f8:
          *(char *)local_88 = (char)uVar45;
          *(uint *)*local_78 = uVar45;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar45;
          goto joined_r0x000140090611;
        }
        if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
          uVar45 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400905f8;
        }
      }
      break;
    case 0x5e:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar45 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
          goto code_r0x0001400906b0;
          break;
        default:
          goto code_r0x0001400906b0;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar39 = (ulonglong)local_90 & 0x10;
      goto joined_r0x000140090560;
    case 0x7c:
      uVar39 = (ulonglong)local_90 & 2;
joined_r0x000140090560:
      if (uVar39 != 0) break;
      goto code_r0x0001400906b0;
    }
joined_r0x0001400906df:
    param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
    if (iVar58 == 0) break;
code_r0x0001400906c1:
    param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
    unaff_RSI = (undefined1 (*) [16])(ulonglong)(iVar58 + 1);
    ppuVar55 = (undefined **)pauVar18;
  } while ((byte)((char)unaff_RDI - 0x30U) < 10);
code_r0x000140090740:
  pauVar18 = local_a8;
  if (uVar15 == 0) {
    unaff_RSI = &local_138;
    pcVar43 = (char *)0x0;
    if (((ulonglong)param_4 & 0x100000) == 0) goto code_r0x0001400a1917;
    if ((*(uint *)((longlong)*local_a8 + 8) != 6) ||
       (unaff_RDI = local_a8, (*(uint *)((longlong)*local_a8 + 0xc) & 4) != 0)) {
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pauVar26 = operator_new(0x30);
      *(undefined4 *)((longlong)*pauVar26 + 8) = 6;
      *(undefined8 *)((longlong)*pauVar26 + 0xc) = 0;
      *(undefined4 *)(pauVar26[1] + 4) = 0;
      *(undefined ***)*pauVar26 = std::_Node_str<char>::vftable;
      pauVar26[2] = auVar72._0_16_;
      *(undefined1 (**) [16])(pauVar26[1] + 8) = pauVar18;
      if (*(longlong *)pauVar18[1] != 0) {
        *(longlong *)pauVar26[1] = *(longlong *)pauVar18[1];
        *(undefined1 (**) [16])(*(longlong *)pauVar18[1] + 0x18) = pauVar26;
        pauVar18 = *(undefined1 (**) [16])*local_a0;
      }
      *(undefined1 (**) [16])pauVar18[1] = pauVar26;
      *(undefined1 (**) [16])*local_a0 = pauVar26;
      unaff_RDI = pauVar18;
    }
    if ((*(uint *)local_98[5] & 0x100) == 0) {
      if ((*(uint *)local_98[5] & 0x800) == 0) {
        uVar12 = 0;
      }
      else {
        auVar7[0x1f] = 0;
        auVar7._0_31_ = stack0xfffffffffffffec9;
        _local_138 = auVar7 << 8;
        plVar3 = *(longlong **)**(undefined1 (**) [16])*local_d0;
        param_4 = (undefined1 (*) [16])(local_138 + 1);
        auVar71 = ZEXT1664(auVar71._0_16_);
        auVar72 = ZEXT1664(auVar72._0_16_);
        (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 (*) [16])local_110,unaff_RSI);
        unaff_RDI = (undefined1 (*) [16])local_110;
        if (0xf < uStack_f8) {
          unaff_RDI = local_110[0];
        }
        if (lStack_100 != 1) {
          unaff_RDI = unaff_RSI;
        }
        uVar12 = (undefined1)*(uint *)*unaff_RDI;
        if (0xf < uStack_f8) {
          pauVar26 = local_110[0];
          if ((0xfff < uStack_f8 + 1) &&
             (pauVar26 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
             0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar26))))
          goto LAB_1400a3888;
          free(pauVar26);
        }
      }
    }
    else {
      plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      uVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,0);
    }
    unaff_RSI = *(undefined1 (**) [16])*local_a0;
    uVar15 = *(uint *)((longlong)unaff_RSI[2] + 4);
    if (uVar15 < *(uint *)unaff_RSI[2]) {
      pvVar19 = *(void **)((longlong)unaff_RSI[2] + 8);
    }
    else {
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pvVar19 = realloc(*(void **)((longlong)unaff_RSI[2] + 8),(ulonglong)(uVar15 + 0x10));
      if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
      *(void **)((longlong)unaff_RSI[2] + 8) = pvVar19;
      *(uint *)unaff_RSI[2] = uVar15 + 0x10;
      uVar15 = *(uint *)((longlong)unaff_RSI[2] + 4);
    }
    unaff_RBX = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)((longlong)unaff_RSI[2] + 4) = uVar15 + 1;
    *(undefined1 *)((longlong)pvVar19 + (longlong)unaff_RBX) = uVar12;
  }
  else {
    unaff_RSI = local_a8;
    if ((((((ulonglong)param_4 & 0x200) != 0) && (9 < uVar15)) ||
        (uVar39 = (ulonglong)(int)uVar15, *(uint *)((longlong)local_98[1] + 8) < uVar39)) ||
       ((*(ulonglong *)((longlong)local_98[3] + 8) <= uVar39 ||
        ((*(uint *)(*(longlong *)local_98[2] + (uVar39 >> 5) * 4) >> (uVar15 & 0x1f) & 1) == 0))))
    goto code_r0x0001400a1a1c;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar26 = operator_new(0x28);
    *(undefined4 *)((longlong)*pauVar26 + 8) = 0xf;
    *(undefined8 *)((longlong)*pauVar26 + 0xc) = 0;
    *(undefined4 *)(pauVar26[1] + 4) = 0;
    *(undefined ***)*pauVar26 = std::_Node_back::vftable;
    *(uint *)pauVar26[2] = uVar15;
    *(undefined1 (**) [16])(pauVar26[1] + 8) = pauVar18;
    unaff_RSI = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      *(longlong *)pauVar26[1] = *(longlong *)pauVar18[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar18[1] + 0x18) = pauVar26;
      unaff_RSI = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])unaff_RSI[1] = pauVar26;
    *(undefined1 (**) [16])*local_a0 = pauVar26;
  }
  goto code_r0x0001400900a8;
code_r0x000140091f3d:
  do {
    cVar14 = (char)unaff_RSI;
    iVar58 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar58 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar58 - 0x57;
    }
    else {
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar58 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)unaff_RDI))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (int)unaff_RDI * 0x10;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if ((undefined1 (*) [16])pcVar43 == unaff_RBX) {
code_r0x000140091f10:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
      pcVar43 = (char *)unaff_RBX;
      goto code_r0x000140091f2d;
    }
    pauVar18 = (undefined1 (*) [16])pcVar43;
    if ((((char)*(uint *)*(undefined1 (*) [16])pcVar43 == '\\') &&
        (pauVar21 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
        pauVar21 != unaff_RBX)) &&
       (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar21 & 0xfe) == 0x28)) ||
        ((((ulonglong)param_4 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar21, cVar14 == '}' || (cVar14 == '{')))))))) {
      pauVar18 = pauVar21;
    }
    pcVar43 = (char *)((longlong)*pauVar18 + 1);
    *(char **)*local_98 = pcVar43;
    if ((undefined1 (*) [16])pcVar43 == unaff_RBX) goto code_r0x000140091f10;
    bVar10 = (byte)*(uint *)*(undefined1 (*) [16])pcVar43;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    ppuVar55 = (undefined **)unaff_RDI;
    if (0x73 < uVar45 - 10) {
      param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
      goto code_r0x000140091f2d;
    }
    param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
    switch(uVar45) {
    case 10:
      if ((char)local_b8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != unaff_RBX)) &&
         ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x0001400921d9;
      break;
    case 0x28:
    case 0x29:
      uVar39 = (ulonglong)local_90 & 8;
      goto joined_r0x000140092072;
    case 0x2a:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x0001400921d9;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400921d9;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar39 = (ulonglong)local_90 & 1;
joined_r0x000140092072:
      if (uVar39 == 0) {
code_r0x0001400921d9:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if (pauVar18 != unaff_RBX) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140092120:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140092120;
        }
      }
      break;
    case 0x5e:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x0001400921d9;
          break;
        default:
          goto code_r0x0001400921d9;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar39 = (ulonglong)local_90 & 0x10;
      goto joined_r0x000140092090;
    case 0x7c:
      uVar39 = (ulonglong)local_90 & 2;
joined_r0x000140092090:
      if (uVar39 != 0) break;
      goto code_r0x0001400921d9;
    }
code_r0x000140091f2d:
    bVar60 = !bVar62;
    bVar62 = true;
  } while (bVar60);
  goto code_r0x00014008ff1c;
code_r0x000140092279:
  do {
    cVar14 = (char)unaff_RSI;
    iVar16 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar16 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar16 - 0x57;
    }
    else {
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar16 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)unaff_RDI))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (int)unaff_RDI * 0x10;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if ((undefined1 (*) [16])pcVar43 == unaff_RBX) {
code_r0x000140092250:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
      pcVar43 = (char *)unaff_RBX;
      goto code_r0x00014009226d;
    }
    pauVar18 = (undefined1 (*) [16])pcVar43;
    if ((((char)*(uint *)*(undefined1 (*) [16])pcVar43 == '\\') &&
        (pauVar21 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
        pauVar21 != unaff_RBX)) &&
       (((((ulonglong)param_4 & 8) == 0 && ((*(uint *)*pauVar21 & 0xfe) == 0x28)) ||
        ((((ulonglong)param_4 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar21, cVar14 == '}' || (cVar14 == '{')))))))) {
      pauVar18 = pauVar21;
    }
    pcVar43 = (char *)((longlong)*pauVar18 + 1);
    *(char **)*local_98 = pcVar43;
    if ((undefined1 (*) [16])pcVar43 == unaff_RBX) goto code_r0x000140092250;
    bVar10 = (byte)*(uint *)*(undefined1 (*) [16])pcVar43;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    ppuVar55 = (undefined **)unaff_RDI;
    if (0x73 < uVar45 - 10) {
      param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
      goto code_r0x00014009226d;
    }
    param_4 = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
    switch(uVar45) {
    case 10:
      if ((char)local_b8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != unaff_RBX)) &&
         ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x000140092519;
      break;
    case 0x28:
    case 0x29:
      uVar39 = (ulonglong)local_90 & 8;
      goto joined_r0x0001400923b2;
    case 0x2a:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x000140092519;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140092519;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar39 = (ulonglong)local_90 & 1;
joined_r0x0001400923b2:
      if (uVar39 == 0) {
code_r0x000140092519:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if (pauVar18 != unaff_RBX) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140092460:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140092460;
        }
      }
      break;
    case 0x5e:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x000140092519;
          break;
        default:
          goto code_r0x000140092519;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar39 = (ulonglong)local_90 & 0x10;
      goto joined_r0x0001400923d0;
    case 0x7c:
      uVar39 = (ulonglong)local_90 & 2;
joined_r0x0001400923d0:
      if (uVar39 != 0) break;
      goto code_r0x000140092519;
    }
code_r0x00014009226d:
    iVar58 = iVar58 + 1;
  } while (iVar58 != 0);
code_r0x00014008ff1c:
  pcVar43 = (char *)&DAT_1400a4460;
  if (0xff < (uint)unaff_RDI) goto code_r0x0001400a1917;
code_r0x00014008ff2f:
  uVar15 = (uint)(char)unaff_RDI;
  pauVar26 = local_b0;
code_r0x00014008ff37:
  *(uint *)*pauVar26 = uVar15;
code_r0x00014008ff39:
  pauVar26 = *(undefined1 (**) [16])*local_a0;
  if ((*(int *)(*pauVar26 + 8) != 6) || (((*pauVar26)[0xc] & 4) != 0)) {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar18 = operator_new(0x30);
    *(undefined4 *)((longlong)*pauVar18 + 8) = 6;
    *(undefined8 *)((longlong)*pauVar18 + 0xc) = 0;
    *(undefined4 *)(pauVar18[1] + 4) = 0;
    *(undefined ***)*pauVar18 = std::_Node_str<char>::vftable;
    pauVar18[2] = auVar72._0_16_;
    *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar18;
    *(undefined1 (**) [16])*local_a0 = pauVar18;
  }
  if ((*(uint *)local_98[5] & 0x100) == 0) {
    if ((*(uint *)local_98[5] & 0x800) != 0) {
      local_138[0] = (char)unaff_RDI;
      plVar3 = *(longlong **)**(undefined1 (**) [16])*local_d0;
      param_4 = (undefined1 (*) [16])(local_138 + 1);
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 (*) [16])local_110,&local_138);
      pauVar26 = (undefined1 (*) [16])local_110;
      if (0xf < uStack_f8) {
        pauVar26 = local_110[0];
      }
      if (lStack_100 != 1) {
        pauVar26 = &local_138;
      }
      unaff_RDI = (undefined1 (*) [16])(ulonglong)(byte)*(uint *)*pauVar26;
      if (0xf < uStack_f8) {
        pauVar26 = local_110[0];
        if ((0xfff < uStack_f8 + 1) &&
           (pauVar26 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
           0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar26))))
        goto LAB_1400a3888;
        free(pauVar26);
      }
    }
  }
  else {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,(ulonglong)unaff_RDI & 0xffffffff);
    unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
  }
  unaff_RSI = *(undefined1 (**) [16])*local_a0;
  uVar15 = *(uint *)((longlong)unaff_RSI[2] + 4);
  if (uVar15 < *(uint *)unaff_RSI[2]) {
    pauVar26 = *(undefined1 (**) [16])((longlong)unaff_RSI[2] + 8);
  }
  else {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar26 = realloc(*(undefined1 (**) [16])((longlong)unaff_RSI[2] + 8),
                       (ulonglong)(uVar15 + 0x10));
    if (pauVar26 == (undefined1 (*) [16])0x0) goto LAB_1400a353c;
    *(undefined1 (**) [16])((longlong)unaff_RSI[2] + 8) = pauVar26;
    *(uint *)unaff_RSI[2] = uVar15 + 0x10;
    uVar15 = *(uint *)((longlong)unaff_RSI[2] + 4);
  }
  unaff_RBX = (undefined1 (*) [16])(ulonglong)uVar15;
  *(uint *)((longlong)unaff_RSI[2] + 4) = uVar15 + 1;
  *(char *)((longlong)*pauVar26 + (longlong)unaff_RBX) = (char)unaff_RDI;
  goto code_r0x0001400900a8;
code_r0x00014008bc4b:
  do {
    cVar14 = (char)unaff_RSI;
    iVar58 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar58 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar58 - 0x57;
    }
    else {
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar58 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)pcVar43))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (int)pcVar43 * 0x10;
    pcVar43 = (char *)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar56 == param_4) {
code_r0x00014008bc20:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
      ppuVar55 = (undefined **)param_4;
      goto code_r0x00014008bc3d;
    }
    if ((((char)*(uint *)*pauVar56 == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 1), pauVar18 != param_4)) &&
       ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      pauVar56 = pauVar18;
    }
    ppuVar55 = (undefined **)((longlong)*pauVar56 + 1);
    *(undefined ***)*local_98 = ppuVar55;
    if ((undefined1 (*) [16])ppuVar55 == param_4) goto code_r0x00014008bc20;
    bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      goto code_r0x00014008bc3d;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if ((char)local_b8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 2), pauVar18 != param_4)) &&
         ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014008bee7;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014008bd83;
    case (undefined1 (*) [16])0x20:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008bee7;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008bee7;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008bd83:
      if (uVar57 == 0) {
code_r0x00014008bee7:
        *(uint *)*local_78 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 2);
      if (pauVar18 != param_4) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014008be2e:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008be2e;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014008bee7;
          break;
        default:
          goto code_r0x00014008bee7;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014008bda1;
    case (undefined1 (*) [16])0x72:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008bda1:
      if (uVar57 != 0) break;
      goto code_r0x00014008bee7;
    }
code_r0x00014008bc3d:
    bVar62 = pauVar26 == (undefined1 (*) [16])0x0;
    pauVar26 = (undefined1 (*) [16])0x1;
    pauVar18 = pauVar26;
    pauVar56 = (undefined1 (*) [16])ppuVar55;
  } while (bVar62);
  goto code_r0x00014008ed00;
code_r0x00014008b928:
  do {
    cVar14 = (char)unaff_RSI;
    iVar58 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar58 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar58 - 0x57;
    }
    else {
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar58 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)pcVar43))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (int)pcVar43 * 0x10;
    pcVar43 = (char *)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar56 == param_4) {
code_r0x00014008b900:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
      ppuVar55 = (undefined **)param_4;
      goto code_r0x00014008b91d;
    }
    if ((((char)*(uint *)*pauVar56 == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 1), pauVar18 != param_4)) &&
       ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      pauVar56 = pauVar18;
    }
    ppuVar55 = (undefined **)((longlong)*pauVar56 + 1);
    *(undefined ***)*local_98 = ppuVar55;
    if ((undefined1 (*) [16])ppuVar55 == param_4) goto code_r0x00014008b900;
    bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      goto code_r0x00014008b91d;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if ((char)local_b8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 2), pauVar18 != param_4)) &&
         ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014008bbc7;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014008ba63;
    case (undefined1 (*) [16])0x20:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008bbc7;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008bbc7;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008ba63:
      if (uVar57 == 0) {
code_r0x00014008bbc7:
        *(uint *)*local_78 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 2);
      if (pauVar18 != param_4) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014008bb0e:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008bb0e;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014008bbc7;
          break;
        default:
          goto code_r0x00014008bbc7;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014008ba81;
    case (undefined1 (*) [16])0x72:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008ba81:
      if (uVar57 != 0) break;
      goto code_r0x00014008bbc7;
    }
code_r0x00014008b91d:
    uVar15 = (int)pauVar26 + 1;
    pauVar26 = (undefined1 (*) [16])(ulonglong)uVar15;
    pauVar18 = pauVar26;
    pauVar56 = (undefined1 (*) [16])ppuVar55;
  } while (uVar15 != 0);
  goto code_r0x00014008ed00;
code_r0x00014008b211:
  do {
    if ((bVar10 & 0xf8) != 0x30) {
      if ((int)unaff_RSI == 0) goto code_r0x00014008b18c;
      break;
    }
    pauVar26 = pauVar18;
    if ((int)(0x8000002f - bVar10 >> 3) < (int)pcVar43) goto code_r0x0001400a1917;
    uVar15 = ((uint)bVar10 + (int)pcVar43 * 8) - 0x30;
    pcVar43 = (char *)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if ((undefined1 (*) [16])ppuVar55 == param_4) {
code_r0x00014008b1e0:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      bVar10 = 0xff;
      ppuVar55 = (undefined **)param_4;
      pauVar18 = pauVar22;
      goto code_r0x00014008b200;
    }
    pauVar26 = (undefined1 (*) [16])ppuVar55;
    if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
        pauVar18 != param_4)) &&
       ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      pauVar26 = pauVar18;
    }
    ppuVar55 = (undefined **)((longlong)*pauVar26 + 1);
    *(undefined ***)*local_98 = ppuVar55;
    pauVar22 = param_4;
    if ((undefined1 (*) [16])ppuVar55 == param_4) goto code_r0x00014008b1e0;
    bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    pauVar18 = (undefined1 (*) [16])ppuVar55;
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      goto code_r0x00014008b200;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if ((char)local_b8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != param_4)) &&
         ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014008b489;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014008b329;
    case (undefined1 (*) [16])0x20:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008b489;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008b489;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008b329:
      if (uVar57 == 0) {
code_r0x00014008b489:
        *(uint *)*local_78 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
      if ((pauVar26 != param_4) &&
         (((((ulonglong)local_90 & 8) == 0 &&
           (bVar11 = (byte)*(uint *)*pauVar26, (bVar11 & 0xfe) == 0x28)) ||
          ((((ulonglong)local_90 & 0x10) == 0 &&
           ((bVar11 = (byte)*(uint *)*pauVar26, bVar11 == 0x7d || (bVar11 == 0x7b)))))))) {
        bVar10 = bVar11;
        *(byte *)local_88 = bVar10;
        *(uint *)*local_78 = (uint)bVar10;
      }
      break;
    case (undefined1 (*) [16])0x54:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014008b489;
          break;
        default:
          goto code_r0x00014008b489;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014008b347;
    case (undefined1 (*) [16])0x72:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008b347:
      if (uVar57 != 0) break;
      goto code_r0x00014008b489;
    }
code_r0x00014008b200:
    uVar15 = (int)unaff_RSI + 1;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
    pauVar22 = pauVar18;
  } while (uVar15 != 3);
  pauVar26 = pauVar18;
  if ((int)pcVar43 == 0) goto code_r0x0001400a1917;
code_r0x00014008ed00:
  param_4 = pauVar21;
  pauVar26 = pauVar18;
  pauVar21 = param_4;
  if (0xff < (uint)pcVar43) goto code_r0x0001400a1917;
code_r0x00014008ed0d:
  param_4 = unaff_RSI;
  pauVar56 = (undefined1 (*) [16])(ulonglong)(uint)(int)(char)pcVar43;
  *(int *)*local_b0 = (int)(char)pcVar43;
code_r0x00014008c280:
  pauVar26 = pauVar18;
  if ((int)pauVar56 == 0) {
    uVar39 = (ulonglong)*(uint *)*local_80;
    unaff_RSI = param_4;
    param_4 = pauVar21;
code_r0x00014008c28f:
    pauVar56 = (undefined1 (*) [16])0x0;
    pcVar43 = (char *)0x0;
    pauVar21 = param_4;
    if ((uVar39 & 0x100000) == 0) goto code_r0x0001400a1917;
  }
code_r0x00014008c29f:
  uVar15 = *(uint *)*local_78;
code_r0x00014008c2a8:
  uVar45 = (uint)pauVar56;
  pauVar18 = pauVar26;
  if (uVar15 != 0x2d) {
code_r0x00014008c3a0:
    pauVar26 = pauVar18;
    param_4 = pauVar21;
    if ((*(uint *)local_98[5] & 0x100) != 0) {
      plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,pauVar56);
      pauVar56 = (undefined1 (*) [16])(ulonglong)uVar15;
      param_4 = pauVar21;
    }
    unaff_RSI = *(undefined1 (**) [16])*local_a0;
    pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8);
    if (pauVar31 == (undefined1 (*) [32])0x0) {
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pauVar31 = operator_new(0x20);
      *pauVar31 = ZEXT1232(ZEXT812(0));
      *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8) = pauVar31;
    }
    pbVar41 = (byte *)((longlong)*pauVar31 + (((ulonglong)pauVar56 & 0xff) >> 3));
    *pbVar41 = *pbVar41 | '\x01' << ((byte)pauVar56 & 7);
    goto code_r0x000140088d29;
  }
  pauVar18 = *(undefined1 (**) [16])*local_98;
  pauVar22 = *(undefined1 (**) [16])local_98[1];
  if (pauVar18 != pauVar22) {
    if ((((*pauVar18)[0] == '\\') &&
        (pauVar37 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar37 != pauVar22)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar37 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar37)[0] == '}' || ((*pauVar37)[0] == '{')))))
        ))) {
      pauVar18 = pauVar37;
    }
    pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar18;
  }
  unaff_RDI = pauVar22;
  if (pauVar18 == pauVar22) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    goto code_r0x00014008f921;
  }
  bVar10 = (*pauVar18)[0];
  unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
  uVar46 = (uint)(char)bVar10;
  auVar71 = ZEXT1664(auVar71._0_16_);
  auVar72 = ZEXT1664(auVar72._0_16_);
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  uVar15 = uVar46;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  param_4 = pauVar21;
  pauVar37 = pauVar22;
  switch(uVar46) {
  case 10:
    if ((*(uint *)*local_80 & 4) != 0) {
      uVar47 = 0x7c;
      uVar48 = *local_c0;
joined_r0x00014008c5a5:
      pauVar21 = param_4;
      if (uVar48 == 0) goto code_r0x00014008c687;
    }
    break;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (ppauVar1 = (undefined1 (**) [16])((longlong)*pauVar18 + 1),
        (undefined1 (*) [16])ppauVar1 != pauVar22)) && (uVar47 = 0, *(char *)ppauVar1 != '\n'))
    goto code_r0x00014008c687;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x00014008c433;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) != 0) {
      uVar47 = 0;
      param_4 = (undefined1 (*) [16])&UNK_1400a9010;
      pauVar21 = param_4;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar48 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar48 < 0x15) && ((0x102100U >> (uVar48 & 0x1f) & 1) != 0)) goto code_r0x00014008c687;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008c687;
      }
    }
    break;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x00014008c433;
  case 0x5c:
    ppauVar1 = (undefined1 (**) [16])((longlong)*pauVar18 + 1);
    if ((undefined1 (*) [16])ppauVar1 != pauVar22) {
      if ((*(uint *)*local_80 & 8) == 0) {
        uVar46 = (uint)*(byte *)ppauVar1;
        pauVar21 = (undefined1 (*) [16])((ulonglong)*(byte *)ppauVar1 & 0xfffffffffffffffe);
        if ((char)pauVar21 != '(') goto code_r0x00014008c4c0;
code_r0x00014008c4db:
        *(char *)local_88 = (char)uVar46;
        *(uint *)*local_78 = uVar46;
        unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar46;
        param_4 = pauVar21;
        uVar15 = uVar46;
      }
      else {
code_r0x00014008c4c0:
        param_4 = pauVar21;
        if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = *(byte *)ppauVar1;
          uVar46 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008c4db;
        }
      }
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) == 0) break;
    uVar47 = 0;
    param_4 = (undefined1 (*) [16])&UNK_1400a8fc4;
    pauVar21 = (undefined1 (*) [16])&UNK_1400a8fc4;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar48 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if (uVar48 < 0x15) {
        uVar48 = 0x102100U >> (uVar48 & 0x1f) & 1;
        goto joined_r0x00014008c5a5;
      }
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014008c5b0;
    }
    goto code_r0x00014008c687;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x00014008c433;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014008c433:
    uVar47 = 0;
    if (bVar10 != 0) break;
code_r0x00014008c687:
    *(uint *)*local_78 = uVar47;
    param_4 = pauVar21;
    goto code_r0x00014008c77c;
  }
code_r0x00014008c5b0:
  if (0x5b < (int)uVar15) {
    if (uVar15 != 0x5c) {
      if (uVar15 == 0x5d) goto code_r0x00014008f91a;
      goto code_r0x00014008c778;
    }
    if ((((*pauVar18)[0] == '\\') &&
        (pauVar21 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar21 != pauVar22)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar21 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar21)[0] == '}' || ((*pauVar21)[0] == '{')))))
        ))) {
      pauVar18 = pauVar21;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
    if (unaff_RSI == pauVar22) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      bVar10 = 0xff;
      goto code_r0x00014008cda9;
    }
    bVar10 = (*unaff_RSI)[0];
    uVar46 = (uint)(char)bVar10;
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar15 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    pauVar26 = pauVar22;
    switch(uVar46) {
    case 10:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (pauVar21 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar21 != pauVar22)) &&
         ((char)*(uint *)*pauVar21 != '\n')) goto code_r0x00014008cd9c;
      break;
    case 0x28:
    case 0x29:
      bVar11 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x00014008ca49;
    case 0x2a:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008cd9c;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008cd9c;
      }
      break;
    case 0x2b:
    case 0x3f:
      bVar11 = (byte)*(uint *)*local_80 & 1;
joined_r0x00014008ca49:
      if (bVar11 == 0) {
code_r0x00014008cd9c:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar21 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if ((pauVar21 != pauVar22) &&
         ((((*(uint *)*local_80 & 8) == 0 &&
           (bVar11 = (byte)*(uint *)*pauVar21, (bVar11 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((bVar11 = (byte)*(uint *)*pauVar21, bVar11 == 0x7d || (bVar11 == 0x7b)))))))) {
        bVar10 = bVar11;
        *(byte *)local_88 = bVar10;
        *(uint *)*local_78 = (uint)bVar10;
      }
      break;
    case 0x5e:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014008cd9c;
          break;
        default:
          goto code_r0x00014008cd9c;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      bVar11 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x00014008ca9d;
    case 0x7c:
      bVar11 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014008ca9d:
      if (bVar11 != 0) break;
      goto code_r0x00014008cd9c;
    }
code_r0x00014008cda9:
    uVar15 = *(uint *)*local_80;
    uVar39 = (ulonglong)uVar15;
    if ((uVar15 & 0x200000) != 0) {
      if (((uVar15 & 0x4000) == 0) || (bVar10 != 0x5c)) {
        local_b8 = (undefined1 (*) [16])CONCAT44(local_b8._4_4_,uVar45);
        pauVar26 = unaff_RSI;
        if (((uVar15 & 0x20000) != 0) && (pauVar26 = pauVar22, unaff_RSI != pauVar22)) {
          lVar29 = *(longlong *)((longlong)local_98[6] + 8);
          local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,*(uint *)local_98[7]);
          uVar39 = 0;
          ppuVar55 = &PTR_s_alpha_140111f78;
          bVar62 = false;
          pcVar43 = "alnum";
          do {
            if ((0x2810UL >> (uVar39 & 0x3f) & 1) != 0) {
              cVar14 = *pcVar43;
              plVar3 = *(longlong **)(lVar29 + 8);
              cVar13 = (**(code **)(*plVar3 + 0x20))(plVar3,(*unaff_RSI)[0]);
              plVar3 = *(longlong **)(lVar29 + 8);
              cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,cVar14);
              if (cVar13 == cVar14) {
                if (!bVar62) {
                  uVar42 = (ushort)*(uint *)((longlong)
                                             *(undefined1 (*) [16])((longlong)ppuVar55 + -0x10) +
                                            0xc);
                  goto code_r0x00014008cfc2;
                }
                break;
              }
            }
            uVar39 = uVar39 + 1;
            pcVar43 = *(char **)*(undefined1 (*) [16])ppuVar55;
            bVar62 = pcVar43 == (char *)0x0;
            ppuVar55 = (undefined **)
                       ((longlong)*(undefined1 (*) [16])((longlong)ppuVar55 + 0x10) + 8);
          } while (uVar39 != 0xf);
          uVar42 = 0;
code_r0x00014008cfc2:
          uVar33 = uVar42 | 3;
          if ((uVar42 & 3) == 0) {
            uVar33 = uVar42;
          }
          if (((ulonglong)local_90 & 0x100) == 0) {
            uVar33 = uVar42;
          }
          if (uVar33 != 0) {
            lVar50 = *(longlong *)((longlong)local_98[4] + 8);
            uVar42 = *(ushort *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                      (ulonglong)(byte)*(uint *)((longlong)local_98[7] + 8) * 2);
            uVar39 = 0;
            goto code_r0x0001400a276f;
          }
          uVar39 = (ulonglong)*(uint *)local_98[8];
          bVar10 = (byte)*(uint *)((longlong)local_98[7] + 8);
          pauVar26 = *(undefined1 (**) [16])*local_98;
          pauVar37 = *(undefined1 (**) [16])local_98[1];
        }
        *(uint *)*local_b0 = 0;
        local_c8 = *(undefined1 (**) [16])*local_a0;
        local_d8 = (undefined1 (*) [16])
                   CONCAT71(local_d8._1_7_,*local_c0 == 0 & (byte)(uVar39 >> 2) & 0x3f);
        unaff_RSI = (undefined1 (*) [16])0x0;
        uVar15 = 0;
        local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,(int)uVar39);
        pcVar43 = (char *)pauVar26;
        while (unaff_RDI = pauVar37, (byte)(bVar10 - 0x30) < 10) {
          if ((int)((0x8000002f - bVar10) / 10) < (int)uVar15) goto code_r0x0001400a1917;
          uVar15 = ((uint)bVar10 + uVar15 * 10) - 0x30;
          *(uint *)*local_b0 = uVar15;
          if ((undefined1 (*) [16])pcVar43 == pauVar37) {
code_r0x00014008d040:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            bVar10 = 0xff;
            pcVar43 = (char *)pauVar37;
            goto code_r0x00014008d060;
          }
          pauVar18 = (undefined1 (*) [16])pcVar43;
          if ((((*(undefined1 (*) [16])pcVar43)[0] == '\\') &&
              (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
              pauVar26 != pauVar37)) &&
             ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28))
              || (((uVar39 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{'))))))))
          {
            pauVar18 = pauVar26;
          }
          pcVar43 = (char *)((longlong)*pauVar18 + 1);
          *(char **)*local_98 = pcVar43;
          pauVar26 = pauVar37;
          if ((undefined1 (*) [16])pcVar43 == pauVar37) goto code_r0x00014008d040;
          bVar10 = (*(undefined1 (*) [16])pcVar43)[0];
          uVar46 = (uint)(char)bVar10;
          pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
          uVar45 = uVar46;
          if (pvVar19 == (void *)0x0) {
            uVar45 = 0;
          }
          *(uint *)*local_78 = uVar45;
          *(byte *)local_88 = bVar10;
          pauVar26 = (undefined1 (*) [16])pcVar43;
          if (0x73 < uVar46 - 10) {
            uVar39 = (ulonglong)local_90 & 0xffffffff;
            goto code_r0x00014008d060;
          }
          uVar39 = (ulonglong)local_90 & 0xffffffff;
          switch(uVar46) {
          case 10:
            if ((char)local_d8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          case 0x24:
            if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar37))
               && ((*pauVar18)[0] != '\n')) goto code_r0x00014008d2e6;
            break;
          case 0x28:
          case 0x29:
            uVar57 = (ulonglong)local_90 & 8;
            goto joined_r0x00014008d186;
          case 0x2a:
            if (((ulonglong)local_90 & 0x4000000) == 0) break;
            switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
            case 2:
              uVar45 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
              if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0))
              goto code_r0x00014008d2e6;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014008d2e6;
            }
            break;
          case 0x2b:
          case 0x3f:
            uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008d186:
            if (uVar57 == 0) {
code_r0x00014008d2e6:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
            if ((pauVar18 != pauVar37) &&
               (((((ulonglong)local_90 & 8) == 0 &&
                 (bVar11 = (*pauVar18)[0], ((*pauVar18)[0] & 0xfe) == 0x28)) ||
                ((((ulonglong)local_90 & 0x10) == 0 &&
                 ((bVar11 = (*pauVar18)[0], bVar11 == 0x7d || (bVar11 == 0x7b)))))))) {
              bVar10 = bVar11;
              *(byte *)local_88 = bVar10;
              *(uint *)*local_78 = (uint)bVar10;
            }
            break;
          case 0x5e:
            if (((ulonglong)local_90 & 0x2000000) != 0) {
              switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
              case 2:
                uVar45 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
                if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
                goto code_r0x00014008d2e6;
                break;
              default:
                goto code_r0x00014008d2e6;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar57 = (ulonglong)local_90 & 0x10;
            goto joined_r0x00014008d1a4;
          case 0x7c:
            uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008d1a4:
            if (uVar57 != 0) break;
            goto code_r0x00014008d2e6;
          }
code_r0x00014008d060:
          uVar45 = (int)unaff_RSI + 1;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar45;
          ppuVar55 = (undefined **)pauVar26;
          if (uVar45 == 0x7fffffff) goto code_r0x00014008d315;
        }
        if ((int)unaff_RSI != 0) goto code_r0x00014008d315;
        if (*(uint *)*local_78 == 0xffffffff) goto code_r0x0001400a1917;
        if ((((uVar39 & 0x10000) != 0) &&
            (bVar11 = (byte)(bVar10 + 0x9a) >> 1 | bVar10 << 7, bVar11 < 9)) &&
           ((0x1d1U >> (bVar11 & 0x1f) & 1) != 0)) {
          local_a8 = (undefined1 (*) [16])
                     (ulonglong)*(uint *)(&UNK_14010b538 + (ulonglong)bVar11 * 4);
          goto code_r0x00014008db1b;
        }
        if (-1 < (short)uVar39) {
          if (bVar10 == 0x78) goto code_r0x00014008d6f7;
          if (bVar10 == 0x75) goto code_r0x00014008d621;
          if (bVar10 == 99) goto code_r0x00014008d54e;
code_r0x00014008d704:
          if ((uVar39 & 0x2000) == 0) goto code_r0x00014008d70d;
          *(uint *)*local_b0 = 0;
          unaff_RSI = (undefined1 (*) [16])0x0;
          local_a8 = (undefined1 (*) [16])0x0;
          pcVar43 = (char *)pauVar26;
          goto code_r0x00014008d7a1;
        }
        local_a8 = (undefined1 (*) [16])0x7;
        switch(bVar10) {
        case 0x61:
          goto code_r0x00014008db1b;
        case 0x62:
          local_a8 = (undefined1 (*) [16])0x8;
code_r0x00014008db1b:
          pcVar43 = (char *)((ulonglong)local_b8 & 0xffffffff);
          *(uint *)*local_b0 = (uint)local_a8;
          if (pauVar26 == pauVar37) {
code_r0x00014008dbde:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            goto code_r0x00014008f69f;
          }
          if ((((char)*(uint *)*pauVar26 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar37)) &&
             ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28))
              || (((uVar39 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{'))))))))
          {
            pauVar26 = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          if (pauVar18 == pauVar37) goto code_r0x00014008dbde;
          cVar14 = (*pauVar18)[0];
          uVar45 = (uint)cVar14;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          break;
        case 99:
code_r0x00014008d54e:
          pcVar43 = (char *)((ulonglong)local_b8 & 0xffffffff);
          if ((uVar39 & 0x40000) == 0) goto code_r0x00014008d704;
          if (pauVar26 == pauVar37) {
code_r0x00014008dcde:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            uVar57 = 0xff;
            bVar62 = true;
            unaff_RSI = pauVar37;
            goto code_r0x00014008f584;
          }
          if ((((char)*(uint *)*pauVar26 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar37)) &&
             ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28))
              || (((uVar39 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{'))))))))
          {
            pauVar26 = pauVar18;
          }
          unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          *(undefined1 (**) [16])*local_98 = unaff_RSI;
          if (unaff_RSI == pauVar37) goto code_r0x00014008dcde;
          bVar10 = (*unaff_RSI)[0];
          uVar57 = (ulonglong)bVar10;
          uVar45 = (uint)(char)bVar10;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          bVar62 = false;
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(byte *)local_88 = bVar10;
          if (0x73 < uVar45 - 10) {
            uVar39 = (ulonglong)local_90 & 0xffffffff;
            goto code_r0x00014008f584;
          }
          uVar39 = (ulonglong)local_90 & 0xffffffff;
          switch(uVar45) {
          case 10:
            if ((char)local_d8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          default:
            goto code_r0x00014008f584;
          case 0x24:
            if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar37))
               && ((*pauVar26)[0] != '\n')) goto code_r0x00014008f575;
            break;
          case 0x28:
          case 0x29:
            uVar51 = (ulonglong)local_90 & 8;
            goto joined_r0x00014008f1a3;
          case 0x2a:
            if (((ulonglong)local_90 & 0x4000000) == 0) break;
            bVar62 = false;
            switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
              bVar62 = false;
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014008f575;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014008f575;
            }
            goto code_r0x00014008f584;
          case 0x2b:
          case 0x3f:
            uVar51 = (ulonglong)local_90 & 1;
joined_r0x00014008f1a3:
            if (uVar51 == 0) {
code_r0x00014008f575:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
            if (pauVar26 != pauVar37) {
              if ((((ulonglong)local_90 & 8) == 0) &&
                 (uVar15 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) == 0x28)) {
code_r0x00014008f332:
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                bVar62 = false;
                uVar57 = (ulonglong)uVar15;
                goto code_r0x00014008f584;
              }
              if (((ulonglong)local_90 & 0x10) == 0) {
                bVar10 = (*pauVar26)[0];
                uVar15 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008f332;
              }
            }
            break;
          case 0x5e:
            if (((ulonglong)local_90 & 0x2000000) != 0) {
              bVar62 = false;
              switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
                if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                goto code_r0x00014008f582;
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014008f584;
              }
              goto code_r0x00014008f575;
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar51 = (ulonglong)local_90 & 0x10;
            goto joined_r0x00014008f22a;
          case 0x7c:
            uVar51 = (ulonglong)local_90 & 2;
joined_r0x00014008f22a:
            if (uVar51 != 0) break;
            goto code_r0x00014008f575;
          }
code_r0x00014008f582:
          bVar62 = false;
code_r0x00014008f584:
          if ((*(ushort *)
                (*(longlong *)(*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                uVar57 * 2) & 0x103) == 0) goto code_r0x0001400a1917;
          uVar15 = (uint)(char)((char)uVar57 % ' ');
          local_a8 = (undefined1 (*) [16])(ulonglong)uVar15;
          *(uint *)*local_b0 = uVar15;
          if (bVar62) {
code_r0x00014008f67b:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            goto code_r0x00014008f692;
          }
          if ((((*unaff_RSI)[0] == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar37)) &&
             ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28))
              || (((uVar39 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{'))))))))
          {
            unaff_RSI = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          if (pauVar18 == pauVar37) goto code_r0x00014008f67b;
          cVar14 = (*pauVar18)[0];
          uVar45 = (uint)cVar14;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(char *)local_88 = cVar14;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
          pauVar26 = pauVar37;
          switch(unaff_RDI) {
          case (undefined1 (*) [16])0x0:
            if ((char)local_d8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
          default:
            goto code_r0x00014008f692;
          case (undefined1 (*) [16])0x1a:
            if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), unaff_RSI != pauVar37)
                ) && ((*unaff_RSI)[0] != '\n')) goto code_r0x00014008f8c2;
            goto code_r0x00014008f692;
          case (undefined1 (*) [16])0x1e:
          case (undefined1 (*) [16])0x1f:
            uVar39 = (ulonglong)local_90 & 8;
            break;
          case (undefined1 (*) [16])0x20:
            if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014008f692;
            switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014008f8c2;
            default:
              goto code_r0x00014008f692;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014008f8c2;
            }
          case (undefined1 (*) [16])0x21:
          case (undefined1 (*) [16])0x35:
            uVar39 = (ulonglong)local_90 & 1;
            break;
          case (undefined1 (*) [16])0x52:
            unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
            if (unaff_RSI == pauVar37) goto code_r0x00014008f692;
            if ((((ulonglong)local_90 & 8) != 0) ||
               (uVar15 = (uint)(byte)(*unaff_RSI)[0], ((*unaff_RSI)[0] & 0xfe) != 0x28)) {
              if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014008f692;
              bVar10 = (*unaff_RSI)[0];
              uVar15 = (uint)bVar10;
              if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014008f692;
            }
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
            goto code_r0x00014008f692;
          case (undefined1 (*) [16])0x54:
            if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014008f692;
            switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
              if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014008f692;
            }
            goto code_r0x00014008f8c2;
          case (undefined1 (*) [16])0x71:
          case (undefined1 (*) [16])0x73:
            uVar39 = (ulonglong)local_90 & 0x10;
            break;
          case (undefined1 (*) [16])0x72:
            uVar39 = (ulonglong)local_90 & 2;
          }
          if (uVar39 != 0) goto code_r0x00014008f692;
code_r0x00014008f8c2:
          *(uint *)*local_78 = 0;
          goto code_r0x00014008f692;
        default:
          goto code_r0x00014008d704;
        case 0x75:
code_r0x00014008d621:
          pcVar43 = (char *)((ulonglong)local_b8 & 0xffffffff);
          if ((uVar39 & 0x800) == 0) goto code_r0x00014008d704;
          if (pauVar26 == pauVar37) {
code_r0x00014008dd02:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
            pauVar18 = pauVar37;
            goto code_r0x00014008dd1f;
          }
          if ((((char)*(uint *)*pauVar26 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar37)) &&
             ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28))
              || (((uVar39 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{'))))))))
          {
            pauVar26 = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          if (pauVar18 == pauVar37) goto code_r0x00014008dd02;
          bVar10 = (*pauVar18)[0];
          unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
          uVar45 = (uint)(char)bVar10;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(byte *)local_88 = bVar10;
          if (0x73 < uVar45 - 10) {
            uVar39 = (ulonglong)local_90 & 0xffffffff;
            goto code_r0x00014008dd1f;
          }
          uVar39 = (ulonglong)local_90 & 0xffffffff;
          switch(uVar45) {
          case 10:
            if ((char)local_d8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          case 0x24:
            if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar37))
               && ((*pauVar26)[0] != '\n')) goto code_r0x00014008f70c;
            break;
          case 0x28:
          case 0x29:
            uVar57 = (ulonglong)local_90 & 8;
            goto joined_r0x00014008f1b2;
          case 0x2a:
            if (((ulonglong)local_90 & 0x4000000) == 0) break;
            switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014008f70c;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014008f70c;
            }
            break;
          case 0x2b:
          case 0x3f:
            uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008f1b2:
            if (uVar57 == 0) {
code_r0x00014008f70c:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
            if (pauVar26 != pauVar37) {
              if ((((ulonglong)local_90 & 8) == 0) &&
                 (uVar15 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) == 0x28)) {
code_r0x00014008f3b4:
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
              }
              else if (((ulonglong)local_90 & 0x10) == 0) {
                bVar10 = (*pauVar26)[0];
                uVar15 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008f3b4;
              }
            }
            break;
          case 0x5e:
            if (((ulonglong)local_90 & 0x2000000) != 0) {
              switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
                if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                goto code_r0x00014008f70c;
                break;
              default:
                goto code_r0x00014008f70c;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar57 = (ulonglong)local_90 & 0x10;
            goto joined_r0x00014008f239;
          case 0x7c:
            uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008f239:
            if (uVar57 != 0) break;
            goto code_r0x00014008f70c;
          }
code_r0x00014008dd1f:
          *(uint *)*local_b0 = 0;
          local_a8 = (undefined1 (*) [16])0x0;
          ppuVar55 = (undefined **)0xfffffffc;
          goto code_r0x00014008dd6d;
        case 0x78:
code_r0x00014008d6f7:
          pcVar43 = (char *)((ulonglong)local_b8 & 0xffffffff);
          if ((uVar39 & 0x1000) == 0) goto code_r0x00014008d704;
          if (pauVar26 == pauVar37) {
code_r0x00014008e03d:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            ppuVar55 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar55 >> 8),0xff);
            pauVar18 = pauVar37;
            goto code_r0x00014008e05a;
          }
          if ((((char)*(uint *)*pauVar26 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar37)) &&
             ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28))
              || (((uVar39 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{'))))))))
          {
            pauVar26 = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          if (pauVar18 == pauVar37) goto code_r0x00014008e03d;
          bVar10 = (*pauVar18)[0];
          ppuVar55 = (undefined **)(ulonglong)bVar10;
          uVar45 = (uint)(char)bVar10;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(byte *)local_88 = bVar10;
          if (0x73 < uVar45 - 10) {
            uVar39 = (ulonglong)local_90 & 0xffffffff;
            goto code_r0x00014008e05a;
          }
          uVar39 = (ulonglong)local_90 & 0xffffffff;
          switch(uVar45) {
          case 10:
            if ((char)local_d8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          case 0x24:
            if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar37))
               && ((*pauVar26)[0] != '\n')) goto code_r0x00014008f768;
            break;
          case 0x28:
          case 0x29:
            uVar57 = (ulonglong)local_90 & 8;
            goto joined_r0x00014008f1df;
          case 0x2a:
            if (((ulonglong)local_90 & 0x4000000) == 0) break;
            switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014008f768;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014008f768;
            }
            break;
          case 0x2b:
          case 0x3f:
            uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008f1df:
            if (uVar57 == 0) {
code_r0x00014008f768:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
            if (pauVar26 != pauVar37) {
              if ((((ulonglong)local_90 & 8) == 0) &&
                 (uVar15 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) == 0x28)) {
code_r0x00014008f40b:
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                ppuVar55 = (undefined **)(ulonglong)uVar15;
              }
              else if (((ulonglong)local_90 & 0x10) == 0) {
                bVar10 = (*pauVar26)[0];
                uVar15 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008f40b;
              }
            }
            break;
          case 0x5e:
            if (((ulonglong)local_90 & 0x2000000) != 0) {
              switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
                if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                goto code_r0x00014008f768;
                break;
              default:
                goto code_r0x00014008f768;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar57 = (ulonglong)local_90 & 0x10;
            goto joined_r0x00014008f248;
          case 0x7c:
            uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008f248:
            if (uVar57 != 0) break;
            goto code_r0x00014008f768;
          }
code_r0x00014008e05a:
          *(uint *)*local_b0 = 0;
          local_a8 = (undefined1 (*) [16])0x0;
          bVar62 = false;
          goto code_r0x00014008e0a0;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
        unaff_RSI = pauVar37;
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          if ((char)local_d8 != '\0') {
            *(uint *)*local_78 = 0x7c;
          }
        default:
          goto code_r0x00014008f69f;
        case (undefined1 (*) [16])0x1a:
          if (((((ulonglong)local_90 & 0x2000000) != 0) &&
              (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar37)) &&
             ((*pauVar26)[0] != '\n')) goto code_r0x00014008ef3e;
          goto code_r0x00014008f69f;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          uVar39 = (ulonglong)local_90 & 8;
          break;
        case (undefined1 (*) [16])0x20:
          if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014008f69f;
          switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
            if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
            goto code_r0x00014008ef3e;
          default:
            goto code_r0x00014008f69f;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014008ef3e;
          }
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          uVar39 = (ulonglong)local_90 & 1;
          break;
        case (undefined1 (*) [16])0x52:
          pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
          if (pauVar26 == pauVar37) goto code_r0x00014008f69f;
          if ((((ulonglong)local_90 & 8) != 0) ||
             (uVar15 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) != 0x28)) {
            if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014008f69f;
            bVar10 = (*pauVar26)[0];
            uVar15 = (uint)bVar10;
            if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014008f69f;
          }
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          goto code_r0x00014008f69f;
        case (undefined1 (*) [16])0x54:
          if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014008f69f;
          switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
            if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014008f69f;
          }
          goto code_r0x00014008ef3e;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          uVar39 = (ulonglong)local_90 & 0x10;
          break;
        case (undefined1 (*) [16])0x72:
          uVar39 = (ulonglong)local_90 & 2;
        }
        if (uVar39 != 0) goto code_r0x00014008f69f;
code_r0x00014008ef3e:
        *(uint *)*local_78 = 0;
        goto code_r0x00014008f69f;
      }
      *(uint *)*local_b0 = 0x5c;
      if (unaff_RSI != pauVar22) {
        if ((((*unaff_RSI)[0] == '\\') &&
            (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar22)) &&
           ((((uVar15 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28))
            || (((uVar15 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))))) {
          unaff_RSI = pauVar18;
        }
        pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        *(undefined1 (**) [16])*local_98 = pauVar18;
        if (pauVar18 != pauVar22) {
          cVar14 = (char)*(uint *)*pauVar18;
          uVar47 = (uint)cVar14;
          pvVar19 = memchr(&DAT_140111e80,uVar47,0x17);
          uVar46 = uVar47;
          if (pvVar19 == (void *)0x0) {
            uVar46 = 0;
          }
          *(uint *)*local_78 = uVar46;
          *(char *)local_88 = cVar14;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar47 - 10);
          pauVar26 = pauVar22;
          switch(unaff_RDI) {
          case (undefined1 (*) [16])0x0:
            goto code_r0x00014008d4c7;
          case (undefined1 (*) [16])0x1a:
            goto code_r0x00014008d4d6;
          case (undefined1 (*) [16])0x1e:
          case (undefined1 (*) [16])0x1f:
            goto code_r0x00014008d3ec;
          case (undefined1 (*) [16])0x20:
            if ((uVar15 & 0x4000000) != 0) {
              pauVar18 = *(undefined1 (**) [16])*local_a0;
              switch(*(undefined4 *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                goto code_r0x00014008c9ad;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014008dac8;
              }
            }
            break;
          case (undefined1 (*) [16])0x21:
          case (undefined1 (*) [16])0x35:
            goto code_r0x00014008d475;
          case (undefined1 (*) [16])0x52:
            goto code_r0x00014008d50d;
          case (undefined1 (*) [16])0x54:
            if ((uVar15 & 0x2000000) != 0) {
              pauVar18 = *(undefined1 (**) [16])*local_a0;
              switch(*(undefined4 *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                goto code_r0x00014008ca07;
              default:
                goto code_r0x00014008dac8;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case (undefined1 (*) [16])0x71:
          case (undefined1 (*) [16])0x73:
            goto code_r0x00014008d466;
          case (undefined1 (*) [16])0x72:
            goto code_r0x00014008d4fe;
          }
          goto code_r0x00014008e4ea;
        }
      }
code_r0x00014008e4d3:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RDI = pauVar37;
      goto code_r0x00014008e4ea;
    }
    if ((((uVar15 & 0x10000) == 0) ||
        (bVar11 = (byte)(bVar10 + 0x9a) >> 1 | bVar10 << 7, 8 < bVar11)) ||
       ((0x1d1U >> (bVar11 & 0x1f) & 1) == 0)) {
      if (-1 < (short)uVar15) {
code_r0x00014008cf15:
        *(uint *)*local_b0 = 0x5c;
        goto code_r0x00014008e4ea;
      }
      if (bVar10 == 0x61) {
        uVar46 = 7;
      }
      else {
        if (bVar10 != 0x62) goto code_r0x00014008cf15;
        uVar46 = 8;
      }
    }
    else {
      uVar46 = *(uint *)(&UNK_14010b538 + (ulonglong)bVar11 * 4);
    }
    *(uint *)*local_b0 = uVar46;
    if (unaff_RSI == pauVar22) goto code_r0x00014008e4d3;
    if ((((*unaff_RSI)[0] == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar22)) &&
       ((((uVar15 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        (((uVar15 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))))) {
      unaff_RSI = pauVar18;
    }
    pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    *(undefined1 (**) [16])*local_98 = pauVar18;
    if (pauVar18 == pauVar22) goto code_r0x00014008e4d3;
    cVar14 = (char)*(uint *)*pauVar18;
    uVar47 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar47,0x17);
    uVar46 = uVar47;
    if (pvVar19 == (void *)0x0) {
      uVar46 = 0;
    }
    *(uint *)*local_78 = uVar46;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar47 - 10);
    pauVar26 = pauVar22;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
code_r0x00014008d4c7:
      pauVar26 = pauVar22;
      pauVar37 = unaff_RSI;
      if ((uVar15 & 4) != 0) {
code_r0x00014008c8cc:
        unaff_RSI = pauVar37;
        if (*local_c0 == 0) {
code_r0x00014008c8d9:
          *(uint *)*local_78 = 0x7c;
          unaff_RSI = pauVar37;
        }
      }
      break;
    case (undefined1 (*) [16])0x1a:
code_r0x00014008d4d6:
      pauVar26 = pauVar22;
      if ((((uVar15 & 0x2000000) != 0) &&
          (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), unaff_RSI != pauVar22)) &&
         ((*unaff_RSI)[0] != '\n')) goto code_r0x00014008dac8;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
code_r0x00014008d3ec:
      uVar15 = uVar15 & 8;
      goto joined_r0x00014008d502;
    case (undefined1 (*) [16])0x20:
      if ((uVar15 & 0x4000000) != 0) {
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        switch(*(undefined4 *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
code_r0x00014008c9ad:
          uVar15 = *(uint *)(*(longlong *)(pauVar18[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x00014008dac8;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014008dac8;
        }
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
code_r0x00014008d475:
      uVar15 = uVar15 & 1;
      goto joined_r0x00014008d502;
    case (undefined1 (*) [16])0x52:
code_r0x00014008d50d:
      pauVar37 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
      pauVar26 = pauVar22;
      unaff_RSI = pauVar37;
      if (pauVar37 != pauVar22) {
        if (((uVar15 & 8) == 0) &&
           (uVar46 = (uint)(byte)(*pauVar37)[0], ((*pauVar37)[0] & 0xfe) == 0x28)) {
code_r0x00014008c95c:
          *(char *)local_88 = (char)uVar46;
          *(uint *)*local_78 = uVar46;
          unaff_RSI = pauVar37;
        }
        else if ((uVar15 & 0x10) == 0) {
          uVar46 = (uint)(byte)(*pauVar37)[0];
code_r0x00014008c94e:
          if ((uVar46 == 0x7d) || (unaff_RSI = pauVar37, uVar46 == 0x7b)) goto code_r0x00014008c95c;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if ((uVar15 & 0x2000000) == 0) break;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
      switch(*(undefined4 *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
code_r0x00014008ca07:
        uVar15 = *(uint *)(*(longlong *)(pauVar18[1] + 8) + 8);
        if (uVar15 < 0x15) {
          uVar15 = 0x102100U >> (uVar15 & 0x1f) & 1;
          pauVar22 = pauVar26;
          goto joined_r0x00014008d502;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008e4ea;
      }
      goto code_r0x00014008dac8;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
code_r0x00014008d466:
      uVar15 = uVar15 & 0x10;
      goto joined_r0x00014008d502;
    case (undefined1 (*) [16])0x72:
code_r0x00014008d4fe:
      uVar15 = uVar15 & 2;
joined_r0x00014008d502:
      pauVar26 = pauVar22;
      if (uVar15 == 0) {
code_r0x00014008dac8:
        *(uint *)*local_78 = 0;
      }
    }
    goto code_r0x00014008e4ea;
  }
  if (uVar15 != 0x5b) {
    if (uVar15 == 0xffffffff) goto code_r0x00014008f91a;
code_r0x00014008c778:
    uVar46 = (uint)(char)unaff_RSI;
code_r0x00014008c77c:
    *(uint *)*local_b0 = uVar46;
    if ((((*pauVar18)[0] == '\\') &&
        (pauVar21 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar21 != pauVar22)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar21 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar21)[0] == '}' || ((*pauVar21)[0] == '{')))))
        ))) {
      pauVar18 = pauVar21;
    }
    pauVar21 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar21;
    if (pauVar21 == pauVar22) goto code_r0x00014008e4d3;
    cVar14 = (char)*(uint *)*pauVar21;
    uVar46 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar15 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
    unaff_RSI = pauVar22;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if ((*(uint *)*local_80 & 4) == 0) goto code_r0x00014008e4ea;
      goto code_r0x00014008c8cc;
    default:
      goto code_r0x00014008e4ea;
    case (undefined1 (*) [16])0x1a:
      if (((*(uint *)*local_80 & 0x2000000) == 0) ||
         (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 == pauVar22))
      goto code_r0x00014008e4ea;
      cVar14 = (char)*(uint *)*pauVar18;
joined_r0x00014008f0e2:
      unaff_RSI = pauVar22;
      if (cVar14 == '\n') goto code_r0x00014008e4ea;
      goto code_r0x00014008dac8;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      break;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) != 0) {
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        switch(*(undefined4 *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          goto code_r0x00014008c9ad;
        default:
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014008dac8;
        }
      }
      goto code_r0x00014008e4ea;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
      break;
    case (undefined1 (*) [16])0x52:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if (pauVar18 == pauVar22) goto code_r0x00014008e4ea;
      if (((*(uint *)*local_80 & 8) != 0) ||
         (bVar10 = (byte)*(uint *)*pauVar18, uVar46 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
        if ((*(uint *)*local_80 & 0x10) != 0) goto code_r0x00014008e4ea;
        uVar46 = (uint)(byte)*(uint *)*pauVar18;
        goto code_r0x00014008c94e;
      }
      goto code_r0x00014008c95c;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        switch(*(undefined4 *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          goto code_r0x00014008ca07;
        default:
          goto code_r0x00014008dac8;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      goto code_r0x00014008e4ea;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      break;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
    }
    if (bVar10 == 0) goto code_r0x00014008dac8;
    goto code_r0x00014008e4ea;
  }
  if ((((*pauVar18)[0] == '\\') &&
      (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar26 != pauVar22)) &&
     ((((*(uint *)*local_80 & 8) == 0 &&
       (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
      (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))
     ) {
    pauVar18 = pauVar26;
  }
  unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
  *(undefined1 (**) [16])*local_98 = unaff_RSI;
  if (unaff_RSI == pauVar22) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    goto code_r0x00014008cd45;
  }
  cVar14 = (char)*(uint *)*unaff_RSI;
  uVar46 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  uVar15 = uVar46;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  pcVar43 = (char *)(ulonglong)uVar15;
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      goto code_r0x00014008cd45;
    }
    break;
  case (undefined1 (*) [16])0x1a:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar26 != pauVar22)) &&
       ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014008cd38;
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x00014008ca88;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008cd38;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014008cd38;
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x00014008ca88;
  case (undefined1 (*) [16])0x52:
    pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
    if (pauVar26 != pauVar22) {
      if (((*(uint *)*local_80 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*pauVar26, pauVar21 = (undefined1 (*) [16])(ulonglong)bVar10,
         (bVar10 & 0xfe) == 0x28)) {
code_r0x00014008cba3:
        *(char *)local_88 = (char)pauVar21;
        *(uint *)*local_78 = (uint)pauVar21;
        pcVar43 = (char *)pauVar21;
      }
      else if ((*(uint *)*local_80 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*pauVar26;
        pauVar21 = (undefined1 (*) [16])(ulonglong)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008cba3;
      }
    }
    break;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x00014008cd38;
        break;
      default:
        goto code_r0x00014008cd38;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x00014008ca88;
  case (undefined1 (*) [16])0x72:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014008ca88:
    if (bVar10 != 0) break;
code_r0x00014008cd38:
    *(uint *)*local_78 = 0;
    goto code_r0x00014008cd45;
  }
  uVar15 = (uint)pcVar43;
  if ((0x3d < uVar15) || ((0x2400400000000000U >> ((ulonglong)pcVar43 & 0x3f) & 1) == 0)) {
code_r0x00014008cd45:
    *(uint *)*local_b0 = 0x5b;
    pauVar26 = pauVar56;
code_r0x00014008e4ea:
    if ((*(uint *)local_98[7] & 0x800) != 0) {
      local_138[0] = (char)*(uint *)((longlong)local_98[7] + 4);
      (**(code **)(*(longlong *)**(undefined8 **)((longlong)local_98[6] + 8) + 0x20))
                ((longlong *)**(undefined8 **)((longlong)local_98[6] + 8),
                 (undefined1 (*) [16])local_110,&local_138,local_138 + 1);
      pauVar18 = (undefined1 (*) [16])local_110;
      if (0xf < uStack_f8) {
        pauVar18 = local_110[0];
      }
      if (lStack_100 != 1) {
        pauVar18 = &local_138;
      }
      uVar15 = *(uint *)*pauVar18;
      if (0xf < uStack_f8) {
        pauVar18 = local_110[0];
        if ((0xfff < uStack_f8 + 1) &&
           (pauVar18 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
           0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar18))))
        goto LAB_1400a3888;
        free(pauVar18);
      }
      *(int *)((longlong)local_98[7] + 4) = (int)(char)uVar15;
      local_138[0] = (char)uVar45;
      unaff_RSI = &local_138;
      param_4 = (undefined1 (*) [16])(local_138 + 1);
      (**(code **)(*(longlong *)**(undefined8 **)((longlong)local_98[6] + 8) + 0x20))
                ((longlong *)**(undefined8 **)((longlong)local_98[6] + 8),
                 (undefined1 (*) [16])local_110,unaff_RSI);
      unaff_RDI = (undefined1 (*) [16])local_110;
      if (0xf < uStack_f8) {
        unaff_RDI = local_110[0];
      }
      if (lStack_100 != 1) {
        unaff_RDI = unaff_RSI;
      }
      bVar10 = (byte)*(uint *)*unaff_RDI;
      uVar45 = (uint)bVar10;
      if (0xf < uStack_f8) {
        pauVar18 = local_110[0];
        if ((0xfff < uStack_f8 + 1) &&
           (pauVar18 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
           0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar18))))
        goto LAB_1400a3888;
        free(pauVar18);
        uVar45 = (uint)bVar10;
      }
    }
    pauVar21 = local_d0;
    bVar10 = (*local_b0)[0];
    uVar15 = (uint)bVar10;
    pauVar18 = (undefined1 (*) [16])(ulonglong)(byte)uVar45;
    if ((uint)bVar10 < (uVar45 & 0xff)) goto LAB_1400a3c47;
    if ((*(uint *)local_98[5] & 0x100) != 0) {
      plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
      cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar45);
      pauVar18 = (undefined1 (*) [16])(ulonglong)(uint)(int)cVar14;
      plVar3 = *(longlong **)(**(undefined1 (**) [16])*pauVar21 + 8);
      cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,(uint)bVar10);
      uVar15 = (uint)cVar14;
      unaff_RSI = pauVar21;
    }
    if ((uint)pauVar18 <= uVar15) {
      unaff_RSI = *(undefined1 (**) [16])*local_a0;
      do {
        uVar45 = (uint)pauVar18;
        if (*(uint *)local_98[6] <= uVar15) {
          if (uVar15 - uVar45 < *(uint *)((longlong)local_98[6] + 4)) goto joined_r0x00014008e6d0;
          ppuVar55 = *(undefined ***)((longlong)unaff_RSI[3] + 8);
          if ((undefined1 (*) [16])ppuVar55 == (undefined1 (*) [16])0x0) {
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            ppuVar55 = operator_new(0x10);
            *(undefined1 (*) [16])ppuVar55 = auVar72._0_16_;
            *(undefined ***)((longlong)unaff_RSI[3] + 8) = ppuVar55;
          }
          uVar45 = *(uint *)((longlong)*(undefined1 (*) [16])ppuVar55 + 4);
          if (uVar45 < *(uint *)*(undefined1 (*) [16])ppuVar55) {
            pvVar19 = *(void **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8);
          }
          else {
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            pvVar19 = realloc(*(void **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8),
                              (ulonglong)(uVar45 + 0x10));
            if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
            *(void **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8) = pvVar19;
            *(uint *)*(undefined1 (*) [16])ppuVar55 = uVar45 + 0x10;
            uVar45 = *(uint *)((longlong)*(undefined1 (*) [16])ppuVar55 + 4);
          }
          *(uint *)((longlong)*(undefined1 (*) [16])ppuVar55 + 4) = uVar45 + 1;
          *(byte *)((longlong)pvVar19 + (ulonglong)uVar45) = (byte)pauVar18;
          unaff_RSI = *(undefined1 (**) [16])((longlong)unaff_RSI[3] + 8);
          uVar45 = *(uint *)((longlong)*unaff_RSI + 4);
          if (uVar45 < *(uint *)*unaff_RSI) {
            pvVar19 = *(void **)((longlong)*unaff_RSI + 8);
          }
          else {
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            pvVar19 = realloc(*(void **)((longlong)*unaff_RSI + 8),(ulonglong)(uVar45 + 0x10));
            if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
            *(void **)((longlong)*unaff_RSI + 8) = pvVar19;
            *(uint *)*unaff_RSI = uVar45 + 0x10;
            uVar45 = *(uint *)((longlong)*unaff_RSI + 4);
          }
          pauVar26 = (undefined1 (*) [16])(ulonglong)uVar45;
          *(uint *)((longlong)*unaff_RSI + 4) = uVar45 + 1;
          *(char *)((longlong)pvVar19 + (longlong)pauVar26) = (char)uVar15;
          break;
        }
        pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8);
        if (pauVar31 == (undefined1 (*) [32])0x0) {
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pauVar31 = operator_new(0x20);
          *pauVar31 = ZEXT1232(ZEXT812(0));
          *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8) = pauVar31;
        }
        pbVar41 = (byte *)((longlong)*pauVar31 + ((ulonglong)pauVar18 >> 3));
        *pbVar41 = *pbVar41 | (byte)(1 << ((byte)pauVar18 & 7));
        pauVar18 = (undefined1 (*) [16])(ulonglong)(uVar45 + 1);
      } while (uVar45 + 1 <= uVar15);
    }
code_r0x000140088d29:
    pauVar18 = pauVar26;
    pauVar21 = param_4;
    pauVar56 = (undefined1 (*) [16])(ulonglong)*(uint *)*local_78;
    goto code_r0x000140088d33;
  }
  if ((((char)*(uint *)*unaff_RSI == '\\') &&
      (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar26 != pauVar22)) &&
     ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
      (((*(uint *)*local_80 & 0x10) == 0 &&
       ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
    unaff_RSI = pauVar26;
  }
  local_e8 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
  *(undefined1 (**) [16])*local_98 = local_e8;
  if (local_e8 == pauVar22) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    uVar45 = 0xffffffff;
    goto code_r0x0001400a2af8;
  }
  cVar14 = (*local_e8)[0];
  uVar46 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  uVar45 = 0;
  if (pvVar19 != (void *)0x0) {
    uVar45 = uVar46;
  }
  *(uint *)*local_78 = uVar45;
  *(char *)local_88 = cVar14;
  switch(uVar46) {
  case 10:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      uVar45 = 0x7c;
    }
  default:
    goto code_r0x0001400a2af8;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) == 0) ||
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), pauVar26 == pauVar22)) ||
       ((char)*(uint *)*pauVar26 == '\n')) goto code_r0x0001400a2af8;
    goto code_r0x0001400a2ae9;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    break;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) goto code_r0x0001400a2af8;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0)) goto code_r0x0001400a2af8;
      break;
    default:
      goto code_r0x0001400a2af8;
    case 8:
    case 0xd:
    case 0x14:
      break;
    }
    goto code_r0x0001400a2ae9;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    break;
  case 0x5c:
    pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
    if (pauVar26 != pauVar22) {
      if (((*(uint *)*local_80 & 8) != 0) ||
         (bVar10 = (byte)*(uint *)*pauVar26, uVar46 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
        if ((*(uint *)*local_80 & 0x10) != 0) goto code_r0x0001400a2af8;
        bVar10 = (byte)*(uint *)*pauVar26;
        uVar46 = (uint)bVar10;
        if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x0001400a2af8;
      }
      uVar45 = uVar46;
      *(char *)local_88 = (char)uVar45;
      *(uint *)*local_78 = uVar45;
    }
    goto code_r0x0001400a2af8;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) == 0) goto code_r0x0001400a2af8;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0)) goto code_r0x0001400a2af8;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400a2af8;
    }
    goto code_r0x0001400a2ae9;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    break;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
  }
  if (bVar10 == 0) {
code_r0x0001400a2ae9:
    *(uint *)*local_78 = 0;
    uVar45 = 0;
  }
code_r0x0001400a2af8:
  local_dc = 1;
  if (((uVar15 != 0x3a) && (local_dc = 0, uVar15 != 0x3d)) && (local_dc = 0xe, uVar15 == 0x2e)) {
    local_dc = 0;
  }
  uVar46 = *(uint *)*local_80;
  local_a8 = *(undefined1 (**) [16])*local_a0;
  auVar69._4_4_ = uVar46;
  auVar69._0_4_ = uVar46;
  auVar69._8_4_ = uVar46;
  auVar69._12_4_ = uVar46;
  auVar69 = vpand_avx(auVar69,_DAT_14010b170);
  auVar69 = vpcmpeqd_avx(auVar69,(undefined1  [16])0x0);
  uVar17 = vmovmskps_avx(auVar69);
  bVar10 = (byte)uVar17;
  local_b0 = (undefined1 (*) [16])CONCAT71(local_b0._1_7_,(bVar10 & 2) >> 1);
  local_90 = (undefined1 (*) [16])CONCAT71(local_90._1_7_,(bVar10 & 4) >> 2);
  local_b8 = (undefined1 (*) [16])CONCAT44(local_b8._4_4_,uVar17);
  local_c8 = (undefined1 (*) [16])CONCAT71(local_c8._1_7_,bVar10 >> 3);
  local_d8 = (undefined1 (*) [16])CONCAT71(local_d8._1_7_,*local_c0 == 0 & (byte)uVar46 >> 2);
  uVar47 = 0;
  pauVar26 = local_e8;
  goto code_r0x0001400a2bc5;
code_r0x00014008b18c:
  uVar15 = (uint)(char)bVar10;
  pauVar56 = (undefined1 (*) [16])(ulonglong)uVar15;
  if ((uVar39 & 0x400000) == 0) {
    switch(uVar15) {
    case 0x22:
    case 0x2f:
      uVar57 = uVar39 & 0x1000000;
      break;
    default:
      goto code_r0x00014008f9f0;
    case 0x24:
    case 0x2a:
    case 0x2e:
    case 0x5b:
    case 0x5c:
    case 0x5e:
    case 0x7c:
      goto code_r0x00014008bf2a;
    case 0x28:
    case 0x29:
    case 0x2b:
    case 0x3f:
    case 0x7b:
    case 0x7d:
      uVar57 = uVar39 & 0x800000;
    }
    if (uVar57 == 0) goto code_r0x00014008f9f0;
  }
  else if ((uVar15 - 0x44 < 0x34) &&
          ((0x8800180088001U >> ((ulonglong)(uVar15 - 0x44) & 0x3f) & 1) != 0))
  goto code_r0x00014008f9f0;
code_r0x00014008bf2a:
  *(uint *)*local_b0 = uVar15;
  if (pauVar22 == param_4) {
code_r0x00014008bfee:
    param_4 = unaff_RSI;
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    goto code_r0x00014008c280;
  }
  if ((((char)*(uint *)*pauVar22 == '\\') &&
      (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar26 != param_4)) &&
     ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
      (((uVar39 & 0x10) == 0 &&
       ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
    pauVar22 = pauVar26;
  }
  pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
  *(undefined1 (**) [16])*local_98 = pauVar26;
  if (pauVar26 == param_4) goto code_r0x00014008bfee;
  cVar14 = (char)*(uint *)*pauVar26;
  uVar45 = (uint)cVar14;
  auVar71 = ZEXT1664(auVar71._0_16_);
  auVar72 = ZEXT1664(auVar72._0_16_);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
    if ((char)local_b8 != '\0') {
code_r0x000140089184:
      *(uint *)*local_78 = 0x7c;
    }
    break;
  case (undefined1 (*) [16])0x1a:
    if ((((ulonglong)local_90 & 0x2000000) != 0) &&
       (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar26 != param_4)) {
      cVar14 = (char)*(uint *)*pauVar26;
joined_r0x00014008c1fe:
      if (cVar14 != '\n') goto code_r0x00014008c26d;
    }
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    uVar39 = (ulonglong)local_90 & 8;
    goto joined_r0x00014008c035;
  case (undefined1 (*) [16])0x20:
    if (((ulonglong)local_90 & 0x4000000) == 0) break;
    switch(*(uint *)((longlong)*local_a8 + 8)) {
    case 2:
      pauVar26 = local_a8;
code_r0x000140089422:
      uVar15 = *(uint *)(*(longlong *)((longlong)pauVar26[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008c26d;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014008c26d;
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    uVar39 = (ulonglong)local_90 & 1;
joined_r0x00014008c035:
    if (uVar39 == 0) {
code_r0x00014008c26d:
      *(uint *)*local_78 = 0;
    }
    break;
  case (undefined1 (*) [16])0x52:
    pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
    if (pauVar26 != param_4) {
      if ((((ulonglong)local_90 & 8) != 0) ||
         (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
        if (((ulonglong)local_90 & 0x10) != 0) break;
        uVar15 = (uint)(byte)*(uint *)*pauVar26;
        if (uVar15 != 0x7d) {
code_r0x000140089314:
          if (uVar15 != 0x7b) break;
        }
      }
code_r0x00014008931d:
      *(char *)local_88 = (char)uVar15;
      *(uint *)*local_78 = uVar15;
    }
    break;
  case (undefined1 (*) [16])0x54:
    if (((ulonglong)local_90 & 0x2000000) != 0) {
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        pauVar26 = local_a8;
code_r0x000140089b16:
        uVar15 = *(uint *)(*(longlong *)((longlong)pauVar26[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x00014008c26d;
        break;
      default:
        goto code_r0x00014008c26d;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    uVar39 = (ulonglong)local_90 & 0x10;
    goto joined_r0x00014008c1c3;
  case (undefined1 (*) [16])0x72:
    uVar39 = (ulonglong)local_90 & 2;
joined_r0x00014008c1c3:
    if (uVar39 != 0) break;
    goto code_r0x00014008c26d;
  }
  goto code_r0x00014008c280;
code_r0x000140089e74:
  pauVar26 = pauVar18;
  if ((int)pcVar43 != 0) goto code_r0x0001400a1917;
  goto code_r0x00014008c28f;
code_r0x0001400a276f:
  do {
    uVar32 = uVar33;
    if ((uVar33 == 0xffff) && (uVar32 = 0x107, uVar39 == 0x5f)) {
      if ((uVar42 & 1) == 0) {
code_r0x0001400a27a9:
        pauVar31 = *(undefined1 (**) [32])(lVar50 + 0x28);
        if (pauVar31 == (undefined1 (*) [32])0x0) {
          pauVar31 = operator_new(0x20);
          *pauVar31 = ZEXT1232(ZEXT812(0));
          *(undefined1 (**) [32])(lVar50 + 0x28) = pauVar31;
        }
        pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
        *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
      }
    }
    else if ((bool)((byte)uVar42 & 1) !=
             ((*(ushort *)
                (*(longlong *)(*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) +
                uVar39 * 2) & uVar32) != 0)) goto code_r0x0001400a27a9;
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x100);
  pauVar26 = *(undefined1 (**) [16])*local_98;
  unaff_RBX = *(undefined1 (**) [16])local_98[1];
  if (pauVar26 != unaff_RBX) {
    if ((((*pauVar26)[0] == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != unaff_RBX)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))
        ))) {
      pauVar26 = pauVar18;
    }
    pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar26;
  }
  pauVar22 = (undefined1 (*) [16])0x100;
  if (pauVar26 == unaff_RBX) goto code_r0x0001400a337b;
  cVar14 = (*pauVar26)[0];
  uVar45 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = 0;
  if (pvVar19 != (void *)0x0) {
    uVar15 = uVar45;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  switch(uVar45) {
  case 10:
    goto code_r0x0001400a3b01;
  default:
    goto LAB_1400a3c47;
  case 0x24:
    goto code_r0x0001400a1c73;
  case 0x28:
  case 0x29:
    goto code_r0x0001400a33ed;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) goto LAB_1400a3c47;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
      goto code_r0x0001400a3439;
    default:
      goto LAB_1400a3c47;
    case 8:
    case 0xd:
    case 0x14:
      break;
    }
  case 0x2b:
  case 0x3f:
    goto code_r0x0001400a3aca;
  case 0x5c:
    goto code_r0x0001400a28ba;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) == 0) goto LAB_1400a3c47;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
      goto code_r0x0001400a3493;
    case 8:
    case 0xd:
    case 0x14:
      goto LAB_1400a3c47;
    }
    break;
  case 0x7b:
  case 0x7d:
    goto code_r0x0001400a3af0;
  case 0x7c:
    goto code_r0x0001400a3b35;
  }
  goto LAB_1400a3b45;
code_r0x00014008d315:
  pcVar43 = (char *)((ulonglong)local_b8 & 0xffffffff);
  uVar45 = (uint)local_b8;
  if (uVar15 != 0) goto code_r0x0001400a1917;
  goto code_r0x00014008e4ea;
code_r0x00014008e0a0:
  do {
    cVar14 = (char)ppuVar55;
    iVar58 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar58 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar58 - 0x57;
    }
    else {
      ppuVar55 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar55 >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar58 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)(uint)local_a8))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (uint)local_a8 * 0x10;
    local_a8 = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar18 == pauVar37) {
code_r0x00014008e070:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      ppuVar55 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar55 >> 8),0xff);
      pauVar18 = pauVar37;
      goto code_r0x00014008e08d;
    }
    pauVar26 = pauVar18;
    if ((((*pauVar18)[0] == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar18 != pauVar37)) &&
       ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))))) {
      pauVar26 = pauVar18;
    }
    pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar18;
    if (pauVar18 == pauVar37) goto code_r0x00014008e070;
    bVar10 = (*pauVar18)[0];
    ppuVar55 = (undefined **)(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      unaff_RSI = pauVar37;
      goto code_r0x00014008e08d;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    unaff_RSI = pauVar37;
    switch(uVar45) {
    case 10:
      if ((char)local_d8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar37)) &&
         ((*pauVar26)[0] != '\n')) goto code_r0x00014008e357;
      break;
    case 0x28:
    case 0x29:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014008e1f2;
    case 0x2a:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008e357;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008e357;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008e1f2:
      if (uVar57 == 0) {
code_r0x00014008e357:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
      if (pauVar26 != pauVar37) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (uVar15 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) == 0x28)) {
code_r0x00014008e29d:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          ppuVar55 = (undefined **)(ulonglong)uVar15;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (*pauVar26)[0];
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008e29d;
        }
      }
      break;
    case 0x5e:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014008e357;
          break;
        default:
          goto code_r0x00014008e357;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014008e210;
    case 0x7c:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008e210:
      if (uVar57 != 0) break;
      goto code_r0x00014008e357;
    }
code_r0x00014008e08d:
    bVar60 = !bVar62;
    pauVar26 = (undefined1 (*) [16])pcVar43;
    bVar62 = true;
  } while (bVar60);
  goto code_r0x00014008f692;
code_r0x00014008dd6d:
  do {
    cVar14 = (char)unaff_RSI;
    iVar58 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar58 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar58 - 0x57;
    }
    else {
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar58 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)(uint)local_a8))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (uint)local_a8 * 0x10;
    local_a8 = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar18 == pauVar37) {
code_r0x00014008dd40:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
      pauVar18 = pauVar37;
      goto code_r0x00014008dd5d;
    }
    pauVar21 = pauVar18;
    if ((((*pauVar18)[0] == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar18 != pauVar37)) &&
       ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))))) {
      pauVar21 = pauVar18;
    }
    pauVar18 = (undefined1 (*) [16])((longlong)*pauVar21 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar18;
    if (pauVar18 == pauVar37) goto code_r0x00014008dd40;
    bVar10 = (*pauVar18)[0];
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      goto code_r0x00014008dd5d;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    switch(uVar45) {
    case 10:
      if ((char)local_d8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 2), pauVar21 != pauVar37)) &&
         ((*pauVar21)[0] != '\n')) goto code_r0x00014008e019;
      break;
    case 0x28:
    case 0x29:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014008deb5;
    case 0x2a:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008e019;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008e019;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008deb5:
      if (uVar57 == 0) {
code_r0x00014008e019:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 2);
      if (pauVar21 != pauVar37) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (uVar15 = (uint)(byte)(*pauVar21)[0], ((*pauVar21)[0] & 0xfe) == 0x28)) {
code_r0x00014008df60:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (*pauVar21)[0];
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014008df60;
        }
      }
      break;
    case 0x5e:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014008e019;
          break;
        default:
          goto code_r0x00014008e019;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014008ded3;
    case 0x7c:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008ded3:
      if (uVar57 != 0) break;
      goto code_r0x00014008e019;
    }
code_r0x00014008dd5d:
    uVar15 = (int)ppuVar55 + 1;
    ppuVar55 = (undefined **)(ulonglong)uVar15;
    pcVar43 = (char *)((ulonglong)local_b8 & 0xffffffff);
  } while (uVar15 != 0);
  goto code_r0x00014008f692;
code_r0x00014008d7a1:
  do {
    if ((bVar10 & 0xf8) != 0x30) {
      if ((int)unaff_RSI == 0) goto code_r0x00014008d70d;
      break;
    }
    if ((int)(0x8000002f - bVar10 >> 3) < (int)(uint)local_a8) goto code_r0x0001400a1917;
    uVar15 = ((uint)bVar10 + (uint)local_a8 * 8) - 0x30;
    local_a8 = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if ((undefined1 (*) [16])pcVar43 == pauVar37) {
code_r0x00014008d770:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      bVar10 = 0xff;
      pcVar43 = (char *)pauVar37;
      goto code_r0x00014008d790;
    }
    pauVar18 = (undefined1 (*) [16])pcVar43;
    if ((((*(undefined1 (*) [16])pcVar43)[0] == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
        pauVar26 != pauVar37)) &&
       ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))) {
      pauVar18 = pauVar26;
    }
    pcVar43 = (char *)((longlong)*pauVar18 + 1);
    *(char **)*local_98 = pcVar43;
    pauVar26 = pauVar37;
    if ((undefined1 (*) [16])pcVar43 == pauVar37) goto code_r0x00014008d770;
    bVar10 = (*(undefined1 (*) [16])pcVar43)[0];
    uVar45 = (uint)(char)bVar10;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    pauVar26 = (undefined1 (*) [16])pcVar43;
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      goto code_r0x00014008d790;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    switch(uVar45) {
    case 10:
      if ((char)local_d8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar37)) &&
         ((*pauVar18)[0] != '\n')) goto code_r0x00014008da16;
      break;
    case 0x28:
    case 0x29:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014008d8b6;
    case 0x2a:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014008da16;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014008da16;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014008d8b6:
      if (uVar57 == 0) {
code_r0x00014008da16:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if ((pauVar18 != pauVar37) &&
         (((((ulonglong)local_90 & 8) == 0 &&
           (bVar11 = (*pauVar18)[0], ((*pauVar18)[0] & 0xfe) == 0x28)) ||
          ((((ulonglong)local_90 & 0x10) == 0 &&
           ((bVar11 = (*pauVar18)[0], bVar11 == 0x7d || (bVar11 == 0x7b)))))))) {
        bVar10 = bVar11;
        *(byte *)local_88 = bVar10;
        *(uint *)*local_78 = (uint)bVar10;
      }
      break;
    case 0x5e:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)(local_c8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014008da16;
          break;
        default:
          goto code_r0x00014008da16;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014008d8d4;
    case 0x7c:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014008d8d4:
      if (uVar57 != 0) break;
      goto code_r0x00014008da16;
    }
code_r0x00014008d790:
    uVar15 = (int)unaff_RSI + 1;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
    ppuVar55 = (undefined **)pauVar26;
  } while (uVar15 != 3);
  pcVar43 = (char *)((ulonglong)local_b8 & 0xffffffff);
  if ((uint)local_a8 == 0) goto code_r0x0001400a1917;
code_r0x00014008f692:
  if (0xff < (uint)local_a8) goto code_r0x0001400a1917;
code_r0x00014008f69f:
  uVar45 = (uint)pcVar43;
  *(int *)*local_b0 = (int)(char)local_a8;
  goto code_r0x00014008e4ea;
code_r0x00014008d70d:
  uVar15 = (uint)(char)bVar10;
  uVar45 = (uint)local_b8;
  pauVar22 = pauVar37;
  if ((uVar39 & 0x400000) == 0) {
    switch(uVar15) {
    case 0x22:
    case 0x2f:
      uVar57 = uVar39 & 0x1000000;
      break;
    default:
      goto code_r0x00014008f91a;
    case 0x24:
    case 0x2a:
    case 0x2e:
    case 0x5b:
    case 0x5c:
    case 0x5e:
    case 0x7c:
      goto code_r0x00014008e41b;
    case 0x28:
    case 0x29:
    case 0x2b:
    case 0x3f:
    case 0x7b:
    case 0x7d:
      uVar57 = uVar39 & 0x800000;
    }
    if (uVar57 == 0) goto code_r0x00014008f91a;
  }
  else if ((uVar15 - 0x44 < 0x34) &&
          ((0x8800180088001U >> ((ulonglong)(uVar15 - 0x44) & 0x3f) & 1) != 0))
  goto code_r0x00014008f91a;
code_r0x00014008e41b:
  *(uint *)*local_b0 = uVar15;
  if (pauVar26 == pauVar37) goto code_r0x00014008e4d3;
  if ((((*pauVar26)[0] == '\\') &&
      (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar37)) &&
     ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
      (((uVar39 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))))) {
    pauVar26 = pauVar18;
  }
  pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
  *(undefined1 (**) [16])*local_98 = pauVar18;
  if (pauVar18 == pauVar37) goto code_r0x00014008e4d3;
  cVar14 = (*pauVar18)[0];
  uVar46 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  uVar15 = uVar46;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
  unaff_RSI = pauVar37;
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
    if ((char)local_d8 == '\0') goto code_r0x00014008e4ea;
    goto code_r0x00014008c8d9;
  default:
    goto code_r0x00014008e4ea;
  case (undefined1 (*) [16])0x1a:
    if ((((ulonglong)local_90 & 0x2000000) == 0) ||
       (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 == pauVar37))
    goto code_r0x00014008e4ea;
    cVar14 = (*pauVar26)[0];
    goto joined_r0x00014008f0e2;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    uVar39 = (ulonglong)local_90 & 8;
    break;
  case (undefined1 (*) [16])0x20:
    if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014008e4ea;
    switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
    case 2:
      pauVar18 = local_c8;
      unaff_RSI = pauVar37;
      goto code_r0x00014008c9ad;
    default:
      goto code_r0x00014008e4ea;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014008dac8;
    }
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    uVar39 = (ulonglong)local_90 & 1;
    break;
  case (undefined1 (*) [16])0x52:
    pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
    if (pauVar26 == pauVar37) goto code_r0x00014008e4ea;
    if ((((ulonglong)local_90 & 8) != 0) ||
       (uVar46 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) != 0x28)) {
      if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014008e4ea;
      uVar46 = (uint)(byte)(*pauVar26)[0];
      goto code_r0x00014008c94e;
    }
    goto code_r0x00014008c95c;
  case (undefined1 (*) [16])0x54:
    if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014008e4ea;
    switch(*(undefined4 *)((longlong)*local_c8 + 8)) {
    case 2:
      pauVar18 = local_c8;
      unaff_RSI = pauVar37;
      break;
    default:
      goto code_r0x00014008dac8;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014008e4ea;
    }
    goto code_r0x00014008ca07;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    uVar39 = (ulonglong)local_90 & 0x10;
    break;
  case (undefined1 (*) [16])0x72:
    uVar39 = (ulonglong)local_90 & 2;
  }
  if (uVar39 == 0) goto code_r0x00014008dac8;
  goto code_r0x00014008e4ea;
code_r0x00014008f91a:
  pauVar56 = (undefined1 (*) [16])(ulonglong)*(uint *)*local_b0;
  unaff_RDI = pauVar22;
  pauVar21 = param_4;
code_r0x00014008f921:
  if ((*(uint *)local_98[5] & 0x100) != 0) {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,pauVar56);
    pauVar56 = (undefined1 (*) [16])(ulonglong)uVar15;
  }
  pauVar18 = *(undefined1 (**) [16])*local_a0;
  pauVar31 = *(undefined1 (**) [32])(pauVar18[2] + 8);
  if (pauVar31 == (undefined1 (*) [32])0x0) {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar31 = operator_new(0x20);
    *pauVar31 = ZEXT1232(ZEXT812(0));
    *(undefined1 (**) [32])(pauVar18[2] + 8) = pauVar31;
  }
  pbVar41 = (byte *)((longlong)*pauVar31 + (((ulonglong)pauVar56 & 0xff) >> 3));
  *pbVar41 = *pbVar41 | '\x01' << ((byte)pauVar56 & 7);
  uVar39 = CONCAT71((int7)((ulonglong)pauVar26 >> 8),0x2d);
  if ((*(uint *)local_98[5] & 0x100) != 0) {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,0x2d);
    uVar39 = (ulonglong)uVar15;
  }
  unaff_RSI = *(undefined1 (**) [16])*local_a0;
  pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8);
  if (pauVar31 == (undefined1 (*) [32])0x0) {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar31 = operator_new(0x20);
    *pauVar31 = ZEXT1232(ZEXT812(0));
    *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8) = pauVar31;
  }
  pauVar18 = (undefined1 (*) [16])(uVar39 & 0xffffffffffffff07);
  pbVar41 = (byte *)((longlong)*pauVar31 + ((uVar39 & 0xff) >> 3));
  *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
  param_4 = pauVar21;
code_r0x00014008f9f0:
  pauVar26 = pauVar18;
  if (*(uint *)*local_78 != 0x5d) goto code_r0x0001400a19fa;
  unaff_RSI = *(undefined1 (**) [16])*local_98;
  unaff_RBX = *(undefined1 (**) [16])local_98[1];
  if (unaff_RSI != unaff_RBX) {
    if ((((char)*(uint *)*unaff_RSI == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != unaff_RBX)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
      unaff_RSI = pauVar26;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
  }
  if (unaff_RSI == unaff_RBX) {
LAB_140086de0:
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    uVar15 = 0xffffffff;
    ppuVar55 = (undefined **)0x0;
    pauVar26 = unaff_RBX;
    goto LAB_140086dff;
  }
  cVar14 = (char)*(uint *)*unaff_RSI;
  uVar45 = (uint)cVar14;
  auVar71 = ZEXT1664(auVar71._0_16_);
  auVar72 = ZEXT1664(auVar72._0_16_);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
code_r0x00014008fb16:
    if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) goto code_r0x0001400900a8;
code_r0x00014008fb33:
    *(uint *)*local_78 = 0x7c;
    uVar15 = 0x7c;
    ppuVar55 = (undefined **)0x0;
    pauVar26 = unaff_RBX;
    goto LAB_140086dff;
  default:
    goto LAB_1400900b1;
  case (undefined1 (*) [16])0x1a:
code_r0x00014008fb4d:
    if ((((*(uint *)*local_80 & 0x2000000) == 0) ||
        (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI == unaff_RBX)) ||
       ((char)*(uint *)*unaff_RSI == '\n')) goto code_r0x0001400900a8;
    goto code_r0x00014008fe00;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
code_r0x00014008fac2:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    break;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) == 0) goto code_r0x0001400900a8;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
code_r0x00014008fbaf:
      lVar29 = *(longlong *)(pauVar26[1] + 8);
code_r0x00014008fbb3:
      if ((0x14 < *(uint *)(lVar29 + 8)) || ((0x102100U >> (*(uint *)(lVar29 + 8) & 0x1f) & 1) == 0)
         ) goto code_r0x0001400900a8;
      break;
    default:
      goto code_r0x0001400900a8;
    case 8:
    case 0xd:
    case 0x14:
      break;
    }
    goto code_r0x00014008fe00;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
code_r0x00014008fad7:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    break;
  case (undefined1 (*) [16])0x52:
code_r0x0001400903b1:
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    if (unaff_RSI == unaff_RBX) goto LAB_1400900b1;
code_r0x0001400903bd:
    if (((*(uint *)*local_80 & 8) != 0) ||
       (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
      if ((*(uint *)*local_80 & 0x10) != 0) goto code_r0x0001400900a8;
      bVar10 = (byte)*(uint *)*unaff_RSI;
      uVar15 = (uint)bVar10;
      if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x0001400900a8;
    }
    *(char *)local_88 = (char)uVar15;
    *(uint *)*local_78 = uVar15;
    goto LAB_1400900b1;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) == 0) goto code_r0x0001400900a8;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
code_r0x00014008fc09:
      lVar29 = *(longlong *)(pauVar26[1] + 8);
code_r0x00014008fc0d:
      if ((*(uint *)(lVar29 + 8) < 0x15) && ((0x102100U >> (*(uint *)(lVar29 + 8) & 0x1f) & 1) != 0)
         ) goto code_r0x0001400900a8;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400900a8;
    }
    goto code_r0x00014008fe00;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
code_r0x00014008faec:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    break;
  case (undefined1 (*) [16])0x72:
code_r0x00014008fb01:
    bVar10 = (byte)*(uint *)*local_80 & 2;
  }
  if (bVar10 != 0) goto code_r0x0001400900a8;
code_r0x00014008fe00:
  *(uint *)*local_78 = 0;
  uVar15 = 0;
  ppuVar55 = (undefined **)0x0;
  pauVar26 = unaff_RBX;
  goto LAB_140086dff;
joined_r0x00014008e6d0:
  if (uVar15 < uVar45) goto code_r0x000140088d29;
  iVar58 = (int)pauVar18;
  if ((*(uint *)local_98[5] & 0x100) != 0) {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar45 = (**(code **)(*plVar3 + 0x20))(plVar3,pauVar18);
    pauVar18 = (undefined1 (*) [16])(ulonglong)uVar45;
  }
  unaff_RSI = *(undefined1 (**) [16])*local_a0;
  pauVar21 = *(undefined1 (**) [16])unaff_RSI[3];
  if (pauVar21 == (undefined1 (*) [16])0x0) {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar21 = operator_new(0x10);
    *pauVar21 = auVar72._0_16_;
    *(undefined1 (**) [16])unaff_RSI[3] = pauVar21;
  }
  uVar45 = *(uint *)((longlong)*pauVar21 + 4);
  if (uVar45 < *(uint *)*pauVar21) {
    pvVar19 = *(void **)((longlong)*pauVar21 + 8);
  }
  else {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = realloc(*(void **)((longlong)*pauVar21 + 8),(ulonglong)(uVar45 + 0x10));
    if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
    *(void **)((longlong)*pauVar21 + 8) = pvVar19;
    *(uint *)*pauVar21 = uVar45 + 0x10;
    uVar45 = *(uint *)((longlong)*pauVar21 + 4);
  }
  pauVar26 = (undefined1 (*) [16])(ulonglong)uVar45;
  *(uint *)((longlong)*pauVar21 + 4) = uVar45 + 1;
  *(char *)((longlong)pvVar19 + (longlong)pauVar26) = (char)pauVar18;
  uVar45 = iVar58 + 1;
  ppuVar55 = (undefined **)pauVar18;
  pauVar18 = (undefined1 (*) [16])(ulonglong)uVar45;
  goto joined_r0x00014008e6d0;
code_r0x0001400a2bc5:
  pauVar18 = local_a8;
  if ((uVar45 + 1 < 0x3f) && ((0x4800800000000001U >> ((ulonglong)(uVar45 + 1) & 0x3f) & 1) != 0))
  goto code_r0x0001400a2e17;
  if (pauVar26 == pauVar22) {
code_r0x0001400a2ba0:
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    uVar45 = 0xffffffff;
    pauVar26 = pauVar22;
    goto code_r0x0001400a2bbf;
  }
  pauVar18 = pauVar26;
  if ((((*pauVar26)[0] == '\\') &&
      (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar26 != pauVar22)) &&
     ((((uVar46 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
      (((uVar46 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))) {
    pauVar18 = pauVar26;
  }
  pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
  *(undefined1 (**) [16])*local_98 = pauVar26;
  if (pauVar26 == pauVar22) goto code_r0x0001400a2ba0;
  cVar14 = (*pauVar26)[0];
  uVar48 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar48,0x17);
  uVar45 = uVar48;
  if (pvVar19 == (void *)0x0) {
    uVar45 = 0;
  }
  *(uint *)*local_78 = uVar45;
  *(char *)local_88 = cVar14;
  switch(uVar48) {
  case 10:
    if ((char)local_d8 != '\0') {
      *(uint *)*local_78 = 0x7c;
      uVar45 = 0x7c;
    }
    break;
  case 0x24:
    if ((((char)local_b0 == '\0') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar22)) &&
       ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x0001400a2dfb;
    break;
  case 0x28:
  case 0x29:
    uVar48 = uVar46 & 8;
    goto joined_r0x0001400a2cb1;
  case 0x2a:
    if (((ulonglong)local_b8 & 1) == 0) {
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar48 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
        if ((uVar48 < 0x15) && ((0x102100U >> (uVar48 & 0x1f) & 1) != 0)) goto code_r0x0001400a2dfb;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400a2dfb;
      }
    }
    break;
  case 0x2b:
  case 0x3f:
    cVar14 = (byte)local_90;
    goto joined_r0x0001400a2cc0;
  case 0x5c:
    pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
    if (pauVar18 != pauVar22) {
      if (((uVar46 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*pauVar18, uVar48 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400a2d4a:
        uVar45 = uVar48;
        *(char *)local_88 = (char)uVar45;
        *(uint *)*local_78 = uVar45;
      }
      else if ((uVar46 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*pauVar18;
        uVar48 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a2d4a;
      }
    }
    break;
  case 0x5e:
    if ((char)local_b0 != '\0') break;
    switch(*(uint *)((longlong)*local_a8 + 8)) {
    case 2:
      uVar48 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
      if (uVar48 < 0x15) {
        uVar48 = 0x102100U >> (uVar48 & 0x1f) & 1;
        goto joined_r0x0001400a2cb1;
      }
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400a2bbf;
    }
    goto code_r0x0001400a2dfb;
  case 0x7b:
  case 0x7d:
    uVar48 = uVar46 & 0x10;
joined_r0x0001400a2cb1:
    if (uVar48 == 0) {
code_r0x0001400a2dfb:
      *(uint *)*local_78 = 0;
      uVar45 = 0;
    }
    break;
  case 0x7c:
    cVar14 = (char)local_c8;
joined_r0x0001400a2cc0:
    if (cVar14 == '\0') break;
    goto code_r0x0001400a2dfb;
  }
code_r0x0001400a2bbf:
  uVar47 = uVar47 + 1;
  goto code_r0x0001400a2bc5;
code_r0x0001400a2e17:
  unaff_RBX = local_a8;
  local_b0 = pauVar26;
  if (uVar45 != uVar15) goto LAB_1400a3ae8;
  if (uVar15 == 0x3a) {
    lVar50 = *(longlong *)((longlong)local_98[6] + 8);
    local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,*(uint *)local_98[7]);
    local_90 = (undefined1 (*) [16])((longlong)pauVar26 - (longlong)local_e8);
    pcVar43 = "alnum";
    uVar39 = 0;
    bVar62 = false;
    do {
      if (local_90 == (undefined1 (*) [16])(ulonglong)(uint)(&DAT_140111f70)[uVar39 * 6]) {
        pauVar26 = local_e8;
        if (local_e8 == local_b0) {
code_r0x0001400a2f61:
          uVar42 = (&DAT_140111f74)[(uVar39 & 0xffffffff) * 0xc];
          goto code_r0x0001400a2f73;
        }
        while( true ) {
          cVar14 = *pcVar43;
          plVar3 = *(longlong **)(lVar50 + 8);
          cVar13 = (**(code **)(*plVar3 + 0x20))(plVar3,(*pauVar26)[0]);
          plVar3 = *(longlong **)(lVar50 + 8);
          cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,cVar14);
          if (cVar13 != cVar14) break;
          pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          pcVar43 = pcVar43 + 1;
          if (pauVar26 == local_b0) {
            if (!bVar62) goto code_r0x0001400a2f61;
            goto code_r0x0001400a2ee9;
          }
        }
      }
      uVar39 = uVar39 + 1;
      pcVar43 = (&PTR_s_alnum_140111f60)[uVar39 * 3];
      bVar62 = pcVar43 == (char *)0x0;
    } while (uVar39 != 0xf);
code_r0x0001400a2ee9:
    uVar42 = 0;
code_r0x0001400a2f73:
    uVar33 = uVar42 | 3;
    if ((uVar42 & 3) == 0) {
      uVar33 = uVar42;
    }
    if (((ulonglong)local_a8 & 0x100) == 0) {
      uVar33 = uVar42;
    }
    uVar42 = 0;
    if (uVar33 != 0) {
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      uVar39 = 0;
      do {
        uVar42 = uVar33;
        if (((uVar33 == 0xffff) && (uVar42 = 0x107, uVar39 == 0x5f)) ||
           ((*(ushort *)
              (*(longlong *)(*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) +
              uVar39 * 2) & uVar42) != 0)) {
          pauVar31 = *(undefined1 (**) [32])(pauVar26[2] + 8);
          if (pauVar31 == (undefined1 (*) [32])0x0) {
            pauVar31 = operator_new(0x20);
            *pauVar31 = ZEXT1232(ZEXT812(0));
            *(undefined1 (**) [32])(pauVar26[2] + 8) = pauVar31;
          }
          pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
          *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
        }
        uVar39 = uVar39 + 1;
      } while (uVar39 != 0x100);
      goto code_r0x0001400a37bd;
    }
    goto code_r0x0001400a2350;
  }
  if (uVar15 == 0x2e) {
    if (local_e8 != pauVar26) {
      pauVar18 = local_a8 + 2;
      for (puVar36 = *(uint **)local_a8[2]; puVar36 != (uint *)0x0;
          puVar36 = *(uint **)(puVar36 + 6)) {
        if (*puVar36 <= uVar47) {
          pauVar21 = local_e8;
          if (*puVar36 == uVar47) goto code_r0x0001400a350b;
          goto code_r0x0001400a34bb;
        }
        pauVar18 = (undefined1 (*) [16])(puVar36 + 6);
      }
      puVar36 = (uint *)0x0;
code_r0x0001400a34bb:
      puVar20 = operator_new(0x20);
      *puVar20 = uVar47;
      auVar70._0_12_ = ZEXT812(0);
      auVar70._12_4_ = 0;
      *(undefined1 (*) [16])(puVar20 + 2) = auVar70;
      *(uint **)*pauVar18 = puVar20;
      *(uint **)(puVar20 + 6) = puVar36;
      puVar36 = *(uint **)*pauVar18;
      pauVar26 = local_b0;
      pauVar21 = local_e8;
code_r0x0001400a350b:
      do {
        uVar12 = (*pauVar21)[0];
        uVar15 = puVar36[3];
        if (uVar15 < puVar36[2]) {
          pvVar19 = *(void **)(puVar36 + 4);
        }
        else {
          pvVar19 = realloc(*(void **)(puVar36 + 4),(ulonglong)(uVar15 + 0x10));
          if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
          *(void **)(puVar36 + 4) = pvVar19;
          puVar36[2] = uVar15 + 0x10;
          uVar15 = puVar36[3];
          pauVar26 = local_b0;
        }
        pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 1);
        puVar36[3] = uVar15 + 1;
        *(undefined1 *)((longlong)pvVar19 + (ulonglong)uVar15) = uVar12;
      } while (pauVar21 != pauVar26);
      goto code_r0x0001400a37bd;
    }
    goto LAB_1400a23e2;
  }
  if (uVar15 == 0x3d) {
    if (local_e8 == pauVar26) goto LAB_1400a23e2;
    local_b0 = (undefined1 (*) [16])((longlong)pauVar26 - (longlong)local_e8);
    if ((longlong)local_b0 < 0) goto code_r0x0001400a2320;
    pauVar26 = *(undefined1 (**) [16])*local_d0;
    if (local_b0 < (undefined1 (*) [16])0x1000) {
      local_90 = operator_new((__uint64)local_b0);
    }
    else {
      pvVar19 = operator_new((longlong)local_b0[2] + 7);
      local_90 = (undefined1 (*) [16])((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)local_90[-1] + 8) = pvVar19;
    }
    pauVar21 = local_90;
    lVar50 = (longlong)*local_90 + (longlong)local_b0;
    memmove(local_90,local_e8,(size_t)local_b0);
    plVar3 = *(longlong **)(*pauVar26 + 8);
    (**(code **)(*plVar3 + 0x18))(plVar3,pauVar21,lVar50);
    plVar3 = *(longlong **)*pauVar26;
    (**(code **)(*plVar3 + 0x20))(plVar3,local_110,local_90,lVar50);
    local_138._8_8_ = local_110[1];
    local_138._0_8_ = local_110[0];
    sStack_128 = lStack_100;
    pauStack_120 = (undefined1 (*) [16])uStack_f8;
    if ((undefined1 (*) [16])0xfff < local_b0) {
      if (0x1f < (ulonglong)
                 ((longlong)local_90 +
                 (-8 - (longlong)*(undefined1 (**) [16])((longlong)local_90[-1] + 8))))
      goto LAB_1400a3888;
      local_b0 = (undefined1 (*) [16])((longlong)local_b0[2] + 7);
      local_90 = *(undefined1 (**) [16])((longlong)local_90[-1] + 8);
    }
    free(local_90);
    sVar9 = sStack_128;
    local_90 = pauStack_120;
    local_b8 = (undefined1 (*) [16])local_138._0_8_;
    if ((undefined1 (*) [16])0xf < pauStack_120) {
      local_140 = (undefined1 (*) [16])local_138._0_8_;
    }
    for (uVar39 = 0; (uint)uVar39 < 0x100; uVar39 = (ulonglong)((uint)uVar39 + 1)) {
      pauVar26 = *(undefined1 (**) [16])*local_d0;
      local_b0 = operator_new(1);
      lVar50 = (longlong)*local_b0 + 1;
      (*local_b0)[0] = (byte)uVar39;
      plVar3 = *(longlong **)(*pauVar26 + 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,local_b0,lVar50);
      plVar3 = *(longlong **)*pauVar26;
      (**(code **)(*plVar3 + 0x20))(plVar3,local_110,local_b0,lVar50);
      local_168._8_8_ = local_110[1];
      local_168._0_8_ = local_110[0];
      local_168._16_8_ = lStack_100;
      local_168._24_8_ = uStack_f8;
      free(local_b0);
      uVar5 = local_168._24_8_;
      if (local_168._16_8_ == sVar9) {
        puVar40 = local_168;
        if (0xf < (ulonglong)local_168._24_8_) {
          puVar40 = (undefined1 *)local_168._0_8_;
        }
        iVar58 = memcmp(puVar40,local_140,sVar9);
        bVar62 = iVar58 == 0;
      }
      else {
        bVar62 = false;
      }
      if (0xf < (ulonglong)uVar5) {
        puVar40 = (undefined1 *)local_168._0_8_;
        if ((0xfff < uVar5 + 1) &&
           (puVar40 = *(undefined1 **)(local_168._0_8_ + -8),
           (undefined1 *)0x1f < (undefined1 *)(local_168._0_8_ + (-8 - (longlong)puVar40))))
        goto LAB_1400a3888;
        free(puVar40);
      }
      if (bVar62) {
        pauVar31 = *(undefined1 (**) [32])((longlong)pauVar18[2] + 8);
        if (pauVar31 == (undefined1 (*) [32])0x0) {
          pauVar31 = operator_new(0x20);
          *pauVar31 = ZEXT1232(ZEXT812(0));
          *(undefined1 (**) [32])((longlong)pauVar18[2] + 8) = pauVar31;
        }
        pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3));
        *pbVar41 = *pbVar41 | (byte)(1 << ((byte)uVar39 & 7));
      }
    }
    if ((undefined1 (*) [16])0xf < local_90) {
      pauVar26 = local_b8;
      if ((0xfff < (longlong)*local_90 + 1U) &&
         (pauVar26 = *(undefined1 (**) [16])((longlong)local_b8[-1] + 8),
         0x1f < (ulonglong)
                ((longlong)local_b8 +
                (-8 - (longlong)*(undefined1 (**) [16])((longlong)local_b8[-1] + 8)))))
      goto LAB_1400a3888;
      local_b8 = pauVar26;
      free(local_b8);
    }
  }
code_r0x0001400a37bd:
  unaff_RBX = *(undefined1 (**) [16])*local_98;
  pauVar22 = *(undefined1 (**) [16])local_98[1];
  if (unaff_RBX != pauVar22) {
    if ((((*unaff_RBX)[0] == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1), pauVar26 != pauVar22)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))
        ))) {
      unaff_RBX = pauVar26;
    }
    unaff_RBX = (undefined1 (*) [16])((longlong)*unaff_RBX + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RBX;
  }
  if (unaff_RBX == pauVar22) goto code_r0x0001400a30fc;
  cVar14 = (*unaff_RBX)[0];
  uVar45 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = 0;
  if (pvVar19 != (void *)0x0) {
    uVar15 = uVar45;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  switch(uVar45) {
  case 10:
    if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) break;
    goto code_r0x0001400a31e0;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1), pauVar26 != pauVar22)) &&
       ((*pauVar26)[0] != '\n')) goto code_r0x0001400a3adb;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x0001400a3975;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0)) goto code_r0x0001400a3a20;
      break;
    default:
      goto code_r0x0001400a3a20;
    case 8:
    case 0xd:
    case 0x14:
      break;
    }
    goto code_r0x0001400a3adb;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x0001400a3975;
  case 0x5c:
    pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1);
    if ((pauVar26 != pauVar22) &&
       ((((*(uint *)*local_80 & 8) == 0 && (bVar10 = (*pauVar26)[0], (bVar10 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((bVar10 = (*pauVar26)[0], bVar10 == 0x7d || (bVar10 == 0x7b)))))))) {
      *(byte *)local_88 = bVar10;
      uVar15 = (uint)bVar10;
      *(uint *)*local_78 = uVar15;
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x0001400a3a20;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400a3a20;
      }
      goto code_r0x0001400a3adb;
    }
    break;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x0001400a3975;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x0001400a3975:
    if (bVar10 != 0) break;
    goto code_r0x0001400a3adb;
  }
code_r0x0001400a3a20:
  if (uVar15 != 0x5d) goto LAB_1400a3ae8;
  if ((((*unaff_RBX)[0] == '\\') &&
      (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1), pauVar26 != pauVar22)) &&
     ((((*(uint *)*local_80 & 8) == 0 &&
       (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
      (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))
     ) {
    unaff_RBX = pauVar26;
  }
  pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1);
  *(undefined1 (**) [16])*local_98 = pauVar26;
  if (pauVar26 == pauVar22) goto code_r0x0001400a337b;
  cVar14 = (*pauVar26)[0];
  uVar45 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = 0;
  if (pvVar19 != (void *)0x0) {
    uVar15 = uVar45;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  switch(uVar45) {
  case 10:
    goto code_r0x0001400a3b01;
  default:
    goto LAB_1400a3c47;
  case 0x24:
    goto code_r0x0001400a3b5c;
  case 0x28:
  case 0x29:
    goto code_r0x0001400a33ed;
  case 0x2a:
    goto code_r0x0001400a3be5;
  case 0x2b:
  case 0x3f:
    goto code_r0x0001400a3aca;
  case 0x5c:
    goto code_r0x0001400a3b84;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) == 0) goto LAB_1400a3c47;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
      goto code_r0x0001400a3493;
    case 8:
    case 0xd:
    case 0x14:
      goto LAB_1400a3c47;
    }
    break;
  case 0x7b:
  case 0x7d:
    goto code_r0x0001400a3af0;
  case 0x7c:
    goto code_r0x0001400a3b35;
  }
  goto LAB_1400a3b45;
code_r0x0001400901d4:
  unaff_RSI = *(undefined1 (**) [16])*local_98;
  pauVar26 = *(undefined1 (**) [16])local_98[1];
  if (unaff_RSI != pauVar26) {
    if ((((char)*(uint *)*unaff_RSI == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      unaff_RSI = pauVar18;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
  }
  if (unaff_RSI == pauVar26) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    uVar15 = 0xffffffff;
    pauVar18 = unaff_RDI;
    goto code_r0x0001400927d9;
  }
  cVar14 = (char)*(uint *)*unaff_RSI;
  uVar45 = (uint)cVar14;
  auVar71 = ZEXT1664(auVar69);
  auVar72 = ZEXT1664(auVar70);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  pauVar18 = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  switch(pauVar18) {
  case (undefined1 (*) [16])0x0:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      uVar15 = 0x7c;
    }
    break;
  case (undefined1 (*) [16])0x1a:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (pauVar21 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar21 != pauVar26)) &&
       ((char)*(uint *)*pauVar21 != '\n')) goto code_r0x0001400927ca;
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x000140091081;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x0001400927ca;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400927ca;
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140091081:
    if (bVar10 == 0) {
code_r0x0001400927ca:
      *(uint *)*local_78 = 0;
      uVar15 = 0;
    }
    break;
  case (undefined1 (*) [16])0x52:
    pauVar21 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    if (pauVar21 != pauVar26) {
      if ((*(uint *)*local_80 & 8) == 0) {
        bVar10 = (byte)*(uint *)*pauVar21;
        param_4 = (undefined1 (*) [16])((ulonglong)bVar10 & 0xfffffffffffffffe);
        uVar45 = (uint)bVar10;
        if ((char)param_4 != '(') goto code_r0x000140092705;
code_r0x000140092720:
        uVar15 = uVar45;
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
      }
      else {
code_r0x000140092705:
        if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar21;
          uVar45 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140092720;
        }
      }
    }
    break;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0)) goto code_r0x0001400927ca;
        break;
      default:
        goto code_r0x0001400927ca;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x00014009266d;
  case (undefined1 (*) [16])0x72:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009266d:
    if (bVar10 != 0) break;
    goto code_r0x0001400927ca;
  }
code_r0x0001400927d9:
  unaff_RDI = local_98;
  uVar45 = *local_c0 + 1;
  pauVar21 = (undefined1 (*) [16])(ulonglong)uVar45;
  *local_c0 = uVar45;
  uVar46 = *(uint *)*local_80;
  if (((uVar46 & 0x8000000) == 0) && (uVar15 == 0x29)) goto code_r0x0001400a1955;
  if (((uVar46 & 0x20) == 0) || (uVar15 != 0x3f)) {
    if ((*(uint *)local_98[7] & 0x200) != 0) goto code_r0x000140092a8f;
    uVar15 = *(uint *)((longlong)local_98[1] + 8) + 1;
    *(uint *)((longlong)local_98[1] + 8) = uVar15;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x28);
    *(undefined4 *)(puVar23 + 1) = 0xd;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    *puVar23 = std::_Node_capture::vftable;
    *(uint *)(puVar23 + 4) = uVar15;
    pauVar18 = *(undefined1 (**) [16])((longlong)unaff_RDI[4] + 8);
    puVar23[3] = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      puVar23[2] = *(longlong *)pauVar18[1];
      *(undefined8 **)(*(longlong *)pauVar18[1] + 0x18) = puVar23;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar18[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    FUN_140086d20();
    uVar17 = 0xe;
    if (*(int *)(puVar23 + 1) - 8U < 4) {
      uVar17 = (&DAT_1401123dc)[*(int *)(puVar23 + 1) - 8U];
    }
    puVar30 = operator_new(0x28);
    pauVar22 = local_98;
    *(undefined4 *)(puVar30 + 1) = uVar17;
    *(undefined8 *)((longlong)puVar30 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x14) = 0;
    *puVar30 = std::_Node_end_group::vftable;
    puVar30[4] = puVar23;
    pauVar18 = *(undefined1 (**) [16])*local_a0;
    puVar30[3] = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      puVar30[2] = *(longlong *)pauVar18[1];
      *(undefined8 **)(*(longlong *)pauVar18[1] + 0x18) = puVar30;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar18[1] = puVar30;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar30;
    uVar46 = *(uint *)((longlong)local_98[1] + 8) + 1;
    uVar57 = (ulonglong)uVar46;
    uVar39 = *(ulonglong *)((longlong)local_98[3] + 8);
    uVar15 = (uint)uVar39;
    if (uVar39 < uVar57) {
      unaff_RBX = (undefined1 (*) [16])(uVar57 - uVar39);
      if ((undefined1 (*) [16])(uVar39 ^ 0x7fffffffffffffff) < unaff_RBX) goto code_r0x0001400a1d16;
      lVar29 = *(longlong *)local_98[2];
      pauVar18 = (undefined1 (*) [16])(uVar57 + 0x1f >> 5);
      pvVar19 = *(void **)((longlong)local_98[2] + 8);
      unaff_RDI = (undefined1 (*) [16])((longlong)pvVar19 - lVar29 >> 2);
      pauVar26 = (undefined1 (*) [16])((longlong)pauVar18 - (longlong)unaff_RDI);
      if (pauVar18 < unaff_RDI) {
        pvVar19 = (void *)(lVar29 + (longlong)pauVar18 * 4);
        pauVar26 = unaff_RDI;
code_r0x000140092a3a:
        *(void **)((longlong)pauVar22[2] + 8) = pvVar19;
        unaff_RDI = pauVar26;
      }
      else if (pauVar26 != (undefined1 (*) [16])0x0) {
        pauVar21 = (undefined1 (*) [16])(*(longlong *)local_98[3] - lVar29 >> 2);
        if (pauVar18 <= pauVar21) {
          memset(pvVar19,0,(longlong)pauVar26 * 4);
          pvVar19 = (void *)((longlong)pvVar19 + (longlong)pauVar26 * 4);
          goto code_r0x000140092a3a;
        }
        local_90 = (undefined1 (*) [16])((longlong)*pauVar21 + ((ulonglong)pauVar21 >> 1));
        if (local_90 <= pauVar18) {
          local_90 = pauVar18;
        }
        if (local_90 < (undefined1 (*) [16])0x400) {
          pvVar19 = operator_new((longlong)local_90 * 4);
        }
        else {
          pvVar24 = operator_new((longlong)local_90 * 4 + 0x27);
          pvVar19 = (void *)((longlong)pvVar24 + 0x27U & 0xffffffffffffffe0);
          *(void **)((longlong)pvVar19 - 8) = pvVar24;
        }
        memset((void *)((longlong)pvVar19 + (longlong)unaff_RDI * 4),0,(longlong)pauVar26 * 4);
        pauVar22 = local_98;
        memmove(pvVar19,*(void **)local_98[2],
                *(longlong *)((longlong)local_98[2] + 8) - (longlong)*(void **)local_98[2]);
        pvVar24 = *(void **)pauVar22[2];
        if (pvVar24 != (void *)0x0) {
          pvVar38 = pvVar24;
          if ((0xfff < (ulonglong)(*(longlong *)pauVar22[3] - (longlong)pvVar24)) &&
             (pvVar38 = *(void **)((longlong)pvVar24 + -8),
             0x1f < (ulonglong)((longlong)pvVar24 + (-8 - (longlong)pvVar38)))) goto LAB_1400a3888;
          free(pvVar38);
          pauVar22 = local_98;
        }
        *(void **)pauVar22[2] = pvVar19;
        *(void **)((longlong)pauVar22[2] + 8) = (void *)((longlong)pvVar19 + (longlong)pauVar18 * 4)
        ;
        *(void **)pauVar22[3] = (void *)((longlong)pvVar19 + (longlong)local_90 * 4);
      }
      uVar57 = *(ulonglong *)((longlong)pauVar22[3] + 8);
      if (uVar57 == 0) {
        *(undefined1 (**) [16])((longlong)pauVar22[3] + 8) = unaff_RBX;
        lVar29 = *(longlong *)pauVar22[2];
        uVar57 = (ulonglong)(uVar15 & 0x1f);
        param_4 = (undefined1 (*) [16])0x0;
code_r0x0001400937a0:
        puVar36 = (uint *)(lVar29 + (uVar39 >> 5) * 4);
      }
      else {
        lVar29 = *(longlong *)pauVar22[2];
        uVar51 = (uVar57 >> 5) + 0xf800000000000000;
        if (-1 < (longlong)uVar57) {
          uVar51 = uVar57 >> 5;
        }
        uVar25 = (ulonglong)((uint)uVar57 & 0x1f);
        param_4 = (undefined1 (*) [16])((longlong)*unaff_RBX + uVar57);
        *(undefined1 (**) [16])((longlong)pauVar22[3] + 8) = param_4;
        uVar35 = uVar39 >> 5;
        uVar57 = (ulonglong)(uVar15 & 0x1f);
        if ((uVar35 == uVar51) && (uVar57 == uVar25)) goto code_r0x0001400937a0;
        uVar52 = (ulonglong)((uint)param_4 & 0x1f);
        uVar39 = ((ulonglong)param_4 >> 5) + 0x3800000000000000;
        if (-1 < (longlong)param_4) {
          uVar39 = (ulonglong)param_4 >> 5;
        }
        param_4 = (undefined1 (*) [16])(lVar29 + uVar39 * 4);
        lVar54 = lVar29 + uVar51 * 4;
        do {
          bVar62 = uVar52 == 0;
          bVar60 = uVar52 == 0;
          uVar52 = uVar52 - 1;
          if (bVar60) {
            uVar52 = 0x1f;
          }
          bVar60 = uVar25 == 0;
          bVar61 = uVar25 == 0;
          uVar25 = uVar25 - 1;
          if (bVar61) {
            uVar25 = 0x1f;
          }
          param_4 = (undefined1 (*) [16])((longlong)param_4 + (ulonglong)bVar62 * -4);
          uVar15 = 1 << ((uint)uVar52 & 0x1f);
          if ((*(uint *)(lVar54 + (ulonglong)bVar60 * -4) >> ((uint)uVar25 & 0x1f) & 1) == 0) {
            uVar15 = ~uVar15 & *(uint *)*param_4;
          }
          else {
            uVar15 = uVar15 | *(uint *)*param_4;
          }
          unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
          lVar54 = lVar54 + (ulonglong)bVar60 * -4;
          *(uint *)*param_4 = uVar15;
        } while ((lVar29 + uVar35 * 4 != lVar54) || (uVar57 != uVar25));
        puVar36 = (uint *)(uVar35 * 4 + *(longlong *)local_98[2]);
      }
      pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + uVar57);
      uVar45 = (uint)pauVar26 & 0x1f;
      uVar39 = uVar57;
      pauVar21 = pauVar22;
      if (((undefined1 (*) [16])0x1f < pauVar26) || (uVar57 != uVar45)) {
        unaff_RDI = (undefined1 (*) [16])(puVar36 + ((ulonglong)pauVar26 >> 5));
        uVar15 = ~(-1 << (int)uVar57);
        if (pauVar26 < (undefined1 (*) [16])0x20) {
          uVar15 = ~(0xffffffffU >> ((byte)-(char)uVar45 & 0x1f)) | uVar15;
        }
        else {
          *puVar36 = *puVar36 & uVar15;
          memset(puVar36 + 1,0,((ulonglong)pauVar26 >> 5) * 4 - 4);
          if ((ulonglong)uVar45 == 0) goto code_r0x000140093815;
          uVar15 = ~(0xffffffffU >> ((byte)-(char)uVar45 & 0x1f));
        }
code_r0x000140093813:
        *(uint *)*unaff_RDI = *(uint *)*unaff_RDI & uVar15;
        uVar39 = 0;
      }
    }
    else if (uVar57 < uVar39) {
      lVar29 = *(longlong *)local_98[2];
      pauVar22 = (undefined1 (*) [16])(uVar39 >> 5);
      param_4 = pauVar22 + -0x80000000000000;
      pauVar18 = pauVar22;
      if ((longlong)uVar39 < 0) {
        pauVar18 = param_4;
      }
      uVar39 = (ulonglong)(uVar15 & 0x1f);
      uVar57 = (ulonglong)(uVar46 & 0x1f);
      if (((ulonglong)pauVar18 >> 0x3a & 1) != 0) {
        pauVar22 = param_4;
      }
      if (((undefined1 (*) [16])(ulonglong)(uVar46 >> 5) != pauVar22) || (uVar57 != uVar39)) {
        puVar36 = (uint *)(lVar29 + (longlong)(ulonglong)(uVar46 >> 5) * 4);
        if (pauVar22 != pauVar18) {
          puVar20 = (uint *)(lVar29 + (longlong)pauVar22 * 4);
          uVar51 = uVar39;
          do {
            uVar15 = 1 << ((uint)uVar57 & 0x1f);
            if ((*puVar20 >> ((uint)uVar51 & 0x1f) & 1) == 0) {
              uVar15 = ~uVar15 & *puVar36;
            }
            else {
              uVar15 = uVar15 | *puVar36;
            }
            *puVar36 = uVar15;
            bVar62 = 0x1e < uVar57;
            uVar57 = uVar57 + 1;
            puVar36 = puVar36 + bVar62;
            if (bVar62) {
              uVar57 = 0;
            }
            bVar62 = 0x1e < uVar51;
            uVar51 = uVar51 + 1;
            puVar20 = puVar20 + bVar62;
            if (bVar62) {
              uVar51 = 0;
            }
          } while ((puVar20 != (uint *)(lVar29 + (longlong)pauVar18 * 4)) || (uVar51 != uVar39));
          lVar29 = *(longlong *)local_98[2];
        }
        uVar57 = ((longlong)puVar36 - lVar29) * 8 + uVar57;
        if ((longlong)uVar57 < 0) goto code_r0x0001400a3c51;
        pauVar18 = (undefined1 (*) [16])(uVar57 + 0x1f >> 5);
        param_4 = (undefined1 (*) [16])
                  ((longlong)*(undefined1 (**) [16])((longlong)local_98[2] + 8) - lVar29 >> 2);
        if ((pauVar18 < param_4) &&
           (param_4 = (undefined1 (*) [16])(lVar29 + (longlong)pauVar18 * 4),
           param_4 != *(undefined1 (**) [16])((longlong)local_98[2] + 8))) {
          *(undefined1 (**) [16])((longlong)local_98[2] + 8) = param_4;
        }
        *(ulonglong *)((longlong)local_98[3] + 8) = uVar57;
        if ((uVar57 & 0x1f) == 0) goto code_r0x000140093815;
        uVar15 = ~(-1 << (int)(uVar57 & 0x1f));
        unaff_RDI = (undefined1 (*) [16])(lVar29 + (longlong)pauVar18 * 4 + -4);
        goto code_r0x000140093813;
      }
    }
code_r0x000140093815:
    uVar45 = (uint)pauVar21;
    puVar36 = (uint *)(*(longlong *)local_98[2] +
                      (ulonglong)(*(uint *)(puVar23 + 4) >> 3 & 0x1ffffffc));
    *puVar36 = *puVar36 | 1 << (*(uint *)(puVar23 + 4) & 0x1f);
    unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)(uVar39 >> 8),1);
    goto code_r0x000140093844;
  }
  if (unaff_RSI == pauVar26) {
code_r0x000140092a44:
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    uVar15 = 0xffffffff;
    goto code_r0x000140092a61;
  }
  if ((((char)*(uint *)*unaff_RSI == '\\') &&
      (pauVar21 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar21 != pauVar26)) &&
     ((((uVar46 & 8) == 0 && ((*(uint *)*pauVar21 & 0xfe) == 0x28)) ||
      (((uVar46 & 0x10) == 0 &&
       ((cVar14 = (char)*(uint *)*pauVar21, cVar14 == '}' || (cVar14 == '{')))))))) {
    unaff_RSI = pauVar21;
  }
  pauVar21 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
  *(undefined1 (**) [16])*local_98 = pauVar21;
  if (pauVar21 == pauVar26) goto code_r0x000140092a44;
  cVar14 = (char)*(uint *)*pauVar21;
  uVar47 = (uint)cVar14;
  auVar71 = ZEXT1664(auVar69);
  auVar72 = ZEXT1664(auVar70);
  pvVar19 = memchr(&DAT_140111e80,uVar47,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar15 = uVar47;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  pauVar18 = (undefined1 (*) [16])(ulonglong)(uVar47 - 10);
  switch(pauVar18) {
  case (undefined1 (*) [16])0x0:
    if ((uVar46 & 4) != 0) {
      uVar48 = 0x7c;
      uVar47 = uVar45;
      goto joined_r0x0001400928cb;
    }
    break;
  case (undefined1 (*) [16])0x1a:
    if ((((uVar46 & 0x2000000) != 0) &&
        (pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), pauVar22 != pauVar26)) &&
       (uVar48 = 0, (char)*(uint *)*pauVar22 != '\n')) goto code_r0x0001400931d5;
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    uVar48 = 0;
    uVar47 = uVar46 & 8;
joined_r0x0001400928cb:
    if (uVar47 != 0) break;
    goto code_r0x0001400931d5;
  case (undefined1 (*) [16])0x20:
    if ((uVar46 & 0x4000000) != 0) {
      uVar48 = 0;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar47 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar47 < 0x15) && ((0x102100U >> (uVar47 & 0x1f) & 1) != 0)) goto code_r0x0001400931d5;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400931d5;
      }
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    uVar47 = uVar46;
joined_r0x0001400931d3:
    uVar47 = uVar47 & 1;
    goto joined_r0x0001400930ab;
  case (undefined1 (*) [16])0x52:
    pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
    if (pauVar22 != pauVar26) {
      if (((uVar46 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*pauVar22, uVar48 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140093138:
        *(char *)local_88 = (char)uVar48;
        goto code_r0x0001400931d5;
      }
      if ((uVar46 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*pauVar22;
        uVar48 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140093138;
      }
    }
    break;
  case (undefined1 (*) [16])0x54:
    if ((uVar46 & 0x2000000) != 0) {
      uVar48 = 0;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar47 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if (uVar47 < 0x15) {
          uVar47 = 0x102100 >> (uVar47 & 0x1f);
          goto joined_r0x0001400931d3;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400931e1;
      }
      goto code_r0x0001400931d5;
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    uVar47 = uVar46 & 0x10;
    goto joined_r0x0001400930ab;
  case (undefined1 (*) [16])0x72:
    uVar47 = uVar46 & 2;
joined_r0x0001400930ab:
    uVar48 = 0;
    if (uVar47 == 0) {
code_r0x0001400931d5:
      *(uint *)*local_78 = uVar48;
      uVar15 = uVar48;
    }
  }
code_r0x0001400931e1:
  if ((((char)*(uint *)*pauVar21 == '\\') &&
      (pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), pauVar22 != pauVar26)) &&
     ((((uVar46 & 8) == 0 && ((*(uint *)*pauVar22 & 0xfe) == 0x28)) ||
      (((uVar46 & 0x10) == 0 &&
       ((cVar14 = (char)*(uint *)*pauVar22, cVar14 == '}' || (cVar14 == '{')))))))) {
    unaff_RSI = pauVar21;
  }
  pauVar21 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
  *(undefined1 (**) [16])*local_98 = pauVar21;
  if (pauVar21 == pauVar26) {
code_r0x000140092a61:
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    goto code_r0x000140092a71;
  }
  cVar14 = (char)*(uint *)*pauVar21;
  uVar48 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar48,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar47 = uVar48;
  if (pvVar19 == (void *)0x0) {
    uVar47 = 0;
  }
  *(uint *)*local_78 = uVar47;
  *(char *)local_88 = cVar14;
  pauVar18 = (undefined1 (*) [16])(ulonglong)(uVar48 - 10);
  switch(pauVar18) {
  case (undefined1 (*) [16])0x0:
    if (((uVar46 & 4) != 0) && (uVar45 == 0)) {
      *(uint *)*local_78 = 0x7c;
    }
    break;
  case (undefined1 (*) [16])0x1a:
    if ((((uVar46 & 0x2000000) != 0) &&
        (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 3), unaff_RSI != pauVar26)) &&
       ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x0001400935ea;
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    uVar46 = uVar46 & 8;
    goto joined_r0x0001400934a2;
  case (undefined1 (*) [16])0x20:
    if ((uVar46 & 0x4000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0)) goto code_r0x0001400935ea;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400935ea;
      }
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    uVar46 = uVar46 & 1;
    goto joined_r0x0001400934a2;
  case (undefined1 (*) [16])0x52:
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 3);
    if (unaff_RSI != pauVar26) {
      if (((uVar46 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*unaff_RSI, uVar47 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140093535:
        *(char *)local_88 = (char)uVar47;
        *(uint *)*local_78 = uVar47;
      }
      else if ((uVar46 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*unaff_RSI;
        uVar47 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140093535;
      }
    }
    break;
  case (undefined1 (*) [16])0x54:
    if ((uVar46 & 0x2000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if (uVar46 < 0x15) {
        uVar46 = 0x102100U >> (uVar46 & 0x1f) & 1;
        goto joined_r0x0001400934a2;
      }
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x000140092a71;
    }
    goto code_r0x0001400935ea;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    uVar46 = uVar46 & 0x10;
    goto joined_r0x0001400934a2;
  case (undefined1 (*) [16])0x72:
    uVar46 = uVar46 & 2;
joined_r0x0001400934a2:
    if (uVar46 == 0) {
code_r0x0001400935ea:
      *(uint *)*local_78 = 0;
    }
  }
code_r0x000140092a71:
  uVar42 = (ushort)unaff_RSI;
  if (uVar15 == 0x21) {
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    local_90 = operator_new(0x28);
    *(uint *)((longlong)*local_90 + 8) = 0xb;
    *(undefined1 (*) [16])((longlong)*local_90 + 0xc) = auVar72._0_16_;
    *(uint *)((longlong)local_90[1] + 0xc) = 0;
    *(undefined ***)*local_90 = std::_Node_assert::vftable;
    *(uint *)((longlong)(local_90 + 2) + 0) = 0;
    *(uint *)((longlong)(local_90 + 2) + 4) = 0;
    puVar23 = operator_new(0x20);
code_r0x000140092bff:
    unaff_RDI = local_90;
    *puVar23 = std::_Node_base::vftable;
    *(undefined4 *)(puVar23 + 1) = 1;
    *(undefined1 (*) [16])((longlong)puVar23 + 0xc) = auVar72._0_16_;
    *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
    pauVar18 = *(undefined1 (**) [16])*local_a0;
    *(undefined1 (**) [16])((longlong)local_90[1] + 8) = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      *(longlong *)local_90[1] = *(longlong *)pauVar18[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar18[1] + 0x18) = local_90;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar18[1] = local_90;
    *(undefined8 **)local_90[2] = puVar23;
    puVar23[3] = local_90;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    FUN_140086d20();
    uVar15 = *(uint *)((longlong)*unaff_RDI + 8) - 8;
    uVar17 = 0xe;
    if (uVar15 < 4) {
      uVar17 = (&DAT_1401123dc)[uVar15];
    }
    puVar23 = operator_new(0x28);
    *(undefined4 *)(puVar23 + 1) = uVar17;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    *puVar23 = std::_Node_end_group::vftable;
    puVar23[4] = unaff_RDI;
    pauVar18 = *(undefined1 (**) [16])*local_a0;
    puVar23[3] = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      puVar23[2] = *(longlong *)pauVar18[1];
      *(undefined8 **)(*(longlong *)pauVar18[1] + 0x18) = puVar23;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar18[1] = puVar23;
    *(undefined1 (**) [16])*local_a0 = unaff_RDI;
    unaff_RSI = (undefined1 (*) [16])0x0;
  }
  else {
    if (uVar15 == 0x3d) {
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      local_90 = operator_new(0x28);
      *(uint *)((longlong)*local_90 + 8) = 10;
      *(undefined1 (*) [16])((longlong)*local_90 + 0xc) = auVar72._0_16_;
      *(uint *)((longlong)local_90[1] + 0xc) = 0;
      *(undefined ***)*local_90 = std::_Node_assert::vftable;
      *(uint *)((longlong)(local_90 + 2) + 0) = 0;
      *(uint *)((longlong)(local_90 + 2) + 4) = 0;
      puVar23 = operator_new(0x20);
      goto code_r0x000140092bff;
    }
    unaff_RDI = pauVar18;
    if (uVar15 != 0x3a) goto code_r0x0001400a1b09;
code_r0x000140092a8f:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x20);
    *puVar23 = std::_Node_base::vftable;
    *(undefined4 *)(puVar23 + 1) = 8;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    pauVar18 = *(undefined1 (**) [16])*local_a0;
    puVar23[3] = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      puVar23[2] = *(longlong *)pauVar18[1];
      *(undefined8 **)(*(longlong *)pauVar18[1] + 0x18) = puVar23;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar18[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    FUN_140086d20();
    uVar39 = 0xe;
    if (*(int *)(puVar23 + 1) - 8U < 4) {
      uVar39 = (ulonglong)(uint)(&DAT_1401123dc)[*(int *)(puVar23 + 1) - 8U];
    }
    pauVar21 = operator_new(0x28);
    *(int *)((longlong)*pauVar21 + 8) = (int)uVar39;
    *(undefined8 *)((longlong)*pauVar21 + 0xc) = 0;
    *(undefined4 *)(pauVar21[1] + 4) = 0;
    *(undefined ***)*pauVar21 = std::_Node_end_group::vftable;
    *(undefined8 **)pauVar21[2] = puVar23;
    pauVar18 = *(undefined1 (**) [16])*local_a0;
    *(undefined1 (**) [16])(pauVar21[1] + 8) = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      *(longlong *)pauVar21[1] = *(longlong *)pauVar18[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar18[1] + 0x18) = pauVar21;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar18[1] = pauVar21;
    *(undefined1 (**) [16])*local_a0 = pauVar21;
    unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)(uVar39 >> 8),1);
  }
code_r0x000140093844:
  pcVar43 = (char *)&DAT_1400a4460;
  uVar15 = *local_c0;
  *local_c0 = uVar15 - 1;
  if (*(uint *)*local_78 != 0x29) goto code_r0x0001400a1955;
  unaff_RBX = *(undefined1 (**) [16])*local_98;
  pauVar26 = *(undefined1 (**) [16])local_98[1];
  if (unaff_RBX != pauVar26) {
    if ((((char)*(uint *)*unaff_RBX == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1), pauVar18 != pauVar26)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      unaff_RBX = pauVar18;
    }
    unaff_RBX = (undefined1 (*) [16])((longlong)*unaff_RBX + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RBX;
  }
  if (unaff_RBX == pauVar26) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    goto code_r0x000140093ad3;
  }
  cVar14 = (char)*(uint *)*unaff_RBX;
  uVar46 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  uVar45 = uVar46;
  if (pvVar19 == (void *)0x0) {
    uVar45 = 0;
  }
  *(uint *)*local_78 = uVar45;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
    if (((*(uint *)*local_80 & 4) != 0) && (uVar15 - 1 == 0)) {
      *(uint *)*local_78 = 0x7c;
    }
    break;
  case (undefined1 (*) [16])0x1a:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (unaff_RBX = (undefined1 (*) [16])((longlong)*unaff_RBX + 1), unaff_RBX != pauVar26)) &&
       ((char)*(uint *)*unaff_RBX != '\n')) goto code_r0x000140093ac6;
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x000140093950;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x000140093ac6;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x000140093ac6;
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140093950:
    if (bVar10 == 0) {
code_r0x000140093ac6:
      *(uint *)*local_78 = 0;
    }
    break;
  case (undefined1 (*) [16])0x52:
    unaff_RBX = (undefined1 (*) [16])((longlong)*unaff_RBX + 1);
    if (unaff_RBX != pauVar26) {
      if (((*(uint *)*local_80 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*unaff_RBX, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140093a1c:
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
      }
      else if ((*(uint *)*local_80 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*unaff_RBX;
        uVar15 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140093a1c;
      }
    }
    break;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x000140093ac6;
        break;
      default:
        goto code_r0x000140093ac6;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x00014009397a;
  case (undefined1 (*) [16])0x72:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009397a:
    if (bVar10 != 0) break;
    goto code_r0x000140093ac6;
  }
code_r0x000140093ad3:
  ppuVar55 = (undefined **)0x0;
  if ((char)unaff_RSI == '\0') goto LAB_140086dd0;
code_r0x0001400900a8:
  uVar15 = *(uint *)*local_78;
LAB_1400900b1:
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar45 = 0;
  ppuVar55 = (undefined **)0x0;
  if ((int)uVar15 < 0x3f) {
    uVar45 = 0;
    if (uVar15 != 0x2a) {
      ppuVar55 = (undefined **)(undefined1 (*) [16])0x0;
      if (uVar15 != 0x2b) goto LAB_140086dd0;
      uVar45 = 1;
    }
    goto LAB_140091510;
  }
  if (uVar15 == 0x3f) {
    unaff_RDI = (undefined1 (*) [16])0x1;
    goto LAB_140091515;
  }
  if (uVar15 != 0x7b) goto LAB_140086dd0;
  pauVar21 = *(undefined1 (**) [16])*local_98;
  pauVar26 = *(undefined1 (**) [16])local_98[1];
  if (pauVar21 != pauVar26) {
    if ((((char)*(uint *)*pauVar21 == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar21 + 1), pauVar18 != pauVar26)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))
        ))) {
      pauVar21 = pauVar18;
    }
    pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar21;
  }
  if (pauVar21 == pauVar26) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
    goto LAB_140090bd7;
  }
  bVar10 = (byte)*(uint *)*pauVar21;
  unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
  uVar45 = (uint)(char)bVar10;
  auVar71 = ZEXT1664(auVar69);
  auVar72 = ZEXT1664(auVar70);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  switch(uVar45) {
  case 10:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
    }
    break;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar21 + 1), pauVar18 != pauVar26)) &&
       ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x000140090bca;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x0001400906ed;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x000140090bca;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x000140090bca;
    }
    break;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x0001400906ed:
    if (bVar10 == 0) {
code_r0x000140090bca:
      *(uint *)*local_78 = 0;
    }
    break;
  case 0x5c:
    pauVar18 = (undefined1 (*) [16])((longlong)*pauVar21 + 1);
    if (pauVar18 != pauVar26) {
      if (((*(uint *)*local_80 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140090b1e:
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
        unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
      }
      else if ((*(uint *)*local_80 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*pauVar18;
        uVar15 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140090b1e;
      }
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x000140090bca;
        break;
      default:
        goto code_r0x000140090bca;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x000140090a73;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140090a73:
    if (bVar10 != 0) break;
    goto code_r0x000140090bca;
  }
LAB_140090bd7:
  *(uint *)*local_b0 = 0;
  ppuVar55 = (undefined **)(undefined1 (*) [16])0x0;
  if ((byte)((char)unaff_RSI - 0x3aU) < 0xf6) goto LAB_1400a1abd;
  uVar15 = *(uint *)*local_80;
  local_d8 = *(undefined1 (**) [16])*local_a0;
  local_e8 = (undefined1 (*) [16])CONCAT71(local_e8._1_7_,(byte)uVar15 >> 2 & *local_c0 == 0);
  local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,uVar15);
  auVar64._4_4_ = uVar15;
  auVar64._0_4_ = uVar15;
  auVar64._8_4_ = uVar15;
  auVar64._12_4_ = uVar15;
  auVar69 = vpand_avx(auVar64,auVar71._0_16_);
  auVar69 = vpcmpeqd_avx(auVar69,auVar72._0_16_);
  local_dc = vmovmskps_avx(auVar69);
  bVar10 = (byte)local_dc;
  local_ec = CONCAT31(local_ec._1_3_,bVar10 >> 3);
  local_b8 = (undefined1 (*) [16])CONCAT71(local_b8._1_7_,(bVar10 & 4) >> 2);
  local_c8 = (undefined1 (*) [16])CONCAT71(local_c8._1_7_,(bVar10 & 2) >> 1);
  ppuVar55 = (undefined **)0x0;
  iVar58 = -0x7ffffffe;
  do {
    uVar15 = (uint)unaff_RSI & 0xff;
    if ((int)((0x8000002f - uVar15) / 10) < (int)ppuVar55) goto LAB_1400a1abd;
    uVar45 = (uVar15 + (int)ppuVar55 * 10) - 0x30;
    ppuVar55 = (undefined **)(ulonglong)uVar45;
    *(uint *)*local_b0 = uVar45;
    pcVar43 = (char *)pauVar21;
    if (pauVar21 == pauVar26) goto LAB_1400a1924;
    if ((((char)*(uint *)*pauVar21 == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar21 + 1), pauVar18 != pauVar26)) &&
       (((((ulonglong)local_90 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        ((((ulonglong)local_90 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      pcVar43 = (char *)pauVar18;
    }
    pauVar21 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar21;
    if (pauVar21 == pauVar26) goto LAB_1400a1924;
    bVar10 = (byte)*(uint *)*pauVar21;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar46 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    auVar70 = auVar72._0_16_;
    auVar69 = auVar71._0_16_;
    uVar15 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    switch(uVar46) {
    case 10:
      if ((char)local_e8 != '\0') {
        *(uint *)*local_78 = 0x7c;
        uVar15 = 0x7c;
      }
      break;
    case 0x24:
      if ((((char)local_c8 == '\0') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2),
          pauVar18 != pauVar26)) && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x000140090ed0;
      break;
    case 0x28:
    case 0x29:
      uVar39 = (ulonglong)local_90 & 8;
      goto joined_r0x000140090d7a;
    case 0x2a:
      if ((local_dc & 1) != 0) break;
      switch(*(undefined4 *)(*local_d8 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
        if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0)) goto code_r0x000140090ed0;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140090ed0;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar12 = (char)local_b8;
      goto joined_r0x000140090d89;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2);
      if (pauVar18 != pauVar26) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar46 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140090e21:
          *(char *)local_88 = (char)uVar46;
          *(uint *)*local_78 = uVar46;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar46;
          uVar15 = uVar46;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar46 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140090e21;
        }
      }
      break;
    case 0x5e:
      if ((char)local_c8 == '\0') {
        switch(*(undefined4 *)(*local_d8 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
          if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0))
          goto code_r0x000140090ed0;
          break;
        default:
          goto code_r0x000140090ed0;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar39 = (ulonglong)local_90 & 0x10;
joined_r0x000140090d7a:
      if (uVar39 == 0) {
code_r0x000140090ed0:
        *(uint *)*local_78 = 0;
        uVar15 = 0;
      }
      break;
    case 0x7c:
      uVar12 = (undefined1)local_ec;
joined_r0x000140090d89:
      if (uVar12 == '\0') break;
      goto code_r0x000140090ed0;
    }
  } while ((iVar58 != 0) && (iVar58 = iVar58 + 1, (byte)((char)unaff_RSI - 0x30U) < 10));
  unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar45;
  if (uVar15 != 0x2c) goto LAB_1400914f7;
  pauVar18 = (undefined1 (*) [16])ppuVar55;
  if (pauVar21 == pauVar26) goto LAB_1400a1a9c;
  if ((((char)*(uint *)*pauVar21 == '\\') &&
      (pauVar22 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2),
      pauVar22 != pauVar26)) &&
     (((((ulonglong)local_90 & 8) == 0 && ((*(uint *)*pauVar22 & 0xfe) == 0x28)) ||
      ((((ulonglong)local_90 & 0x10) == 0 &&
       ((cVar14 = (char)*(uint *)*pauVar22, cVar14 == '}' || (cVar14 == '{')))))))) {
    pauVar21 = pauVar22;
  }
  pauVar22 = (undefined1 (*) [16])((longlong)*pauVar21 + 1);
  *(undefined1 (**) [16])*local_98 = pauVar22;
  if (pauVar22 == pauVar26) goto LAB_1400a1a9c;
  bVar10 = (byte)*(uint *)*pauVar22;
  unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
  uVar46 = (uint)(char)bVar10;
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar15 = uVar46;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  switch(uVar46) {
  case 10:
    uVar46 = 0x7c;
    if ((char)local_e8 != '\0') goto code_r0x000140091214;
    break;
  case 0x24:
    if ((((char)local_c8 == '\0') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar21 + 2), pauVar18 != pauVar26)) &&
       (uVar46 = 0, (char)*(uint *)*pauVar18 != '\n')) goto code_r0x000140091214;
    break;
  case 0x28:
  case 0x29:
    uVar39 = (ulonglong)local_90 & 8;
    goto joined_r0x000140090fe5;
  case 0x2a:
    if ((local_dc & 1) != 0) break;
    uVar46 = 0;
    switch(*(undefined4 *)(*local_d8 + 8)) {
    case 2:
      uVar47 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
      if ((uVar47 < 0x15) && ((0x102100U >> (uVar47 & 0x1f) & 1) != 0)) goto code_r0x000140091214;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x000140091214;
    }
    break;
  case 0x2b:
  case 0x3f:
    uVar12 = (char)local_b8;
    goto joined_r0x0001400910d7;
  case 0x5c:
    pauVar18 = (undefined1 (*) [16])((longlong)*pauVar21 + 2);
    if (pauVar18 != pauVar26) {
      if ((((ulonglong)local_90 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*pauVar18, uVar46 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140091161:
        *(char *)local_88 = (char)uVar46;
        *(uint *)*local_78 = uVar46;
        unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar46;
        uVar15 = uVar46;
      }
      else if (((ulonglong)local_90 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*pauVar18;
        uVar46 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140091161;
      }
    }
    break;
  case 0x5e:
    if ((char)local_c8 == '\0') {
      uVar46 = 0;
      switch(*(undefined4 *)(*local_d8 + 8)) {
      case 2:
        uVar47 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
        if ((0x14 < uVar47) || ((0x102100U >> (uVar47 & 0x1f) & 1) == 0)) goto code_r0x000140091214;
        break;
      default:
        goto code_r0x000140091214;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    uVar39 = (ulonglong)local_90 & 0x10;
joined_r0x000140090fe5:
    uVar46 = 0;
    if (uVar39 != 0) break;
code_r0x000140091214:
    *(uint *)*local_78 = uVar46;
    goto LAB_14009121d;
  case 0x7c:
    uVar12 = (undefined1)local_ec;
joined_r0x0001400910d7:
    uVar46 = 0;
    if (uVar12 == '\0') break;
    goto code_r0x000140091214;
  }
  if (uVar15 == 0x7d) {
LAB_140091510:
    unaff_RDI = (undefined1 (*) [16])0xffffffff;
  }
  else {
LAB_14009121d:
    *(uint *)*local_b0 = 0;
    if ((byte)((char)unaff_RSI - 0x3aU) < 0xf6) goto LAB_1400a1abd;
    unaff_RDI = (undefined1 (*) [16])0x0;
    iVar58 = -0x7ffffffe;
    do {
      if ((int)((0x8000002fU - (int)unaff_RSI) / 10) < (int)unaff_RDI) goto LAB_1400a1abd;
      uVar15 = ((int)unaff_RSI + (int)unaff_RDI * 10) - 0x30;
      unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
      *(uint *)*local_b0 = uVar15;
      pcVar43 = (char *)pauVar22;
      if (pauVar22 == pauVar26) goto LAB_1400a1924;
      if ((((char)*(uint *)*pauVar22 == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar18 != pauVar26)) &&
         (((((ulonglong)local_90 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
          ((((ulonglong)local_90 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
        pcVar43 = (char *)pauVar18;
      }
      pauVar22 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1);
      *(undefined1 (**) [16])*local_98 = pauVar22;
      if (pauVar22 == pauVar26) goto LAB_1400a1924;
      local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,iVar58);
      bVar10 = (byte)*(uint *)*pauVar22;
      unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
      uVar46 = (uint)(char)bVar10;
      pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
      auVar70 = auVar72._0_16_;
      auVar69 = auVar71._0_16_;
      uVar15 = uVar46;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(byte *)local_88 = bVar10;
      switch(uVar46) {
      case 10:
        if ((char)local_e8 != '\0') {
          *(uint *)*local_78 = 0x7c;
          uVar15 = 0x7c;
        }
        break;
      case 0x24:
        if ((((char)local_c8 == '\0') &&
            (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2),
            pauVar18 != pauVar26)) && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x0001400914c0;
        break;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)local_90 & 8;
        goto joined_r0x000140091372;
      case 0x2a:
        if ((local_dc & 1) != 0) break;
        switch(*(undefined4 *)(*local_d8 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
          if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0))
          goto code_r0x0001400914c0;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x0001400914c0;
        }
        break;
      case 0x2b:
      case 0x3f:
        uVar12 = (char)local_b8;
        goto joined_r0x000140091381;
      case 0x5c:
        pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2);
        if (pauVar18 != pauVar26) {
          if ((((ulonglong)local_90 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*pauVar18, uVar46 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140091416:
            *(char *)local_88 = (char)uVar46;
            *(uint *)*local_78 = uVar46;
            unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar46;
            uVar15 = uVar46;
          }
          else if (((ulonglong)local_90 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*pauVar18;
            uVar46 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140091416;
          }
        }
        break;
      case 0x5e:
        if ((char)local_c8 == '\0') {
          switch(*(undefined4 *)(*local_d8 + 8)) {
          case 2:
            uVar46 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
            if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0))
            goto code_r0x0001400914c0;
            break;
          default:
            goto code_r0x0001400914c0;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)local_90 & 0x10;
joined_r0x000140091372:
        if (uVar39 == 0) {
code_r0x0001400914c0:
          *(uint *)*local_78 = 0;
          uVar15 = 0;
        }
        break;
      case 0x7c:
        uVar12 = (undefined1)local_ec;
joined_r0x000140091381:
        if (uVar12 == '\0') break;
        goto code_r0x0001400914c0;
      }
    } while (((uint)local_a8 != 0) &&
            (iVar58 = (uint)local_a8 + 1, (byte)((char)unaff_RSI - 0x30U) < 10));
LAB_1400914f7:
    unaff_RSI = (undefined1 (*) [16])0x0;
    if (uVar15 != 0x7d) goto LAB_1400a1abd;
    if ((int)unaff_RDI == -1) goto LAB_140091510;
    if ((int)unaff_RDI < (int)uVar45) goto LAB_1400a1abd;
  }
LAB_140091515:
  puVar36 = (uint *)(*(longlong *)((longlong)local_98[4] + 8) + 0xc);
  *puVar36 = *puVar36 | 4;
  pbVar41 = *(byte **)*local_98;
  pbVar4 = *(byte **)local_98[1];
  if (pbVar41 != pbVar4) {
    if (((*pbVar41 == 0x5c) && (pbVar2 = pbVar41 + 1, pbVar2 != pbVar4)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*pbVar2 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && ((*pbVar2 == 0x7d || (*pbVar2 == 0x7b)))))))) {
      pbVar41 = pbVar2;
    }
    pbVar41 = pbVar41 + 1;
    *(byte **)*local_98 = pbVar41;
  }
  uVar44 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (pbVar41 == pbVar4) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,1);
    goto LAB_140091a40;
  }
  bVar10 = *pbVar41;
  uVar46 = (uint)(char)bVar10;
  auVar71 = ZEXT1664(auVar69);
  auVar72 = ZEXT1664(auVar70);
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar15 = uVar46;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  switch(uVar46) {
  case 10:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,1);
      goto LAB_140091a40;
    }
    break;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) && (pbVar41 + 1 != pbVar4)) && (pbVar41[1] != 10))
    goto code_r0x0001400917b2;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x000140091653;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0)) goto code_r0x0001400917b2;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400917b2;
    }
    break;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x000140091653;
  case 0x5c:
    pbVar2 = pbVar41 + 1;
    if (pbVar2 != pbVar4) {
      if ((*(uint *)*local_80 & 8) == 0) {
        param_4 = (undefined1 (*) [16])((ulonglong)*pbVar2 & 0xfffffffffffffffe);
        uVar46 = (uint)*pbVar2;
        if ((char)param_4 != '(') goto code_r0x0001400916e9;
code_r0x000140091704:
        uVar15 = uVar46;
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
      }
      else {
code_r0x0001400916e9:
        if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = *pbVar2;
          uVar46 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140091704;
        }
      }
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0)) goto code_r0x0001400917b2;
        break;
      default:
        goto code_r0x0001400917b2;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x000140091653;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140091653:
    if (bVar10 != 0) break;
code_r0x0001400917b2:
    *(uint *)*local_78 = 0;
    unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,1);
    goto LAB_140091a40;
  }
  uVar46 = *(uint *)*local_80;
  unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,1);
  if (((uVar46 & 0x400) == 0) || (uVar15 != 0x3f)) goto LAB_140091a40;
  if (((*pbVar41 == 0x5c) && (pbVar2 = pbVar41 + 1, pbVar2 != pbVar4)) &&
     ((((uVar46 & 8) == 0 && ((*pbVar2 & 0xfe) == 0x28)) ||
      (((uVar46 & 0x10) == 0 && ((*pbVar2 == 0x7d || (*pbVar2 == 0x7b)))))))) {
    pbVar41 = pbVar2;
  }
  pbVar2 = pbVar41 + 1;
  *(byte **)*local_98 = pbVar2;
  if (pbVar2 == pbVar4) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    unaff_RSI = (undefined1 (*) [16])0x0;
    goto LAB_140091a40;
  }
  bVar10 = *pbVar2;
  uVar47 = (uint)(char)bVar10;
  pvVar19 = memchr(&DAT_140111e80,uVar47,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  unaff_RSI = (undefined1 (*) [16])0x0;
  uVar15 = uVar47;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  switch(uVar47) {
  case 10:
    unaff_RSI = (undefined1 (*) [16])0x0;
    if (((uVar46 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      break;
    }
  default:
    goto LAB_140091a40;
  case 0x24:
    if ((((uVar46 & 0x2000000) != 0) && (pbVar41 + 2 != pbVar4)) && (pbVar41[2] != 10))
    goto code_r0x000140091a25;
    break;
  case 0x28:
  case 0x29:
    uVar46 = uVar46 & 8;
    goto joined_r0x0001400918c2;
  case 0x2a:
    if ((uVar46 & 0x4000000) == 0) break;
    unaff_RSI = (undefined1 (*) [16])0x0;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      unaff_RSI = (undefined1 (*) [16])0x0;
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x000140091a25;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x000140091a25;
    }
    goto LAB_140091a40;
  case 0x2b:
  case 0x3f:
    uVar46 = uVar46 & 1;
joined_r0x0001400918c2:
    if (uVar46 == 0) {
code_r0x000140091a25:
      *(uint *)*local_78 = 0;
    }
    break;
  case 0x5c:
    pbVar41 = pbVar41 + 2;
    if (pbVar41 != pbVar4) {
      if (((uVar46 & 8) == 0) && (uVar15 = (uint)*pbVar41, (*pbVar41 & 0xfe) == 0x28)) {
code_r0x000140091979:
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
      }
      else if ((uVar46 & 0x10) == 0) {
        bVar10 = *pbVar41;
        uVar15 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140091979;
      }
    }
    break;
  case 0x5e:
    if ((uVar46 & 0x2000000) != 0) {
      unaff_RSI = (undefined1 (*) [16])0x0;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if (uVar15 < 0x15) {
          uVar46 = 0x102100U >> (uVar15 & 0x1f) & 1;
          goto joined_r0x0001400918e0;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto LAB_140091a40;
      }
      goto code_r0x000140091a25;
    }
    break;
  case 0x7b:
  case 0x7d:
    uVar46 = uVar46 & 0x10;
    goto joined_r0x0001400918e0;
  case 0x7c:
    uVar46 = uVar46 & 2;
joined_r0x0001400918e0:
    if (uVar46 != 0) break;
    goto code_r0x000140091a25;
  }
  unaff_RSI = (undefined1 (*) [16])0x0;
LAB_140091a40:
  pauVar26 = *(undefined1 (**) [16])*local_a0;
  uVar15 = *(uint *)((longlong)*pauVar26 + 8);
  if (uVar15 == 6) {
    unaff_RBX = pauVar26;
    if (*(uint *)((longlong)pauVar26[2] + 4) == 1) goto joined_r0x000140091c04;
    lVar29 = *(longlong *)((longlong)pauVar26[2] + 8);
    uVar15 = *(uint *)((longlong)pauVar26[2] + 4) - 1;
    *(uint *)((longlong)pauVar26[2] + 4) = uVar15;
    uVar12 = *(undefined1 *)(lVar29 + (ulonglong)uVar15);
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    if ((*(int *)(*pauVar26 + 8) != 6) || (((*pauVar26)[0xc] & 4) != 0)) {
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pauVar18 = operator_new(0x30);
      auVar69 = auVar71._0_16_;
      *(undefined4 *)((longlong)*pauVar18 + 8) = 6;
      *(undefined8 *)((longlong)*pauVar18 + 0xc) = 0;
      *(undefined4 *)(pauVar18[1] + 4) = 0;
      *(undefined ***)*pauVar18 = std::_Node_str<char>::vftable;
      auVar70 = auVar72._0_16_;
      pauVar18[2] = auVar70;
      *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
      if (*(longlong *)pauVar26[1] != 0) {
        *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
        *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
        pauVar26 = *(undefined1 (**) [16])*local_a0;
      }
      *(undefined1 (**) [16])pauVar26[1] = pauVar18;
      *(undefined1 (**) [16])*local_a0 = pauVar18;
    }
    if ((*(uint *)local_98[5] & 0x100) == 0) {
      if ((*(uint *)local_98[5] & 0x800) != 0) {
        local_138[0] = uVar12;
        plVar3 = *(longlong **)**(undefined1 (**) [16])*local_d0;
        param_4 = (undefined1 (*) [16])(local_138 + 1);
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 (*) [16])local_110,&local_138);
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
        pauVar26 = (undefined1 (*) [16])local_110;
        if (0xf < uStack_f8) {
          pauVar26 = local_110[0];
        }
        if (lStack_100 != 1) {
          pauVar26 = &local_138;
        }
        uVar12 = (*pauVar26)[0];
        if (0xf < uStack_f8) {
          pauVar26 = local_110[0];
          if ((0xfff < uStack_f8 + 1) &&
             (pauVar26 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
             0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar26))))
          goto LAB_1400a3888;
          free(pauVar26);
          auVar70 = auVar72._0_16_;
          auVar69 = auVar71._0_16_;
        }
      }
    }
    else {
      plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      uVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar12);
      auVar70 = auVar72._0_16_;
      auVar69 = auVar71._0_16_;
    }
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    uVar15 = *(uint *)(pauVar26[2] + 4);
    if (uVar15 < *(uint *)pauVar26[2]) {
      pvVar19 = *(void **)(pauVar26[2] + 8);
    }
    else {
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pvVar19 = realloc(*(void **)(pauVar26[2] + 8),(ulonglong)(uVar15 + 0x10));
      auVar70 = auVar72._0_16_;
      auVar69 = auVar71._0_16_;
      if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
      *(void **)(pauVar26[2] + 8) = pvVar19;
      *(uint *)pauVar26[2] = uVar15 + 0x10;
      uVar15 = *(uint *)(pauVar26[2] + 4);
    }
    *(uint *)(pauVar26[2] + 4) = uVar15 + 1;
    *(undefined1 *)((longlong)pvVar19 + (ulonglong)uVar15) = uVar12;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    uVar15 = *(uint *)((longlong)*pauVar26 + 8);
  }
  if ((uVar15 == 0xe) || (unaff_RBX = pauVar26, uVar15 == 9)) {
    unaff_RBX = *(undefined1 (**) [16])pauVar26[2];
  }
joined_r0x000140091c04:
  if (((int)unaff_RDI == 1) && (uVar45 == 0)) {
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar18 = operator_new(0x20);
    *(undefined4 *)((longlong)*pauVar18 + 8) = 0x11;
    *(undefined1 (*) [16])((longlong)*pauVar18 + 0xc) = auVar72._0_16_;
    *(undefined4 *)(pauVar18[1] + 0xc) = 0;
    *(undefined ***)*pauVar18 = std::_Node_endif::vftable;
    puVar23 = operator_new(0x30);
    *(undefined4 *)(puVar23 + 1) = 0x10;
    *(undefined1 (*) [16])((longlong)puVar23 + 0xc) = auVar72._0_16_;
    *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
    *puVar23 = std::_Node_if::vftable;
    puVar23[4] = pauVar18;
    puVar23[5] = 0;
    pauVar21 = operator_new(0x30);
    *(undefined4 *)((longlong)*pauVar21 + 8) = 0x10;
    *(undefined1 (*) [16])((longlong)*pauVar21 + 0xc) = auVar72._0_16_;
    *(undefined4 *)(pauVar21[1] + 0xc) = 0;
    *(undefined ***)*pauVar21 = std::_Node_if::vftable;
    *(undefined1 (**) [16])pauVar21[2] = pauVar18;
    *(undefined8 *)(pauVar21[2] + 8) = 0;
    unaff_RDI = operator_new(0x20);
    *(undefined ***)*unaff_RDI = std::_Node_base::vftable;
    *(uint *)((longlong)*unaff_RDI + 8) = 8;
    *(undefined1 (*) [16])((longlong)*unaff_RDI + 0xc) = auVar72._0_16_;
    *(uint *)((longlong)unaff_RDI[1] + 0xc) = 0;
    pauVar22 = operator_new(0x28);
    *(undefined8 *)((longlong)*pauVar22 + 8) = 9;
    *(undefined ***)*pauVar22 = std::_Node_end_group::vftable;
    *(undefined1 (**) [16])pauVar22[2] = unaff_RDI;
    *(undefined1 (**) [16])pauVar21[1] = unaff_RDI;
    *(undefined1 (**) [16])((longlong)unaff_RDI[1] + 8) = pauVar21;
    *(undefined1 (**) [16])unaff_RDI[1] = pauVar22;
    *(undefined1 (**) [16])(pauVar22[1] + 8) = unaff_RDI;
    *(undefined1 (**) [16])pauVar22[1] = pauVar18;
    puVar23[5] = pauVar21;
    *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar18;
    *(undefined1 (**) [16])*local_a0 = pauVar18;
    *(undefined8 **)(*(longlong *)((longlong)unaff_RBX[1] + 8) + 0x10) = puVar23;
    puVar23[3] = *(undefined8 *)((longlong)unaff_RBX[1] + 8);
    *(undefined8 **)((longlong)unaff_RBX[1] + 8) = puVar23;
    puVar23[2] = unaff_RBX;
    ppuVar55 = (undefined **)0x0;
    if ((char)unaff_RSI == '\0') {
      lVar29 = *(longlong *)pauVar21[1];
      uVar5 = *(undefined8 *)((longlong)unaff_RBX[1] + 8);
      *(undefined8 *)((longlong)unaff_RBX[1] + 8) = *(undefined8 *)(lVar29 + 0x18);
      *(undefined8 *)(lVar29 + 0x18) = uVar5;
      uVar5 = puVar23[2];
      puVar23[2] = *(undefined8 *)pauVar21[1];
      *(undefined8 *)pauVar21[1] = uVar5;
      ppuVar55 = (undefined **)0x0;
    }
  }
  else {
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar18 = operator_new(0x28);
    *(undefined4 *)((longlong)*pauVar18 + 8) = 0x13;
    *(undefined1 (*) [16])((longlong)*pauVar18 + 0xc) = auVar72._0_16_;
    *(undefined4 *)(pauVar18[1] + 0xc) = 0;
    *(undefined ***)*pauVar18 = std::_Node_end_rep::vftable;
    *(undefined8 *)pauVar18[2] = 0;
    puVar23 = operator_new(0x38);
    iVar58 = *(int *)(*(longlong *)local_98[4] + 0x24);
    *(int *)(*(longlong *)local_98[4] + 0x24) = iVar58 + 1;
    *(undefined4 *)(puVar23 + 1) = 0x12;
    *(uint *)((longlong)puVar23 + 0xc) = ((uint)unaff_RSI & 0xff) * 2;
    *(undefined1 (*) [16])(puVar23 + 2) = auVar72._0_16_;
    *puVar23 = std::_Node_rep::vftable;
    *(uint *)(puVar23 + 4) = uVar45;
    *(int *)((longlong)puVar23 + 0x24) = (int)unaff_RDI;
    puVar23[5] = pauVar18;
    *(int *)(puVar23 + 6) = iVar58;
    *(undefined4 *)((longlong)puVar23 + 0x34) = 0xffffffff;
    *(undefined8 **)pauVar18[2] = puVar23;
    pauVar26 = *(undefined1 (**) [16])((longlong)local_98[4] + 8);
    *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar18;
    *(undefined1 (**) [16])*local_a0 = pauVar18;
    *(undefined8 **)(*(longlong *)((longlong)unaff_RBX[1] + 8) + 0x10) = puVar23;
    puVar23[3] = *(undefined8 *)((longlong)unaff_RBX[1] + 8);
    *(undefined8 **)((longlong)unaff_RBX[1] + 8) = puVar23;
    puVar23[2] = unaff_RBX;
    ppuVar55 = (undefined **)0x0;
    param_4 = local_98;
  }
  goto LAB_140086dd0;
LAB_1400945d0:
  if (*(uint *)*local_78 != 0x7c) {
                    /* WARNING: Read-only address (ram,0x00014010b170) is written */
    return;
  }
  unaff_RSI = *(undefined1 (**) [16])*local_98;
  pauVar26 = *(undefined1 (**) [16])local_98[1];
  if (unaff_RSI != pauVar26) {
    if ((((char)*(uint *)*unaff_RSI == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      unaff_RSI = pauVar18;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
  }
  if (unaff_RSI == pauVar26) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    uVar15 = 0xffffffff;
    goto LAB_140094870;
  }
  cVar14 = (char)*(uint *)*unaff_RSI;
  uVar45 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      uVar15 = 0x7c;
    }
    break;
  case (undefined1 (*) [16])0x1a:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI != pauVar26)) &&
       ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x000140094861;
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x0001400946db;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x000140094861;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x000140094861;
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x0001400946db:
    if (bVar10 == 0) {
code_r0x000140094861:
      *(uint *)*local_78 = 0;
      uVar15 = 0;
    }
    break;
  case (undefined1 (*) [16])0x52:
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    if (unaff_RSI != pauVar26) {
      if (((*(uint *)*local_80 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*unaff_RSI, uVar45 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400947b3:
        uVar15 = uVar45;
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
      }
      else if ((*(uint *)*local_80 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*unaff_RSI;
        uVar45 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400947b3;
      }
    }
    break;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0)) goto code_r0x000140094861;
        break;
      default:
        goto code_r0x000140094861;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x000140094705;
  case (undefined1 (*) [16])0x72:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140094705:
    if (bVar10 != 0) break;
    goto code_r0x000140094861;
  }
LAB_140094870:
  bVar62 = true;
LAB_1400948a2:
  uVar45 = (uint)ppuVar55;
  auVar69 = auVar71._0_16_;
  auVar70 = auVar72._0_16_;
  switch(uVar15) {
  case 0x24:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x20);
    *puVar23 = std::_Node_base::vftable;
    *(undefined4 *)(puVar23 + 1) = 3;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    puVar23[3] = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      puVar23[2] = *(longlong *)pauVar26[1];
      *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar26[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar18 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar18) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar18) goto LAB_140094880;
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      goto code_r0x000140096684;
    case (undefined1 (*) [16])0x1a:
      goto code_r0x0001400966a6;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      goto code_r0x000140096630;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(puVar23 + 1)) {
      case 2:
        goto code_r0x00014009f586;
      default:
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009f5a4;
      }
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      goto code_r0x000140096645;
    case (undefined1 (*) [16])0x52:
      goto code_r0x0001400966d1;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(puVar23 + 1)) {
        case 2:
          goto code_r0x00014009f5e3;
        default:
          goto code_r0x00014009f5a4;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      goto code_r0x00014009665a;
    case (undefined1 (*) [16])0x72:
      goto code_r0x00014009666f;
    }
    goto LAB_140094897;
  case 0x28:
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar26 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar26) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar18;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar26) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      uVar15 = 0xffffffff;
      pauVar18 = unaff_RDI;
      goto code_r0x000140096ab3;
    }
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    auVar70 = auVar72._0_16_;
    auVar69 = auVar71._0_16_;
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    pauVar18 = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    switch(pauVar18) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
        uVar15 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar22 != pauVar26)) &&
         ((char)*(uint *)*pauVar22 != '\n')) goto code_r0x000140096aa4;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x00014009566f;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x000140096aa4;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140096aa4;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x00014009566f:
      if (bVar10 == 0) {
code_r0x000140096aa4:
        *(uint *)*local_78 = 0;
        uVar15 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (pauVar22 != pauVar26) {
        if ((*(uint *)*local_80 & 8) == 0) {
          bVar10 = (byte)*(uint *)*pauVar22;
          param_4 = (undefined1 (*) [16])((ulonglong)bVar10 & 0xfffffffffffffffe);
          uVar45 = (uint)bVar10;
          if ((char)param_4 != '(') goto code_r0x000140096765;
code_r0x000140096780:
          uVar15 = uVar45;
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
        }
        else {
code_r0x000140096765:
          if ((*(uint *)*local_80 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*pauVar22;
            uVar45 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140096780;
          }
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
          goto code_r0x000140096aa4;
          break;
        default:
          goto code_r0x000140096aa4;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x00014009618e;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009618e:
      if (bVar10 != 0) break;
      goto code_r0x000140096aa4;
    }
code_r0x000140096ab3:
    unaff_RDI = local_98;
    uVar45 = *local_c0 + 1;
    ppuVar55 = (undefined **)(ulonglong)uVar45;
    *local_c0 = uVar45;
    uVar46 = *(uint *)*local_80;
    if (((uVar46 & 0x8000000) == 0) && (uVar15 == 0x29)) goto code_r0x0001400a1955;
    if (((uVar46 & 0x20) != 0) && (uVar15 == 0x3f)) {
      if (unaff_RSI == pauVar26) {
code_r0x000140096d1e:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        uVar15 = 0xffffffff;
        goto code_r0x000140096d3b;
      }
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar22 != pauVar26)) &&
         ((((uVar46 & 8) == 0 && ((*(uint *)*pauVar22 & 0xfe) == 0x28)) ||
          (((uVar46 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar22, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar22;
      }
      pcVar43 = (char *)((longlong)*unaff_RSI + 1);
      *(char **)*local_98 = pcVar43;
      if ((undefined1 (*) [16])pcVar43 == pauVar26) goto code_r0x000140096d1e;
      cVar14 = (char)*(uint *)*(undefined1 (*) [16])pcVar43;
      uVar47 = (uint)cVar14;
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pvVar19 = memchr(&DAT_140111e80,uVar47,0x17);
      auVar70 = auVar72._0_16_;
      auVar69 = auVar71._0_16_;
      uVar15 = uVar47;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      pauVar18 = (undefined1 (*) [16])(ulonglong)(uVar47 - 10);
      switch(pauVar18) {
      case (undefined1 (*) [16])0x0:
        if ((uVar46 & 4) != 0) {
          uVar48 = 0x7c;
          uVar47 = uVar45;
          goto joined_r0x000140096ba5;
        }
        break;
      case (undefined1 (*) [16])0x1a:
        if ((((uVar46 & 0x2000000) != 0) &&
            (pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), pauVar22 != pauVar26)) &&
           (uVar48 = 0, (char)*(uint *)*pauVar22 != '\n')) goto code_r0x00014009ed0e;
        break;
      case (undefined1 (*) [16])0x1e:
      case (undefined1 (*) [16])0x1f:
        uVar48 = 0;
        uVar47 = uVar46 & 8;
joined_r0x000140096ba5:
        if (uVar47 != 0) break;
        goto code_r0x00014009ed0e;
      case (undefined1 (*) [16])0x20:
        if ((uVar46 & 0x4000000) != 0) {
          uVar48 = 0;
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar47 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((uVar47 < 0x15) && ((0x102100U >> (uVar47 & 0x1f) & 1) != 0))
            goto code_r0x00014009ed0e;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009ed0e;
          }
        }
        break;
      case (undefined1 (*) [16])0x21:
      case (undefined1 (*) [16])0x35:
        uVar47 = uVar46;
joined_r0x00014009ed0c:
        uVar47 = uVar47 & 1;
        goto joined_r0x00014009ebe4;
      case (undefined1 (*) [16])0x52:
        pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
        if (pauVar22 != pauVar26) {
          if (((uVar46 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*pauVar22, uVar48 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009ec71:
            *(char *)local_88 = (char)uVar48;
            goto code_r0x00014009ed0e;
          }
          if ((uVar46 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*pauVar22;
            uVar48 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009ec71;
          }
        }
        break;
      case (undefined1 (*) [16])0x54:
        if ((uVar46 & 0x2000000) != 0) {
          uVar48 = 0;
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar47 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if (uVar47 < 0x15) {
              uVar47 = 0x102100 >> (uVar47 & 0x1f);
              goto joined_r0x00014009ed0c;
            }
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009ed1a;
          }
          goto code_r0x00014009ed0e;
        }
        break;
      case (undefined1 (*) [16])0x71:
      case (undefined1 (*) [16])0x73:
        uVar47 = uVar46 & 0x10;
        goto joined_r0x00014009ebe4;
      case (undefined1 (*) [16])0x72:
        uVar47 = uVar46 & 2;
joined_r0x00014009ebe4:
        uVar48 = 0;
        if (uVar47 == 0) {
code_r0x00014009ed0e:
          *(uint *)*local_78 = uVar48;
          uVar15 = uVar48;
        }
      }
code_r0x00014009ed1a:
      if ((((char)*(uint *)*(undefined1 (*) [16])pcVar43 == '\\') &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), pauVar22 != pauVar26)) &&
         ((((uVar46 & 8) == 0 && ((*(uint *)*pauVar22 & 0xfe) == 0x28)) ||
          (((uVar46 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar22, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = (undefined1 (*) [16])pcVar43;
      }
      pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
      *(undefined1 (**) [16])*local_98 = pauVar22;
      if (pauVar22 == pauVar26) {
code_r0x000140096d3b:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        goto code_r0x000140096d44;
      }
      cVar14 = (char)*(uint *)*pauVar22;
      uVar48 = (uint)cVar14;
      pvVar19 = memchr(&DAT_140111e80,uVar48,0x17);
      auVar70 = auVar72._0_16_;
      auVar69 = auVar71._0_16_;
      uVar47 = uVar48;
      if (pvVar19 == (void *)0x0) {
        uVar47 = 0;
      }
      *(uint *)*local_78 = uVar47;
      *(char *)local_88 = cVar14;
      pauVar18 = (undefined1 (*) [16])(ulonglong)(uVar48 - 10);
      switch(pauVar18) {
      case (undefined1 (*) [16])0x0:
        if (((uVar46 & 4) != 0) && (uVar45 == 0)) {
          *(uint *)*local_78 = 0x7c;
        }
        break;
      case (undefined1 (*) [16])0x1a:
        if ((((uVar46 & 0x2000000) != 0) &&
            (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 3), unaff_RSI != pauVar26)) &&
           ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x00014009f05d;
        break;
      case (undefined1 (*) [16])0x1e:
      case (undefined1 (*) [16])0x1f:
        uVar46 = uVar46 & 8;
        goto joined_r0x00014009ef15;
      case (undefined1 (*) [16])0x20:
        if ((uVar46 & 0x4000000) != 0) {
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0))
            goto code_r0x00014009f05d;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009f05d;
          }
        }
        break;
      case (undefined1 (*) [16])0x21:
      case (undefined1 (*) [16])0x35:
        uVar46 = uVar46 & 1;
        goto joined_r0x00014009ef15;
      case (undefined1 (*) [16])0x52:
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 3);
        if (unaff_RSI != pauVar26) {
          if (((uVar46 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*unaff_RSI, uVar45 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009efa8:
            *(char *)local_88 = (char)uVar45;
            *(uint *)*local_78 = uVar45;
          }
          else if ((uVar46 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*unaff_RSI;
            uVar45 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009efa8;
          }
        }
        break;
      case (undefined1 (*) [16])0x54:
        if ((uVar46 & 0x2000000) == 0) break;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if (uVar45 < 0x15) {
            uVar46 = 0x102100U >> (uVar45 & 0x1f) & 1;
            goto joined_r0x00014009ef15;
          }
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x000140096d44;
        }
        goto code_r0x00014009f05d;
      case (undefined1 (*) [16])0x71:
      case (undefined1 (*) [16])0x73:
        uVar46 = uVar46 & 0x10;
        goto joined_r0x00014009ef15;
      case (undefined1 (*) [16])0x72:
        uVar46 = uVar46 & 2;
joined_r0x00014009ef15:
        if (uVar46 == 0) {
code_r0x00014009f05d:
          *(uint *)*local_78 = 0;
        }
      }
code_r0x000140096d44:
      uVar42 = (ushort)unaff_RSI;
      if (uVar15 == 0x21) {
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        local_90 = operator_new(0x28);
        *(uint *)((longlong)*local_90 + 8) = 0xb;
        *(undefined1 (*) [16])((longlong)*local_90 + 0xc) = auVar72._0_16_;
        *(uint *)((longlong)local_90[1] + 0xc) = 0;
        *(undefined ***)*local_90 = std::_Node_assert::vftable;
        *(uint *)((longlong)(local_90 + 2) + 0) = 0;
        *(uint *)((longlong)(local_90 + 2) + 4) = 0;
        puVar23 = operator_new(0x20);
code_r0x000140096ecf:
        unaff_RDI = local_90;
        *puVar23 = std::_Node_base::vftable;
        *(undefined4 *)(puVar23 + 1) = 1;
        *(undefined1 (*) [16])((longlong)puVar23 + 0xc) = auVar72._0_16_;
        *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        *(undefined1 (**) [16])((longlong)local_90[1] + 8) = pauVar18;
        if (*(longlong *)pauVar18[1] != 0) {
          *(longlong *)local_90[1] = *(longlong *)pauVar18[1];
          *(undefined1 (**) [16])(*(longlong *)pauVar18[1] + 0x18) = local_90;
          pauVar18 = *(undefined1 (**) [16])*local_a0;
        }
        *(undefined1 (**) [16])pauVar18[1] = local_90;
        *(undefined8 **)local_90[2] = puVar23;
        puVar23[3] = local_90;
        *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
        FUN_140086d20();
        uVar15 = *(uint *)((longlong)*unaff_RDI + 8) - 8;
        uVar17 = 0xe;
        if (uVar15 < 4) {
          uVar17 = (&DAT_1401123dc)[uVar15];
        }
        puVar23 = operator_new(0x28);
        *(undefined4 *)(puVar23 + 1) = uVar17;
        *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
        *puVar23 = std::_Node_end_group::vftable;
        puVar23[4] = unaff_RDI;
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        puVar23[3] = pauVar18;
        if (*(longlong *)pauVar18[1] != 0) {
          puVar23[2] = *(longlong *)pauVar18[1];
          *(undefined8 **)(*(longlong *)pauVar18[1] + 0x18) = puVar23;
          pauVar18 = *(undefined1 (**) [16])*local_a0;
        }
        *(undefined8 **)pauVar18[1] = puVar23;
        *(undefined1 (**) [16])*local_a0 = unaff_RDI;
        unaff_RSI = (undefined1 (*) [16])0x0;
        pauVar22 = local_a0;
      }
      else {
        if (uVar15 == 0x3d) {
          auVar71 = ZEXT1664(auVar69);
          auVar72 = ZEXT1664(auVar70);
          local_90 = operator_new(0x28);
          *(uint *)((longlong)*local_90 + 8) = 10;
          *(undefined1 (*) [16])((longlong)*local_90 + 0xc) = auVar72._0_16_;
          *(uint *)((longlong)local_90[1] + 0xc) = 0;
          *(undefined ***)*local_90 = std::_Node_assert::vftable;
          *(uint *)((longlong)(local_90 + 2) + 0) = 0;
          *(uint *)((longlong)(local_90 + 2) + 4) = 0;
          puVar23 = operator_new(0x20);
          goto code_r0x000140096ecf;
        }
        unaff_RDI = pauVar18;
        if (uVar15 != 0x3a) goto code_r0x0001400a1b09;
code_r0x000140096d62:
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        puVar23 = operator_new(0x20);
        *puVar23 = std::_Node_base::vftable;
        *(undefined4 *)(puVar23 + 1) = 8;
        *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        puVar23[3] = pauVar18;
        if (*(longlong *)pauVar18[1] != 0) {
          puVar23[2] = *(longlong *)pauVar18[1];
          *(undefined8 **)(*(longlong *)pauVar18[1] + 0x18) = puVar23;
          pauVar18 = *(undefined1 (**) [16])*local_a0;
        }
        *(undefined8 **)pauVar18[1] = puVar23;
        *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
        FUN_140086d20();
        pauVar18 = (undefined1 (*) [16])0xe;
        if (*(int *)(puVar23 + 1) - 8U < 4) {
          pauVar18 = (undefined1 (*) [16])
                     (ulonglong)(uint)(&DAT_1401123dc)[*(int *)(puVar23 + 1) - 8U];
        }
        pauVar56 = operator_new(0x28);
        *(int *)((longlong)*pauVar56 + 8) = (int)pauVar18;
        *(undefined8 *)((longlong)*pauVar56 + 0xc) = 0;
        *(undefined4 *)(pauVar56[1] + 4) = 0;
        *(undefined ***)*pauVar56 = std::_Node_end_group::vftable;
        *(undefined8 **)pauVar56[2] = puVar23;
        pauVar22 = *(undefined1 (**) [16])*local_a0;
        *(undefined1 (**) [16])(pauVar56[1] + 8) = pauVar22;
        if (*(longlong *)pauVar22[1] != 0) {
          *(longlong *)pauVar56[1] = *(longlong *)pauVar22[1];
          *(undefined1 (**) [16])(*(longlong *)pauVar22[1] + 0x18) = pauVar56;
          pauVar22 = *(undefined1 (**) [16])*local_a0;
        }
        *(undefined1 (**) [16])pauVar22[1] = pauVar56;
        *(undefined1 (**) [16])*local_a0 = pauVar56;
        pauVar22 = local_a0;
code_r0x00014009f2b5:
        unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar18 >> 8),1);
      }
      uVar45 = (uint)ppuVar55;
      uVar15 = *local_c0;
      *local_c0 = uVar15 - 1;
      if (*(uint *)*local_78 == 0x29) {
        pauVar18 = *(undefined1 (**) [16])*local_98;
        pauVar26 = *(undefined1 (**) [16])local_98[1];
        if (pauVar18 != pauVar26) {
          if ((((char)*(uint *)*pauVar18 == '\\') &&
              (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar56 != pauVar26)) &&
             ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar56 & 0xfe) == 0x28)) ||
              (((*(uint *)*local_80 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar56, cVar14 == '}' || (cVar14 == '{')))))))) {
            pauVar18 = pauVar56;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
        }
        if (pauVar18 == pauVar26) {
          *(uint *)*local_78 = 0xffffffff;
          *(undefined1 *)local_88 = 0xff;
          goto code_r0x00014009f547;
        }
        cVar14 = (char)*(uint *)*pauVar18;
        uVar46 = (uint)cVar14;
        pauVar22 = (undefined1 (*) [16])0x0;
        pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
        uVar45 = uVar46;
        if (pvVar19 == (void *)0x0) {
          uVar45 = 0;
        }
        *(uint *)*local_78 = uVar45;
        *(char *)local_88 = cVar14;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          if (((*(uint *)*local_80 & 4) != 0) && (uVar15 - 1 == 0)) {
            *(uint *)*local_78 = 0x7c;
          }
          break;
        case (undefined1 (*) [16])0x1a:
          if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar18 != pauVar26)) &&
             ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014009f53a;
          break;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          bVar10 = (byte)*(uint *)*local_80 & 8;
          goto joined_r0x00014009f3c4;
        case (undefined1 (*) [16])0x20:
          if ((*(uint *)*local_80 & 0x4000000) == 0) break;
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
            goto code_r0x00014009f53a;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009f53a;
          }
          break;
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x00014009f3c4:
          if (bVar10 == 0) {
code_r0x00014009f53a:
            *(uint *)*local_78 = 0;
          }
          break;
        case (undefined1 (*) [16])0x52:
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
          if (pauVar18 != pauVar26) {
            if (((*(uint *)*local_80 & 8) == 0) &&
               (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28))
            {
code_r0x00014009f490:
              *(char *)local_88 = (char)uVar15;
              *(uint *)*local_78 = uVar15;
            }
            else if ((*(uint *)*local_80 & 0x10) == 0) {
              bVar10 = (byte)*(uint *)*pauVar18;
              uVar15 = (uint)bVar10;
              if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009f490;
            }
          }
          break;
        case (undefined1 (*) [16])0x54:
          if ((*(uint *)*local_80 & 0x2000000) != 0) {
            switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
              if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
              goto code_r0x00014009f53a;
              break;
            default:
              goto code_r0x00014009f53a;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
          }
          break;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          bVar10 = (byte)*(uint *)*local_80 & 0x10;
          goto joined_r0x00014009f3ee;
        case (undefined1 (*) [16])0x72:
          bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009f3ee:
          if (bVar10 != 0) break;
          goto code_r0x00014009f53a;
        }
code_r0x00014009f547:
        if ((char)unaff_RSI != '\0') goto code_r0x0001400a00b0;
        goto LAB_140094897;
      }
      goto code_r0x0001400a1955;
    }
    if ((*(uint *)local_98[7] & 0x200) != 0) goto code_r0x000140096d62;
    uVar15 = *(uint *)((longlong)local_98[1] + 8) + 1;
    *(uint *)((longlong)local_98[1] + 8) = uVar15;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x28);
    *(undefined4 *)(puVar23 + 1) = 0xd;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    *puVar23 = std::_Node_capture::vftable;
    *(uint *)(puVar23 + 4) = uVar15;
    pauVar18 = *(undefined1 (**) [16])((longlong)unaff_RDI[4] + 8);
    puVar23[3] = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      puVar23[2] = *(longlong *)pauVar18[1];
      *(undefined8 **)(*(longlong *)pauVar18[1] + 0x18) = puVar23;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar18[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    FUN_140086d20();
    uVar17 = 0xe;
    if (*(int *)(puVar23 + 1) - 8U < 4) {
      uVar17 = (&DAT_1401123dc)[*(int *)(puVar23 + 1) - 8U];
    }
    puVar30 = operator_new(0x28);
    pauVar56 = local_98;
    *(undefined4 *)(puVar30 + 1) = uVar17;
    *(undefined8 *)((longlong)puVar30 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x14) = 0;
    *puVar30 = std::_Node_end_group::vftable;
    puVar30[4] = puVar23;
    pauVar18 = *(undefined1 (**) [16])*local_a0;
    puVar30[3] = pauVar18;
    if (*(longlong *)pauVar18[1] != 0) {
      puVar30[2] = *(longlong *)pauVar18[1];
      *(undefined8 **)(*(longlong *)pauVar18[1] + 0x18) = puVar30;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar18[1] = puVar30;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar30;
    uVar46 = *(uint *)((longlong)local_98[1] + 8) + 1;
    pcVar43 = (char *)(ulonglong)uVar46;
    pauVar18 = *(undefined1 (**) [16])((longlong)local_98[3] + 8);
    uVar15 = (uint)pauVar18;
    pauVar22 = local_a0;
    if (pauVar18 < pcVar43) {
      unaff_RBX = (undefined1 (*) [16])((longlong)pcVar43 - (longlong)pauVar18);
      if ((undefined1 (*) [16])((ulonglong)pauVar18 ^ 0x7fffffffffffffff) < unaff_RBX)
      goto code_r0x0001400a1d16;
      lVar29 = *(longlong *)local_98[2];
      pcVar43 = (char *)((longlong)*(undefined1 (*) [16])((longlong)pcVar43 + 0x10) + 0xfU >> 5);
      pvVar19 = *(void **)((longlong)local_98[2] + 8);
      unaff_RDI = (undefined1 (*) [16])((longlong)pvVar19 - lVar29 >> 2);
      pauVar26 = (undefined1 (*) [16])((longlong)pcVar43 - (longlong)unaff_RDI);
      if (pcVar43 < unaff_RDI) {
        pvVar19 = (void *)(lVar29 + (longlong)pcVar43 * 4);
        pauVar26 = unaff_RDI;
code_r0x000140096d14:
        *(void **)((longlong)pauVar56[2] + 8) = pvVar19;
        unaff_RDI = pauVar26;
      }
      else if (pauVar26 != (undefined1 (*) [16])0x0) {
        pauVar22 = (undefined1 (*) [16])(*(longlong *)local_98[3] - lVar29 >> 2);
        if (pcVar43 <= pauVar22) {
          pauVar22 = (undefined1 (*) [16])((longlong)pauVar26 * 4);
          memset(pvVar19,0,(size_t)pauVar22);
          pvVar19 = (void *)((longlong)pvVar19 + (longlong)pauVar26 * 4);
          goto code_r0x000140096d14;
        }
        local_90 = (undefined1 (*) [16])((longlong)*pauVar22 + ((ulonglong)pauVar22 >> 1));
        if (local_90 <= pcVar43) {
          local_90 = (undefined1 (*) [16])pcVar43;
        }
        if (local_90 < (undefined1 (*) [16])0x400) {
          pvVar19 = operator_new((longlong)local_90 * 4);
        }
        else {
          pvVar24 = operator_new((longlong)local_90 * 4 + 0x27);
          pvVar19 = (void *)((longlong)pvVar24 + 0x27U & 0xffffffffffffffe0);
          *(void **)((longlong)pvVar19 - 8) = pvVar24;
        }
        memset((void *)((longlong)pvVar19 + (longlong)unaff_RDI * 4),0,(longlong)pauVar26 * 4);
        pauVar56 = local_98;
        pauVar22 = (undefined1 (*) [16])
                   (*(longlong *)((longlong)local_98[2] + 8) - (longlong)*(void **)local_98[2]);
        memmove(pvVar19,*(void **)local_98[2],(size_t)pauVar22);
        pvVar24 = *(void **)pauVar56[2];
        if (pvVar24 != (void *)0x0) {
          pvVar38 = pvVar24;
          if ((0xfff < (ulonglong)(*(longlong *)pauVar56[3] - (longlong)pvVar24)) &&
             (pvVar38 = *(void **)((longlong)pvVar24 + -8),
             0x1f < (ulonglong)((longlong)pvVar24 + (-8 - (longlong)pvVar38)))) goto LAB_1400a3888;
          free(pvVar38);
          pauVar56 = local_98;
        }
        *(void **)pauVar56[2] = pvVar19;
        *(void **)((longlong)pauVar56[2] + 8) = (void *)((longlong)pvVar19 + (longlong)pcVar43 * 4);
        *(void **)pauVar56[3] = (void *)((longlong)pvVar19 + (longlong)local_90 * 4);
      }
      uVar39 = *(ulonglong *)((longlong)pauVar56[3] + 8);
      if (uVar39 == 0) {
        *(undefined1 (**) [16])((longlong)pauVar56[3] + 8) = unaff_RBX;
        lVar29 = *(longlong *)pauVar56[2];
        pauVar37 = (undefined1 (*) [16])(ulonglong)(uVar15 & 0x1f);
        param_4 = (undefined1 (*) [16])0x0;
code_r0x00014009f21b:
        puVar36 = (uint *)(lVar29 + ((ulonglong)pauVar18 >> 5) * 4);
      }
      else {
        lVar29 = *(longlong *)pauVar56[2];
        uVar57 = (uVar39 >> 5) + 0xf800000000000000;
        if (-1 < (longlong)uVar39) {
          uVar57 = uVar39 >> 5;
        }
        pauVar26 = (undefined1 (*) [16])(ulonglong)((uint)uVar39 & 0x1f);
        param_4 = (undefined1 (*) [16])((longlong)*unaff_RBX + uVar39);
        *(undefined1 (**) [16])((longlong)pauVar56[3] + 8) = param_4;
        uVar39 = (ulonglong)pauVar18 >> 5;
        pauVar37 = (undefined1 (*) [16])(ulonglong)(uVar15 & 0x1f);
        if ((uVar39 == uVar57) && (pauVar37 == pauVar26)) goto code_r0x00014009f21b;
        pauVar22 = (undefined1 (*) [16])(ulonglong)((uint)param_4 & 0x1f);
        uVar51 = ((ulonglong)param_4 >> 5) + 0x3800000000000000;
        if (-1 < (longlong)param_4) {
          uVar51 = (ulonglong)param_4 >> 5;
        }
        param_4 = (undefined1 (*) [16])(lVar29 + uVar51 * 4);
        lVar54 = lVar29 + uVar57 * 4;
        do {
          bVar62 = pauVar22 == (undefined1 (*) [16])0x0;
          bVar60 = pauVar22 == (undefined1 (*) [16])0x0;
          pauVar22 = (undefined1 (*) [16])((longlong)pauVar22[-1] + 0xf);
          if (bVar60) {
            pauVar22 = (undefined1 (*) [16])0x1f;
          }
          bVar60 = pauVar26 == (undefined1 (*) [16])0x0;
          bVar61 = pauVar26 == (undefined1 (*) [16])0x0;
          pauVar26 = (undefined1 (*) [16])((longlong)pauVar26[-1] + 0xf);
          if (bVar61) {
            pauVar26 = (undefined1 (*) [16])0x1f;
          }
          param_4 = (undefined1 (*) [16])((longlong)param_4 + (ulonglong)bVar62 * -4);
          uVar15 = 1 << ((uint)pauVar22 & 0x1f);
          if ((*(uint *)(lVar54 + (ulonglong)bVar60 * -4) >> ((uint)pauVar26 & 0x1f) & 1) == 0) {
            uVar15 = ~uVar15 & *(uint *)*param_4;
          }
          else {
            uVar15 = uVar15 | *(uint *)*param_4;
          }
          unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
          lVar54 = lVar54 + (ulonglong)bVar60 * -4;
          *(uint *)*param_4 = uVar15;
        } while ((lVar29 + uVar39 * 4 != lVar54) || (pauVar37 != pauVar26));
        puVar36 = (uint *)(uVar39 * 4 + *(longlong *)local_98[2]);
      }
      pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + (longlong)pauVar37);
      uVar45 = (uint)pauVar26 & 0x1f;
      ppuVar55 = (undefined **)pauVar56;
      pauVar18 = pauVar37;
      if (((undefined1 (*) [16])0x1f < pauVar26) ||
         (pauVar37 != (undefined1 (*) [16])(ulonglong)uVar45)) {
        unaff_RDI = (undefined1 (*) [16])(puVar36 + ((ulonglong)pauVar26 >> 5));
        pauVar22 = (undefined1 (*) [16])0xffffffff;
        uVar15 = ~(-1 << (int)pauVar37);
        if (pauVar26 < (undefined1 (*) [16])0x20) {
          uVar15 = ~(0xffffffffU >> ((byte)-(char)uVar45 & 0x1f)) | uVar15;
        }
        else {
          *puVar36 = *puVar36 & uVar15;
          pauVar22 = (undefined1 (*) [16])(((ulonglong)pauVar26 >> 5) * 4 + -4);
          memset(puVar36 + 1,0,(size_t)pauVar22);
          if ((undefined1 (*) [16])(ulonglong)uVar45 == (undefined1 (*) [16])0x0)
          goto code_r0x00014009f290;
          uVar15 = ~(0xffffffffU >> ((byte)-(char)uVar45 & 0x1f));
        }
code_r0x00014009f28e:
        *(uint *)*unaff_RDI = *(uint *)*unaff_RDI & uVar15;
        pauVar18 = (undefined1 (*) [16])0x0;
      }
    }
    else if (pcVar43 < pauVar18) {
      lVar29 = *(longlong *)local_98[2];
      pauVar22 = (undefined1 (*) [16])((ulonglong)pauVar18 >> 5);
      param_4 = pauVar22 + -0x80000000000000;
      pauVar56 = pauVar22;
      if ((longlong)pauVar18 < 0) {
        pauVar56 = param_4;
      }
      pauVar18 = (undefined1 (*) [16])(ulonglong)(uVar15 & 0x1f);
      pcVar43 = (char *)(ulonglong)(uVar46 & 0x1f);
      if (((ulonglong)pauVar56 >> 0x3a & 1) != 0) {
        pauVar22 = param_4;
      }
      if (((undefined1 (*) [16])(ulonglong)(uVar46 >> 5) != pauVar22) ||
         ((undefined1 (*) [16])pcVar43 != pauVar18)) {
        puVar36 = (uint *)(lVar29 + (longlong)(ulonglong)(uVar46 >> 5) * 4);
        if (pauVar22 != pauVar56) {
          puVar20 = (uint *)(lVar29 + (longlong)pauVar22 * 4);
          pauVar22 = pauVar18;
          do {
            uVar15 = 1 << ((uint)pcVar43 & 0x1f);
            if ((*puVar20 >> ((uint)pauVar22 & 0x1f) & 1) == 0) {
              uVar15 = ~uVar15 & *puVar36;
            }
            else {
              uVar15 = uVar15 | *puVar36;
            }
            *puVar36 = uVar15;
            bVar62 = (undefined1 (*) [16])0x1e < pcVar43;
            pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 1);
            puVar36 = puVar36 + bVar62;
            if (bVar62) {
              pcVar43 = (char *)0x0;
            }
            bVar62 = (undefined1 (*) [16])0x1e < pauVar22;
            pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
            puVar20 = puVar20 + bVar62;
            if (bVar62) {
              pauVar22 = (undefined1 (*) [16])0x0;
            }
          } while ((puVar20 != (uint *)(lVar29 + (longlong)pauVar56 * 4)) || (pauVar22 != pauVar18))
          ;
          lVar29 = *(longlong *)local_98[2];
        }
        puVar36 = (uint *)(((longlong)puVar36 - lVar29) * 8 + (longlong)pcVar43);
        if (-1 < (longlong)puVar36) {
          pauVar56 = (undefined1 (*) [16])((longlong)puVar36 + 0x1fU >> 5);
          pauVar22 = *(undefined1 (**) [16])((longlong)local_98[2] + 8);
          param_4 = (undefined1 (*) [16])((longlong)pauVar22 - lVar29 >> 2);
          if ((pauVar56 < param_4) &&
             (param_4 = (undefined1 (*) [16])(lVar29 + (longlong)pauVar56 * 4), param_4 != pauVar22)
             ) {
            *(undefined1 (**) [16])((longlong)local_98[2] + 8) = param_4;
          }
          *(uint **)((longlong)local_98[3] + 8) = puVar36;
          if (((ulonglong)puVar36 & 0x1f) == 0) goto code_r0x00014009f290;
          pauVar22 = (undefined1 (*) [16])0xffffffff;
          uVar15 = ~(-1 << (int)((ulonglong)puVar36 & 0x1f));
          unaff_RDI = (undefined1 (*) [16])(lVar29 + (longlong)pauVar56 * 4 + -4);
          goto code_r0x00014009f28e;
        }
        FUN_1400bf7e0();
        goto LAB_1400a24e5;
      }
    }
code_r0x00014009f290:
    puVar36 = (uint *)(*(longlong *)local_98[2] +
                      (ulonglong)(*(uint *)(puVar23 + 4) >> 3 & 0x1ffffffc));
    *puVar36 = *puVar36 | 1 << (*(uint *)(puVar23 + 4) & 0x1f);
    goto code_r0x00014009f2b5;
  case 0x29:
    if (*local_c0 != 0) goto LAB_1400a17b0;
    if ((*(uint *)*local_80 & 0x10000000) == 0) goto code_r0x0001400a1955;
    break;
  case 0x2a:
  case 0x2b:
  case 0x3f:
  case 0x7b:
    goto code_r0x0001400a1948;
  case 0x2e:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x20);
    *puVar23 = std::_Node_base::vftable;
    *(undefined4 *)(puVar23 + 1) = 5;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    puVar23[3] = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      puVar23[2] = *(longlong *)pauVar26[1];
      *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar26[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar18 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar18) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar18) goto LAB_140094880;
    cVar14 = (char)*(uint *)*unaff_RSI;
    uVar45 = (uint)cVar14;
    pauVar22 = (undefined1 (*) [16])0x0;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      goto code_r0x00014009ea51;
    case (undefined1 (*) [16])0x1a:
      goto code_r0x00014009ea26;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      goto code_r0x00014009e9d2;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) != 0) {
        switch(*(undefined4 *)(puVar23 + 1)) {
        case 2:
          lVar29 = puVar23[3];
          break;
        default:
          goto code_r0x0001400a00b0;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014009f5a4;
        }
        goto code_r0x00014009eb16;
      }
      goto code_r0x0001400a00b0;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      goto code_r0x00014009e9e7;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (unaff_RSI == pauVar18) goto code_r0x0001400a00b0;
      goto code_r0x00014009ea8c;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) == 0) goto code_r0x0001400a00b0;
      switch(*(undefined4 *)(puVar23 + 1)) {
      case 2:
        lVar29 = puVar23[3];
        break;
      default:
        goto code_r0x00014009f5a4;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400a00b0;
      }
      goto code_r0x00014009eb70;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      goto code_r0x00014009e9fc;
    case (undefined1 (*) [16])0x72:
      goto code_r0x00014009ea11;
    }
    goto LAB_1400a00b9;
  case 0x5b:
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar26 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar26) {
      if ((((*unaff_RSI)[0] == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
         ((((*(uint *)*local_80 & 8) == 0 &&
           (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))
           ))))) {
        unaff_RSI = pauVar18;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar26) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      pauVar18 = param_4;
      goto code_r0x0001400968d1;
    }
    cVar14 = (*unaff_RSI)[0];
    uVar45 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    auVar70 = auVar72._0_16_;
    auVar69 = auVar71._0_16_;
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    pauVar18 = param_4;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI != pauVar26)) &&
         ((*unaff_RSI)[0] != '\n')) goto code_r0x0001400968c4;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x000140095645;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x0001400968c4;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400968c4;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140095645:
      if (bVar10 == 0) {
code_r0x0001400968c4:
        *(uint *)*local_78 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (unaff_RSI != pauVar26) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (uVar15 = (uint)(byte)(*unaff_RSI)[0], ((*unaff_RSI)[0] & 0xfe) == 0x28)) {
code_r0x000140096296:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (*unaff_RSI)[0];
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140096296;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x0001400968c4;
          break;
        default:
          goto code_r0x0001400968c4;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x00014009611a;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009611a:
      if (bVar10 != 0) break;
      goto code_r0x0001400968c4;
    }
code_r0x0001400968d1:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar56 = operator_new(0x50);
    *(undefined4 *)((longlong)*pauVar56 + 8) = 7;
    *(undefined8 *)((longlong)*pauVar56 + 0xc) = 0;
    *(undefined4 *)(pauVar56[1] + 4) = 0;
    *(undefined ***)*pauVar56 = std::_Node_class<char,class_std::regex_traits<char>_>::vftable;
    *(undefined8 *)(pauVar56[4] + 8) = 0;
    *(undefined1 (*) [32])(pauVar56 + 2) = ZEXT1232(ZEXT812(0));
    *(undefined2 *)pauVar56[4] = 0;
    pauVar22 = *(undefined1 (**) [16])*local_a0;
    *(undefined1 (**) [16])(pauVar56[1] + 8) = pauVar22;
    if (*(longlong *)pauVar22[1] != 0) {
      *(longlong *)pauVar56[1] = *(longlong *)pauVar22[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar22[1] + 0x18) = pauVar56;
      pauVar22 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar22[1] = pauVar56;
    *(undefined1 (**) [16])*local_a0 = pauVar56;
    ppuVar55 = (undefined **)(ulonglong)*(uint *)*local_78;
    if (*(uint *)*local_78 != 0x5e) goto code_r0x0001400973f0;
    pbVar41 = (byte *)((longlong)*pauVar56 + 0xc);
    *pbVar41 = *pbVar41 ^ 1;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar26 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar26) {
      if ((((*unaff_RSI)[0] == '\\') &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar22 != pauVar26)) &&
         ((((*(uint *)*local_80 & 8) == 0 &&
           (((ulonglong)*(undefined1 (**) [16])*pauVar22 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar22)[0] == '}' || ((*pauVar22)[0] == '{')))
           ))))) {
        unaff_RSI = pauVar22;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar26) goto code_r0x000140097540;
    cVar14 = (*unaff_RSI)[0];
    uVar45 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    ppuVar55 = (undefined **)(ulonglong)uVar15;
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) break;
      goto code_r0x000140097c46;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI != pauVar26)) &&
         ((*unaff_RSI)[0] != '\n')) goto code_r0x000140097d7e;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x0001400972a7;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)((longlong)*pauVar56 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)(pauVar56[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x0001400973f0;
        break;
      default:
        goto code_r0x0001400973f0;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
      goto code_r0x000140097d7e;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
      goto joined_r0x0001400972a7;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (unaff_RSI != pauVar26) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (pauVar22 = (undefined1 (*) [16])(ulonglong)(byte)(*unaff_RSI)[0],
           ((*unaff_RSI)[0] & 0xfe) == 0x28)) {
code_r0x000140097340:
          *(char *)local_88 = (char)pauVar22;
          *(uint *)*local_78 = (uint)pauVar22;
          ppuVar55 = (undefined **)pauVar22;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (*unaff_RSI)[0];
          pauVar22 = (undefined1 (*) [16])(ulonglong)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140097340;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)((longlong)*pauVar56 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)(pauVar56[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x0001400973f0;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x0001400973f0;
        }
        goto code_r0x000140097d7e;
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x0001400972a7;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x0001400972a7:
      if (bVar10 != 0) break;
      goto code_r0x000140097d7e;
    }
code_r0x0001400973f0:
    if (((*(uint *)*local_80 & 0x20000000) == 0) || ((int)ppuVar55 != 0x5d))
    goto code_r0x000140097db0;
    bVar10 = 0x5d;
    if ((*(uint *)local_98[5] & 0x100) != 0) {
      plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      bVar10 = (**(code **)(*plVar3 + 0x20))(plVar3,0x5d);
      pauVar56 = *(undefined1 (**) [16])*local_a0;
    }
    pauVar31 = *(undefined1 (**) [32])(pauVar56[2] + 8);
    if (pauVar31 == (undefined1 (*) [32])0x0) {
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pauVar31 = operator_new(0x20);
      *pauVar31 = ZEXT1232(ZEXT812(0));
      *(undefined1 (**) [32])(pauVar56[2] + 8) = pauVar31;
    }
    pbVar41 = (byte *)((longlong)*pauVar31 + (ulonglong)(bVar10 >> 3));
    *pbVar41 = *pbVar41 | '\x01' << (bVar10 & 7);
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar26 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar26) {
      if ((((*unaff_RSI)[0] == '\\') &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar22 != pauVar26)) &&
         ((((*(uint *)*local_80 & 8) == 0 &&
           (((ulonglong)*(undefined1 (**) [16])*pauVar22 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar22)[0] == '}' || ((*pauVar22)[0] == '{')))
           ))))) {
        unaff_RSI = pauVar22;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI == pauVar26) {
code_r0x000140097540:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      ppuVar55 = (undefined **)(undefined1 (*) [16])0xffffffff;
      goto code_r0x000140097db0;
    }
    cVar14 = (*unaff_RSI)[0];
    uVar45 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    ppuVar55 = (undefined **)(ulonglong)uVar15;
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
code_r0x000140097c46:
        *(uint *)*local_78 = 0x7c;
        ppuVar55 = (undefined **)(undefined1 (*) [16])0x7c;
      }
    default:
      goto code_r0x000140097db0;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) == 0) ||
          (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI == pauVar26)) ||
         ((*unaff_RSI)[0] == '\n')) goto code_r0x000140097db0;
      goto code_r0x000140097d7e;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      break;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) goto code_r0x000140097db0;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x000140097db0;
        break;
      default:
        goto code_r0x000140097db0;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
      goto code_r0x000140097d7e;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
      break;
    case (undefined1 (*) [16])0x52:
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      if (unaff_RSI != pauVar26) {
        if (((*(uint *)*local_80 & 8) != 0) ||
           (pauVar22 = (undefined1 (*) [16])(ulonglong)(byte)(*unaff_RSI)[0],
           ((*unaff_RSI)[0] & 0xfe) != 0x28)) {
          if ((*(uint *)*local_80 & 0x10) != 0) goto code_r0x000140097db0;
          bVar10 = (*unaff_RSI)[0];
          pauVar22 = (undefined1 (*) [16])(ulonglong)bVar10;
          if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x000140097db0;
        }
        *(char *)local_88 = (char)pauVar22;
        *(uint *)*local_78 = (uint)pauVar22;
        ppuVar55 = (undefined **)pauVar22;
      }
      goto code_r0x000140097db0;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) == 0) goto code_r0x000140097db0;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x000140097db0;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140097db0;
      }
      goto code_r0x000140097d7e;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      break;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
    }
    if (bVar10 == 0) {
code_r0x000140097d7e:
      *(uint *)*local_78 = 0;
      ppuVar55 = (undefined **)(undefined1 (*) [16])0x0;
    }
code_r0x000140097db0:
    uVar15 = (uint)ppuVar55;
    auVar69 = auVar71._0_16_;
    auVar70 = auVar72._0_16_;
    param_4 = pauVar18;
    if (0x5b < (int)uVar15) {
      if (uVar15 == 0x5c) {
        pauVar22 = *(undefined1 (**) [16])*local_98;
        param_4 = *(undefined1 (**) [16])local_98[1];
        if (pauVar22 != param_4) {
          if ((((*pauVar22)[0] == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar18 != param_4)) &&
             ((((*(uint *)*local_80 & 8) == 0 &&
               (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
              (((*(uint *)*local_80 & 0x10) == 0 &&
               (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))))) {
            pauVar22 = pauVar18;
          }
          pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar22;
        }
        if (pauVar22 == param_4) {
          *(uint *)*local_78 = 0xffffffff;
          *(undefined1 *)local_88 = 0xff;
          pcVar43 = (char *)CONCAT71((int7)((ulonglong)pcVar43 >> 8),0xff);
          goto code_r0x000140098670;
        }
        bVar10 = (*pauVar22)[0];
        pcVar43 = (char *)(ulonglong)bVar10;
        uVar46 = (uint)(char)bVar10;
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
        uVar45 = uVar46;
        if (pvVar19 == (void *)0x0) {
          uVar45 = 0;
        }
        *(uint *)*local_78 = uVar45;
        *(byte *)local_88 = bVar10;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
            *(uint *)*local_78 = 0x7c;
          }
          break;
        case (undefined1 (*) [16])0x1a:
          if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar18 != param_4)) &&
             ((*pauVar18)[0] != '\n')) goto code_r0x000140098657;
          break;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          bVar10 = (byte)*(uint *)*local_80 & 8;
          goto joined_r0x0001400980db;
        case (undefined1 (*) [16])0x20:
          if ((*(uint *)*local_80 & 0x4000000) == 0) break;
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0))
            goto code_r0x000140098657;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x000140098657;
          }
          break;
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x0001400980db:
          if (bVar10 == 0) {
code_r0x000140098657:
            *(uint *)*local_78 = 0;
          }
          break;
        case (undefined1 (*) [16])0x52:
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
          if (pauVar18 != param_4) {
            if (((*(uint *)*local_80 & 8) == 0) &&
               (uVar45 = (uint)(byte)(*pauVar18)[0], ((*pauVar18)[0] & 0xfe) == 0x28)) {
code_r0x00014009832f:
              *(char *)local_88 = (char)uVar45;
              *(uint *)*local_78 = uVar45;
              pcVar43 = (char *)(ulonglong)uVar45;
            }
            else if ((*(uint *)*local_80 & 0x10) == 0) {
              bVar10 = (*pauVar18)[0];
              uVar45 = (uint)bVar10;
              if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009832f;
            }
          }
          break;
        case (undefined1 (*) [16])0x54:
          if ((*(uint *)*local_80 & 0x2000000) != 0) {
            switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
              if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
              goto code_r0x000140098657;
              break;
            default:
              goto code_r0x000140098657;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
          }
          break;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          bVar10 = (byte)*(uint *)*local_80 & 0x10;
          goto joined_r0x000140098159;
        case (undefined1 (*) [16])0x72:
          bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140098159:
          if (bVar10 != 0) break;
          goto code_r0x000140098657;
        }
code_r0x000140098670:
        uVar45 = *(uint *)*local_80;
        uVar39 = (ulonglong)uVar45;
        cVar14 = (char)pcVar43;
        pauVar18 = param_4;
        if ((uVar45 & 0x200000) == 0) {
          if ((((uVar45 & 0x10000) == 0) ||
              (bVar10 = (byte)(cVar14 + 0x9aU) >> 1 | cVar14 << 7, 8 < bVar10)) ||
             ((0x1d1U >> (bVar10 & 0x1f) & 1) == 0)) {
            if ((short)uVar45 < 0) {
              if (cVar14 == 'a') {
                pauVar26 = (undefined1 (*) [16])0x7;
              }
              else {
                if (((uint)pcVar43 & 0xff) != 0x62) goto code_r0x0001400986e0;
                pauVar26 = (undefined1 (*) [16])0x8;
              }
              goto code_r0x000140098991;
            }
            goto code_r0x0001400986e0;
          }
          pauVar26 = (undefined1 (*) [16])
                     (ulonglong)*(uint *)(&UNK_14010b538 + (ulonglong)bVar10 * 4);
code_r0x000140098991:
          *(uint *)*local_b0 = (uint)pauVar26;
          if (pauVar22 == param_4) {
code_r0x000140098a54:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            goto code_r0x00014009b350;
          }
          if ((((*pauVar22)[0] == '\\') &&
              (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar56 != param_4)) &&
             ((((uVar45 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar56 & 0xfe) == 0x28))
              || (((uVar45 & 0x10) == 0 && (((*pauVar56)[0] == '}' || ((*pauVar56)[0] == '{'))))))))
          {
            pauVar22 = pauVar56;
          }
          pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar56;
          if (pauVar56 == param_4) goto code_r0x000140098a54;
          cVar14 = (*pauVar56)[0];
          uVar46 = (uint)cVar14;
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
          uVar15 = uVar46;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(char *)local_88 = cVar14;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
          pauVar56 = pauVar26;
          switch(unaff_RDI) {
          case (undefined1 (*) [16])0x0:
            if (((uVar45 & 4) != 0) && (*local_c0 == 0)) goto code_r0x00014009a4b0;
            goto code_r0x00014009b24f;
          case (undefined1 (*) [16])0x1a:
            if ((uVar45 & 0x2000000) != 0) {
              pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
              if (pauVar22 != param_4) {
                cVar14 = (*pauVar22)[0];
                goto joined_r0x00014009a4e0;
              }
              goto code_r0x00014009b24f;
            }
            break;
          case (undefined1 (*) [16])0x1e:
          case (undefined1 (*) [16])0x1f:
            uVar45 = uVar45 & 8;
            goto joined_r0x000140099e56;
          case (undefined1 (*) [16])0x20:
            if ((uVar45 & 0x4000000) != 0) {
              switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                if (uVar15 < 0x15) goto joined_r0x00014009a590;
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014009a5e3;
              }
              goto code_r0x00014009b24f;
            }
            break;
          case (undefined1 (*) [16])0x21:
          case (undefined1 (*) [16])0x35:
joined_r0x000140099e4b:
            uVar45 = uVar45 & 1;
            goto joined_r0x000140099e4b;
          case (undefined1 (*) [16])0x52:
            pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
            if (pauVar22 != param_4) {
              if (((uVar45 & 8) != 0) ||
                 (uVar15 = (uint)(byte)(*pauVar22)[0], ((*pauVar22)[0] & 0xfe) != 0x28)) {
                if ((uVar45 & 0x10) != 0) goto code_r0x00014009b24f;
                bVar10 = (*pauVar22)[0];
                uVar15 = (uint)bVar10;
                if (bVar10 != 0x7d) goto joined_r0x00014009a522;
              }
code_r0x00014009a528:
              *(char *)local_88 = (char)uVar15;
              *(uint *)*local_78 = uVar15;
            }
            break;
          case (undefined1 (*) [16])0x54:
            if ((uVar45 & 0x2000000) != 0) {
              switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                if (uVar15 < 0x15) {
                  uVar45 = 0x102100U >> (uVar15 & 0x1f) & 1;
                  goto joined_r0x000140099e56;
                }
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014009b24f;
              }
              goto code_r0x00014009a5e3;
            }
            break;
          case (undefined1 (*) [16])0x71:
          case (undefined1 (*) [16])0x73:
            uVar45 = uVar45 & 0x10;
            goto joined_r0x000140099e56;
          case (undefined1 (*) [16])0x72:
            goto code_r0x00014009993d;
          }
          goto code_r0x00014009b25b;
        }
        if (((uVar45 & 0x4000) == 0) || (cVar14 != '\\')) {
          unaff_RSI = pauVar22;
          if (((uVar45 & 0x20000) == 0) || (unaff_RSI = param_4, pauVar22 == param_4)) {
code_r0x000140098bc1:
            *(uint *)*local_b0 = 0;
            local_a8 = *(undefined1 (**) [16])*local_a0;
            local_b8 = (undefined1 (*) [16])
                       CONCAT71(local_b8._1_7_,*local_c0 == 0 & (byte)(uVar39 >> 2) & 0x3f);
            iVar58 = 0;
            ppuVar55 = (undefined **)0x0;
            local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,(int)uVar39);
            pauVar22 = unaff_RSI;
            while( true ) {
              cVar14 = (char)pcVar43;
              uVar44 = (undefined7)((ulonglong)pcVar43 >> 8);
              auVar69 = auVar71._0_16_;
              auVar70 = auVar72._0_16_;
              if (9 < (byte)(cVar14 - 0x30U)) break;
              uVar15 = (uint)pcVar43 & 0xff;
              if ((int)((0x8000002f - uVar15) / 10) < (int)ppuVar55) goto code_r0x0001400a1917;
              uVar15 = (uVar15 + (int)ppuVar55 * 10) - 0x30;
              ppuVar55 = (undefined **)(ulonglong)uVar15;
              *(uint *)*local_b0 = uVar15;
              if (unaff_RSI == param_4) {
code_r0x000140098c00:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                unaff_RSI = param_4;
                pauVar26 = pauVar22;
                pcVar43 = (char *)CONCAT71(uVar44,0xff);
                goto code_r0x000140098c20;
              }
              pauVar18 = unaff_RSI;
              if ((((*unaff_RSI)[0] == '\\') &&
                  (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != param_4))
                 && ((((uVar39 & 8) == 0 &&
                      (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
                     (((uVar39 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{'))))
                     )))) {
                pauVar18 = pauVar26;
              }
              unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
              *(undefined1 (**) [16])*local_98 = unaff_RSI;
              pauVar22 = param_4;
              if (unaff_RSI == param_4) goto code_r0x000140098c00;
              bVar10 = (*unaff_RSI)[0];
              pcVar43 = (char *)(ulonglong)bVar10;
              uVar45 = (uint)(char)bVar10;
              auVar71 = ZEXT1664(auVar69);
              auVar72 = ZEXT1664(auVar70);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(byte *)local_88 = bVar10;
              unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
              pauVar26 = unaff_RSI;
              if (0x73 < uVar45 - 10) {
                uVar39 = (ulonglong)local_90 & 0xffffffff;
                goto code_r0x000140098c20;
              }
              uVar39 = (ulonglong)local_90 & 0xffffffff;
              switch(unaff_RDI) {
              case (undefined1 (*) [16])0x0:
                if ((char)local_b8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
                break;
              case (undefined1 (*) [16])0x1a:
                if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                    (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != param_4)
                    ) && ((*pauVar18)[0] != '\n')) goto code_r0x000140098ea2;
                break;
              case (undefined1 (*) [16])0x1e:
              case (undefined1 (*) [16])0x1f:
                uVar57 = (ulonglong)local_90 & 8;
                goto joined_r0x000140098d48;
              case (undefined1 (*) [16])0x20:
                if (((ulonglong)local_90 & 0x4000000) == 0) break;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x000140098ea2;
                  break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x000140098ea2;
                }
                break;
              case (undefined1 (*) [16])0x21:
              case (undefined1 (*) [16])0x35:
                uVar57 = (ulonglong)local_90 & 1;
joined_r0x000140098d48:
                if (uVar57 == 0) {
code_r0x000140098ea2:
                  *(uint *)*local_78 = 0;
                }
                break;
              case (undefined1 (*) [16])0x52:
                pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
                if (pauVar18 != param_4) {
                  if ((((ulonglong)local_90 & 8) == 0) &&
                     (pauVar22 = (undefined1 (*) [16])(ulonglong)(byte)(*pauVar18)[0],
                     ((*pauVar18)[0] & 0xfe) == 0x28)) {
code_r0x000140098dee:
                    *(char *)local_88 = (char)pauVar22;
                    *(uint *)*local_78 = (uint)pauVar22;
                    pcVar43 = (char *)pauVar22;
                  }
                  else if (((ulonglong)local_90 & 0x10) == 0) {
                    bVar10 = (*pauVar18)[0];
                    pauVar22 = (undefined1 (*) [16])(ulonglong)bVar10;
                    if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140098dee;
                  }
                }
                break;
              case (undefined1 (*) [16])0x54:
                if (((ulonglong)local_90 & 0x2000000) != 0) {
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                    if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                    goto code_r0x000140098ea2;
                    break;
                  default:
                    goto code_r0x000140098ea2;
                  case 8:
                  case 0xd:
                  case 0x14:
                    break;
                  }
                }
                break;
              case (undefined1 (*) [16])0x71:
              case (undefined1 (*) [16])0x73:
                uVar57 = (ulonglong)local_90 & 0x10;
                goto joined_r0x000140098d66;
              case (undefined1 (*) [16])0x72:
                uVar57 = (ulonglong)local_90 & 2;
joined_r0x000140098d66:
                if (uVar57 != 0) break;
                goto code_r0x000140098ea2;
              }
code_r0x000140098c20:
              iVar58 = iVar58 + 1;
              pauVar22 = pauVar26;
              if (iVar58 == 0x7fffffff) goto code_r0x000140098ece;
            }
            if (iVar58 != 0) goto code_r0x000140098ece;
            if (*(uint *)*local_78 == 0xffffffff) goto code_r0x0001400a1917;
            pauVar18 = param_4;
            if ((((uVar39 & 0x10000) != 0) &&
                (bVar10 = (byte)(cVar14 + 0x9aU) >> 1 | cVar14 << 7, bVar10 < 9)) &&
               ((0x1d1U >> (bVar10 & 0x1f) & 1) != 0)) {
              ppuVar55 = (undefined **)(ulonglong)*(uint *)(&UNK_14010b538 + (ulonglong)bVar10 * 4);
              goto code_r0x00014009a627;
            }
            uVar15 = (uint)pcVar43 & 0xff;
            if (-1 < (short)uVar39) {
              if (cVar14 == 'x') goto code_r0x00014009a16f;
              if (uVar15 == 0x75) goto code_r0x00014009a095;
              if (uVar15 == 99) goto code_r0x000140099fbd;
code_r0x00014009a17c:
              if ((uVar39 & 0x2000) == 0) goto code_r0x00014009a185;
              *(uint *)*local_b0 = 0;
              iVar58 = 0;
              ppuVar55 = (undefined **)0x0;
              unaff_RSI = pauVar22;
              goto code_r0x00014009a213;
            }
            ppuVar55 = (undefined **)0x7;
            switch(uVar15) {
            case 0x61:
              goto code_r0x00014009a627;
            case 0x62:
              ppuVar55 = (undefined **)0x8;
code_r0x00014009a627:
              *(uint *)*local_b0 = (uint)ppuVar55;
              if (pauVar22 == param_4) {
code_r0x00014009a6eb:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                goto code_r0x00014009dc4a;
              }
              if ((((*pauVar22)[0] == '\\') &&
                  (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar56 != param_4))
                 && ((((uVar39 & 8) == 0 &&
                      (((ulonglong)*(undefined1 (**) [16])*pauVar56 & 0xfe) == 0x28)) ||
                     (((uVar39 & 0x10) == 0 && (((*pauVar56)[0] == '}' || ((*pauVar56)[0] == '{'))))
                     )))) {
                pauVar22 = pauVar56;
              }
              pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
              *(undefined1 (**) [16])*local_98 = pauVar56;
              if (pauVar56 == param_4) goto code_r0x00014009a6eb;
              cVar14 = (*pauVar56)[0];
              uVar45 = (uint)cVar14;
              auVar71 = ZEXT1664(auVar69);
              auVar72 = ZEXT1664(auVar70);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              break;
            case 99:
code_r0x000140099fbd:
              if ((uVar39 & 0x40000) == 0) goto code_r0x00014009a17c;
              if (pauVar22 == param_4) {
code_r0x00014009a878:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                bVar10 = 0xff;
                bVar62 = true;
                pcVar43 = (char *)param_4;
                goto code_r0x00014009db2d;
              }
              if ((((*pauVar22)[0] == '\\') &&
                  (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar56 != param_4))
                 && ((((uVar39 & 8) == 0 &&
                      (((ulonglong)*(undefined1 (**) [16])*pauVar56 & 0xfe) == 0x28)) ||
                     (((uVar39 & 0x10) == 0 && (((*pauVar56)[0] == '}' || ((*pauVar56)[0] == '{'))))
                     )))) {
                pauVar22 = pauVar56;
              }
              pcVar43 = (char *)((longlong)*pauVar22 + 1);
              *(char **)*local_98 = pcVar43;
              if ((undefined1 (*) [16])pcVar43 == param_4) goto code_r0x00014009a878;
              bVar10 = (*(undefined1 (*) [16])pcVar43)[0];
              uVar45 = (uint)(char)bVar10;
              auVar71 = ZEXT1664(auVar69);
              auVar72 = ZEXT1664(auVar70);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              bVar62 = false;
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(byte *)local_88 = bVar10;
              unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
              if (0x73 < uVar45 - 10) {
                uVar39 = (ulonglong)local_90 & 0xffffffff;
                unaff_RSI = param_4;
                goto code_r0x00014009db2d;
              }
              uVar39 = (ulonglong)local_90 & 0xffffffff;
              unaff_RSI = param_4;
              switch(unaff_RDI) {
              case (undefined1 (*) [16])0x0:
                if ((char)local_b8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
                break;
              default:
                goto code_r0x00014009db2d;
              case (undefined1 (*) [16])0x1a:
                if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                    (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar22 != param_4)
                    ) && ((*pauVar22)[0] != '\n')) goto code_r0x00014009db1e;
                break;
              case (undefined1 (*) [16])0x1e:
              case (undefined1 (*) [16])0x1f:
                uVar57 = (ulonglong)local_90 & 8;
                goto joined_r0x00014009d30f;
              case (undefined1 (*) [16])0x20:
                if (((ulonglong)local_90 & 0x4000000) == 0) break;
                bVar62 = false;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                  bVar62 = false;
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x00014009db1e;
                  break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014009db1e;
                }
                goto code_r0x00014009db2d;
              case (undefined1 (*) [16])0x21:
              case (undefined1 (*) [16])0x35:
                uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014009d30f:
                if (uVar57 == 0) {
code_r0x00014009db1e:
                  *(uint *)*local_78 = 0;
                }
                break;
              case (undefined1 (*) [16])0x52:
                pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
                if ((pauVar22 == param_4) ||
                   (((((ulonglong)local_90 & 8) != 0 ||
                     (bVar11 = (*pauVar22)[0], ((*pauVar22)[0] & 0xfe) != 0x28)) &&
                    ((((ulonglong)local_90 & 0x10) != 0 ||
                     ((bVar11 = (*pauVar22)[0], bVar11 != 0x7d && (bVar11 != 0x7b)))))))) break;
                bVar10 = bVar11;
                *(byte *)local_88 = bVar10;
                *(uint *)*local_78 = (uint)bVar10;
                bVar62 = false;
                goto code_r0x00014009db2d;
              case (undefined1 (*) [16])0x54:
                if (((ulonglong)local_90 & 0x2000000) != 0) {
                  bVar62 = false;
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                    if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                    goto code_r0x00014009db2b;
                    break;
                  case 8:
                  case 0xd:
                  case 0x14:
                    goto code_r0x00014009db2d;
                  }
                  goto code_r0x00014009db1e;
                }
                break;
              case (undefined1 (*) [16])0x71:
              case (undefined1 (*) [16])0x73:
                uVar57 = (ulonglong)local_90 & 0x10;
                goto joined_r0x00014009d7c9;
              case (undefined1 (*) [16])0x72:
                uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014009d7c9:
                if (uVar57 != 0) break;
                goto code_r0x00014009db1e;
              }
code_r0x00014009db2b:
              bVar62 = false;
code_r0x00014009db2d:
              if ((*(ushort *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                    (ulonglong)bVar10 * 2) & 0x103) == 0) goto code_r0x0001400a1917;
              ppuVar55 = (undefined **)(ulonglong)(uint)(int)((char)bVar10 % ' ');
              *(int *)*local_b0 = (int)((char)bVar10 % ' ');
              if (bVar62) {
code_r0x00014009dc26:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                goto code_r0x00014009dc3d;
              }
              if ((((*(undefined1 (*) [16])pcVar43)[0] == '\\') &&
                  (pauVar22 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
                  pauVar22 != param_4)) &&
                 ((((uVar39 & 8) == 0 &&
                   (((ulonglong)*(undefined1 (**) [16])*pauVar22 & 0xfe) == 0x28)) ||
                  (((uVar39 & 0x10) == 0 && (((*pauVar22)[0] == '}' || ((*pauVar22)[0] == '{')))))))
                 ) {
                pcVar43 = (char *)pauVar22;
              }
              pauVar22 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1);
              *(undefined1 (**) [16])*local_98 = pauVar22;
              if (pauVar22 == param_4) goto code_r0x00014009dc26;
              cVar14 = (*pauVar22)[0];
              uVar45 = (uint)cVar14;
              auVar71 = ZEXT1664(auVar71._0_16_);
              auVar72 = ZEXT1664(auVar72._0_16_);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(char *)local_88 = cVar14;
              unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
              unaff_RSI = param_4;
              switch(unaff_RDI) {
              case (undefined1 (*) [16])0x0:
                if ((char)local_b8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
              default:
                goto code_r0x00014009dc3d;
              case (undefined1 (*) [16])0x1a:
                if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                    (pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 2),
                    (undefined1 (*) [16])pcVar43 != param_4)) &&
                   ((*(undefined1 (*) [16])pcVar43)[0] != '\n')) goto code_r0x00014009dfc3;
                goto code_r0x00014009dc3d;
              case (undefined1 (*) [16])0x1e:
              case (undefined1 (*) [16])0x1f:
                uVar39 = (ulonglong)local_90 & 8;
                break;
              case (undefined1 (*) [16])0x20:
                if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014009dc3d;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x00014009dfc3;
                default:
                  goto code_r0x00014009dc3d;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014009dfc3;
                }
              case (undefined1 (*) [16])0x21:
              case (undefined1 (*) [16])0x35:
                uVar39 = (ulonglong)local_90 & 1;
                break;
              case (undefined1 (*) [16])0x52:
                pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 2);
                if ((undefined1 (*) [16])pcVar43 == param_4) goto code_r0x00014009dc3d;
                if ((((ulonglong)local_90 & 8) != 0) ||
                   (uVar15 = (uint)(byte)(*(undefined1 (*) [16])pcVar43)[0],
                   ((*(undefined1 (*) [16])pcVar43)[0] & 0xfe) != 0x28)) {
                  if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014009dc3d;
                  bVar10 = (*(undefined1 (*) [16])pcVar43)[0];
                  uVar15 = (uint)bVar10;
                  if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014009dc3d;
                }
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                goto code_r0x00014009dc3d;
              case (undefined1 (*) [16])0x54:
                if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014009dc3d;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                  if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014009dc3d;
                }
                goto code_r0x00014009dfc3;
              case (undefined1 (*) [16])0x71:
              case (undefined1 (*) [16])0x73:
                uVar39 = (ulonglong)local_90 & 0x10;
                break;
              case (undefined1 (*) [16])0x72:
                uVar39 = (ulonglong)local_90 & 2;
              }
              if (uVar39 != 0) goto code_r0x00014009dc3d;
code_r0x00014009dfc3:
              *(uint *)*local_78 = 0;
              goto code_r0x00014009dc3d;
            default:
              goto code_r0x00014009a17c;
            case 0x75:
code_r0x00014009a095:
              if ((uVar39 & 0x800) == 0) goto code_r0x00014009a17c;
              if (pauVar22 == param_4) {
code_r0x00014009a89c:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                pcVar43 = (char *)CONCAT71(uVar44,0xff);
                pauVar56 = param_4;
                goto code_r0x00014009a8b9;
              }
              if ((((*pauVar22)[0] == '\\') &&
                  (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar26 != param_4))
                 && ((((uVar39 & 8) == 0 &&
                      (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
                     (((uVar39 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{'))))
                     )))) {
                pauVar22 = pauVar26;
              }
              pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
              *(undefined1 (**) [16])*local_98 = pauVar56;
              if (pauVar56 == param_4) goto code_r0x00014009a89c;
              bVar10 = (*pauVar56)[0];
              pcVar43 = (char *)(ulonglong)bVar10;
              uVar45 = (uint)(char)bVar10;
              auVar71 = ZEXT1664(auVar69);
              auVar72 = ZEXT1664(auVar70);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(byte *)local_88 = bVar10;
              unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
              if (0x73 < uVar45 - 10) {
                uVar39 = (ulonglong)local_90 & 0xffffffff;
                unaff_RSI = param_4;
                goto code_r0x00014009a8b9;
              }
              uVar39 = (ulonglong)local_90 & 0xffffffff;
              unaff_RSI = param_4;
              switch(unaff_RDI) {
              case (undefined1 (*) [16])0x0:
                if ((char)local_b8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
                break;
              case (undefined1 (*) [16])0x1a:
                if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar26 != param_4)
                    ) && ((*pauVar26)[0] != '\n')) goto code_r0x00014009dcb8;
                break;
              case (undefined1 (*) [16])0x1e:
              case (undefined1 (*) [16])0x1f:
                uVar57 = (ulonglong)local_90 & 8;
                goto joined_r0x00014009d31e;
              case (undefined1 (*) [16])0x20:
                if (((ulonglong)local_90 & 0x4000000) == 0) break;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x00014009dcb8;
                  break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014009dcb8;
                }
                break;
              case (undefined1 (*) [16])0x21:
              case (undefined1 (*) [16])0x35:
                uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014009d31e:
                if (uVar57 == 0) {
code_r0x00014009dcb8:
                  *(uint *)*local_78 = 0;
                }
                break;
              case (undefined1 (*) [16])0x52:
                pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
                if (pauVar26 != param_4) {
                  if ((((ulonglong)local_90 & 8) == 0) &&
                     (uVar15 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) == 0x28)) {
code_r0x00014009d95a:
                    *(char *)local_88 = (char)uVar15;
                    *(uint *)*local_78 = uVar15;
                    pcVar43 = (char *)(ulonglong)uVar15;
                  }
                  else if (((ulonglong)local_90 & 0x10) == 0) {
                    bVar10 = (*pauVar26)[0];
                    uVar15 = (uint)bVar10;
                    if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009d95a;
                  }
                }
                break;
              case (undefined1 (*) [16])0x54:
                if (((ulonglong)local_90 & 0x2000000) != 0) {
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                    if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                    goto code_r0x00014009dcb8;
                    break;
                  default:
                    goto code_r0x00014009dcb8;
                  case 8:
                  case 0xd:
                  case 0x14:
                    break;
                  }
                }
                break;
              case (undefined1 (*) [16])0x71:
              case (undefined1 (*) [16])0x73:
                uVar57 = (ulonglong)local_90 & 0x10;
                goto joined_r0x00014009d7d8;
              case (undefined1 (*) [16])0x72:
                uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014009d7d8:
                if (uVar57 != 0) break;
                goto code_r0x00014009dcb8;
              }
code_r0x00014009a8b9:
              *(uint *)*local_b0 = 0;
              ppuVar55 = (undefined **)0x0;
              pauVar26 = (undefined1 (*) [16])0xfffffffc;
              goto code_r0x00014009a8f8;
            case 0x78:
code_r0x00014009a16f:
              if ((uVar39 & 0x1000) == 0) goto code_r0x00014009a17c;
              if (pauVar22 == param_4) {
code_r0x00014009abb8:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                pcVar43 = (char *)CONCAT71(uVar44,0xff);
                pauVar56 = param_4;
                goto code_r0x00014009abd5;
              }
              if ((((*pauVar22)[0] == '\\') &&
                  (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar26 != param_4))
                 && ((((uVar39 & 8) == 0 &&
                      (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
                     (((uVar39 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{'))))
                     )))) {
                pauVar22 = pauVar26;
              }
              pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
              *(undefined1 (**) [16])*local_98 = pauVar56;
              if (pauVar56 == param_4) goto code_r0x00014009abb8;
              bVar10 = (*pauVar56)[0];
              pcVar43 = (char *)(ulonglong)bVar10;
              uVar45 = (uint)(char)bVar10;
              auVar71 = ZEXT1664(auVar69);
              auVar72 = ZEXT1664(auVar70);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(byte *)local_88 = bVar10;
              unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
              if (0x73 < uVar45 - 10) {
                uVar39 = (ulonglong)local_90 & 0xffffffff;
                unaff_RSI = param_4;
                goto code_r0x00014009abd5;
              }
              uVar39 = (ulonglong)local_90 & 0xffffffff;
              unaff_RSI = param_4;
              switch(unaff_RDI) {
              case (undefined1 (*) [16])0x0:
                if ((char)local_b8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
                break;
              case (undefined1 (*) [16])0x1a:
                if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar26 != param_4)
                    ) && ((*pauVar26)[0] != '\n')) goto code_r0x00014009dd14;
                break;
              case (undefined1 (*) [16])0x1e:
              case (undefined1 (*) [16])0x1f:
                uVar57 = (ulonglong)local_90 & 8;
                goto joined_r0x00014009d34b;
              case (undefined1 (*) [16])0x20:
                if (((ulonglong)local_90 & 0x4000000) == 0) break;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x00014009dd14;
                  break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014009dd14;
                }
                break;
              case (undefined1 (*) [16])0x21:
              case (undefined1 (*) [16])0x35:
                uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014009d34b:
                if (uVar57 == 0) {
code_r0x00014009dd14:
                  *(uint *)*local_78 = 0;
                }
                break;
              case (undefined1 (*) [16])0x52:
                pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
                if (pauVar26 != param_4) {
                  if ((((ulonglong)local_90 & 8) == 0) &&
                     (uVar15 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) == 0x28)) {
code_r0x00014009d9b4:
                    *(char *)local_88 = (char)uVar15;
                    *(uint *)*local_78 = uVar15;
                    pcVar43 = (char *)(ulonglong)uVar15;
                  }
                  else if (((ulonglong)local_90 & 0x10) == 0) {
                    bVar10 = (*pauVar26)[0];
                    uVar15 = (uint)bVar10;
                    if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009d9b4;
                  }
                }
                break;
              case (undefined1 (*) [16])0x54:
                if (((ulonglong)local_90 & 0x2000000) != 0) {
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                    if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                    goto code_r0x00014009dd14;
                    break;
                  default:
                    goto code_r0x00014009dd14;
                  case 8:
                  case 0xd:
                  case 0x14:
                    break;
                  }
                }
                break;
              case (undefined1 (*) [16])0x71:
              case (undefined1 (*) [16])0x73:
                uVar57 = (ulonglong)local_90 & 0x10;
                goto joined_r0x00014009d7e7;
              case (undefined1 (*) [16])0x72:
                uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014009d7e7:
                if (uVar57 != 0) break;
                goto code_r0x00014009dd14;
              }
code_r0x00014009abd5:
              *(uint *)*local_b0 = 0;
              pauVar26 = (undefined1 (*) [16])0x0;
              ppuVar55 = (undefined **)0x0;
              goto code_r0x00014009ac1b;
            }
            *(uint *)*local_78 = uVar15;
            *(char *)local_88 = cVar14;
            unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
            unaff_RSI = param_4;
            switch(unaff_RDI) {
            case (undefined1 (*) [16])0x0:
              if ((char)local_b8 != '\0') {
                *(uint *)*local_78 = 0x7c;
              }
            default:
              goto code_r0x00014009dc4a;
            case (undefined1 (*) [16])0x1a:
              if (((((ulonglong)local_90 & 0x2000000) != 0) &&
                  (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar22 != param_4))
                 && ((*pauVar22)[0] != '\n')) goto code_r0x00014009b165;
              goto code_r0x00014009dc4a;
            case (undefined1 (*) [16])0x1e:
            case (undefined1 (*) [16])0x1f:
              uVar39 = (ulonglong)local_90 & 8;
              break;
            case (undefined1 (*) [16])0x20:
              if (((ulonglong)local_90 & 0x4000000) == 0) goto code_r0x00014009dc4a;
              switch(*(uint *)((longlong)*local_a8 + 8)) {
              case 2:
                uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                goto code_r0x00014009b165;
              default:
                goto code_r0x00014009dc4a;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014009b165;
              }
            case (undefined1 (*) [16])0x21:
            case (undefined1 (*) [16])0x35:
              uVar39 = (ulonglong)local_90 & 1;
              break;
            case (undefined1 (*) [16])0x52:
              pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
              if (pauVar22 == param_4) goto code_r0x00014009dc4a;
              if ((((ulonglong)local_90 & 8) != 0) ||
                 (uVar15 = (uint)(byte)(*pauVar22)[0], ((*pauVar22)[0] & 0xfe) != 0x28)) {
                if (((ulonglong)local_90 & 0x10) != 0) goto code_r0x00014009dc4a;
                bVar10 = (*pauVar22)[0];
                uVar15 = (uint)bVar10;
                if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014009dc4a;
              }
              *(char *)local_88 = (char)uVar15;
              *(uint *)*local_78 = uVar15;
              goto code_r0x00014009dc4a;
            case (undefined1 (*) [16])0x54:
              if (((ulonglong)local_90 & 0x2000000) == 0) goto code_r0x00014009dc4a;
              switch(*(uint *)((longlong)*local_a8 + 8)) {
              case 2:
                uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014009dc4a;
              }
              goto code_r0x00014009b165;
            case (undefined1 (*) [16])0x71:
            case (undefined1 (*) [16])0x73:
              uVar39 = (ulonglong)local_90 & 0x10;
              break;
            case (undefined1 (*) [16])0x72:
              uVar39 = (ulonglong)local_90 & 2;
            }
            if (uVar39 != 0) goto code_r0x00014009dc4a;
code_r0x00014009b165:
            *(uint *)*local_78 = 0;
            goto code_r0x00014009dc4a;
          }
          lVar29 = *(longlong *)((longlong)local_98[6] + 8);
          local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,*(uint *)local_98[7]);
          pcVar43 = (char *)0x0;
          ppuVar55 = &PTR_s_alpha_140111f78;
          bVar62 = false;
          pcVar27 = "alnum";
          do {
            if ((0x2810UL >> ((ulonglong)pcVar43 & 0x3f) & 1) != 0) {
              pauVar26 = (undefined1 (*) [16])(ulonglong)(byte)*pcVar27;
              plVar3 = *(longlong **)(lVar29 + 8);
              auVar71 = ZEXT1664(auVar71._0_16_);
              auVar72 = ZEXT1664(auVar72._0_16_);
              uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,(*pauVar22)[0]);
              unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
              plVar3 = *(longlong **)(lVar29 + 8);
              cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,pauVar26);
              if ((char)uVar15 == cVar14) {
                if (!bVar62) {
                  uVar42 = *(ushort *)((longlong)ppuVar55 + -4);
                  goto code_r0x0001400988a6;
                }
                break;
              }
            }
            pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 1);
            pcVar27 = *ppuVar55;
            bVar62 = (byte *)pcVar27 == (byte *)0x0;
            ppuVar55 = ppuVar55 + 3;
          } while ((undefined1 (*) [16])pcVar43 != (undefined1 (*) [16])0xf);
          uVar42 = 0;
code_r0x0001400988a6:
          uVar33 = uVar42 | 3;
          if ((uVar42 & 3) == 0) {
            uVar33 = uVar42;
          }
          if (((ulonglong)local_90 & 0x100) == 0) {
            uVar33 = uVar42;
          }
          if (uVar33 == 0) {
            uVar39 = (ulonglong)*(uint *)local_98[8];
            pcVar43 = (char *)(ulonglong)(byte)*(uint *)((longlong)local_98[7] + 8);
            param_4 = *(undefined1 (**) [16])local_98[1];
            unaff_RSI = *(undefined1 (**) [16])*local_98;
            goto code_r0x000140098bc1;
          }
          unaff_RDI = *(undefined1 (**) [16])((longlong)local_98[4] + 8);
          uVar42 = *(ushort *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                    (ulonglong)(byte)*(uint *)((longlong)local_98[7] + 8) * 2);
          uVar39 = 0;
          do {
            uVar32 = uVar33;
            if ((uVar33 == 0xffff) && (uVar32 = 0x107, uVar39 == 0x5f)) {
              if ((uVar42 & 1) == 0) {
code_r0x000140098959:
                pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RDI[2] + 8);
                if (pauVar31 == (undefined1 (*) [32])0x0) {
                  auVar71 = ZEXT1664(auVar71._0_16_);
                  auVar72 = ZEXT1664(auVar72._0_16_);
                  pauVar31 = operator_new(0x20);
                  *pauVar31 = ZEXT1232(ZEXT812(0));
                  *(undefined1 (**) [32])((longlong)unaff_RDI[2] + 8) = pauVar31;
                }
                pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
                *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
              }
            }
            else if ((bool)((byte)uVar42 & 1) !=
                     ((*(ushort *)
                        (*(longlong *)(*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18)
                        + uVar39 * 2) & uVar32) != 0)) goto code_r0x000140098959;
            uVar39 = uVar39 + 1;
          } while (uVar39 != 0x100);
          unaff_RSI = *(undefined1 (**) [16])*local_98;
          pauVar26 = *(undefined1 (**) [16])local_98[1];
          if (unaff_RSI != pauVar26) {
            if ((((char)*(uint *)*unaff_RSI == '\\') &&
                (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26))
               && ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
                   (((*(uint *)*local_80 & 0x10) == 0 &&
                    ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
              unaff_RSI = pauVar18;
            }
            unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
            *(undefined1 (**) [16])*local_98 = unaff_RSI;
          }
          if (unaff_RSI == pauVar26) goto code_r0x000140099c81;
          cVar14 = (char)*(uint *)*unaff_RSI;
          uVar45 = (uint)cVar14;
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(char *)local_88 = cVar14;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
          switch(unaff_RDI) {
          case (undefined1 (*) [16])0x0:
            goto code_r0x000140099cdc;
          case (undefined1 (*) [16])0x1a:
            if (((*(uint *)*local_80 & 0x2000000) == 0) ||
               (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI == pauVar26))
            break;
            goto code_r0x000140099d29;
          case (undefined1 (*) [16])0x1e:
          case (undefined1 (*) [16])0x1f:
            goto code_r0x000140099c6c;
          case (undefined1 (*) [16])0x20:
            if ((*(uint *)*local_80 & 0x4000000) == 0) break;
            pauVar18 = *(undefined1 (**) [16])*local_a0;
            switch(*(undefined4 *)(*pauVar18 + 8)) {
            case 2:
              goto code_r0x000140099dca;
            default:
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009a866;
            }
          case (undefined1 (*) [16])0x21:
          case (undefined1 (*) [16])0x35:
            goto code_r0x000140099c9d;
          case (undefined1 (*) [16])0x52:
            unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
            if (unaff_RSI == pauVar26) break;
            goto code_r0x000140099d44;
          case (undefined1 (*) [16])0x54:
            if ((*(uint *)*local_80 & 0x2000000) != 0) {
              pauVar18 = *(undefined1 (**) [16])*local_a0;
              switch(*(undefined4 *)(*pauVar18 + 8)) {
              case 2:
                goto code_r0x000140099e24;
              default:
                goto code_r0x00014009a866;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case (undefined1 (*) [16])0x71:
          case (undefined1 (*) [16])0x73:
            goto code_r0x000140099cb2;
          case (undefined1 (*) [16])0x72:
            goto code_r0x000140099cc7;
          }
          goto code_r0x000140097da6;
        }
        *(uint *)*local_b0 = 0x5c;
        if (pauVar22 == param_4) {
code_r0x0001400987ea:
          *(uint *)*local_78 = 0xffffffff;
          *(undefined1 *)local_88 = 0xff;
          pauVar26 = (undefined1 (*) [16])0x5c;
          goto code_r0x00014009b350;
        }
        if ((((*pauVar22)[0] == '\\') &&
            (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar26 != param_4)) &&
           ((((uVar45 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28))
            || (((uVar45 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))) {
          pauVar22 = pauVar26;
        }
        pauVar26 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
        *(undefined1 (**) [16])*local_98 = pauVar26;
        if (pauVar26 == param_4) goto code_r0x0001400987ea;
        cVar14 = (*pauVar26)[0];
        uVar46 = (uint)cVar14;
        auVar71 = ZEXT1664(auVar71._0_16_);
        auVar72 = ZEXT1664(auVar72._0_16_);
        pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
        uVar15 = uVar46;
        if (pvVar19 == (void *)0x0) {
          uVar15 = 0;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        pauVar26 = (undefined1 (*) [16])0x5c;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          pauVar56 = (undefined1 (*) [16])0x5c;
          if (((uVar45 & 4) == 0) || (*local_c0 != 0)) break;
code_r0x00014009a4b0:
          *(uint *)*local_78 = 0x7c;
          goto code_r0x00014009b350;
        default:
          goto code_r0x00014009b25b;
        case (undefined1 (*) [16])0x1a:
          if ((uVar45 & 0x2000000) == 0) goto code_r0x00014009b25b;
          pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
          pauVar56 = (undefined1 (*) [16])0x5c;
          if (pauVar22 == param_4) break;
          cVar14 = (*pauVar22)[0];
joined_r0x00014009a4e0:
          pauVar56 = pauVar26;
          if (cVar14 != '\n') goto code_r0x00014009a5e3;
          break;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          uVar45 = uVar45 & 8;
joined_r0x000140099e4b:
          pauVar56 = pauVar26;
          if (uVar45 == 0) goto code_r0x00014009a5e3;
          break;
        case (undefined1 (*) [16])0x20:
          if ((uVar45 & 0x4000000) == 0) goto code_r0x00014009b25b;
          pauVar56 = (undefined1 (*) [16])0x5c;
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if (0x14 < uVar15) break;
joined_r0x00014009a590:
            pauVar56 = pauVar26;
            if ((0x102100U >> (uVar15 & 0x1f) & 1) != 0) goto code_r0x00014009a5e3;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009a5e3;
          }
          break;
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          uVar45 = uVar45 & 1;
          goto joined_r0x000140099e56;
        case (undefined1 (*) [16])0x52:
          pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
          if (pauVar22 == param_4) goto code_r0x00014009b25b;
          if (((uVar45 & 8) != 0) ||
             (uVar15 = (uint)(byte)(*pauVar22)[0], ((*pauVar22)[0] & 0xfe) != 0x28)) {
            ppuVar55 = (undefined **)0x5c;
            pauVar56 = (undefined1 (*) [16])ppuVar55;
            if ((uVar45 & 0x10) != 0) break;
            bVar10 = (*pauVar22)[0];
            uVar15 = (uint)bVar10;
            if (bVar10 == 0x7d) goto code_r0x00014009a528;
joined_r0x00014009a522:
            pauVar56 = pauVar26;
            if (bVar10 != 0x7b) break;
          }
          goto code_r0x00014009a528;
        case (undefined1 (*) [16])0x54:
          if ((uVar45 & 0x2000000) == 0) goto code_r0x00014009b25b;
          pauVar56 = (undefined1 (*) [16])0x5c;
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if (0x14 < uVar15) break;
            uVar45 = 0x102100 >> (uVar15 & 0x1f);
            goto joined_r0x000140099e4b;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009b24f;
          }
          goto code_r0x00014009a5e3;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          uVar45 = uVar45 & 0x10;
joined_r0x000140099e56:
          pauVar56 = pauVar26;
          if (uVar45 != 0) break;
code_r0x00014009a5e3:
          *(uint *)*local_78 = 0;
          goto code_r0x00014009b350;
        case (undefined1 (*) [16])0x72:
code_r0x00014009993d:
          if ((uVar45 & 2) == 0) goto code_r0x00014009a5e3;
          goto code_r0x00014009b25b;
        }
        goto code_r0x00014009b24f;
      }
      if (uVar15 != 0x5d) goto code_r0x000140097fa1;
      goto code_r0x00014009e907;
    }
    if (uVar15 != 0x5b) {
      if (uVar15 != 0xffffffff) {
code_r0x000140097fa1:
        uVar15 = (uint)(char)*(uint *)((longlong)local_98[7] + 8);
        ppuVar55 = (undefined **)(ulonglong)uVar15;
        *(uint *)((longlong)local_98[7] + 4) = uVar15;
        param_4 = *(undefined1 (**) [16])*local_98;
        pauVar26 = *(undefined1 (**) [16])local_98[1];
        if (param_4 != pauVar26) {
          if ((((*param_4)[0] == '\\') &&
              (pauVar22 = (undefined1 (*) [16])((longlong)*param_4 + 1), pauVar22 != pauVar26)) &&
             ((((*(uint *)*local_80 & 8) == 0 &&
               (((ulonglong)*(undefined1 (**) [16])*pauVar22 & 0xfe) == 0x28)) ||
              (((*(uint *)*local_80 & 0x10) == 0 &&
               (((*pauVar22)[0] == '}' || ((*pauVar22)[0] == '{')))))))) {
            param_4 = pauVar22;
          }
          param_4 = (undefined1 (*) [16])((longlong)*param_4 + 1);
          *(undefined1 (**) [16])*local_98 = param_4;
        }
        unaff_RSI = param_4;
        if (param_4 == pauVar26) goto code_r0x00014009afa9;
        cVar14 = (*param_4)[0];
        uVar45 = (uint)cVar14;
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
        uVar15 = uVar45;
        if (pvVar19 == (void *)0x0) {
          uVar15 = 0;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) goto code_r0x00014009b230;
          goto code_r0x0001400981f4;
        default:
          goto code_r0x00014009b230;
        case (undefined1 (*) [16])0x1a:
          if (((*(uint *)*local_80 & 0x2000000) == 0) ||
             (param_4 = (undefined1 (*) [16])((longlong)*param_4 + 1), param_4 == pauVar26))
          goto code_r0x00014009b230;
          cVar14 = (*param_4)[0];
          goto joined_r0x00014009b1b5;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          bVar10 = (byte)*(uint *)*local_80 & 8;
          break;
        case (undefined1 (*) [16])0x20:
          if ((*(uint *)*local_80 & 0x4000000) == 0) goto code_r0x00014009b230;
          pauVar22 = *(undefined1 (**) [16])*local_a0;
          switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            goto code_r0x000140098492;
          default:
            goto code_r0x00014009b230;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009b221;
          }
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          bVar10 = (byte)*(uint *)*local_80 & 1;
          break;
        case (undefined1 (*) [16])0x52:
          param_4 = (undefined1 (*) [16])((longlong)*param_4 + 1);
          if (param_4 == pauVar26) goto code_r0x00014009b230;
          if (((*(uint *)*local_80 & 8) != 0) ||
             (uVar15 = (uint)(byte)(*param_4)[0], ((*param_4)[0] & 0xfe) != 0x28)) {
            if ((*(uint *)*local_80 & 0x10) != 0) goto code_r0x00014009b230;
            uVar15 = (uint)(byte)(*param_4)[0];
            if ((*param_4)[0] == 0x7d) goto code_r0x00014009838d;
            goto code_r0x000140098384;
          }
          goto code_r0x00014009838d;
        case (undefined1 (*) [16])0x54:
          if ((*(uint *)*local_80 & 0x2000000) != 0) {
            pauVar22 = *(undefined1 (**) [16])*local_a0;
            switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              goto code_r0x000140098b84;
            default:
              goto code_r0x00014009b221;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
          }
          goto code_r0x00014009b230;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          bVar10 = (byte)*(uint *)*local_80 & 0x10;
          break;
        case (undefined1 (*) [16])0x72:
          bVar10 = (byte)*(uint *)*local_80 & 2;
        }
        if (bVar10 == 0) goto code_r0x00014009b221;
        goto code_r0x00014009b230;
      }
      goto code_r0x00014009e907;
    }
    pauVar22 = *(undefined1 (**) [16])*local_98;
    pauVar56 = *(undefined1 (**) [16])local_98[1];
    if (pauVar22 != pauVar56) {
      if ((((char)*(uint *)*pauVar22 == '\\') &&
          (pauVar37 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar37 != pauVar56)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar37 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar37, cVar14 == '}' || (cVar14 == '{')))))))) {
        pauVar22 = pauVar37;
      }
      pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
      *(undefined1 (**) [16])*local_98 = pauVar22;
    }
    if (pauVar22 == pauVar56) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      goto code_r0x0001400986e0;
    }
    cVar14 = (char)*(uint *)*pauVar22;
    uVar46 = (uint)cVar14;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar45 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar45 = 0;
    }
    pcVar43 = (char *)(ulonglong)uVar45;
    *(uint *)*local_78 = uVar45;
    *(char *)local_88 = cVar14;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
        goto code_r0x0001400986e0;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (pauVar37 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar37 != pauVar56)) &&
         ((char)*(uint *)*pauVar37 != '\n')) goto code_r0x0001400985df;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x000140098144;
    case (undefined1 (*) [16])0x20:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x0001400985df;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400985df;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      bVar10 = (byte)*(uint *)*local_80 & 1;
      goto joined_r0x000140098144;
    case (undefined1 (*) [16])0x52:
      pauVar37 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
      if (pauVar37 != pauVar56) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar37, pauVar28 = (undefined1 (*) [16])(ulonglong)bVar10,
           (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400982ce:
          *(char *)local_88 = (char)pauVar28;
          *(uint *)*local_78 = (uint)pauVar28;
          pcVar43 = (char *)pauVar28;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar37;
          pauVar28 = (undefined1 (*) [16])(ulonglong)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400982ce;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
          goto code_r0x0001400985df;
          break;
        default:
          goto code_r0x0001400985df;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x000140098144;
    case (undefined1 (*) [16])0x72:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140098144:
      if (bVar10 != 0) break;
code_r0x0001400985df:
      *(uint *)*local_78 = 0;
      goto code_r0x0001400986e0;
    }
    uVar45 = (uint)pcVar43;
    if ((0x3d < uVar45) || ((0x2400400000000000U >> ((ulonglong)pcVar43 & 0x3f) & 1) == 0)) {
code_r0x0001400986e0:
      *(uint *)*local_b0 = uVar15;
      pauVar56 = (undefined1 (*) [16])ppuVar55;
      goto code_r0x00014009b24f;
    }
    if ((((char)*(uint *)*pauVar22 == '\\') &&
        (pauVar37 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar37 != pauVar56)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar37 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar37, cVar14 == '}' || (cVar14 == '{')))))))) {
      pauVar22 = pauVar37;
    }
    pauVar37 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar37;
    if (pauVar37 == pauVar56) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      uVar15 = 0xffffffff;
      param_4 = pauVar18;
      goto code_r0x00014009913f;
    }
    cVar14 = (char)*(uint *)*pauVar37;
    uVar46 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar15 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    param_4 = pauVar18;
    switch(uVar46) {
    case 10:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
        uVar15 = 0x7c;
      }
      break;
    case 0x24:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar18 != pauVar56)) &&
         ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x000140099130;
      break;
    case 0x28:
    case 0x29:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x000140098f4d;
    case 0x2a:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0)) goto code_r0x000140099130;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x000140099130;
      }
      break;
    case 0x2b:
    case 0x3f:
      bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140098f4d:
      if (bVar10 == 0) {
code_r0x000140099130:
        *(uint *)*local_78 = 0;
        uVar15 = 0;
      }
      break;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
      if (pauVar18 != pauVar56) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar46 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140099086:
          uVar15 = uVar46;
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar46 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140099086;
        }
      }
      break;
    case 0x5e:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0))
          goto code_r0x000140099130;
          break;
        default:
          goto code_r0x000140099130;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x000140098fd6;
    case 0x7c:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140098fd6:
      if (bVar10 != 0) break;
      goto code_r0x000140099130;
    }
code_r0x00014009913f:
    local_ec = 1;
    if (((uVar45 != 0x3a) && (local_ec = 0, uVar45 != 0x3d)) && (local_ec = 0xe, uVar45 == 0x2e)) {
      local_ec = 0;
    }
    uVar46 = *(uint *)*local_80;
    unaff_RSI = *(undefined1 (**) [16])*local_a0;
    auVar65._4_4_ = uVar46;
    auVar65._0_4_ = uVar46;
    auVar65._8_4_ = uVar46;
    auVar65._12_4_ = uVar46;
    auVar69 = vpand_avx(auVar65,auVar71._0_16_);
    auVar69 = vpcmpeqd_avx(auVar69,auVar72._0_16_);
    uVar17 = vmovmskps_avx(auVar69);
    bVar10 = (byte)uVar17;
    local_b8 = (undefined1 (*) [16])CONCAT71(local_b8._1_7_,(bVar10 & 2) >> 1);
    local_c8 = (undefined1 (*) [16])CONCAT71(local_c8._1_7_,(bVar10 & 4) >> 2);
    local_d8 = (undefined1 (*) [16])CONCAT44(local_d8._4_4_,uVar17);
    local_e8 = (undefined1 (*) [16])CONCAT71(local_e8._1_7_,bVar10 >> 3);
    local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,uVar46);
    local_dc = CONCAT31(local_dc._1_3_,*local_c0 == 0 & (byte)uVar46 >> 2);
    ppuVar55 = (undefined **)0x0;
    local_90 = pauVar37;
    while( true ) {
      auVar70 = auVar72._0_16_;
      auVar69 = auVar71._0_16_;
      uVar46 = (uint)ppuVar55;
      if ((uVar15 + 1 < 0x3f) &&
         ((0x4800800000000001U >> ((ulonglong)(uVar15 + 1) & 0x3f) & 1) != 0)) break;
      if (local_90 == pauVar56) {
code_r0x0001400991e0:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        uVar15 = 0xffffffff;
        pauVar26 = pauVar56;
        goto code_r0x0001400991ff;
      }
      if ((((char)*(uint *)*local_90 == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*local_90 + 1), pauVar26 != pauVar56)) &&
         (((((ulonglong)local_a8 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          ((((ulonglong)local_a8 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        local_90 = pauVar26;
      }
      pauVar26 = (undefined1 (*) [16])((longlong)*local_90 + 1);
      *(undefined1 (**) [16])*local_98 = pauVar26;
      if (pauVar26 == pauVar56) goto code_r0x0001400991e0;
      cVar14 = (char)*(uint *)*pauVar26;
      uVar47 = (uint)cVar14;
      pvVar19 = memchr(&DAT_140111e80,uVar47,0x17);
      uVar15 = uVar47;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      switch(uVar47) {
      case 10:
        if ((undefined1)local_dc != '\0') {
          *(uint *)*local_78 = 0x7c;
          uVar15 = 0x7c;
        }
        break;
      case 0x24:
        if ((((char)local_b8 == '\0') &&
            (pauVar18 = (undefined1 (*) [16])((longlong)*local_90 + 2), pauVar18 != pauVar56)) &&
           ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x000140099452;
        break;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)local_a8 & 8;
        goto joined_r0x000140099303;
      case 0x2a:
        if (((ulonglong)local_d8 & 1) != 0) break;
        switch(*(uint *)((longlong)*unaff_RSI + 8)) {
        case 2:
          uVar47 = *(uint *)(*(longlong *)((longlong)unaff_RSI[1] + 8) + 8);
          if ((uVar47 < 0x15) && ((0x102100U >> (uVar47 & 0x1f) & 1) != 0))
          goto code_r0x000140099452;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x000140099452;
        }
        break;
      case 0x2b:
      case 0x3f:
        cVar14 = (char)local_c8;
        goto joined_r0x000140099312;
      case 0x5c:
        pauVar18 = (undefined1 (*) [16])((longlong)*local_90 + 2);
        if (pauVar18 != pauVar56) {
          if ((((ulonglong)local_a8 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*pauVar18, uVar47 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400993b1:
            uVar15 = uVar47;
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
          }
          else if (((ulonglong)local_a8 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*pauVar18;
            uVar47 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400993b1;
          }
        }
        break;
      case 0x5e:
        if ((char)local_b8 == '\0') {
          switch(*(uint *)((longlong)*unaff_RSI + 8)) {
          case 2:
            uVar47 = *(uint *)(*(longlong *)((longlong)unaff_RSI[1] + 8) + 8);
            if ((0x14 < uVar47) || ((0x102100U >> (uVar47 & 0x1f) & 1) == 0))
            goto code_r0x000140099452;
            break;
          default:
            goto code_r0x000140099452;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)local_a8 & 0x10;
joined_r0x000140099303:
        if (uVar39 == 0) {
code_r0x000140099452:
          *(uint *)*local_78 = 0;
          uVar15 = 0;
        }
        break;
      case 0x7c:
        cVar14 = (char)local_e8;
joined_r0x000140099312:
        if (cVar14 == '\0') break;
        goto code_r0x000140099452;
      }
code_r0x0001400991ff:
      ppuVar55 = (undefined **)(ulonglong)(uVar46 + 1);
      local_90 = pauVar26;
    }
    if (uVar15 != uVar45) goto code_r0x0001400a1a14;
    if (uVar45 == 0x3a) {
      ppuVar55 = *(undefined ***)((longlong)local_98[6] + 8);
      local_c8 = (undefined1 (*) [16])CONCAT44(local_c8._4_4_,*(uint *)local_98[7]);
      local_a8 = (undefined1 (*) [16])((longlong)local_90 - (longlong)pauVar37);
      uVar39 = 0;
      bVar62 = false;
      pcVar43 = "alnum";
      local_b8 = pauVar37;
      do {
        if (local_a8 == (undefined1 (*) [16])(ulonglong)(uint)(&DAT_140111f70)[uVar39 * 6]) {
          pauVar26 = local_b8;
          if (local_b8 == local_90) {
code_r0x00014009959d:
            uVar42 = (&DAT_140111f74)[(uVar39 & 0xffffffff) * 0xc];
            goto code_r0x0001400995b0;
          }
          while( true ) {
            uVar12 = (*(undefined1 (*) [16])pcVar43)[0];
            cVar14 = (**(code **)(**(longlong **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8) +
                                 0x20))(*(longlong **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8)
                                        ,(char)*(uint *)*pauVar26);
            cVar13 = (**(code **)(**(longlong **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8) +
                                 0x20))(*(longlong **)((longlong)*(undefined1 (*) [16])ppuVar55 + 8)
                                        ,uVar12);
            if (cVar14 != cVar13) break;
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
            pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 1);
            if (pauVar26 == local_90) {
              if (!bVar62) goto code_r0x00014009959d;
              goto code_r0x00014009953d;
            }
          }
        }
        uVar39 = uVar39 + 1;
        pcVar43 = (&PTR_s_alnum_140111f60)[uVar39 * 3];
        bVar62 = (undefined1 (*) [16])pcVar43 == (undefined1 (*) [16])0x0;
      } while (uVar39 != 0xf);
code_r0x00014009953d:
      uVar42 = 0;
code_r0x0001400995b0:
      uVar33 = uVar42 | 3;
      if ((uVar42 & 3) == 0) {
        uVar33 = uVar42;
      }
      if (((ulonglong)local_c8 & 0x100) == 0) {
        uVar33 = uVar42;
      }
      uVar42 = 0;
      if (uVar33 == 0) goto code_r0x0001400a2350;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      uVar39 = 0;
      do {
        uVar42 = uVar33;
        if (((uVar33 == 0xffff) && (uVar42 = 0x107, uVar39 == 0x5f)) ||
           ((*(ushort *)
              (*(longlong *)(*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) +
              uVar39 * 2) & uVar42) != 0)) {
          pauVar31 = *(undefined1 (**) [32])(pauVar26[2] + 8);
          if (pauVar31 == (undefined1 (*) [32])0x0) {
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            pauVar31 = operator_new(0x20);
            *pauVar31 = ZEXT1232(ZEXT812(0));
            *(undefined1 (**) [32])(pauVar26[2] + 8) = pauVar31;
          }
          pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
          *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
        }
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
        uVar39 = uVar39 + 1;
      } while (uVar39 != 0x100);
    }
    else if (uVar45 == 0x2e) {
      if (pauVar37 == local_90) goto LAB_1400a23e2;
      pauVar26 = unaff_RSI + 2;
      for (puVar36 = *(uint **)unaff_RSI[2]; puVar36 != (uint *)0x0;
          puVar36 = *(uint **)(puVar36 + 6)) {
        if (*puVar36 <= uVar46) {
          if (*puVar36 == uVar46) goto code_r0x00014009990c;
          goto code_r0x0001400998cf;
        }
        pauVar26 = (undefined1 (*) [16])(puVar36 + 6);
      }
      puVar36 = (uint *)0x0;
code_r0x0001400998cf:
      puVar20 = operator_new(0x20);
      *puVar20 = uVar46;
      *(undefined1 (*) [16])(puVar20 + 2) = auVar72._0_16_;
      *(uint **)*pauVar26 = puVar20;
      *(uint **)(puVar20 + 6) = puVar36;
      puVar36 = *(uint **)*pauVar26;
code_r0x00014009990c:
      do {
        uVar45 = *(uint *)*pauVar37;
        uVar15 = puVar36[3];
        if (uVar15 < puVar36[2]) {
          pvVar19 = *(void **)(puVar36 + 4);
        }
        else {
          pvVar19 = realloc(*(void **)(puVar36 + 4),(ulonglong)(uVar15 + 0x10));
          if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
          *(void **)(puVar36 + 4) = pvVar19;
          puVar36[2] = uVar15 + 0x10;
          uVar15 = puVar36[3];
        }
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
        pauVar37 = (undefined1 (*) [16])((longlong)*pauVar37 + 1);
        puVar36[3] = uVar15 + 1;
        *(char *)((longlong)pvVar19 + (ulonglong)uVar15) = (char)uVar45;
      } while (pauVar37 != local_90);
    }
    else if (uVar45 == 0x3d) {
      if (pauVar37 == local_90) goto LAB_1400a23e2;
      pauVar26 = (undefined1 (*) [16])((longlong)local_90 - (longlong)pauVar37);
      if ((longlong)pauVar26 < 0) goto code_r0x0001400a2320;
      pauVar18 = *(undefined1 (**) [16])*local_d0;
      if (pauVar26 < (undefined1 (*) [16])0x1000) {
        pauVar22 = operator_new((__uint64)pauVar26);
      }
      else {
        pvVar19 = operator_new((longlong)pauVar26[2] + 7);
        pauVar22 = (undefined1 (*) [16])((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pauVar22[-1] + 8) = pvVar19;
      }
      param_4 = (undefined1 (*) [16])((longlong)pauVar22 + (longlong)pauVar26);
      local_a8 = pauVar22;
      local_90 = pauVar26;
      memmove(pauVar22,pauVar37,(size_t)pauVar26);
      plVar3 = *(longlong **)(*pauVar18 + 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,pauVar22,param_4);
      plVar3 = *(longlong **)*pauVar18;
      (**(code **)(*plVar3 + 0x20))(plVar3,local_110,local_a8);
      local_138._8_8_ = local_110[1];
      local_138._0_8_ = local_110[0];
      sStack_128 = lStack_100;
      pauStack_120 = (undefined1 (*) [16])uStack_f8;
      pauVar26 = local_a8;
      if (((undefined1 (*) [16])0xfff < local_90) &&
         (pauVar26 = *(undefined1 (**) [16])((longlong)local_a8[-1] + 8),
         0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pauVar26)))) goto LAB_1400a3888;
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      free(pauVar26);
      sVar9 = sStack_128;
      local_a8 = pauStack_120;
      local_b8 = (undefined1 (*) [16])local_138._0_8_;
      ppuVar55 = (undefined **)local_138;
      if ((undefined1 (*) [16])0xf < pauStack_120) {
        ppuVar55 = (undefined **)local_138._0_8_;
      }
      uVar39 = 0;
      while( true ) {
        auVar69 = auVar71._0_16_;
        auVar70 = auVar72._0_16_;
        if (0xff < (uint)uVar39) break;
        pauVar26 = *(undefined1 (**) [16])*local_d0;
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        local_90 = operator_new(1);
        param_4 = (undefined1 (*) [16])((longlong)*local_90 + 1);
        (*local_90)[0] = (byte)uVar39;
        plVar3 = *(longlong **)(*pauVar26 + 8);
        (**(code **)(*plVar3 + 0x18))(plVar3,local_90,param_4);
        plVar3 = *(longlong **)*pauVar26;
        (**(code **)(*plVar3 + 0x20))(plVar3,local_110,local_90);
        local_168._8_8_ = local_110[1];
        local_168._0_8_ = local_110[0];
        local_168._16_8_ = lStack_100;
        local_168._24_8_ = uStack_f8;
        auVar71 = ZEXT1664(auVar71._0_16_);
        auVar72 = ZEXT1664(auVar72._0_16_);
        free(local_90);
        uVar5 = local_168._24_8_;
        if (local_168._16_8_ == sVar9) {
          puVar40 = local_168;
          if (0xf < (ulonglong)local_168._24_8_) {
            puVar40 = (undefined1 *)local_168._0_8_;
          }
          iVar58 = memcmp(puVar40,ppuVar55,sVar9);
          bVar62 = iVar58 == 0;
        }
        else {
          bVar62 = false;
        }
        if (0xf < (ulonglong)uVar5) {
          puVar40 = (undefined1 *)local_168._0_8_;
          if ((0xfff < uVar5 + 1) &&
             (puVar40 = *(undefined1 **)(local_168._0_8_ + -8),
             (undefined1 *)0x1f < (undefined1 *)(local_168._0_8_ + (-8 - (longlong)puVar40))))
          goto LAB_1400a3888;
          free(puVar40);
        }
        if (bVar62) {
          pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8);
          if (pauVar31 == (undefined1 (*) [32])0x0) {
            pauVar31 = operator_new(0x20);
            *pauVar31 = ZEXT1232(ZEXT812(0));
            *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8) = pauVar31;
          }
          pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3));
          *pbVar41 = *pbVar41 | (byte)(1 << ((byte)uVar39 & 7));
        }
        uVar39 = (ulonglong)((uint)uVar39 + 1);
      }
      if ((undefined1 (*) [16])0xf < local_a8) {
        pauVar26 = local_b8;
        if ((0xfff < (longlong)*local_a8 + 1U) &&
           (pauVar26 = *(undefined1 (**) [16])((longlong)local_b8[-1] + 8),
           0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pauVar26)))) goto LAB_1400a3888;
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        free(pauVar26);
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
      }
    }
    uVar45 = (uint)ppuVar55;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar26 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar26) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
         ((((*(uint *)*local_80 & 8) == 0 &&
           (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))
           ))))) {
        unaff_RSI = pauVar18;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI != pauVar26) {
      cVar14 = (char)*(uint *)*unaff_RSI;
      uVar46 = (uint)cVar14;
      auVar71 = ZEXT1664(auVar69);
      auVar72 = ZEXT1664(auVar70);
      pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
      uVar15 = uVar46;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar46 - 10);
      switch(unaff_RDI) {
      case (undefined1 (*) [16])0x0:
        if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) goto code_r0x0001400a1aca;
        break;
      case (undefined1 (*) [16])0x1a:
        if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
            (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
           ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x0001400a1a07;
        break;
      case (undefined1 (*) [16])0x1e:
      case (undefined1 (*) [16])0x1f:
        bVar10 = (byte)*(uint *)*local_80 & 8;
        goto joined_r0x000140099a67;
      case (undefined1 (*) [16])0x20:
        if ((*(uint *)*local_80 & 0x4000000) != 0) {
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0))
            goto code_r0x0001400a1a07;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x0001400a1a07;
          }
        }
        break;
      case (undefined1 (*) [16])0x21:
      case (undefined1 (*) [16])0x35:
        bVar10 = (byte)*(uint *)*local_80 & 1;
        goto joined_r0x000140099a67;
      case (undefined1 (*) [16])0x52:
        pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        if (pauVar18 != pauVar26) {
          if ((*(uint *)*local_80 & 8) == 0) {
            bVar10 = (byte)*(uint *)*pauVar18;
            param_4 = (undefined1 (*) [16])((ulonglong)bVar10 & 0xfffffffffffffffe);
            uVar45 = (uint)bVar10;
            if ((char)param_4 != '(') goto code_r0x000140099aed;
code_r0x000140099b08:
            uVar15 = uVar45;
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
          }
          else {
code_r0x000140099aed:
            if ((*(uint *)*local_80 & 0x10) == 0) {
              bVar10 = (byte)*(uint *)*pauVar18;
              uVar45 = (uint)bVar10;
              if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140099b08;
            }
          }
        }
        break;
      case (undefined1 (*) [16])0x54:
        if ((*(uint *)*local_80 & 0x2000000) != 0) {
          switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
          case 2:
            uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
            if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
            goto code_r0x0001400a1a07;
            break;
          default:
            goto code_r0x0001400a1a07;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case (undefined1 (*) [16])0x71:
      case (undefined1 (*) [16])0x73:
        bVar10 = (byte)*(uint *)*local_80 & 0x10;
        goto joined_r0x000140099a67;
      case (undefined1 (*) [16])0x72:
        bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140099a67:
        if (bVar10 == 0) goto code_r0x0001400a1a07;
      }
      if (uVar15 == 0x5d) {
        if ((((char)*(uint *)*unaff_RSI == '\\') &&
            (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar26)) &&
           ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
            (((*(uint *)*local_80 & 0x10) == 0 &&
             ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
          unaff_RSI = pauVar18;
        }
        pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        *(undefined1 (**) [16])*local_98 = pauVar18;
        if (pauVar18 == pauVar26) {
code_r0x000140099c81:
          *(uint *)*local_78 = 0xffffffff;
          *(undefined1 *)local_88 = 0xff;
          goto code_r0x000140097da6;
        }
        cVar14 = (char)*(uint *)*pauVar18;
        uVar45 = (uint)cVar14;
        pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
        uVar15 = uVar45;
        if (pvVar19 == (void *)0x0) {
          uVar15 = 0;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
code_r0x000140099cdc:
          if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
            *(uint *)*local_78 = 0x7c;
          }
          break;
        case (undefined1 (*) [16])0x1a:
          if (((*(uint *)*local_80 & 0x2000000) != 0) &&
             (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), unaff_RSI != pauVar26)) {
code_r0x000140099d29:
            if ((char)*(uint *)*unaff_RSI != '\n') goto code_r0x00014009a866;
          }
          break;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
code_r0x000140099c6c:
          bVar10 = (byte)*(uint *)*local_80 & 8;
          goto joined_r0x000140099ca7;
        case (undefined1 (*) [16])0x20:
          if ((*(uint *)*local_80 & 0x4000000) == 0) break;
          pauVar18 = *(undefined1 (**) [16])*local_a0;
          switch(*(undefined4 *)(*pauVar18 + 8)) {
          case 2:
code_r0x000140099dca:
            uVar15 = *(uint *)(*(longlong *)(pauVar18[1] + 8) + 8);
            if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
            goto code_r0x00014009a866;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009a866;
          }
          break;
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
code_r0x000140099c9d:
          bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140099ca7:
          if (bVar10 == 0) {
code_r0x00014009a866:
            *(uint *)*local_78 = 0;
          }
          break;
        case (undefined1 (*) [16])0x52:
          unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
          if (unaff_RSI != pauVar26) {
code_r0x000140099d44:
            if (((*(uint *)*local_80 & 8) == 0) &&
               (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28))
            {
code_r0x000140099d79:
              *(char *)local_88 = (char)uVar15;
              *(uint *)*local_78 = uVar15;
            }
            else if ((*(uint *)*local_80 & 0x10) == 0) {
              bVar10 = (byte)*(uint *)*unaff_RSI;
              uVar15 = (uint)bVar10;
              if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140099d79;
            }
          }
          break;
        case (undefined1 (*) [16])0x54:
          if ((*(uint *)*local_80 & 0x2000000) != 0) {
            pauVar18 = *(undefined1 (**) [16])*local_a0;
            switch(*(undefined4 *)(*pauVar18 + 8)) {
            case 2:
code_r0x000140099e24:
              uVar15 = *(uint *)(*(longlong *)(pauVar18[1] + 8) + 8);
              if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
              goto code_r0x00014009a866;
              break;
            default:
              goto code_r0x00014009a866;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
          }
          break;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
code_r0x000140099cb2:
          bVar10 = (byte)*(uint *)*local_80 & 0x10;
          goto joined_r0x000140099cd1;
        case (undefined1 (*) [16])0x72:
code_r0x000140099cc7:
          bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140099cd1:
          if (bVar10 != 0) break;
          goto code_r0x00014009a866;
        }
        goto code_r0x000140097da6;
      }
      goto code_r0x0001400a1a14;
    }
    goto code_r0x0001400a1962;
  case 0x5c:
    pauVar18 = *(undefined1 (**) [16])*local_98;
    local_90 = *(undefined1 (**) [16])local_98[1];
    if (pauVar18 != local_90) {
      if ((((char)*(uint *)*pauVar18 == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar26 != local_90)) &&
         ((((*(uint *)*local_80 & 8) == 0 &&
           (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))
           ))))) {
        pauVar18 = pauVar26;
      }
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
      *(undefined1 (**) [16])*local_98 = pauVar18;
    }
    if (pauVar18 == local_90) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RBX = (undefined1 (*) [16])(ulonglong)*(uint *)*local_80;
      unaff_RDI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0xff);
      uVar15 = 0xffffffff;
      goto code_r0x00014009520a;
    }
    bVar10 = (byte)*(uint *)*pauVar18;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    unaff_RDI = unaff_RSI;
    switch(uVar45) {
    case 10:
      if ((*(uint *)*local_80 & 4) != 0) {
        uVar45 = 0x7c;
        uVar46 = *local_c0;
joined_r0x000140096395:
        if (uVar46 == 0) goto code_r0x000140096397;
      }
      break;
    case 0x24:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar26 != local_90)) &&
         (uVar45 = 0, (*pauVar26)[0] != '\n')) goto code_r0x000140096397;
      break;
    case 0x28:
    case 0x29:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x000140095619;
    case 0x2a:
      if ((*(uint *)*local_80 & 0x4000000) != 0) {
        uVar45 = 0;
        param_4 = (undefined1 (*) [16])&UNK_1400b6f74;
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0))
          goto code_r0x000140096397;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x000140096397;
        }
      }
      break;
    case 0x2b:
    case 0x3f:
      bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x000140095619:
      uVar45 = 0;
      if (bVar10 == 0) {
code_r0x000140096397:
        *(uint *)*local_78 = uVar45;
        uVar15 = uVar45;
      }
      break;
    case 0x5c:
      pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
      if (pauVar26 != local_90) {
        if ((*(uint *)*local_80 & 8) == 0) {
          uVar45 = (uint)(byte)(*pauVar26)[0];
          param_4 = (undefined1 (*) [16])((ulonglong)(byte)(*pauVar26)[0] & 0xfffffffffffffffe);
          if ((char)param_4 != '(') goto code_r0x000140096156;
code_r0x000140096171:
          *(char *)local_88 = (char)uVar45;
          unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar45;
          goto code_r0x000140096397;
        }
code_r0x000140096156:
        if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (*pauVar26)[0];
          uVar45 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140096171;
        }
      }
      break;
    case 0x5e:
      if ((*(uint *)*local_80 & 0x2000000) == 0) break;
      uVar45 = 0;
      param_4 = (undefined1 (*) [16])&UNK_1400b6f28;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if (uVar46 < 0x15) {
          uVar46 = 0x102100U >> (uVar46 & 0x1f) & 1;
          goto joined_r0x000140096395;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400963a2;
      }
      goto code_r0x000140096397;
    case 0x7b:
    case 0x7d:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x00014009609b;
    case 0x7c:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009609b:
      uVar45 = 0;
      if (bVar10 != 0) break;
      goto code_r0x000140096397;
    }
code_r0x0001400963a2:
    unaff_RBX = (undefined1 (*) [16])(ulonglong)*(uint *)*local_80;
    cVar14 = (char)*(uint *)*local_80;
    if ((cVar14 < '\0') && ((char)unaff_RDI == 'b')) {
      puVar23 = operator_new(0x20);
      *puVar23 = std::_Node_base::vftable;
      *(undefined4 *)(puVar23 + 1) = 4;
      *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      puVar23[3] = pauVar26;
      if (*(longlong *)pauVar26[1] != 0) {
        puVar23[2] = *(longlong *)pauVar26[1];
        *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
        pauVar26 = *(undefined1 (**) [16])*local_a0;
      }
      *(undefined8 **)pauVar26[1] = puVar23;
      *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
      unaff_RSI = *(undefined1 (**) [16])*local_98;
      pauVar18 = *(undefined1 (**) [16])local_98[1];
      if (unaff_RSI != pauVar18) {
        if ((((char)*(uint *)*unaff_RSI == '\\') &&
            (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
           ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
            (((*(uint *)*local_80 & 0x10) == 0 &&
             ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
          unaff_RSI = pauVar26;
        }
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        *(undefined1 (**) [16])*local_98 = unaff_RSI;
      }
      if (unaff_RSI == pauVar18) goto LAB_140094880;
      cVar14 = (char)*(uint *)*unaff_RSI;
      uVar45 = (uint)cVar14;
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
      switch(unaff_RDI) {
      case (undefined1 (*) [16])0x0:
code_r0x000140096684:
        if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) break;
        goto code_r0x00014009ea6e;
      case (undefined1 (*) [16])0x1a:
code_r0x0001400966a6:
        if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
            (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI != pauVar18)) &&
           ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x00014009f5a4;
        break;
      case (undefined1 (*) [16])0x1e:
      case (undefined1 (*) [16])0x1f:
code_r0x000140096630:
        bVar10 = (byte)*(uint *)*local_80 & 8;
        goto joined_r0x000140096679;
      case (undefined1 (*) [16])0x20:
        if ((*(uint *)*local_80 & 0x4000000) != 0) {
          switch(*(undefined4 *)(puVar23 + 1)) {
          case 2:
code_r0x00014009f586:
            if ((*(uint *)(puVar23[3] + 8) < 0x15) &&
               ((0x102100U >> (*(uint *)(puVar23[3] + 8) & 0x1f) & 1) != 0))
            goto code_r0x00014009f5a4;
            break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009f5a4;
          }
        }
        break;
      case (undefined1 (*) [16])0x21:
      case (undefined1 (*) [16])0x35:
code_r0x000140096645:
        bVar10 = (byte)*(uint *)*local_80 & 1;
        goto joined_r0x000140096679;
      case (undefined1 (*) [16])0x52:
code_r0x0001400966d1:
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        if (unaff_RSI != pauVar18) {
          if (((*(uint *)*local_80 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x000140096712:
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
          }
          else if ((*(uint *)*local_80 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*unaff_RSI;
            uVar15 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140096712;
          }
        }
        break;
      case (undefined1 (*) [16])0x54:
        if ((*(uint *)*local_80 & 0x2000000) != 0) {
          switch(*(undefined4 *)(puVar23 + 1)) {
          case 2:
code_r0x00014009f5e3:
            if ((0x14 < *(uint *)(puVar23[3] + 8)) ||
               ((0x102100U >> (*(uint *)(puVar23[3] + 8) & 0x1f) & 1) == 0))
            goto code_r0x00014009f5a4;
            break;
          default:
            goto code_r0x00014009f5a4;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case (undefined1 (*) [16])0x71:
      case (undefined1 (*) [16])0x73:
code_r0x00014009665a:
        bVar10 = (byte)*(uint *)*local_80 & 0x10;
        goto joined_r0x000140096679;
      case (undefined1 (*) [16])0x72:
code_r0x00014009666f:
        bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x000140096679:
        if (bVar10 != 0) break;
        goto code_r0x00014009f5a4;
      }
      goto LAB_140094897;
    }
    if ((cVar14 < '\0') && ((char)unaff_RDI == 'B')) {
      puVar23 = operator_new(0x20);
      *puVar23 = std::_Node_base::vftable;
      *(undefined4 *)(puVar23 + 1) = 4;
      *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      puVar23[3] = pauVar26;
      if (*(longlong *)pauVar26[1] != 0) {
        puVar23[2] = *(longlong *)pauVar26[1];
        *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
        pauVar26 = *(undefined1 (**) [16])*local_a0;
      }
      *(undefined8 **)pauVar26[1] = puVar23;
      *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
      *(byte *)((longlong)puVar23 + 0xc) = *(byte *)((longlong)puVar23 + 0xc) ^ 1;
      unaff_RSI = *(undefined1 (**) [16])*local_98;
      pauVar18 = *(undefined1 (**) [16])local_98[1];
      if (unaff_RSI != pauVar18) {
        if ((((char)*(uint *)*unaff_RSI == '\\') &&
            (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
           ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
            (((*(uint *)*local_80 & 0x10) == 0 &&
             ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
          unaff_RSI = pauVar26;
        }
        unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
        *(undefined1 (**) [16])*local_98 = unaff_RSI;
      }
      if (unaff_RSI != pauVar18) {
        cVar14 = (char)*(uint *)*unaff_RSI;
        uVar45 = (uint)cVar14;
        pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
        uVar15 = uVar45;
        if (pvVar19 == (void *)0x0) {
          uVar15 = 0;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
        switch(unaff_RDI) {
        case (undefined1 (*) [16])0x0:
          goto code_r0x000140096684;
        case (undefined1 (*) [16])0x1a:
          goto code_r0x0001400966a6;
        case (undefined1 (*) [16])0x1e:
        case (undefined1 (*) [16])0x1f:
          goto code_r0x000140096630;
        case (undefined1 (*) [16])0x20:
          if ((*(uint *)*local_80 & 0x4000000) != 0) {
            switch(*(undefined4 *)(puVar23 + 1)) {
            case 2:
              goto code_r0x00014009f586;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009f5a4;
            }
          }
          break;
        case (undefined1 (*) [16])0x21:
        case (undefined1 (*) [16])0x35:
          goto code_r0x000140096645;
        case (undefined1 (*) [16])0x52:
          goto code_r0x0001400966d1;
        case (undefined1 (*) [16])0x54:
          if ((*(uint *)*local_80 & 0x2000000) != 0) {
            switch(*(undefined4 *)(puVar23 + 1)) {
            case 2:
              goto code_r0x00014009f5e3;
            default:
              goto code_r0x00014009f5a4;
            case 8:
            case 0xd:
            case 0x14:
              break;
            }
          }
          break;
        case (undefined1 (*) [16])0x71:
        case (undefined1 (*) [16])0x73:
          goto code_r0x00014009665a;
        case (undefined1 (*) [16])0x72:
          goto code_r0x00014009666f;
        }
        goto LAB_140094897;
      }
      goto LAB_140094880;
    }
code_r0x00014009520a:
    cVar14 = (char)unaff_RDI;
    pauVar26 = unaff_RBX;
    if (((ulonglong)unaff_RBX & 0x100) == 0) {
code_r0x000140095232:
      if (uVar15 != 0xffffffff) {
        auVar69 = auVar71._0_16_;
        auVar70 = auVar72._0_16_;
        pauVar22 = local_90;
        if (((((ulonglong)unaff_RBX & 0x10000) != 0) &&
            (bVar10 = (byte)(cVar14 + 0x9aU) >> 1 | cVar14 << 7, bVar10 < 9)) &&
           ((0x1d1U >> (bVar10 & 0x1f) & 1) != 0)) {
          ppuVar55 = (undefined **)(ulonglong)*(uint *)(&UNK_14010b538 + (ulonglong)bVar10 * 4);
          goto code_r0x000140095f39;
        }
        uVar44 = (undefined7)((ulonglong)unaff_RSI >> 8);
        if ((short)unaff_RBX < 0) {
          ppuVar55 = (undefined **)0x7;
          switch((uint)unaff_RDI & 0xff) {
          case 0x61:
            goto code_r0x000140095f39;
          case 0x62:
            ppuVar55 = (undefined **)0x8;
code_r0x000140095f39:
            *(uint *)*local_b0 = (uint)ppuVar55;
            unaff_RDI = (undefined1 (*) [16])ppuVar55;
            if (pauVar18 == local_90) {
code_r0x000140095ff4:
              *(uint *)*local_78 = 0xffffffff;
              *(undefined1 *)local_88 = 0xff;
              goto code_r0x00014009ff2a;
            }
            if ((((char)*(uint *)*pauVar18 == '\\') &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar26 != local_90))
               && (((((ulonglong)unaff_RBX & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                   ((((ulonglong)unaff_RBX & 0x10) == 0 &&
                    ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
              pauVar18 = pauVar26;
            }
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
            *(undefined1 (**) [16])*local_98 = pauVar26;
            if (pauVar26 == local_90) goto code_r0x000140095ff4;
            cVar14 = (char)*(uint *)*pauVar26;
            uVar45 = (uint)cVar14;
            pauVar22 = (undefined1 (*) [16])0x0;
            auVar71 = ZEXT1664(auVar69);
            auVar72 = ZEXT1664(auVar70);
            pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
            uVar15 = uVar45;
            if (pvVar19 == (void *)0x0) {
              uVar15 = 0;
            }
            *(uint *)*local_78 = uVar15;
            *(char *)local_88 = cVar14;
            switch(uVar45) {
            case 10:
              if ((((ulonglong)unaff_RBX & 4) != 0) && (*local_c0 == 0)) {
                *(uint *)*local_78 = 0x7c;
              }
              break;
            case 0x24:
              if (((((ulonglong)unaff_RBX & 0x2000000) != 0) &&
                  (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar26 != local_90))
                 && ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014009f857;
              break;
            case 0x28:
            case 0x29:
              uVar39 = (ulonglong)unaff_RBX & 8;
              goto joined_r0x00014009f6ea;
            case 0x2a:
              if (((ulonglong)unaff_RBX & 0x4000000) == 0) break;
              switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                goto code_r0x00014009f857;
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014009f857;
              }
              break;
            case 0x2b:
            case 0x3f:
              uVar39 = (ulonglong)unaff_RBX & 1;
joined_r0x00014009f6ea:
              if (uVar39 == 0) {
code_r0x00014009f857:
                *(uint *)*local_78 = 0;
              }
              break;
            case 0x5c:
              pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
              if (pauVar26 != local_90) {
                if ((((ulonglong)unaff_RBX & 8) == 0) &&
                   (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10,
                   (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009f7a4:
                  *(char *)local_88 = (char)uVar15;
                  *(uint *)*local_78 = uVar15;
                }
                else if (((ulonglong)unaff_RBX & 0x10) == 0) {
                  bVar10 = (byte)*(uint *)*pauVar26;
                  uVar15 = (uint)bVar10;
                  if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009f7a4;
                }
              }
              break;
            case 0x5e:
              if (((ulonglong)unaff_RBX & 0x2000000) != 0) {
                switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                  if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                  goto code_r0x00014009f857;
                  break;
                default:
                  goto code_r0x00014009f857;
                case 8:
                case 0xd:
                case 0x14:
                  break;
                }
              }
              break;
            case 0x7b:
            case 0x7d:
              uVar39 = (ulonglong)unaff_RBX & 0x10;
              goto joined_r0x00014009f706;
            case 0x7c:
              uVar39 = (ulonglong)unaff_RBX & 2;
joined_r0x00014009f706:
              if (uVar39 != 0) break;
              goto code_r0x00014009f857;
            }
            goto code_r0x00014009ff2a;
          case 99:
code_r0x000140095762:
            if (((ulonglong)unaff_RBX & 0x40000) == 0) goto code_r0x000140095912;
            if (pauVar18 == local_90) {
code_r0x000140097594:
              *(uint *)*local_78 = 0xffffffff;
              *(undefined1 *)local_88 = 0xff;
              pauVar26 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0xff);
              bVar62 = true;
              unaff_RSI = local_90;
              goto code_r0x00014009fe14;
            }
            if ((((char)*(uint *)*pauVar18 == '\\') &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar26 != local_90))
               && (((((ulonglong)unaff_RBX & 8) == 0 &&
                    (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
                   ((((ulonglong)unaff_RBX & 0x10) == 0 &&
                    (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))) {
              pauVar18 = pauVar26;
            }
            unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
            *(undefined1 (**) [16])*local_98 = unaff_RSI;
            if (unaff_RSI == local_90) goto code_r0x000140097594;
            bVar10 = (byte)*(uint *)*unaff_RSI;
            pauVar26 = (undefined1 (*) [16])(ulonglong)bVar10;
            uVar45 = (uint)(char)bVar10;
            auVar71 = ZEXT1664(auVar69);
            auVar72 = ZEXT1664(auVar70);
            pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
            bVar62 = false;
            uVar15 = uVar45;
            if (pvVar19 == (void *)0x0) {
              uVar15 = 0;
            }
            break;
          default:
            goto code_r0x000140095912;
          case 0x75:
code_r0x000140095831:
            if (((ulonglong)unaff_RBX & 0x800) == 0) goto code_r0x000140095912;
            local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,(int)unaff_RBX);
            if (pauVar18 == local_90) {
code_r0x0001400975ba:
              *(uint *)*local_78 = 0xffffffff;
              *(undefined1 *)local_88 = 0xff;
              unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,0xff);
              pauVar26 = local_90;
              goto code_r0x0001400975d7;
            }
            if ((((char)*(uint *)*pauVar18 == '\\') &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar26 != local_90))
               && (((((ulonglong)unaff_RBX & 8) == 0 &&
                    (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
                   ((((ulonglong)unaff_RBX & 0x10) == 0 &&
                    (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))) {
              pauVar18 = pauVar26;
            }
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
            *(undefined1 (**) [16])*local_98 = pauVar26;
            if (pauVar26 == local_90) goto code_r0x0001400975ba;
            bVar10 = (byte)*(uint *)*pauVar26;
            unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
            uVar45 = (uint)(char)bVar10;
            auVar71 = ZEXT1664(auVar69);
            auVar72 = ZEXT1664(auVar70);
            pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
            uVar15 = uVar45;
            if (pvVar19 == (void *)0x0) {
              uVar15 = 0;
            }
            *(uint *)*local_78 = uVar15;
            *(byte *)local_88 = bVar10;
            switch(uVar45) {
            case 10:
              if ((((ulonglong)local_a8 & 4) != 0) && (*local_c0 == 0)) {
                *(uint *)*local_78 = 0x7c;
              }
              break;
            case 0x24:
              if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                  (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != local_90))
                 && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x0001400a15ac;
              break;
            case 0x28:
            case 0x29:
              uVar39 = (ulonglong)local_a8 & 8;
              goto joined_r0x00014009f8cf;
            case 0x2a:
              if (((ulonglong)local_a8 & 0x4000000) == 0) break;
              switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                goto code_r0x0001400a15ac;
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x0001400a15ac;
              }
              break;
            case 0x2b:
            case 0x3f:
              uVar39 = (ulonglong)local_a8 & 1;
joined_r0x00014009f8cf:
              if (uVar39 == 0) {
code_r0x0001400a15ac:
                *(uint *)*local_78 = 0;
              }
              break;
            case 0x5c:
              pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
              if (pauVar18 != local_90) {
                if ((((ulonglong)local_a8 & 8) == 0) &&
                   (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10,
                   (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009fc39:
                  *(char *)local_88 = (char)uVar15;
                  *(uint *)*local_78 = uVar15;
                  unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
                }
                else if (((ulonglong)local_a8 & 0x10) == 0) {
                  bVar10 = (byte)*(uint *)*pauVar18;
                  uVar15 = (uint)bVar10;
                  if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009fc39;
                }
              }
              break;
            case 0x5e:
              if (((ulonglong)local_a8 & 0x2000000) != 0) {
                switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                  if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                  goto code_r0x0001400a15ac;
                  break;
                default:
                  goto code_r0x0001400a15ac;
                case 8:
                case 0xd:
                case 0x14:
                  break;
                }
              }
              break;
            case 0x7b:
            case 0x7d:
              uVar39 = (ulonglong)local_a8 & 0x10;
              goto joined_r0x00014009fa8f;
            case 0x7c:
              uVar39 = (ulonglong)local_a8 & 2;
joined_r0x00014009fa8f:
              if (uVar39 != 0) break;
              goto code_r0x0001400a15ac;
            }
code_r0x0001400975d7:
            *(uint *)*local_b0 = 0;
            pauVar18 = *(undefined1 (**) [16])*local_a0;
            local_b8 = (undefined1 (*) [16])
                       CONCAT71(local_b8._1_7_,*local_c0 == 0 & (byte)local_a8 >> 2);
            ppuVar55 = (undefined **)0x0;
            pcVar43 = (char *)0xfffffffc;
            pauVar22 = local_90;
            do {
              cVar14 = (char)unaff_RSI;
              iVar58 = (int)cVar14;
              if ((byte)(cVar14 - 0x30U) < 10) {
                uVar15 = iVar58 - 0x30;
              }
              else if ((byte)(cVar14 + 0x9fU) < 6) {
                uVar15 = iVar58 - 0x57;
              }
              else {
                unaff_RSI = (undefined1 (*) [16])
                            CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
                if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
                uVar15 = iVar58 - 0x37;
              }
              if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)ppuVar55))
              goto code_r0x0001400a1917;
              uVar15 = uVar15 + (int)ppuVar55 * 0x10;
              ppuVar55 = (undefined **)(ulonglong)uVar15;
              *(uint *)*local_b0 = uVar15;
              if (pauVar26 == pauVar22) {
code_r0x000140097610:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
                pauVar26 = pauVar22;
                goto code_r0x00014009762d;
              }
              pauVar56 = pauVar26;
              if ((((char)*(uint *)*pauVar26 == '\\') &&
                  (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar26 != pauVar22))
                 && (((((ulonglong)local_a8 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                     ((((ulonglong)local_a8 & 0x10) == 0 &&
                      ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
                pauVar56 = pauVar26;
              }
              pauVar26 = (undefined1 (*) [16])((longlong)*pauVar56 + 1);
              *(undefined1 (**) [16])*local_98 = pauVar26;
              if (pauVar26 == pauVar22) goto code_r0x000140097610;
              bVar10 = (byte)*(uint *)*pauVar26;
              unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
              uVar45 = (uint)(char)bVar10;
              auVar71 = ZEXT1664(auVar71._0_16_);
              auVar72 = ZEXT1664(auVar72._0_16_);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(byte *)local_88 = bVar10;
              pauVar22 = local_90;
              switch(uVar45) {
              case 10:
                if ((char)local_b8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
                break;
              case 0x24:
                if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                    (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar56 + 2), pauVar56 != local_90
                    )) && ((char)*(uint *)*pauVar56 != '\n')) goto code_r0x0001400978bf;
                break;
              case 0x28:
              case 0x29:
                uVar39 = (ulonglong)local_a8 & 8;
                goto joined_r0x00014009776c;
              case 0x2a:
                if (((ulonglong)local_a8 & 0x4000000) == 0) break;
                switch(*(undefined4 *)(*pauVar18 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)(pauVar18[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x0001400978bf;
                  break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x0001400978bf;
                }
                break;
              case 0x2b:
              case 0x3f:
                uVar39 = (ulonglong)local_a8 & 1;
joined_r0x00014009776c:
                if (uVar39 == 0) {
code_r0x0001400978bf:
                  *(uint *)*local_78 = 0;
                }
                break;
              case 0x5c:
                pauVar56 = (undefined1 (*) [16])((longlong)*pauVar56 + 2);
                if (pauVar56 != local_90) {
                  if ((((ulonglong)local_a8 & 8) == 0) &&
                     (bVar10 = (byte)*(uint *)*pauVar56, uVar15 = (uint)bVar10,
                     (bVar10 & 0xfe) == 0x28)) {
code_r0x000140097814:
                    *(char *)local_88 = (char)uVar15;
                    *(uint *)*local_78 = uVar15;
                    unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
                  }
                  else if (((ulonglong)local_a8 & 0x10) == 0) {
                    bVar10 = (byte)*(uint *)*pauVar56;
                    uVar15 = (uint)bVar10;
                    if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140097814;
                  }
                }
                break;
              case 0x5e:
                if (((ulonglong)local_a8 & 0x2000000) != 0) {
                  switch(*(undefined4 *)(*pauVar18 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)(pauVar18[1] + 8) + 8);
                    if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                    goto code_r0x0001400978bf;
                    break;
                  default:
                    goto code_r0x0001400978bf;
                  case 8:
                  case 0xd:
                  case 0x14:
                    break;
                  }
                }
                break;
              case 0x7b:
              case 0x7d:
                uVar39 = (ulonglong)local_a8 & 0x10;
                goto joined_r0x00014009778a;
              case 0x7c:
                uVar39 = (ulonglong)local_a8 & 2;
joined_r0x00014009778a:
                if (uVar39 != 0) break;
                goto code_r0x0001400978bf;
              }
code_r0x00014009762d:
              uVar15 = (int)pcVar43 + 1;
              pcVar43 = (char *)(ulonglong)uVar15;
            } while (uVar15 != 0);
            goto code_r0x00014009ff1d;
          case 0x78:
code_r0x000140095906:
            if (((ulonglong)unaff_RBX & 0x1000) == 0) goto code_r0x000140095912;
            local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,(int)unaff_RBX);
            if (pauVar18 == local_90) {
code_r0x0001400978dd:
              *(uint *)*local_78 = 0xffffffff;
              *(undefined1 *)local_88 = 0xff;
              unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,0xff);
              pauVar26 = local_90;
              goto code_r0x0001400978fa;
            }
            if ((((char)*(uint *)*pauVar18 == '\\') &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar26 != local_90))
               && (((((ulonglong)unaff_RBX & 8) == 0 &&
                    (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
                   ((((ulonglong)unaff_RBX & 0x10) == 0 &&
                    (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))) {
              pauVar18 = pauVar26;
            }
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
            *(undefined1 (**) [16])*local_98 = pauVar26;
            if (pauVar26 == local_90) goto code_r0x0001400978dd;
            bVar10 = (byte)*(uint *)*pauVar26;
            unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
            uVar45 = (uint)(char)bVar10;
            auVar71 = ZEXT1664(auVar69);
            auVar72 = ZEXT1664(auVar70);
            pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
            uVar15 = uVar45;
            if (pvVar19 == (void *)0x0) {
              uVar15 = 0;
            }
            *(uint *)*local_78 = uVar15;
            *(byte *)local_88 = bVar10;
            switch(uVar45) {
            case 10:
              if ((((ulonglong)local_a8 & 4) != 0) && (*local_c0 == 0)) {
                *(uint *)*local_78 = 0x7c;
              }
              break;
            case 0x24:
              if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                  (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != local_90))
                 && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x0001400a1607;
              break;
            case 0x28:
            case 0x29:
              uVar39 = (ulonglong)local_a8 & 8;
              goto joined_r0x00014009f8fc;
            case 0x2a:
              if (((ulonglong)local_a8 & 0x4000000) == 0) break;
              switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                goto code_r0x0001400a1607;
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x0001400a1607;
              }
              break;
            case 0x2b:
            case 0x3f:
              uVar39 = (ulonglong)local_a8 & 1;
joined_r0x00014009f8fc:
              if (uVar39 == 0) {
code_r0x0001400a1607:
                *(uint *)*local_78 = 0;
              }
              break;
            case 0x5c:
              pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
              if (pauVar18 != local_90) {
                if ((((ulonglong)local_a8 & 8) == 0) &&
                   (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10,
                   (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009fc92:
                  *(char *)local_88 = (char)uVar15;
                  *(uint *)*local_78 = uVar15;
                  unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
                }
                else if (((ulonglong)local_a8 & 0x10) == 0) {
                  bVar10 = (byte)*(uint *)*pauVar18;
                  uVar15 = (uint)bVar10;
                  if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009fc92;
                }
              }
              break;
            case 0x5e:
              if (((ulonglong)local_a8 & 0x2000000) != 0) {
                switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                  if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                  goto code_r0x0001400a1607;
                  break;
                default:
                  goto code_r0x0001400a1607;
                case 8:
                case 0xd:
                case 0x14:
                  break;
                }
              }
              break;
            case 0x7b:
            case 0x7d:
              uVar39 = (ulonglong)local_a8 & 0x10;
              goto joined_r0x00014009fa9e;
            case 0x7c:
              uVar39 = (ulonglong)local_a8 & 2;
joined_r0x00014009fa9e:
              if (uVar39 != 0) break;
              goto code_r0x0001400a1607;
            }
code_r0x0001400978fa:
            *(uint *)*local_b0 = 0;
            local_b8 = *(undefined1 (**) [16])*local_a0;
            local_c8 = (undefined1 (*) [16])
                       CONCAT71(local_c8._1_7_,*local_c0 == 0 & (byte)local_a8 >> 2);
            pcVar43 = (char *)0x0;
            ppuVar55 = (undefined **)0x0;
            pauVar22 = local_90;
            do {
              cVar14 = (char)unaff_RSI;
              iVar58 = (int)cVar14;
              if ((byte)(cVar14 - 0x30U) < 10) {
                uVar15 = iVar58 - 0x30;
              }
              else if ((byte)(cVar14 + 0x9fU) < 6) {
                uVar15 = iVar58 - 0x57;
              }
              else {
                unaff_RSI = (undefined1 (*) [16])
                            CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
                if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
                uVar15 = iVar58 - 0x37;
              }
              if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)ppuVar55))
              goto code_r0x0001400a1917;
              uVar15 = uVar15 + (int)ppuVar55 * 0x10;
              ppuVar55 = (undefined **)(ulonglong)uVar15;
              *(uint *)*local_b0 = uVar15;
              if (pauVar26 == pauVar22) {
code_r0x000140097940:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
                pauVar26 = pauVar22;
                goto code_r0x00014009795d;
              }
              pauVar18 = pauVar26;
              if ((((char)*(uint *)*pauVar26 == '\\') &&
                  (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar26 != pauVar22))
                 && (((((ulonglong)local_a8 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                     ((((ulonglong)local_a8 & 0x10) == 0 &&
                      ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
                pauVar18 = pauVar26;
              }
              pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
              *(undefined1 (**) [16])*local_98 = pauVar26;
              if (pauVar26 == pauVar22) goto code_r0x000140097940;
              bVar10 = (byte)*(uint *)*pauVar26;
              unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
              uVar45 = (uint)(char)bVar10;
              auVar71 = ZEXT1664(auVar71._0_16_);
              auVar72 = ZEXT1664(auVar72._0_16_);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(byte *)local_88 = bVar10;
              pauVar22 = local_90;
              switch(uVar45) {
              case 10:
                if ((char)local_c8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
                break;
              case 0x24:
                if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                    (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != local_90
                    )) && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x000140097bf6;
                break;
              case 0x28:
              case 0x29:
                uVar39 = (ulonglong)local_a8 & 8;
                goto joined_r0x000140097a95;
              case 0x2a:
                if (((ulonglong)local_a8 & 0x4000000) == 0) break;
                switch(*(uint *)((longlong)*local_b8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x000140097bf6;
                  break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x000140097bf6;
                }
                break;
              case 0x2b:
              case 0x3f:
                uVar39 = (ulonglong)local_a8 & 1;
joined_r0x000140097a95:
                if (uVar39 == 0) {
code_r0x000140097bf6:
                  *(uint *)*local_78 = 0;
                }
                break;
              case 0x5c:
                pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
                if (pauVar18 != local_90) {
                  if ((((ulonglong)local_a8 & 8) == 0) &&
                     (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10,
                     (bVar10 & 0xfe) == 0x28)) {
code_r0x000140097b3d:
                    *(char *)local_88 = (char)uVar15;
                    *(uint *)*local_78 = uVar15;
                    unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
                  }
                  else if (((ulonglong)local_a8 & 0x10) == 0) {
                    bVar10 = (byte)*(uint *)*pauVar18;
                    uVar15 = (uint)bVar10;
                    if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140097b3d;
                  }
                }
                break;
              case 0x5e:
                if (((ulonglong)local_a8 & 0x2000000) != 0) {
                  switch(*(uint *)((longlong)*local_b8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
                    if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                    goto code_r0x000140097bf6;
                    break;
                  default:
                    goto code_r0x000140097bf6;
                  case 8:
                  case 0xd:
                  case 0x14:
                    break;
                  }
                }
                break;
              case 0x7b:
              case 0x7d:
                uVar39 = (ulonglong)local_a8 & 0x10;
                goto joined_r0x000140097ab3;
              case 0x7c:
                uVar39 = (ulonglong)local_a8 & 2;
joined_r0x000140097ab3:
                if (uVar39 != 0) break;
                goto code_r0x000140097bf6;
              }
code_r0x00014009795d:
              bVar62 = (undefined1 (*) [16])pcVar43 == (undefined1 (*) [16])0x0;
              pcVar43 = (char *)0x1;
            } while (bVar62);
            goto code_r0x00014009ff1d;
          }
          *(uint *)*local_78 = uVar15;
          *(byte *)local_88 = bVar10;
          switch(uVar45) {
          case 10:
            bVar62 = false;
            if ((((ulonglong)unaff_RBX & 4) != 0) && (*local_c0 == 0)) {
              *(uint *)*local_78 = 0x7c;
              break;
            }
          default:
            goto code_r0x00014009fe14;
          case 0x24:
            if (((((ulonglong)unaff_RBX & 0x2000000) != 0) &&
                (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != local_90))
               && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014009fe05;
            break;
          case 0x28:
          case 0x29:
            uVar39 = (ulonglong)unaff_RBX & 8;
            goto joined_r0x00014009f8c0;
          case 0x2a:
            if (((ulonglong)unaff_RBX & 0x4000000) == 0) break;
            bVar62 = false;
            switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
              bVar62 = false;
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014009fe05;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009fe05;
            }
            goto code_r0x00014009fe14;
          case 0x2b:
          case 0x3f:
            uVar39 = (ulonglong)unaff_RBX & 1;
joined_r0x00014009f8c0:
            if (uVar39 == 0) {
code_r0x00014009fe05:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
            if (pauVar18 != local_90) {
              if ((((ulonglong)unaff_RBX & 8) == 0) &&
                 (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)
                 ) {
code_r0x00014009fbb5:
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                bVar62 = false;
                pauVar26 = (undefined1 (*) [16])(ulonglong)uVar15;
                goto code_r0x00014009fe14;
              }
              if (((ulonglong)unaff_RBX & 0x10) == 0) {
                bVar10 = (byte)*(uint *)*pauVar18;
                uVar15 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009fbb5;
              }
            }
            break;
          case 0x5e:
            if (((ulonglong)unaff_RBX & 0x2000000) != 0) {
              bVar62 = false;
              switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                goto code_r0x00014009fe12;
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014009fe14;
              }
              goto code_r0x00014009fe05;
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar39 = (ulonglong)unaff_RBX & 0x10;
            goto joined_r0x00014009fa80;
          case 0x7c:
            uVar39 = (ulonglong)unaff_RBX & 2;
joined_r0x00014009fa80:
            if (uVar39 != 0) break;
            goto code_r0x00014009fe05;
          }
code_r0x00014009fe12:
          bVar62 = false;
code_r0x00014009fe14:
          if ((*(ushort *)
                (*(longlong *)(*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                ((ulonglong)pauVar26 & 0xff) * 2) & 0x103) != 0) {
            cVar14 = (char)pauVar26 % ' ';
            pauVar26 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar26 >> 8),cVar14);
            ppuVar55 = (undefined **)(ulonglong)(uint)(int)cVar14;
            *(int *)*local_b0 = (int)cVar14;
            if (bVar62) {
code_r0x00014009ff06:
              *(uint *)*local_78 = 0xffffffff;
              *(undefined1 *)local_88 = 0xff;
              pauVar22 = local_90;
              goto code_r0x00014009ff1d;
            }
            if ((((*unaff_RSI)[0] == '\\') &&
                (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != local_90))
               && (((((ulonglong)unaff_RBX & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
                   ((((ulonglong)unaff_RBX & 0x10) == 0 &&
                    ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
              unaff_RSI = pauVar18;
            }
            pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
            *(undefined1 (**) [16])*local_98 = pauVar18;
            if (pauVar18 == local_90) goto code_r0x00014009ff06;
            cVar14 = (char)*(uint *)*pauVar18;
            uVar45 = (uint)cVar14;
            pauVar22 = (undefined1 (*) [16])0x0;
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
            uVar15 = uVar45;
            if (pvVar19 == (void *)0x0) {
              uVar15 = 0;
            }
            *(uint *)*local_78 = uVar15;
            *(char *)local_88 = cVar14;
            switch(uVar45) {
            case 10:
              if ((((ulonglong)unaff_RBX & 4) != 0) && (*local_c0 == 0)) {
                *(uint *)*local_78 = 0x7c;
              }
              break;
            case 0x24:
              if (((((ulonglong)unaff_RBX & 0x2000000) != 0) &&
                  (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2),
                  unaff_RSI != local_90)) && ((char)*(uint *)*unaff_RSI != '\n'))
              goto code_r0x0001400a1769;
              break;
            case 0x28:
            case 0x29:
              uVar39 = (ulonglong)unaff_RBX & 8;
              goto joined_r0x0001400a1549;
            case 0x2a:
              if (((ulonglong)unaff_RBX & 0x4000000) == 0) break;
              switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                goto code_r0x0001400a1769;
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x0001400a1769;
              }
              break;
            case 0x2b:
            case 0x3f:
              uVar39 = (ulonglong)unaff_RBX & 1;
joined_r0x0001400a1549:
              if (uVar39 == 0) {
code_r0x0001400a1769:
                *(uint *)*local_78 = 0;
              }
              break;
            case 0x5c:
              unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
              if (unaff_RSI != local_90) {
                if ((((ulonglong)unaff_RBX & 8) == 0) &&
                   (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10,
                   (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400a16b4:
                  *(char *)local_88 = (char)uVar15;
                  *(uint *)*local_78 = uVar15;
                }
                else if (((ulonglong)unaff_RBX & 0x10) == 0) {
                  bVar10 = (byte)*(uint *)*unaff_RSI;
                  uVar15 = (uint)bVar10;
                  if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a16b4;
                }
              }
              break;
            case 0x5e:
              if (((ulonglong)unaff_RBX & 0x2000000) != 0) {
                switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                  if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                  goto code_r0x0001400a1769;
                  break;
                default:
                  goto code_r0x0001400a1769;
                case 8:
                case 0xd:
                case 0x14:
                  break;
                }
              }
              break;
            case 0x7b:
            case 0x7d:
              uVar39 = (ulonglong)unaff_RBX & 0x10;
              goto joined_r0x0001400a161d;
            case 0x7c:
              uVar39 = (ulonglong)unaff_RBX & 2;
joined_r0x0001400a161d:
              if (uVar39 != 0) break;
              goto code_r0x0001400a1769;
            }
code_r0x00014009ff1d:
            unaff_RDI = (undefined1 (*) [16])ppuVar55;
            if ((uint)ppuVar55 < 0x100) {
code_r0x00014009ff2a:
              *(int *)*local_b0 = (int)(char)unaff_RDI;
              ppuVar55 = (undefined **)unaff_RDI;
code_r0x00014009ff37:
              pauVar26 = *(undefined1 (**) [16])*local_a0;
              if ((*(int *)(*pauVar26 + 8) != 6) || (((*pauVar26)[0xc] & 4) != 0)) {
                auVar71 = ZEXT1664(auVar71._0_16_);
                auVar72 = ZEXT1664(auVar72._0_16_);
                pauVar18 = operator_new(0x30);
                *(undefined4 *)((longlong)*pauVar18 + 8) = 6;
                *(undefined8 *)((longlong)*pauVar18 + 0xc) = 0;
                *(undefined4 *)(pauVar18[1] + 4) = 0;
                *(undefined ***)*pauVar18 = std::_Node_str<char>::vftable;
                pauVar18[2] = auVar72._0_16_;
                *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
                if (*(longlong *)pauVar26[1] != 0) {
                  *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
                  *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
                  pauVar26 = *(undefined1 (**) [16])*local_a0;
                }
                *(undefined1 (**) [16])pauVar26[1] = pauVar18;
                *(undefined1 (**) [16])*local_a0 = pauVar18;
              }
              if ((*(uint *)local_98[5] & 0x100) == 0) {
                if ((*(uint *)local_98[5] & 0x800) != 0) {
                  local_138[0] = (char)unaff_RDI;
                  plVar3 = *(longlong **)**(undefined1 (**) [16])*local_d0;
                  param_4 = (undefined1 (*) [16])(local_138 + 1);
                  auVar71 = ZEXT1664(auVar71._0_16_);
                  auVar72 = ZEXT1664(auVar72._0_16_);
                  pauVar22 = &local_138;
                  (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 (*) [16])local_110,&local_138);
                  pauVar26 = (undefined1 (*) [16])local_110;
                  if (0xf < uStack_f8) {
                    pauVar26 = local_110[0];
                  }
                  if (lStack_100 != 1) {
                    pauVar26 = &local_138;
                  }
                  unaff_RDI = (undefined1 (*) [16])(ulonglong)(byte)*(uint *)*pauVar26;
                  if (0xf < uStack_f8) {
                    pauVar26 = local_110[0];
                    if ((0xfff < uStack_f8 + 1) &&
                       (pauVar26 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
                       pauVar22 = pauVar26,
                       0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar26))))
                    goto LAB_1400a3888;
                    free(pauVar26);
                  }
                }
              }
              else {
                plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
                auVar71 = ZEXT1664(auVar71._0_16_);
                auVar72 = ZEXT1664(auVar72._0_16_);
                uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,(ulonglong)unaff_RDI & 0xffffffff);
                unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
              }
              unaff_RSI = *(undefined1 (**) [16])*local_a0;
              uVar15 = *(uint *)((longlong)unaff_RSI[2] + 4);
              if (uVar15 < *(uint *)unaff_RSI[2]) {
                pvVar19 = *(void **)((longlong)unaff_RSI[2] + 8);
              }
              else {
                auVar71 = ZEXT1664(auVar71._0_16_);
                auVar72 = ZEXT1664(auVar72._0_16_);
                pvVar19 = realloc(*(void **)((longlong)unaff_RSI[2] + 8),(ulonglong)(uVar15 + 0x10))
                ;
                if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
                *(void **)((longlong)unaff_RSI[2] + 8) = pvVar19;
                *(uint *)unaff_RSI[2] = uVar15 + 0x10;
                uVar15 = *(uint *)((longlong)unaff_RSI[2] + 4);
              }
              *(uint *)((longlong)unaff_RSI[2] + 4) = uVar15 + 1;
              *(char *)((longlong)pvVar19 + (ulonglong)uVar15) = (char)unaff_RDI;
              goto code_r0x0001400a00b0;
            }
          }
        }
        else {
          if (cVar14 == 'x') goto code_r0x000140095906;
          uVar15 = (uint)unaff_RDI & 0xff;
          if (uVar15 == 0x75) goto code_r0x000140095831;
          if (uVar15 == 99) goto code_r0x000140095762;
code_r0x000140095912:
          if (((ulonglong)unaff_RBX & 0x2000) == 0) {
code_r0x00014009591a:
            uVar15 = (uint)(char)unaff_RDI;
            if (((ulonglong)unaff_RBX & 0x400000) != 0) {
              if ((uVar15 - 0x44 < 0x34) &&
                 ((0x8800180088001U >> ((ulonglong)(uVar15 - 0x44) & 0x3f) & 1) != 0))
              goto code_r0x000140095c62;
code_r0x00014009f60b:
              *(uint *)*local_b0 = uVar15;
              if (pauVar18 == pauVar22) {
code_r0x00014009f6cb:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                goto code_r0x00014009ff37;
              }
              if ((((char)*(uint *)*pauVar18 == '\\') &&
                  (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar26 != pauVar22))
                 && (((((ulonglong)unaff_RBX & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                     ((((ulonglong)unaff_RBX & 0x10) == 0 &&
                      ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
                pauVar18 = pauVar26;
              }
              pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
              *(undefined1 (**) [16])*local_98 = pauVar26;
              if (pauVar26 == pauVar22) goto code_r0x00014009f6cb;
              cVar14 = (char)*(uint *)*pauVar26;
              uVar45 = (uint)cVar14;
              pauVar22 = (undefined1 (*) [16])0x0;
              auVar71 = ZEXT1664(auVar71._0_16_);
              auVar72 = ZEXT1664(auVar72._0_16_);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(char *)local_88 = cVar14;
              switch(uVar45) {
              case 10:
                if ((((ulonglong)unaff_RBX & 4) != 0) && (*local_c0 == 0)) {
                  *(uint *)*local_78 = 0x7c;
                }
                break;
              case 0x24:
                if (((((ulonglong)unaff_RBX & 0x2000000) != 0) &&
                    (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar26 != local_90
                    )) && ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014009fa6a;
                break;
              case 0x28:
              case 0x29:
                uVar39 = (ulonglong)unaff_RBX & 8;
                goto joined_r0x00014009f8a3;
              case 0x2a:
                if (((ulonglong)unaff_RBX & 0x4000000) == 0) break;
                switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
                case 2:
                  uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x00014009fa6a;
                  break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x00014009fa6a;
                }
                break;
              case 0x2b:
              case 0x3f:
                uVar39 = (ulonglong)unaff_RBX & 1;
joined_r0x00014009f8a3:
                if (uVar39 == 0) {
code_r0x00014009fa6a:
                  *(uint *)*local_78 = 0;
                }
                break;
              case 0x5c:
                pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
                if (pauVar26 != local_90) {
                  if ((((ulonglong)unaff_RBX & 8) == 0) &&
                     (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10,
                     (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009f9b7:
                    *(char *)local_88 = (char)uVar15;
                    *(uint *)*local_78 = uVar15;
                  }
                  else if (((ulonglong)unaff_RBX & 0x10) == 0) {
                    bVar10 = (byte)*(uint *)*pauVar26;
                    uVar15 = (uint)bVar10;
                    if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009f9b7;
                  }
                }
                break;
              case 0x5e:
                if (((ulonglong)unaff_RBX & 0x2000000) != 0) {
                  switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8)
                    ;
                    if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                    goto code_r0x00014009fa6a;
                    break;
                  default:
                    goto code_r0x00014009fa6a;
                  case 8:
                  case 0xd:
                  case 0x14:
                    break;
                  }
                }
                break;
              case 0x7b:
              case 0x7d:
                uVar39 = (ulonglong)unaff_RBX & 0x10;
                goto joined_r0x00014009f919;
              case 0x7c:
                uVar39 = (ulonglong)unaff_RBX & 2;
joined_r0x00014009f919:
                if (uVar39 != 0) break;
                goto code_r0x00014009fa6a;
              }
              goto code_r0x00014009ff37;
            }
            switch(uVar15) {
            case 0x22:
            case 0x2f:
              uVar39 = (ulonglong)unaff_RBX & 0x1000000;
              break;
            default:
              goto code_r0x000140095c62;
            case 0x24:
            case 0x2a:
            case 0x2e:
            case 0x5b:
            case 0x5c:
            case 0x5e:
            case 0x7c:
              goto code_r0x00014009f60b;
            case 0x28:
            case 0x29:
            case 0x2b:
            case 0x3f:
            case 0x7b:
            case 0x7d:
              uVar39 = (ulonglong)unaff_RBX & 0x800000;
            }
            if (uVar39 != 0) goto code_r0x00014009f60b;
code_r0x000140095c62:
            if ((((ulonglong)unaff_RBX & 0x20000) != 0) && (pauVar18 != pauVar22)) {
              lVar29 = *(longlong *)((longlong)local_98[6] + 8);
              local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,*(uint *)local_98[7]);
              pcVar43 = (char *)0x0;
              ppuVar55 = &PTR_s_alpha_140111f78;
              bVar62 = false;
              pcVar27 = "alnum";
              do {
                if ((0x2810UL >> ((ulonglong)pcVar43 & 0x3f) & 1) != 0) {
                  unaff_RBX = (undefined1 (*) [16])(ulonglong)(byte)*pcVar27;
                  plVar3 = *(longlong **)(lVar29 + 8);
                  auVar71 = ZEXT1664(auVar71._0_16_);
                  auVar72 = ZEXT1664(auVar72._0_16_);
                  cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,(char)*(uint *)*pauVar18);
                  plVar3 = *(longlong **)(lVar29 + 8);
                  cVar13 = (**(code **)(*plVar3 + 0x20))(plVar3,unaff_RBX);
                  auVar70 = auVar72._0_16_;
                  auVar69 = auVar71._0_16_;
                  if (cVar14 == cVar13) {
                    if (!bVar62) {
                      uVar15 = (uint)(ushort)*(uint *)((longlong)
                                                       *(undefined1 (*) [16])
                                                        ((longlong)ppuVar55 + -0x10) + 0xc);
                      goto code_r0x000140095d06;
                    }
                    break;
                  }
                }
                auVar70 = auVar72._0_16_;
                auVar69 = auVar71._0_16_;
                pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 1);
                pcVar27 = *(char **)*(undefined1 (*) [16])ppuVar55;
                bVar62 = (byte *)pcVar27 == (byte *)0x0;
                ppuVar55 = (undefined **)
                           ((longlong)*(undefined1 (*) [16])((longlong)ppuVar55 + 0x10) + 8);
              } while ((undefined1 (*) [16])pcVar43 != (undefined1 (*) [16])0xf);
              uVar15 = 0;
code_r0x000140095d06:
              uVar45 = uVar15 | 3;
              if ((uVar15 & 3) == 0) {
                uVar45 = uVar15;
              }
              if (((ulonglong)local_90 & 0x100) == 0) {
                uVar45 = uVar15;
              }
              unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar45;
              pauVar26 = unaff_RBX;
              if ((short)uVar45 != 0) {
                auVar71 = ZEXT1664(auVar69);
                auVar72 = ZEXT1664(auVar70);
                puVar23 = operator_new(0x50);
                *(undefined4 *)(puVar23 + 1) = 7;
                *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
                *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
                *puVar23 = std::_Node_class<char,class_std::regex_traits<char>_>::vftable;
                puVar23[9] = 0;
                *(undefined1 (*) [32])(puVar23 + 4) = ZEXT1232(ZEXT812(0));
                *(undefined2 *)(puVar23 + 8) = 0;
                pauVar26 = *(undefined1 (**) [16])*local_a0;
                puVar23[3] = pauVar26;
                if (*(longlong *)pauVar26[1] != 0) {
                  puVar23[2] = *(longlong *)pauVar26[1];
                  *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
                  pauVar26 = *(undefined1 (**) [16])*local_a0;
                }
                *(undefined8 **)pauVar26[1] = puVar23;
                *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
                uVar42 = *(ushort *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                          (ulonglong)(byte)*(uint *)((longlong)local_98[7] + 8) * 2);
                unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar42;
                uVar39 = 0;
                do {
                  pauVar26 = unaff_RSI;
                  if (((short)uVar45 == -1) &&
                     (pauVar26 = (undefined1 (*) [16])0x107, uVar39 == 0x5f)) {
                    if ((uVar42 & 1) == 0) {
code_r0x000140095e18:
                      pauVar31 = (undefined1 (*) [32])puVar23[5];
                      if (pauVar31 == (undefined1 (*) [32])0x0) {
                        auVar71 = ZEXT1664(auVar71._0_16_);
                        auVar72 = ZEXT1664(auVar72._0_16_);
                        pauVar31 = operator_new(0x20);
                        *pauVar31 = ZEXT1232(ZEXT812(0));
                        puVar23[5] = pauVar31;
                      }
                      pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
                      *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
                    }
                  }
                  else if ((bool)((byte)uVar42 & 1) !=
                           ((*(ushort *)
                              (*(longlong *)
                                (*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) +
                              uVar39 * 2) & (ushort)pauVar26) != 0)) goto code_r0x000140095e18;
                  uVar39 = uVar39 + 1;
                } while (uVar39 != 0x100);
                unaff_RSI = *(undefined1 (**) [16])*local_98;
                pauVar18 = *(undefined1 (**) [16])local_98[1];
                if (unaff_RSI != pauVar18) {
                  if ((((char)*(uint *)*unaff_RSI == '\\') &&
                      (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1),
                      pauVar26 != pauVar18)) &&
                     ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
                      (((*(uint *)*local_80 & 0x10) == 0 &&
                       ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{'))))))))
                  {
                    unaff_RSI = pauVar26;
                  }
                  unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
                  *(undefined1 (**) [16])*local_98 = unaff_RSI;
                }
                if (unaff_RSI == pauVar18) goto LAB_140094880;
                cVar14 = (char)*(uint *)*unaff_RSI;
                uVar45 = (uint)cVar14;
                pauVar22 = (undefined1 (*) [16])0x0;
                auVar71 = ZEXT1664(auVar71._0_16_);
                auVar72 = ZEXT1664(auVar72._0_16_);
                pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
                uVar15 = uVar45;
                if (pvVar19 == (void *)0x0) {
                  uVar15 = 0;
                }
                *(uint *)*local_78 = uVar15;
                *(char *)local_88 = cVar14;
                unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
                switch(unaff_RDI) {
                case (undefined1 (*) [16])0x0:
                  goto code_r0x00014009ea51;
                case (undefined1 (*) [16])0x1a:
                  goto code_r0x00014009ea26;
                case (undefined1 (*) [16])0x1e:
                case (undefined1 (*) [16])0x1f:
                  goto code_r0x00014009e9d2;
                case (undefined1 (*) [16])0x20:
                  if ((*(uint *)*local_80 & 0x4000000) != 0) {
                    pauVar26 = *(undefined1 (**) [16])*local_a0;
                    switch(*(undefined4 *)(*pauVar26 + 8)) {
                    case 2:
                      goto code_r0x00014009eb12;
                    default:
                      break;
                    case 8:
                    case 0xd:
                    case 0x14:
                      goto code_r0x00014009f5a4;
                    }
                  }
                  goto code_r0x0001400a00b0;
                case (undefined1 (*) [16])0x21:
                case (undefined1 (*) [16])0x35:
                  goto code_r0x00014009e9e7;
                case (undefined1 (*) [16])0x52:
                  goto code_r0x00014009ea80;
                case (undefined1 (*) [16])0x54:
                  if ((*(uint *)*local_80 & 0x2000000) != 0) {
                    pauVar26 = *(undefined1 (**) [16])*local_a0;
                    switch(*(undefined4 *)(*pauVar26 + 8)) {
                    case 2:
                      goto code_r0x00014009eb6c;
                    default:
                      goto code_r0x00014009f5a4;
                    case 8:
                    case 0xd:
                    case 0x14:
                      break;
                    }
                  }
                  goto code_r0x0001400a00b0;
                case (undefined1 (*) [16])0x71:
                case (undefined1 (*) [16])0x73:
                  goto code_r0x00014009e9fc;
                case (undefined1 (*) [16])0x72:
                  goto code_r0x00014009ea11;
                }
                goto LAB_1400a00b9;
              }
            }
          }
          else {
            *(uint *)*local_b0 = 0;
            local_a8 = *(undefined1 (**) [16])*local_a0;
            local_b8 = (undefined1 (*) [16])
                       CONCAT71(local_b8._1_7_,
                                *local_c0 == 0 & (byte)((ulonglong)unaff_RBX >> 2) & 0x3f);
            unaff_RSI = (undefined1 (*) [16])0x0;
            ppuVar55 = (undefined **)0x0;
            pauVar56 = pauVar18;
            do {
              if (((byte)unaff_RDI & 0xf8) != 0x30) {
                if ((int)unaff_RSI == 0) goto code_r0x00014009591a;
                break;
              }
              uVar15 = (uint)unaff_RDI & 0xff;
              if ((int)(0x8000002f - uVar15 >> 3) < (int)ppuVar55) goto code_r0x0001400a1917;
              uVar15 = (uVar15 + (int)ppuVar55 * 8) - 0x30;
              ppuVar55 = (undefined **)(ulonglong)uVar15;
              *(uint *)*local_b0 = uVar15;
              if (pauVar56 == pauVar22) {
code_r0x000140095990:
                *(uint *)*local_78 = 0xffffffff;
                *(undefined1 *)local_88 = 0xff;
                unaff_RDI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0xff);
                pauVar56 = pauVar22;
                pcVar43 = (char *)pauVar18;
                goto code_r0x0001400959b0;
              }
              pauVar37 = pauVar56;
              if ((((char)*(uint *)*pauVar56 == '\\') &&
                  (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 1), pauVar18 != pauVar22))
                 && (((((ulonglong)unaff_RBX & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
                     ((((ulonglong)unaff_RBX & 0x10) == 0 &&
                      ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
                pauVar37 = pauVar18;
              }
              pauVar56 = (undefined1 (*) [16])((longlong)*pauVar37 + 1);
              *(undefined1 (**) [16])*local_98 = pauVar56;
              pauVar18 = pauVar22;
              if (pauVar56 == pauVar22) goto code_r0x000140095990;
              bVar10 = (byte)*(uint *)*pauVar56;
              unaff_RDI = (undefined1 (*) [16])(ulonglong)bVar10;
              uVar45 = (uint)(char)bVar10;
              auVar71 = ZEXT1664(auVar71._0_16_);
              auVar72 = ZEXT1664(auVar72._0_16_);
              pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
              uVar15 = uVar45;
              if (pvVar19 == (void *)0x0) {
                uVar15 = 0;
              }
              *(uint *)*local_78 = uVar15;
              *(byte *)local_88 = bVar10;
              pauVar22 = local_90;
              pcVar43 = (char *)pauVar56;
              switch(uVar45) {
              case 10:
                if ((char)local_b8 != '\0') {
                  *(uint *)*local_78 = 0x7c;
                }
                break;
              case 0x24:
                if (((((ulonglong)unaff_RBX & 0x2000000) != 0) &&
                    (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar37 + 2), pauVar18 != local_90
                    )) && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x000140095c1b;
                break;
              case 0x28:
              case 0x29:
                uVar39 = (ulonglong)unaff_RBX & 8;
                goto joined_r0x000140095ac6;
              case 0x2a:
                if (((ulonglong)unaff_RBX & 0x4000000) == 0) break;
                switch(*(uint *)((longlong)*local_a8 + 8)) {
                case 2:
                  uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                  if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                  goto code_r0x000140095c1b;
                  break;
                case 8:
                case 0xd:
                case 0x14:
                  goto code_r0x000140095c1b;
                }
                break;
              case 0x2b:
              case 0x3f:
                uVar39 = (ulonglong)unaff_RBX & 1;
joined_r0x000140095ac6:
                if (uVar39 == 0) {
code_r0x000140095c1b:
                  *(uint *)*local_78 = 0;
                }
                break;
              case 0x5c:
                pauVar18 = (undefined1 (*) [16])((longlong)*pauVar37 + 2);
                if (pauVar18 != local_90) {
                  if ((((ulonglong)unaff_RBX & 8) == 0) &&
                     (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10,
                     (bVar10 & 0xfe) == 0x28)) {
code_r0x000140095b6a:
                    *(char *)local_88 = (char)uVar15;
                    *(uint *)*local_78 = uVar15;
                    unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
                  }
                  else if (((ulonglong)unaff_RBX & 0x10) == 0) {
                    bVar10 = (byte)*(uint *)*pauVar18;
                    uVar15 = (uint)bVar10;
                    if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x000140095b6a;
                  }
                }
                break;
              case 0x5e:
                if (((ulonglong)unaff_RBX & 0x2000000) != 0) {
                  switch(*(uint *)((longlong)*local_a8 + 8)) {
                  case 2:
                    uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
                    if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                    goto code_r0x000140095c1b;
                    break;
                  default:
                    goto code_r0x000140095c1b;
                  case 8:
                  case 0xd:
                  case 0x14:
                    break;
                  }
                }
                break;
              case 0x7b:
              case 0x7d:
                uVar39 = (ulonglong)unaff_RBX & 0x10;
                goto joined_r0x000140095ae2;
              case 0x7c:
                uVar39 = (ulonglong)unaff_RBX & 2;
joined_r0x000140095ae2:
                if (uVar39 != 0) break;
                goto code_r0x000140095c1b;
              }
code_r0x0001400959b0:
              uVar15 = (int)unaff_RSI + 1;
              unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
              pauVar18 = (undefined1 (*) [16])pcVar43;
            } while (uVar15 != 3);
            if ((int)ppuVar55 != 0) goto code_r0x00014009ff1d;
          }
        }
      }
      goto code_r0x0001400a1917;
    }
    *(uint *)*local_b0 = 0;
    if ((byte)(cVar14 - 0x3aU) < 0xf6) goto code_r0x000140095232;
    local_a8 = *(undefined1 (**) [16])*local_a0;
    local_b8 = (undefined1 (*) [16])
               CONCAT71(local_b8._1_7_,(byte)((ulonglong)unaff_RBX >> 2) & 0x3f & *local_c0 == 0);
    ppuVar55 = (undefined **)0x0;
    unaff_RSI = (undefined1 (*) [16])0x80000002;
    do {
      uVar15 = (uint)unaff_RDI & 0xff;
      if ((int)((0x8000002f - uVar15) / 10) < (int)ppuVar55) goto code_r0x0001400a1a1c;
      uVar15 = (uVar15 + (int)ppuVar55 * 10) - 0x30;
      ppuVar55 = (undefined **)(ulonglong)uVar15;
      *(uint *)*local_b0 = uVar15;
      if (pauVar18 == local_90) {
code_r0x00014009568f:
        *(uint *)*local_78 = 0xffffffff;
        *(undefined1 *)local_88 = 0xff;
        break;
      }
      if ((((*pauVar18)[0] == '\\') &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar22 != local_90)) &&
         (((((ulonglong)unaff_RBX & 8) == 0 &&
           (((ulonglong)*(undefined1 (**) [16])*pauVar22 & 0xfe) == 0x28)) ||
          ((((ulonglong)unaff_RBX & 0x10) == 0 &&
           (((*pauVar22)[0] == '}' || ((*pauVar22)[0] == '{')))))))) {
        pauVar18 = pauVar22;
      }
      pcVar43 = (char *)((longlong)*pauVar18 + 1);
      *(char **)*local_98 = pcVar43;
      if ((undefined1 (*) [16])pcVar43 == local_90) goto code_r0x00014009568f;
      bVar10 = (*(undefined1 (*) [16])pcVar43)[0];
      unaff_RDI = (undefined1 (*) [16])(ulonglong)bVar10;
      uVar46 = (uint)(char)bVar10;
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
      uVar45 = uVar46;
      if (pvVar19 == (void *)0x0) {
        uVar45 = 0;
      }
      *(uint *)*local_78 = uVar45;
      *(byte *)local_88 = bVar10;
      iVar58 = (int)unaff_RSI;
      switch(uVar46) {
      case 10:
        if ((char)local_b8 == '\0') break;
        *(uint *)*local_78 = 0x7c;
        goto joined_r0x000140095606;
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5d:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
        break;
      case 0x24:
        if (((((ulonglong)unaff_RBX & 0x2000000) != 0) &&
            (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != local_90)) &&
           ((*pauVar18)[0] != '\n')) goto code_r0x0001400955d0;
        break;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)unaff_RBX & 8;
        goto joined_r0x000140095470;
      case 0x2a:
        if (((ulonglong)unaff_RBX & 0x4000000) == 0) break;
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar45 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
          if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0))
          goto code_r0x0001400955d0;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x0001400955d0;
        }
        break;
      case 0x2b:
      case 0x3f:
        uVar39 = (ulonglong)unaff_RBX & 1;
joined_r0x000140095470:
        if (uVar39 == 0) {
code_r0x0001400955d0:
          *(uint *)*local_78 = 0;
        }
        break;
      case 0x5c:
        pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
        if (pauVar18 != local_90) {
          if ((((ulonglong)unaff_RBX & 8) == 0) &&
             (uVar45 = (uint)(byte)(*pauVar18)[0], ((*pauVar18)[0] & 0xfe) == 0x28)) {
code_r0x00014009551e:
            *(char *)local_88 = (char)uVar45;
            *(uint *)*local_78 = uVar45;
            unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar45;
            goto joined_r0x000140095606;
          }
          if (((ulonglong)unaff_RBX & 0x10) == 0) {
            bVar10 = (*pauVar18)[0];
            uVar45 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009551e;
          }
        }
        break;
      case 0x5e:
        if (((ulonglong)unaff_RBX & 0x2000000) != 0) {
          switch(*(uint *)((longlong)*local_a8 + 8)) {
          case 2:
            uVar45 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
            if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
            goto code_r0x0001400955d0;
            break;
          default:
            goto code_r0x0001400955d0;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)unaff_RBX & 0x10;
        goto joined_r0x00014009548c;
      case 0x7c:
        uVar39 = (ulonglong)unaff_RBX & 2;
joined_r0x00014009548c:
        if (uVar39 != 0) break;
        goto code_r0x0001400955d0;
      default:
joined_r0x000140095606:
        if (iVar58 != 0) goto code_r0x0001400955e5;
        goto code_r0x0001400956a6;
      }
      if (iVar58 == 0) break;
code_r0x0001400955e5:
      unaff_RSI = (undefined1 (*) [16])(ulonglong)(iVar58 + 1);
      pauVar18 = (undefined1 (*) [16])pcVar43;
    } while ((byte)((char)unaff_RDI - 0x30U) < 10);
code_r0x0001400956a6:
    pauVar18 = local_a8;
    pauVar22 = local_90;
    if (uVar15 == 0) {
      unaff_RSI = &local_138;
      if (((ulonglong)unaff_RBX & 0x100000) != 0) {
        if ((*(uint *)((longlong)*local_a8 + 8) != 6) ||
           (unaff_RDI = local_a8, (*(uint *)((longlong)*local_a8 + 0xc) & 4) != 0)) {
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pauVar26 = operator_new(0x30);
          *(undefined4 *)((longlong)*pauVar26 + 8) = 6;
          *(undefined8 *)((longlong)*pauVar26 + 0xc) = 0;
          *(undefined4 *)(pauVar26[1] + 4) = 0;
          *(undefined ***)*pauVar26 = std::_Node_str<char>::vftable;
          pauVar26[2] = auVar72._0_16_;
          *(undefined1 (**) [16])(pauVar26[1] + 8) = pauVar18;
          if (*(longlong *)pauVar18[1] != 0) {
            *(longlong *)pauVar26[1] = *(longlong *)pauVar18[1];
            *(undefined1 (**) [16])(*(longlong *)pauVar18[1] + 0x18) = pauVar26;
            pauVar18 = *(undefined1 (**) [16])*local_a0;
          }
          *(undefined1 (**) [16])pauVar18[1] = pauVar26;
          *(undefined1 (**) [16])*local_a0 = pauVar26;
          unaff_RDI = pauVar18;
        }
        if ((*(uint *)local_98[5] & 0x100) == 0) {
          if ((*(uint *)local_98[5] & 0x800) == 0) {
            uVar12 = 0;
          }
          else {
            auVar8[0x1f] = 0;
            auVar8._0_31_ = stack0xfffffffffffffec9;
            _local_138 = auVar8 << 8;
            plVar3 = *(longlong **)**(undefined1 (**) [16])*local_d0;
            param_4 = (undefined1 (*) [16])(local_138 + 1);
            auVar71 = ZEXT1664(auVar71._0_16_);
            auVar72 = ZEXT1664(auVar72._0_16_);
            pauVar22 = unaff_RSI;
            (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 (*) [16])local_110,unaff_RSI);
            unaff_RDI = (undefined1 (*) [16])local_110;
            if (0xf < uStack_f8) {
              unaff_RDI = local_110[0];
            }
            if (lStack_100 != 1) {
              unaff_RDI = unaff_RSI;
            }
            uVar12 = (undefined1)*(uint *)*unaff_RDI;
            if (0xf < uStack_f8) {
              pauVar26 = local_110[0];
              if ((0xfff < uStack_f8 + 1) &&
                 (pauVar26 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
                 pauVar22 = pauVar26,
                 0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar26))))
              goto LAB_1400a3888;
              free(pauVar26);
            }
          }
        }
        else {
          plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          uVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,0);
        }
        unaff_RSI = *(undefined1 (**) [16])*local_a0;
        uVar15 = *(uint *)((longlong)unaff_RSI[2] + 4);
        if (uVar15 < *(uint *)unaff_RSI[2]) {
          pvVar19 = *(void **)((longlong)unaff_RSI[2] + 8);
        }
        else {
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pvVar19 = realloc(*(void **)((longlong)unaff_RSI[2] + 8),(ulonglong)(uVar15 + 0x10));
          if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
          *(void **)((longlong)unaff_RSI[2] + 8) = pvVar19;
          *(uint *)unaff_RSI[2] = uVar15 + 0x10;
          uVar15 = *(uint *)((longlong)unaff_RSI[2] + 4);
        }
        *(uint *)((longlong)unaff_RSI[2] + 4) = uVar15 + 1;
        *(undefined1 *)((longlong)pvVar19 + (ulonglong)uVar15) = uVar12;
        goto code_r0x0001400a00b0;
      }
      goto code_r0x0001400a1917;
    }
    if (((((ulonglong)unaff_RBX & 0x200) != 0) && (9 < uVar15)) ||
       ((uVar39 = (ulonglong)(int)uVar15, *(uint *)((longlong)local_98[1] + 8) < uVar39 ||
        ((*(ulonglong *)((longlong)local_98[3] + 8) <= uVar39 ||
         ((*(uint *)(*(longlong *)local_98[2] + (uVar39 >> 5) * 4) >> (uVar15 & 0x1f) & 1) == 0)))))
       ) goto code_r0x0001400a1a1c;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar18 = operator_new(0x28);
    *(undefined4 *)((longlong)*pauVar18 + 8) = 0xf;
    *(undefined8 *)((longlong)*pauVar18 + 0xc) = 0;
    *(undefined4 *)(pauVar18[1] + 4) = 0;
    *(undefined ***)*pauVar18 = std::_Node_back::vftable;
    *(uint *)pauVar18[2] = uVar15;
    *(undefined1 (**) [16])(pauVar18[1] + 8) = local_a8;
    pauVar26 = local_a8;
    if (*(longlong *)local_a8[1] != 0) {
      *(longlong *)pauVar18[1] = *(longlong *)local_a8[1];
      *(undefined1 (**) [16])(*(longlong *)local_a8[1] + 0x18) = pauVar18;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar18;
    *(undefined1 (**) [16])*local_a0 = pauVar18;
    goto code_r0x0001400a00b0;
  case 0x5d:
    if ((*(uint *)*local_80 & 0x10000000) == 0) goto code_r0x0001400a19fa;
    break;
  case 0x5e:
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    puVar23 = operator_new(0x20);
    *puVar23 = std::_Node_base::vftable;
    *(undefined4 *)(puVar23 + 1) = 2;
    *(undefined8 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x14) = 0;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    puVar23[3] = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      puVar23[2] = *(longlong *)pauVar26[1];
      *(undefined8 **)(*(longlong *)pauVar26[1] + 0x18) = puVar23;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined8 **)pauVar26[1] = puVar23;
    *(undefined8 **)((longlong)local_98[4] + 8) = puVar23;
    unaff_RSI = *(undefined1 (**) [16])*local_98;
    pauVar18 = *(undefined1 (**) [16])local_98[1];
    if (unaff_RSI != pauVar18) {
      if ((((char)*(uint *)*unaff_RSI == '\\') &&
          (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
         ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
          (((*(uint *)*local_80 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
        unaff_RSI = pauVar26;
      }
      unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
      *(undefined1 (**) [16])*local_98 = unaff_RSI;
    }
    if (unaff_RSI != pauVar18) {
      cVar14 = (char)*(uint *)*unaff_RSI;
      uVar45 = (uint)cVar14;
      pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
      uVar15 = uVar45;
      if (pvVar19 == (void *)0x0) {
        uVar15 = 0;
      }
      *(uint *)*local_78 = uVar15;
      *(char *)local_88 = cVar14;
      unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
      switch(unaff_RDI) {
      case (undefined1 (*) [16])0x0:
        goto code_r0x000140096684;
      case (undefined1 (*) [16])0x1a:
        goto code_r0x0001400966a6;
      case (undefined1 (*) [16])0x1e:
      case (undefined1 (*) [16])0x1f:
        goto code_r0x000140096630;
      case (undefined1 (*) [16])0x20:
        if ((*(uint *)*local_80 & 0x4000000) != 0) {
          switch(*(undefined4 *)(puVar23 + 1)) {
          case 2:
            goto code_r0x00014009f586;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009f5a4;
          }
        }
        break;
      case (undefined1 (*) [16])0x21:
      case (undefined1 (*) [16])0x35:
        goto code_r0x000140096645;
      case (undefined1 (*) [16])0x52:
        goto code_r0x0001400966d1;
      case (undefined1 (*) [16])0x54:
        if ((*(uint *)*local_80 & 0x2000000) != 0) {
          switch(*(undefined4 *)(puVar23 + 1)) {
          case 2:
            goto code_r0x00014009f5e3;
          default:
            goto code_r0x00014009f5a4;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case (undefined1 (*) [16])0x71:
      case (undefined1 (*) [16])0x73:
        goto code_r0x00014009665a;
      case (undefined1 (*) [16])0x72:
        goto code_r0x00014009666f;
      }
      goto LAB_140094897;
    }
    goto LAB_140094880;
  case 0x7d:
    pauVar18 = (undefined1 (*) [16])ppuVar55;
    if ((*(uint *)*local_80 & 0x10000000) == 0) goto code_r0x0001400a1a8f;
    break;
  case 0xffffffff:
  case 0x7c:
    goto LAB_1400a17b0;
  }
  uVar12 = (undefined1)*local_88;
  pauVar26 = *(undefined1 (**) [16])*local_a0;
  if ((*(int *)(*pauVar26 + 8) != 6) || (((*pauVar26)[0xc] & 4) != 0)) {
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar18 = operator_new(0x30);
    *(undefined4 *)((longlong)*pauVar18 + 8) = 6;
    *(undefined8 *)((longlong)*pauVar18 + 0xc) = 0;
    *(undefined4 *)(pauVar18[1] + 4) = 0;
    *(undefined ***)*pauVar18 = std::_Node_str<char>::vftable;
    pauVar18[2] = auVar72._0_16_;
    *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar18;
    *(undefined1 (**) [16])*local_a0 = pauVar18;
  }
  if ((*(uint *)local_98[5] & 0x100) == 0) {
    if ((*(uint *)local_98[5] & 0x800) != 0) {
      local_138[0] = uVar12;
      plVar3 = *(longlong **)**(undefined1 (**) [16])*local_d0;
      param_4 = (undefined1 (*) [16])(local_138 + 1);
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 (*) [16])local_110,&local_138);
      pauVar26 = (undefined1 (*) [16])local_110;
      if (0xf < uStack_f8) {
        pauVar26 = local_110[0];
      }
      if (lStack_100 != 1) {
        pauVar26 = &local_138;
      }
      uVar12 = (undefined1)*(uint *)*pauVar26;
      if (0xf < uStack_f8) {
        pauVar26 = local_110[0];
        if ((0xfff < uStack_f8 + 1) &&
           (pauVar26 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
           0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar26))))
        goto LAB_1400a3888;
        free(pauVar26);
      }
    }
  }
  else {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar12);
  }
  pauVar26 = *(undefined1 (**) [16])*local_a0;
  uVar15 = *(uint *)(pauVar26[2] + 4);
  if (uVar15 < *(uint *)pauVar26[2]) {
    pvVar19 = *(void **)(pauVar26[2] + 8);
  }
  else {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = realloc(*(void **)(pauVar26[2] + 8),(ulonglong)(uVar15 + 0x10));
    if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
    *(void **)(pauVar26[2] + 8) = pvVar19;
    *(uint *)pauVar26[2] = uVar15 + 0x10;
    uVar15 = *(uint *)(pauVar26[2] + 4);
  }
  unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
  *(uint *)(pauVar26[2] + 4) = uVar15 + 1;
  *(undefined1 *)((longlong)pvVar19 + (longlong)unaff_RDI) = uVar12;
  unaff_RSI = *(undefined1 (**) [16])*local_98;
  pauVar18 = *(undefined1 (**) [16])local_98[1];
  if (unaff_RSI != pauVar18) {
    if ((((char)*(uint *)*unaff_RSI == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
      unaff_RSI = pauVar26;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
  }
  if (unaff_RSI == pauVar18) goto LAB_140094880;
  cVar14 = (char)*(uint *)*unaff_RSI;
  uVar45 = (uint)cVar14;
  pauVar22 = (undefined1 (*) [16])0x0;
  auVar71 = ZEXT1664(auVar71._0_16_);
  auVar72 = ZEXT1664(auVar72._0_16_);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
    goto code_r0x00014009ea51;
  case (undefined1 (*) [16])0x1a:
    goto code_r0x00014009ea26;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    goto code_r0x00014009e9d2;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) != 0) {
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      switch(*(undefined4 *)(*pauVar26 + 8)) {
      case 2:
        goto code_r0x00014009eb12;
      default:
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009f5a4;
      }
    }
    goto code_r0x0001400a00b0;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    goto code_r0x00014009e9e7;
  case (undefined1 (*) [16])0x52:
    goto code_r0x00014009ea80;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      switch(*(undefined4 *)(*pauVar26 + 8)) {
      case 2:
        goto code_r0x00014009eb6c;
      default:
        goto code_r0x00014009f5a4;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    goto code_r0x0001400a00b0;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    goto code_r0x00014009e9fc;
  case (undefined1 (*) [16])0x72:
    goto code_r0x00014009ea11;
  }
  goto LAB_1400a00b9;
code_r0x00014009ac1b:
  do {
    cVar14 = (char)pcVar43;
    iVar58 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar58 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar58 - 0x57;
    }
    else {
      pcVar43 = (char *)CONCAT71((int7)((ulonglong)pcVar43 >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar58 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)ppuVar55))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (int)ppuVar55 * 0x10;
    ppuVar55 = (undefined **)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar56 == param_4) {
code_r0x00014009abf0:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      pcVar43 = (char *)CONCAT71((int7)((ulonglong)pcVar43 >> 8),0xff);
      unaff_RSI = param_4;
      goto code_r0x00014009ac0d;
    }
    if ((((*pauVar56)[0] == '\\') &&
        (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar56 + 1), pauVar22 != param_4)) &&
       ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar22 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 && (((*pauVar22)[0] == '}' || ((*pauVar22)[0] == '{')))))))) {
      pauVar56 = pauVar22;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar56 + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
    if (unaff_RSI == param_4) goto code_r0x00014009abf0;
    bVar10 = (*unaff_RSI)[0];
    pcVar43 = (char *)(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      goto code_r0x00014009ac0d;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if ((char)local_b8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar56 + 2), pauVar22 != param_4)) &&
         ((*pauVar22)[0] != '\n')) goto code_r0x00014009aeb7;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014009ad52;
    case (undefined1 (*) [16])0x20:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014009aeb7;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009aeb7;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014009ad52:
      if (uVar57 == 0) {
code_r0x00014009aeb7:
        *(uint *)*local_78 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      pauVar22 = (undefined1 (*) [16])((longlong)*pauVar56 + 2);
      if (pauVar22 != param_4) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (uVar15 = (uint)(byte)(*pauVar22)[0], ((*pauVar22)[0] & 0xfe) == 0x28)) {
code_r0x00014009adfd:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          pcVar43 = (char *)(ulonglong)uVar15;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (*pauVar22)[0];
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009adfd;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014009aeb7;
          break;
        default:
          goto code_r0x00014009aeb7;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014009ad70;
    case (undefined1 (*) [16])0x72:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014009ad70:
      if (uVar57 != 0) break;
      goto code_r0x00014009aeb7;
    }
code_r0x00014009ac0d:
    bVar62 = pauVar26 == (undefined1 (*) [16])0x0;
    pauVar26 = (undefined1 (*) [16])0x1;
    pauVar56 = unaff_RSI;
  } while (bVar62);
  goto code_r0x00014009dc3d;
code_r0x00014009a8f8:
  do {
    cVar14 = (char)pcVar43;
    iVar58 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar58 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar58 - 0x57;
    }
    else {
      pcVar43 = (char *)CONCAT71((int7)((ulonglong)pcVar43 >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar58 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)ppuVar55))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (int)ppuVar55 * 0x10;
    ppuVar55 = (undefined **)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar56 == param_4) {
code_r0x00014009a8d0:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      pcVar43 = (char *)CONCAT71((int7)((ulonglong)pcVar43 >> 8),0xff);
      unaff_RSI = param_4;
      goto code_r0x00014009a8ed;
    }
    if ((((*pauVar56)[0] == '\\') &&
        (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar56 + 1), pauVar22 != param_4)) &&
       ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar22 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 && (((*pauVar22)[0] == '}' || ((*pauVar22)[0] == '{')))))))) {
      pauVar56 = pauVar22;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar56 + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
    if (unaff_RSI == param_4) goto code_r0x00014009a8d0;
    bVar10 = (*unaff_RSI)[0];
    pcVar43 = (char *)(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      goto code_r0x00014009a8ed;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if ((char)local_b8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar56 + 2), pauVar22 != param_4)) &&
         ((*pauVar22)[0] != '\n')) goto code_r0x00014009ab97;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014009aa32;
    case (undefined1 (*) [16])0x20:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014009ab97;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009ab97;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014009aa32:
      if (uVar57 == 0) {
code_r0x00014009ab97:
        *(uint *)*local_78 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      pauVar22 = (undefined1 (*) [16])((longlong)*pauVar56 + 2);
      if (pauVar22 != param_4) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (uVar15 = (uint)(byte)(*pauVar22)[0], ((*pauVar22)[0] & 0xfe) == 0x28)) {
code_r0x00014009aadd:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          pcVar43 = (char *)(ulonglong)uVar15;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (*pauVar22)[0];
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009aadd;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014009ab97;
          break;
        default:
          goto code_r0x00014009ab97;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014009aa50;
    case (undefined1 (*) [16])0x72:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014009aa50:
      if (uVar57 != 0) break;
      goto code_r0x00014009ab97;
    }
code_r0x00014009a8ed:
    uVar15 = (int)pauVar26 + 1;
    pauVar26 = (undefined1 (*) [16])(ulonglong)uVar15;
    pauVar56 = unaff_RSI;
  } while (uVar15 != 0);
  goto code_r0x00014009dc3d;
code_r0x00014009a213:
  do {
    if (((byte)pcVar43 & 0xf8) != 0x30) {
      if (iVar58 == 0) goto code_r0x00014009a185;
      break;
    }
    uVar15 = (uint)pcVar43 & 0xff;
    if ((int)(0x8000002f - uVar15 >> 3) < (int)ppuVar55) goto code_r0x0001400a1917;
    uVar15 = (uVar15 + (int)ppuVar55 * 8) - 0x30;
    ppuVar55 = (undefined **)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (unaff_RSI == param_4) {
code_r0x00014009a1e0:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RSI = param_4;
      pauVar26 = pauVar22;
      pcVar43 = (char *)CONCAT71((int7)((ulonglong)pcVar43 >> 8),0xff);
      goto code_r0x00014009a200;
    }
    pauVar56 = unaff_RSI;
    if ((((*unaff_RSI)[0] == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != param_4)) &&
       ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))) {
      pauVar56 = pauVar26;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar56 + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
    pauVar22 = param_4;
    if (unaff_RSI == param_4) goto code_r0x00014009a1e0;
    bVar10 = (*unaff_RSI)[0];
    pcVar43 = (char *)(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
    pauVar26 = unaff_RSI;
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_90 & 0xffffffff;
      goto code_r0x00014009a200;
    }
    uVar39 = (ulonglong)local_90 & 0xffffffff;
    switch(unaff_RDI) {
    case (undefined1 (*) [16])0x0:
      if ((char)local_b8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case (undefined1 (*) [16])0x1a:
      if (((((ulonglong)local_90 & 0x2000000) != 0) &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar56 + 2), pauVar22 != param_4)) &&
         ((*pauVar22)[0] != '\n')) goto code_r0x00014009a472;
      break;
    case (undefined1 (*) [16])0x1e:
    case (undefined1 (*) [16])0x1f:
      uVar57 = (ulonglong)local_90 & 8;
      goto joined_r0x00014009a318;
    case (undefined1 (*) [16])0x20:
      if (((ulonglong)local_90 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014009a472;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009a472;
      }
      break;
    case (undefined1 (*) [16])0x21:
    case (undefined1 (*) [16])0x35:
      uVar57 = (ulonglong)local_90 & 1;
joined_r0x00014009a318:
      if (uVar57 == 0) {
code_r0x00014009a472:
        *(uint *)*local_78 = 0;
      }
      break;
    case (undefined1 (*) [16])0x52:
      pauVar22 = (undefined1 (*) [16])((longlong)*pauVar56 + 2);
      if (pauVar22 != param_4) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (pauVar56 = (undefined1 (*) [16])(ulonglong)(byte)(*pauVar22)[0],
           ((*pauVar22)[0] & 0xfe) == 0x28)) {
code_r0x00014009a3be:
          *(char *)local_88 = (char)pauVar56;
          *(uint *)*local_78 = (uint)pauVar56;
          pcVar43 = (char *)pauVar56;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (*pauVar22)[0];
          pauVar56 = (undefined1 (*) [16])(ulonglong)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009a3be;
        }
      }
      break;
    case (undefined1 (*) [16])0x54:
      if (((ulonglong)local_90 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)local_a8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014009a472;
          break;
        default:
          goto code_r0x00014009a472;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case (undefined1 (*) [16])0x71:
    case (undefined1 (*) [16])0x73:
      uVar57 = (ulonglong)local_90 & 0x10;
      goto joined_r0x00014009a336;
    case (undefined1 (*) [16])0x72:
      uVar57 = (ulonglong)local_90 & 2;
joined_r0x00014009a336:
      if (uVar57 != 0) break;
      goto code_r0x00014009a472;
    }
code_r0x00014009a200:
    iVar58 = iVar58 + 1;
    pauVar22 = pauVar26;
  } while (iVar58 != 3);
  if ((int)ppuVar55 == 0) goto code_r0x0001400a1917;
code_r0x00014009dc3d:
  param_4 = pauVar18;
  pauVar18 = param_4;
  if (0xff < (uint)ppuVar55) goto code_r0x0001400a1917;
code_r0x00014009dc4a:
  param_4 = unaff_RSI;
  cVar14 = (char)ppuVar55;
  ppuVar55 = (undefined **)(ulonglong)(uint)(int)cVar14;
  *(int *)*local_b0 = (int)cVar14;
code_r0x00014009b230:
  pauVar56 = (undefined1 (*) [16])ppuVar55;
  if ((int)ppuVar55 == 0) {
    uVar39 = (ulonglong)*(uint *)*local_80;
    unaff_RSI = param_4;
    param_4 = pauVar18;
code_r0x00014009b23f:
    ppuVar55 = (undefined **)0x0;
    pauVar18 = param_4;
    pauVar56 = (undefined1 (*) [16])ppuVar55;
    if ((uVar39 & 0x100000) == 0) goto code_r0x0001400a1917;
  }
code_r0x00014009b24f:
  pauVar26 = pauVar56;
  uVar15 = *(uint *)*local_78;
  ppuVar55 = (undefined **)pauVar26;
code_r0x00014009b25b:
  if (uVar15 != 0x2d) {
code_r0x00014009b350:
    param_4 = pauVar18;
    if ((*(uint *)local_98[5] & 0x100) != 0) {
      plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,pauVar26);
      pauVar26 = (undefined1 (*) [16])(ulonglong)uVar15;
      param_4 = pauVar18;
    }
    unaff_RSI = *(undefined1 (**) [16])*local_a0;
    pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8);
    if (pauVar31 == (undefined1 (*) [32])0x0) {
      auVar71 = ZEXT1664(auVar71._0_16_);
      auVar72 = ZEXT1664(auVar72._0_16_);
      pauVar31 = operator_new(0x20);
      *pauVar31 = ZEXT1232(ZEXT812(0));
      *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8) = pauVar31;
    }
    uVar39 = (ulonglong)pauVar26 & 0xff;
    pauVar26 = (undefined1 (*) [16])((ulonglong)pauVar26 & 0xffffffffffffff07);
    pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3));
    *pbVar41 = *pbVar41 | '\x01' << (sbyte)pauVar26;
    goto code_r0x000140097da6;
  }
  uVar15 = (uint)pauVar26;
  local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,uVar15);
  pcVar43 = *(char **)*local_98;
  unaff_RBX = *(undefined1 (**) [16])local_98[1];
  if ((undefined1 (*) [16])pcVar43 != unaff_RBX) {
    if ((((char)*(uint *)*(undefined1 (*) [16])pcVar43 == '\\') &&
        (pauVar22 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
        pauVar22 != unaff_RBX)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar22 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar22)[0] == '}' || ((*pauVar22)[0] == '{')))))
        ))) {
      pcVar43 = (char *)pauVar22;
    }
    pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 1);
    *(char **)*local_98 = pcVar43;
  }
  if ((undefined1 (*) [16])pcVar43 == unaff_RBX) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    goto code_r0x00014009e83b;
  }
  bVar10 = (byte)*(uint *)*(undefined1 (*) [16])pcVar43;
  unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
  uVar45 = (uint)(char)bVar10;
  auVar71 = ZEXT1664(auVar71._0_16_);
  auVar72 = ZEXT1664(auVar72._0_16_);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  param_4 = pauVar18;
  pauVar22 = unaff_RBX;
  switch(uVar45) {
  case 10:
    if ((*(uint *)*local_80 & 4) != 0) {
      uVar46 = 0x7c;
      uVar47 = *local_c0;
joined_r0x00014009b553:
      pauVar18 = param_4;
      if (uVar47 == 0) goto code_r0x00014009b635;
    }
    break;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (pauVar56 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
        pauVar56 != unaff_RBX)) && (uVar46 = 0, (char)*(uint *)*pauVar56 != '\n'))
    goto code_r0x00014009b635;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x00014009b3e1;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) != 0) {
      uVar46 = 0;
      param_4 = (undefined1 (*) [16])&UNK_1400b38b4;
      pauVar18 = param_4;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar47 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar47 < 0x15) && ((0x102100U >> (uVar47 & 0x1f) & 1) != 0)) goto code_r0x00014009b635;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009b635;
      }
    }
    break;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x00014009b3e1;
  case 0x5c:
    pauVar56 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1);
    if (pauVar56 != unaff_RBX) {
      if ((*(uint *)*local_80 & 8) == 0) {
        bVar10 = (byte)*(uint *)*pauVar56;
        pauVar37 = (undefined1 (*) [16])(ulonglong)bVar10;
        pauVar18 = (undefined1 (*) [16])((ulonglong)bVar10 & 0xfffffffffffffffe);
        if ((char)pauVar18 != '(') goto code_r0x00014009b46e;
code_r0x00014009b489:
        *(char *)local_88 = (char)pauVar37;
        uVar15 = (uint)pauVar37;
        *(uint *)*local_78 = uVar15;
        unaff_RSI = pauVar37;
        param_4 = pauVar18;
      }
      else {
code_r0x00014009b46e:
        param_4 = pauVar18;
        if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar56;
          pauVar37 = (undefined1 (*) [16])(ulonglong)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009b489;
        }
      }
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) == 0) break;
    uVar46 = 0;
    param_4 = (undefined1 (*) [16])&UNK_1400b3868;
    pauVar18 = (undefined1 (*) [16])&UNK_1400b3868;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar47 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if (uVar47 < 0x15) {
        uVar47 = 0x102100U >> (uVar47 & 0x1f) & 1;
        goto joined_r0x00014009b553;
      }
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014009b560;
    }
    goto code_r0x00014009b635;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x00014009b3e1;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009b3e1:
    uVar46 = 0;
    if (bVar10 != 0) break;
code_r0x00014009b635:
    *(uint *)*local_78 = uVar46;
    param_4 = pauVar18;
    goto code_r0x00014009b72b;
  }
code_r0x00014009b560:
  if (0x5b < (int)uVar15) {
    if (uVar15 != 0x5c) {
      if (uVar15 == 0x5d) goto code_r0x00014009e835;
      goto code_r0x00014009b727;
    }
    if ((((char)*(uint *)*(undefined1 (*) [16])pcVar43 == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
        pauVar18 != unaff_RBX)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))
        ))) {
      pcVar43 = (char *)pauVar18;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
    if (unaff_RSI == unaff_RBX) {
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      uVar15 = 0xff;
      goto code_r0x00014009bd63;
    }
    bVar10 = (byte)*(uint *)*unaff_RSI;
    uVar15 = (uint)bVar10;
    uVar46 = (uint)(char)bVar10;
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar45 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar45 = 0;
    }
    *(uint *)*local_78 = uVar45;
    *(byte *)local_88 = bVar10;
    pauVar26 = unaff_RBX;
    switch(uVar46) {
    case 10:
      if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2),
          pauVar18 != unaff_RBX)) && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014009bd56;
      break;
    case 0x28:
    case 0x29:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      goto joined_r0x00014009b9fc;
    case 0x2a:
      if ((*(uint *)*local_80 & 0x4000000) == 0) break;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x00014009bd56;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009bd56;
      }
      break;
    case 0x2b:
    case 0x3f:
      bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x00014009b9fc:
      if (bVar10 == 0) {
code_r0x00014009bd56:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2);
      if (pauVar18 != unaff_RBX) {
        if (((*(uint *)*local_80 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar45 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009bbc1:
          *(char *)local_88 = (char)uVar45;
          *(uint *)*local_78 = uVar45;
          uVar15 = uVar45;
        }
        else if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar45 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009bbc1;
        }
      }
      break;
    case 0x5e:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
          if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
          goto code_r0x00014009bd56;
          break;
        default:
          goto code_r0x00014009bd56;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      goto joined_r0x00014009ba50;
    case 0x7c:
      bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009ba50:
      if (bVar10 != 0) break;
      goto code_r0x00014009bd56;
    }
code_r0x00014009bd63:
    uVar45 = *(uint *)*local_80;
    uVar39 = (ulonglong)uVar45;
    cVar14 = (char)uVar15;
    if ((uVar45 & 0x200000) != 0) {
      if (((uVar45 & 0x4000) == 0) || (cVar14 != '\\')) {
        pauVar26 = unaff_RSI;
        if (((uVar45 & 0x20000) != 0) && (pauVar26 = unaff_RBX, unaff_RSI != unaff_RBX)) {
          lVar29 = *(longlong *)((longlong)local_98[6] + 8);
          local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,*(uint *)local_98[7]);
          pcVar43 = (char *)0x0;
          ppuVar55 = &PTR_s_alpha_140111f78;
          bVar62 = false;
          pcVar27 = "alnum";
          do {
            if ((0x2810UL >> ((ulonglong)pcVar43 & 0x3f) & 1) != 0) {
              cVar14 = *pcVar27;
              plVar3 = *(longlong **)(lVar29 + 8);
              cVar13 = (**(code **)(*plVar3 + 0x20))(plVar3,(char)*(uint *)*unaff_RSI);
              plVar3 = *(longlong **)(lVar29 + 8);
              cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,cVar14);
              if (cVar13 == cVar14) {
                if (!bVar62) {
                  uVar33 = *(ushort *)((longlong)ppuVar55 + -4);
                  goto code_r0x00014009bf82;
                }
                break;
              }
            }
            pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 1);
            pcVar27 = *ppuVar55;
            bVar62 = pcVar27 == (char *)0x0;
            ppuVar55 = ppuVar55 + 3;
          } while ((undefined1 (*) [16])pcVar43 != (undefined1 (*) [16])0xf);
          uVar33 = 0;
code_r0x00014009bf82:
          uVar42 = uVar33 | 3;
          if ((uVar33 & 3) == 0) {
            uVar42 = uVar33;
          }
          if (((ulonglong)local_a8 & 0x100) == 0) {
            uVar42 = uVar33;
          }
          if (uVar42 != 0) goto code_r0x0001400a1b16;
          uVar39 = (ulonglong)*(uint *)local_98[8];
          uVar15 = (uint)(byte)*(uint *)((longlong)local_98[7] + 8);
          pauVar26 = *(undefined1 (**) [16])*local_98;
          pauVar22 = *(undefined1 (**) [16])local_98[1];
        }
        *(uint *)*local_b0 = 0;
        local_b8 = *(undefined1 (**) [16])*local_a0;
        local_c8 = (undefined1 (*) [16])
                   CONCAT71(local_c8._1_7_,*local_c0 == 0 & (byte)(uVar39 >> 2) & 0x3f);
        unaff_RSI = (undefined1 (*) [16])0x0;
        uVar45 = 0;
        local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,(int)uVar39);
        ppuVar55 = (undefined **)pauVar26;
        while( true ) {
          cVar14 = (char)uVar15;
          if (9 < (byte)(cVar14 - 0x30U)) break;
          if ((int)((0x8000002f - uVar15) / 10) < (int)uVar45) goto code_r0x0001400a1917;
          uVar45 = (uVar15 + uVar45 * 10) - 0x30;
          *(uint *)*local_b0 = uVar45;
          if ((undefined1 (*) [16])ppuVar55 == pauVar22) {
code_r0x00014009c000:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            uVar15 = 0xff;
            ppuVar55 = (undefined **)pauVar22;
            goto code_r0x00014009c020;
          }
          pauVar18 = (undefined1 (*) [16])ppuVar55;
          if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
              (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
              pauVar26 != pauVar22)) &&
             ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
              (((uVar39 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
            pauVar18 = pauVar26;
          }
          ppuVar55 = (undefined **)((longlong)*pauVar18 + 1);
          *(undefined ***)*local_98 = ppuVar55;
          pauVar26 = pauVar22;
          if ((undefined1 (*) [16])ppuVar55 == pauVar22) goto code_r0x00014009c000;
          bVar10 = (*(undefined1 (*) [16])ppuVar55)[0];
          uVar15 = (uint)bVar10;
          uVar47 = (uint)(char)bVar10;
          pvVar19 = memchr(&DAT_140111e80,uVar47,0x17);
          uVar46 = uVar47;
          if (pvVar19 == (void *)0x0) {
            uVar46 = 0;
          }
          *(uint *)*local_78 = uVar46;
          *(byte *)local_88 = bVar10;
          pauVar26 = (undefined1 (*) [16])ppuVar55;
          if (0x73 < uVar47 - 10) {
            uVar39 = (ulonglong)local_a8 & 0xffffffff;
            goto code_r0x00014009c020;
          }
          uVar39 = (ulonglong)local_a8 & 0xffffffff;
          switch(uVar47) {
          case 10:
            if ((char)local_c8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          case 0x24:
            if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar22))
               && ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014009c2b4;
            break;
          case 0x28:
          case 0x29:
            uVar57 = (ulonglong)local_a8 & 8;
            goto joined_r0x00014009c154;
          case 0x2a:
            if (((ulonglong)local_a8 & 0x4000000) == 0) break;
            switch(*(uint *)((longlong)*local_b8 + 8)) {
            case 2:
              uVar46 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
              if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0))
              goto code_r0x00014009c2b4;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009c2b4;
            }
            break;
          case 0x2b:
          case 0x3f:
            uVar57 = (ulonglong)local_a8 & 1;
joined_r0x00014009c154:
            if (uVar57 == 0) {
code_r0x00014009c2b4:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
            if (pauVar18 != pauVar22) {
              if ((((ulonglong)local_a8 & 8) == 0) &&
                 (bVar10 = (byte)*(uint *)*pauVar18, uVar46 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)
                 ) {
code_r0x00014009c200:
                uVar15 = uVar46;
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
              }
              else if (((ulonglong)local_a8 & 0x10) == 0) {
                bVar10 = (byte)*(uint *)*pauVar18;
                uVar46 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009c200;
              }
            }
            break;
          case 0x5e:
            if (((ulonglong)local_a8 & 0x2000000) != 0) {
              switch(*(uint *)((longlong)*local_b8 + 8)) {
              case 2:
                uVar46 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
                if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0))
                goto code_r0x00014009c2b4;
                break;
              default:
                goto code_r0x00014009c2b4;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar57 = (ulonglong)local_a8 & 0x10;
            goto joined_r0x00014009c172;
          case 0x7c:
            uVar57 = (ulonglong)local_a8 & 2;
joined_r0x00014009c172:
            if (uVar57 != 0) break;
            goto code_r0x00014009c2b4;
          }
code_r0x00014009c020:
          uVar46 = (int)unaff_RSI + 1;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar46;
          pcVar43 = (char *)pauVar26;
          if (uVar46 == 0x7fffffff) goto code_r0x00014009c2e0;
        }
        if ((int)unaff_RSI != 0) goto code_r0x00014009c2e0;
        if (*(uint *)*local_78 == 0xffffffff) goto code_r0x0001400a1917;
        if ((((uVar39 & 0x10000) != 0) &&
            (bVar10 = (byte)(cVar14 + 0x9aU) >> 1 | cVar14 << 7, bVar10 < 9)) &&
           ((0x1d1U >> (bVar10 & 0x1f) & 1) != 0)) {
          pcVar43 = (char *)(ulonglong)*(uint *)(&UNK_14010b538 + (ulonglong)bVar10 * 4);
          goto code_r0x00014009caca;
        }
        uVar44 = (undefined7)((ulonglong)unaff_RSI >> 8);
        if (-1 < (short)uVar39) {
          if (cVar14 == 'x') goto code_r0x00014009c6be;
          if (uVar15 == 0x75) goto code_r0x00014009c5eb;
          if (uVar15 == 99) goto code_r0x00014009c51b;
code_r0x00014009c6cb:
          if ((uVar39 & 0x2000) == 0) goto code_r0x00014009c6d4;
          *(uint *)*local_b0 = 0;
          unaff_RSI = (undefined1 (*) [16])0x0;
          pcVar43 = (char *)0x0;
          ppuVar55 = (undefined **)pauVar26;
          goto code_r0x00014009c761;
        }
        pcVar43 = (char *)0x7;
        switch(uVar15) {
        case 0x61:
          goto code_r0x00014009caca;
        case 0x62:
          pcVar43 = (char *)0x8;
code_r0x00014009caca:
          *(uint *)*local_b0 = (uint)pcVar43;
          if (pauVar26 == pauVar22) {
code_r0x00014009cb87:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            pauVar22 = unaff_RSI;
            goto code_r0x00014009e5bd;
          }
          if ((((char)*(uint *)*pauVar26 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar22)) &&
             ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
              (((uVar39 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
            pauVar26 = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          if (pauVar18 == pauVar22) goto code_r0x00014009cb87;
          cVar14 = (char)*(uint *)*pauVar18;
          uVar45 = (uint)cVar14;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          break;
        case 99:
code_r0x00014009c51b:
          if ((uVar39 & 0x40000) == 0) goto code_r0x00014009c6cb;
          if (pauVar26 == pauVar22) {
code_r0x00014009cc7f:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            bVar10 = 0xff;
            bVar62 = true;
            unaff_RSI = pauVar22;
            goto code_r0x00014009e4a8;
          }
          if ((((char)*(uint *)*pauVar26 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar22)) &&
             ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
              (((uVar39 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
            pauVar26 = pauVar18;
          }
          unaff_RSI = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          *(undefined1 (**) [16])*local_98 = unaff_RSI;
          if (unaff_RSI == pauVar22) goto code_r0x00014009cc7f;
          bVar10 = (byte)*(uint *)*unaff_RSI;
          uVar45 = (uint)(char)bVar10;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          bVar62 = false;
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(byte *)local_88 = bVar10;
          if (0x73 < uVar45 - 10) {
            uVar39 = (ulonglong)local_a8 & 0xffffffff;
            goto code_r0x00014009e4a8;
          }
          uVar39 = (ulonglong)local_a8 & 0xffffffff;
          switch(uVar45) {
          case 10:
            if ((char)local_c8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          default:
            goto code_r0x00014009e4a8;
          case 0x24:
            if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar22))
               && ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014009e499;
            break;
          case 0x28:
          case 0x29:
            uVar57 = (ulonglong)local_a8 & 8;
            goto joined_r0x00014009e0c8;
          case 0x2a:
            if (((ulonglong)local_a8 & 0x4000000) == 0) break;
            bVar62 = false;
            switch(*(uint *)((longlong)*local_b8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
              bVar62 = false;
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014009e499;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009e499;
            }
            goto code_r0x00014009e4a8;
          case 0x2b:
          case 0x3f:
            uVar57 = (ulonglong)local_a8 & 1;
joined_r0x00014009e0c8:
            if (uVar57 == 0) {
code_r0x00014009e499:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
            if ((pauVar26 == pauVar22) ||
               (((((ulonglong)local_a8 & 8) != 0 ||
                 (bVar11 = (byte)*(uint *)*pauVar26, (bVar11 & 0xfe) != 0x28)) &&
                ((((ulonglong)local_a8 & 0x10) != 0 ||
                 ((bVar11 = (byte)*(uint *)*pauVar26, bVar11 != 0x7d && (bVar11 != 0x7b))))))))
            break;
            bVar10 = bVar11;
            *(byte *)local_88 = bVar10;
            *(uint *)*local_78 = (uint)bVar10;
            bVar62 = false;
            goto code_r0x00014009e4a8;
          case 0x5e:
            if (((ulonglong)local_a8 & 0x2000000) != 0) {
              bVar62 = false;
              switch(*(uint *)((longlong)*local_b8 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
                if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
                goto code_r0x00014009e4a6;
                break;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014009e4a8;
              }
              goto code_r0x00014009e499;
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar57 = (ulonglong)local_a8 & 0x10;
            goto joined_r0x00014009e14f;
          case 0x7c:
            uVar57 = (ulonglong)local_a8 & 2;
joined_r0x00014009e14f:
            if (uVar57 != 0) break;
            goto code_r0x00014009e499;
          }
code_r0x00014009e4a6:
          bVar62 = false;
code_r0x00014009e4a8:
          if ((*(ushort *)
                (*(longlong *)(*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
                (ulonglong)bVar10 * 2) & 0x103) == 0) goto code_r0x0001400a1917;
          pcVar43 = (char *)(ulonglong)(uint)(int)((char)bVar10 % ' ');
          *(int *)*local_b0 = (int)((char)bVar10 % ' ');
          if (bVar62) {
code_r0x00014009e599:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            goto code_r0x00014009e5b0;
          }
          if ((((char)*(uint *)*unaff_RSI == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar18 != pauVar22)) &&
             ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
              (((uVar39 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
            unaff_RSI = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          if (pauVar18 == pauVar22) goto code_r0x00014009e599;
          cVar14 = (char)*(uint *)*pauVar18;
          uVar45 = (uint)cVar14;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(char *)local_88 = cVar14;
          pauVar26 = pauVar22;
          switch(uVar45) {
          case 10:
            if ((char)local_c8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
          default:
            goto code_r0x00014009e5b0;
          case 0x24:
            if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), unaff_RSI != pauVar22)
                ) && ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x00014009e7e0;
            goto code_r0x00014009e5b0;
          case 0x28:
          case 0x29:
            uVar39 = (ulonglong)local_a8 & 8;
            break;
          case 0x2a:
            if (((ulonglong)local_a8 & 0x4000000) == 0) goto code_r0x00014009e5b0;
            switch(*(uint *)((longlong)*local_b8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014009e7e0;
            default:
              goto code_r0x00014009e5b0;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009e7e0;
            }
          case 0x2b:
          case 0x3f:
            uVar39 = (ulonglong)local_a8 & 1;
            break;
          case 0x5c:
            unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
            if (unaff_RSI == pauVar22) goto code_r0x00014009e5b0;
            if ((((ulonglong)local_a8 & 8) != 0) ||
               (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28))
            {
              if (((ulonglong)local_a8 & 0x10) != 0) goto code_r0x00014009e5b0;
              bVar10 = (byte)*(uint *)*unaff_RSI;
              uVar15 = (uint)bVar10;
              if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014009e5b0;
            }
            *(char *)local_88 = (char)uVar15;
            *(uint *)*local_78 = uVar15;
            goto code_r0x00014009e5b0;
          case 0x5e:
            if (((ulonglong)local_a8 & 0x2000000) == 0) goto code_r0x00014009e5b0;
            switch(*(uint *)((longlong)*local_b8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
              if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009e5b0;
            }
            goto code_r0x00014009e7e0;
          case 0x7b:
          case 0x7d:
            uVar39 = (ulonglong)local_a8 & 0x10;
            break;
          case 0x7c:
            uVar39 = (ulonglong)local_a8 & 2;
          }
          if (uVar39 != 0) goto code_r0x00014009e5b0;
code_r0x00014009e7e0:
          *(uint *)*local_78 = 0;
          goto code_r0x00014009e5b0;
        default:
          goto code_r0x00014009c6cb;
        case 0x75:
code_r0x00014009c5eb:
          if ((uVar39 & 0x800) == 0) goto code_r0x00014009c6cb;
          if (pauVar26 == pauVar22) {
code_r0x00014009cca3:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,0xff);
            pauVar18 = pauVar22;
            goto code_r0x00014009ccc0;
          }
          if ((((char)*(uint *)*pauVar26 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar22)) &&
             ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
              (((uVar39 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
            pauVar26 = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          if (pauVar18 == pauVar22) goto code_r0x00014009cca3;
          bVar10 = (*pauVar18)[0];
          unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
          uVar45 = (uint)(char)bVar10;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(byte *)local_88 = bVar10;
          if (0x73 < uVar45 - 10) {
            uVar39 = (ulonglong)local_a8 & 0xffffffff;
            goto code_r0x00014009ccc0;
          }
          uVar39 = (ulonglong)local_a8 & 0xffffffff;
          switch(uVar45) {
          case 10:
            if ((char)local_c8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          case 0x24:
            if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar22))
               && ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014009e62a;
            break;
          case 0x28:
          case 0x29:
            uVar57 = (ulonglong)local_a8 & 8;
            goto joined_r0x00014009e0d7;
          case 0x2a:
            if (((ulonglong)local_a8 & 0x4000000) == 0) break;
            switch(*(uint *)((longlong)*local_b8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014009e62a;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009e62a;
            }
            break;
          case 0x2b:
          case 0x3f:
            uVar57 = (ulonglong)local_a8 & 1;
joined_r0x00014009e0d7:
            if (uVar57 == 0) {
code_r0x00014009e62a:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
            if (pauVar26 != pauVar22) {
              if ((((ulonglong)local_a8 & 8) == 0) &&
                 (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)
                 ) {
code_r0x00014009e2d9:
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
              }
              else if (((ulonglong)local_a8 & 0x10) == 0) {
                bVar10 = (byte)*(uint *)*pauVar26;
                uVar15 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009e2d9;
              }
            }
            break;
          case 0x5e:
            if (((ulonglong)local_a8 & 0x2000000) != 0) {
              switch(*(uint *)((longlong)*local_b8 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
                if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                goto code_r0x00014009e62a;
                break;
              default:
                goto code_r0x00014009e62a;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar57 = (ulonglong)local_a8 & 0x10;
            goto joined_r0x00014009e15e;
          case 0x7c:
            uVar57 = (ulonglong)local_a8 & 2;
joined_r0x00014009e15e:
            if (uVar57 != 0) break;
            goto code_r0x00014009e62a;
          }
code_r0x00014009ccc0:
          *(uint *)*local_b0 = 0;
          pcVar43 = (char *)0x0;
          iVar58 = -4;
          goto code_r0x00014009cd09;
        case 0x78:
code_r0x00014009c6be:
          if ((uVar39 & 0x1000) == 0) goto code_r0x00014009c6cb;
          if (pauVar26 == pauVar22) {
code_r0x00014009cfbf:
            *(uint *)*local_78 = 0xffffffff;
            *(undefined1 *)local_88 = 0xff;
            unaff_RSI = (undefined1 (*) [16])CONCAT71(uVar44,0xff);
            pauVar18 = pauVar22;
            goto code_r0x00014009cfdc;
          }
          if ((((char)*(uint *)*pauVar26 == '\\') &&
              (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar22)) &&
             ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
              (((uVar39 & 0x10) == 0 &&
               ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
            pauVar26 = pauVar18;
          }
          pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          *(undefined1 (**) [16])*local_98 = pauVar18;
          if (pauVar18 == pauVar22) goto code_r0x00014009cfbf;
          bVar10 = (*pauVar18)[0];
          unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
          uVar45 = (uint)(char)bVar10;
          pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
          uVar15 = uVar45;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(byte *)local_88 = bVar10;
          if (0x73 < uVar45 - 10) {
            uVar39 = (ulonglong)local_a8 & 0xffffffff;
            goto code_r0x00014009cfdc;
          }
          uVar39 = (ulonglong)local_a8 & 0xffffffff;
          switch(uVar45) {
          case 10:
            if ((char)local_c8 != '\0') {
              *(uint *)*local_78 = 0x7c;
            }
            break;
          case 0x24:
            if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
                (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar22))
               && ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014009e686;
            break;
          case 0x28:
          case 0x29:
            uVar57 = (ulonglong)local_a8 & 8;
            goto joined_r0x00014009e104;
          case 0x2a:
            if (((ulonglong)local_a8 & 0x4000000) == 0) break;
            switch(*(uint *)((longlong)*local_b8 + 8)) {
            case 2:
              uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
              if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
              goto code_r0x00014009e686;
              break;
            case 8:
            case 0xd:
            case 0x14:
              goto code_r0x00014009e686;
            }
            break;
          case 0x2b:
          case 0x3f:
            uVar57 = (ulonglong)local_a8 & 1;
joined_r0x00014009e104:
            if (uVar57 == 0) {
code_r0x00014009e686:
              *(uint *)*local_78 = 0;
            }
            break;
          case 0x5c:
            pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
            if (pauVar26 != pauVar22) {
              if ((((ulonglong)local_a8 & 8) == 0) &&
                 (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)
                 ) {
code_r0x00014009e330:
                *(char *)local_88 = (char)uVar15;
                *(uint *)*local_78 = uVar15;
                unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
              }
              else if (((ulonglong)local_a8 & 0x10) == 0) {
                bVar10 = (byte)*(uint *)*pauVar26;
                uVar15 = (uint)bVar10;
                if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009e330;
              }
            }
            break;
          case 0x5e:
            if (((ulonglong)local_a8 & 0x2000000) != 0) {
              switch(*(uint *)((longlong)*local_b8 + 8)) {
              case 2:
                uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
                if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
                goto code_r0x00014009e686;
                break;
              default:
                goto code_r0x00014009e686;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case 0x7b:
          case 0x7d:
            uVar57 = (ulonglong)local_a8 & 0x10;
            goto joined_r0x00014009e16d;
          case 0x7c:
            uVar57 = (ulonglong)local_a8 & 2;
joined_r0x00014009e16d:
            if (uVar57 != 0) break;
            goto code_r0x00014009e686;
          }
code_r0x00014009cfdc:
          *(uint *)*local_b0 = 0;
          pcVar43 = (char *)0x0;
          bVar62 = false;
          goto code_r0x00014009d01d;
        }
        *(uint *)*local_78 = uVar15;
        *(char *)local_88 = cVar14;
        switch(uVar45) {
        case 10:
          if ((char)local_c8 != '\0') {
            *(uint *)*local_78 = 0x7c;
          }
        default:
          goto code_r0x00014009e5bd;
        case 0x24:
          if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
              (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 != pauVar22)) &&
             ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014009de6c;
          goto code_r0x00014009e5bd;
        case 0x28:
        case 0x29:
          uVar39 = (ulonglong)local_a8 & 8;
          break;
        case 0x2a:
          if (((ulonglong)local_a8 & 0x4000000) == 0) goto code_r0x00014009e5bd;
          switch(*(uint *)((longlong)*local_b8 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
            if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
            goto code_r0x00014009de6c;
          default:
            goto code_r0x00014009e5bd;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009de6c;
          }
        case 0x2b:
        case 0x3f:
          uVar39 = (ulonglong)local_a8 & 1;
          break;
        case 0x5c:
          pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
          if (pauVar26 == pauVar22) goto code_r0x00014009e5bd;
          if ((((ulonglong)local_a8 & 8) != 0) ||
             (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
            if (((ulonglong)local_a8 & 0x10) != 0) goto code_r0x00014009e5bd;
            bVar10 = (byte)*(uint *)*pauVar26;
            uVar15 = (uint)bVar10;
            if ((bVar10 != 0x7d) && (bVar10 != 0x7b)) goto code_r0x00014009e5bd;
          }
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          goto code_r0x00014009e5bd;
        case 0x5e:
          if (((ulonglong)local_a8 & 0x2000000) == 0) goto code_r0x00014009e5bd;
          switch(*(uint *)((longlong)*local_b8 + 8)) {
          case 2:
            uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
            if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) break;
          case 8:
          case 0xd:
          case 0x14:
            goto code_r0x00014009e5bd;
          }
          goto code_r0x00014009de6c;
        case 0x7b:
        case 0x7d:
          uVar39 = (ulonglong)local_a8 & 0x10;
          break;
        case 0x7c:
          uVar39 = (ulonglong)local_a8 & 2;
        }
        if (uVar39 != 0) goto code_r0x00014009e5bd;
code_r0x00014009de6c:
        *(uint *)*local_78 = 0;
        goto code_r0x00014009e5bd;
      }
      *(uint *)*local_b0 = 0x5c;
      if (unaff_RSI != unaff_RBX) {
        pauVar22 = unaff_RSI;
        if ((((char)*(uint *)*unaff_RSI == '\\') &&
            (pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 2),
            (undefined1 (*) [16])pcVar43 != unaff_RBX)) &&
           ((((uVar45 & 8) == 0 && ((*(uint *)*(undefined1 (*) [16])pcVar43 & 0xfe) == 0x28)) ||
            (((uVar45 & 0x10) == 0 &&
             ((cVar14 = (char)*(uint *)*(undefined1 (*) [16])pcVar43, cVar14 == '}' ||
              (cVar14 == '{')))))))) {
          pauVar22 = (undefined1 (*) [16])pcVar43;
        }
        pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
        *(undefined1 (**) [16])*local_98 = pauVar18;
        unaff_RSI = pauVar22;
        if (pauVar18 != unaff_RBX) {
          cVar14 = (char)*(uint *)*pauVar18;
          uVar46 = (uint)cVar14;
          pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
          uVar15 = uVar46;
          if (pvVar19 == (void *)0x0) {
            uVar15 = 0;
          }
          *(uint *)*local_78 = uVar15;
          *(char *)local_88 = cVar14;
          pauVar26 = unaff_RBX;
          switch(uVar46) {
          case 10:
            goto code_r0x00014009c494;
          case 0x24:
            goto code_r0x00014009c4a3;
          case 0x28:
          case 0x29:
            goto code_r0x00014009c3b5;
          case 0x2a:
            if ((uVar45 & 0x4000000) != 0) {
              pauVar18 = *(undefined1 (**) [16])*local_a0;
              switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                goto code_r0x00014009b960;
              case 8:
              case 0xd:
              case 0x14:
                goto code_r0x00014009ca7e;
              }
            }
            break;
          case 0x2b:
          case 0x3f:
            goto code_r0x00014009c43a;
          case 0x5c:
            goto code_r0x00014009c4da;
          case 0x5e:
            if ((uVar45 & 0x2000000) != 0) {
              pauVar18 = *(undefined1 (**) [16])*local_a0;
              switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
              case 2:
                goto code_r0x00014009b9ba;
              default:
                goto code_r0x00014009ca7e;
              case 8:
              case 0xd:
              case 0x14:
                break;
              }
            }
            break;
          case 0x7b:
          case 0x7d:
            goto code_r0x00014009c42b;
          case 0x7c:
            goto code_r0x00014009c4cb;
          }
          goto code_r0x00014009d43e;
        }
      }
code_r0x00014009d427:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      pauVar22 = unaff_RSI;
      goto code_r0x00014009d43e;
    }
    if ((((uVar45 & 0x10000) == 0) ||
        (bVar10 = (byte)(cVar14 + 0x9aU) >> 1 | cVar14 << 7, 8 < bVar10)) ||
       ((0x1d1U >> (bVar10 & 0x1f) & 1) == 0)) {
      if (-1 < (short)uVar45) {
code_r0x00014009bed1:
        *(uint *)*local_b0 = 0x5c;
        pauVar22 = unaff_RSI;
        goto code_r0x00014009d43e;
      }
      if (cVar14 == 'a') {
        uVar15 = 7;
      }
      else {
        if (uVar15 != 0x62) goto code_r0x00014009bed1;
        uVar15 = 8;
      }
    }
    else {
      uVar15 = *(uint *)(&UNK_14010b538 + (ulonglong)bVar10 * 4);
    }
    *(uint *)*local_b0 = uVar15;
    if (unaff_RSI == unaff_RBX) goto code_r0x00014009d427;
    pauVar22 = unaff_RSI;
    if ((((char)*(uint *)*unaff_RSI == '\\') &&
        (pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 2),
        (undefined1 (*) [16])pcVar43 != unaff_RBX)) &&
       ((((uVar45 & 8) == 0 && ((*(uint *)*(undefined1 (*) [16])pcVar43 & 0xfe) == 0x28)) ||
        (((uVar45 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*(undefined1 (*) [16])pcVar43, cVar14 == '}' || (cVar14 == '{')))
         ))))) {
      pauVar22 = (undefined1 (*) [16])pcVar43;
    }
    pauVar18 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar18;
    unaff_RSI = pauVar22;
    if (pauVar18 == unaff_RBX) goto code_r0x00014009d427;
    cVar14 = (char)*(uint *)*pauVar18;
    uVar46 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar15 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    pauVar26 = unaff_RBX;
    switch(uVar46) {
    case 10:
code_r0x00014009c494:
      pauVar26 = unaff_RBX;
      if ((uVar45 & 4) != 0) {
code_r0x00014009b87c:
        if (*local_c0 == 0) {
code_r0x00014009b889:
          *(uint *)*local_78 = 0x7c;
        }
      }
      break;
    case 0x24:
code_r0x00014009c4a3:
      pauVar26 = unaff_RBX;
      if ((((uVar45 & 0x2000000) != 0) &&
          (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar22 != unaff_RBX)) &&
         ((char)*(uint *)*pauVar22 != '\n')) goto code_r0x00014009ca7e;
      break;
    case 0x28:
    case 0x29:
code_r0x00014009c3b5:
      uVar45 = uVar45 & 8;
      goto joined_r0x00014009c4cf;
    case 0x2a:
      if ((uVar45 & 0x4000000) != 0) {
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
code_r0x00014009b960:
          uVar15 = *(uint *)(*(longlong *)((longlong)pauVar18[1] + 8) + 8);
          if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0))
          goto code_r0x00014009ca7e;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014009ca7e;
        }
      }
      break;
    case 0x2b:
    case 0x3f:
code_r0x00014009c43a:
      uVar45 = uVar45 & 1;
      goto joined_r0x00014009c4cf;
    case 0x5c:
code_r0x00014009c4da:
      pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
      pauVar26 = unaff_RBX;
      if (pauVar22 != unaff_RBX) {
        if (((uVar45 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar22, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009b90f:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
        }
        else if ((uVar45 & 0x10) == 0) {
          uVar15 = (uint)(byte)*(uint *)*pauVar22;
code_r0x00014009b901:
          if ((uVar15 == 0x7d) || (uVar15 == 0x7b)) goto code_r0x00014009b90f;
        }
      }
      break;
    case 0x5e:
      if ((uVar45 & 0x2000000) == 0) break;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
      switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
code_r0x00014009b9ba:
        uVar15 = *(uint *)(*(longlong *)((longlong)pauVar18[1] + 8) + 8);
        if (uVar15 < 0x15) {
          uVar45 = 0x102100U >> (uVar15 & 0x1f) & 1;
          unaff_RBX = pauVar26;
          goto joined_r0x00014009c4cf;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009d43e;
      }
      goto code_r0x00014009ca7e;
    case 0x7b:
    case 0x7d:
code_r0x00014009c42b:
      uVar45 = uVar45 & 0x10;
      goto joined_r0x00014009c4cf;
    case 0x7c:
code_r0x00014009c4cb:
      uVar45 = uVar45 & 2;
joined_r0x00014009c4cf:
      pauVar26 = unaff_RBX;
      if (uVar45 == 0) {
code_r0x00014009ca7e:
        *(uint *)*local_78 = 0;
      }
    }
    goto code_r0x00014009d43e;
  }
  if (uVar15 != 0x5b) {
    if (uVar15 == 0xffffffff) goto code_r0x00014009e835;
code_r0x00014009b727:
    uVar45 = (uint)(char)unaff_RSI;
code_r0x00014009b72b:
    *(uint *)*local_b0 = uVar45;
    if ((((char)*(uint *)*(undefined1 (*) [16])pcVar43 == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
        pauVar18 != unaff_RBX)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
      pcVar43 = (char *)pauVar18;
    }
    pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar18;
    if (pauVar18 == unaff_RBX) goto code_r0x00014009d427;
    cVar14 = (char)*(uint *)*pauVar18;
    uVar45 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    switch(uVar45) {
    case 10:
      if ((*(uint *)*local_80 & 4) == 0) goto code_r0x00014009d43e;
      goto code_r0x00014009b87c;
    default:
      goto code_r0x00014009d43e;
    case 0x24:
      if (((*(uint *)*local_80 & 0x2000000) == 0) ||
         (pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 2),
         (undefined1 (*) [16])pcVar43 == unaff_RBX)) goto code_r0x00014009d43e;
      cVar14 = (*(undefined1 (*) [16])pcVar43)[0];
joined_r0x00014009e010:
      if (cVar14 == '\n') goto code_r0x00014009d43e;
      goto code_r0x00014009ca7e;
    case 0x28:
    case 0x29:
      bVar10 = (byte)*(uint *)*local_80 & 8;
      break;
    case 0x2a:
      if ((*(uint *)*local_80 & 0x4000000) != 0) {
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          goto code_r0x00014009b960;
        default:
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x00014009ca7e;
        }
      }
      goto code_r0x00014009d43e;
    case 0x2b:
    case 0x3f:
      bVar10 = (byte)*(uint *)*local_80 & 1;
      break;
    case 0x5c:
      pcVar43 = (char *)((longlong)*(undefined1 (*) [16])pcVar43 + 2);
      if ((undefined1 (*) [16])pcVar43 == unaff_RBX) goto code_r0x00014009d43e;
      if (((*(uint *)*local_80 & 8) != 0) ||
         (uVar15 = (uint)(byte)(*(undefined1 (*) [16])pcVar43)[0],
         ((*(undefined1 (*) [16])pcVar43)[0] & 0xfe) != 0x28)) {
        if ((*(uint *)*local_80 & 0x10) != 0) goto code_r0x00014009d43e;
        uVar15 = (uint)(byte)(*(undefined1 (*) [16])pcVar43)[0];
        goto code_r0x00014009b901;
      }
      goto code_r0x00014009b90f;
    case 0x5e:
      if ((*(uint *)*local_80 & 0x2000000) != 0) {
        pauVar18 = *(undefined1 (**) [16])*local_a0;
        switch(*(uint *)((longlong)**(undefined1 (**) [16])*local_a0 + 8)) {
        case 2:
          goto code_r0x00014009b9ba;
        default:
          goto code_r0x00014009ca7e;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      goto code_r0x00014009d43e;
    case 0x7b:
    case 0x7d:
      bVar10 = (byte)*(uint *)*local_80 & 0x10;
      break;
    case 0x7c:
      bVar10 = (byte)*(uint *)*local_80 & 2;
    }
    if (bVar10 == 0) goto code_r0x00014009ca7e;
    goto code_r0x00014009d43e;
  }
  if ((((char)*(uint *)*(undefined1 (*) [16])pcVar43 == '\\') &&
      (pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1),
      pauVar18 != unaff_RBX)) &&
     ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
      (((*(uint *)*local_80 & 0x10) == 0 &&
       ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
    pcVar43 = (char *)pauVar18;
  }
  unaff_RSI = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 1);
  *(undefined1 (**) [16])*local_98 = unaff_RSI;
  if (unaff_RSI == unaff_RBX) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    unaff_RBX = pauVar26;
    goto code_r0x00014009bd02;
  }
  cVar14 = (*unaff_RSI)[0];
  uVar45 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  uVar39 = (ulonglong)uVar15;
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  param_4 = unaff_RBX;
  switch(uVar45) {
  case 10:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      goto code_r0x00014009bd02;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    break;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2),
        pauVar26 != unaff_RBX)) && ((char)*(uint *)*pauVar26 != '\n')) goto code_r0x00014009bcf5;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x00014009ba3b;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x00014009bcf5;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014009bcf5;
    }
    break;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x00014009ba3b;
  case 0x5c:
    pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2);
    if (pauVar26 == unaff_RBX) break;
    if (((*(uint *)*local_80 & 8) != 0) ||
       (bVar10 = (byte)*(uint *)*pauVar26, uVar57 = (ulonglong)bVar10, (bVar10 & 0xfe) != 0x28)) {
      if ((*(uint *)*local_80 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*pauVar26;
        uVar57 = (ulonglong)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009bb56;
      }
      break;
    }
code_r0x00014009bb56:
    *(char *)local_88 = (char)uVar57;
    uVar15 = (uint)uVar57;
    *(uint *)*local_78 = uVar15;
    uVar39 = uVar57;
    goto joined_r0x00014009bb71;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0)) goto code_r0x00014009bcf5;
        break;
      default:
        goto code_r0x00014009bcf5;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x00014009ba3b;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009ba3b:
    if (bVar10 != 0) break;
code_r0x00014009bcf5:
    *(uint *)*local_78 = 0;
    goto code_r0x00014009bd02;
  default:
    if (0x3d < uVar15) goto code_r0x00014009bd02;
    goto code_r0x00014009bcdd;
  }
joined_r0x00014009bb71:
  if (uVar15 < 0x3e) {
code_r0x00014009bcdd:
    uVar45 = (uint)uVar39;
    if ((0x2400400000000000U >> (uVar39 & 0x3f) & 1) != 0) goto code_r0x0001400a1984;
  }
code_r0x00014009bd02:
  *(uint *)*local_b0 = 0x5b;
  pauVar26 = unaff_RBX;
  pauVar22 = unaff_RSI;
code_r0x00014009d43e:
  pauVar18 = local_98;
  if ((*(uint *)local_98[7] & 0x800) == 0) {
    unaff_RDI = (undefined1 (*) [16])((ulonglong)local_90 & 0xffffffff);
  }
  else {
    local_138[0] = (char)*(uint *)((longlong)local_98[7] + 4);
    pauVar26 = &local_138;
    (**(code **)(*(longlong *)**(undefined8 **)((longlong)local_98[6] + 8) + 0x20))
              ((longlong *)**(undefined8 **)((longlong)local_98[6] + 8),
               (undefined1 (*) [16])local_110,pauVar26,local_138 + 1);
    pauVar56 = local_90;
    pauVar22 = (undefined1 (*) [16])local_110;
    if (0xf < uStack_f8) {
      pauVar22 = local_110[0];
    }
    if (lStack_100 != 1) {
      pauVar22 = pauVar26;
    }
    uVar15 = (uint)(char)*(uint *)*pauVar22;
    pauVar22 = (undefined1 (*) [16])(ulonglong)uVar15;
    if (0xf < uStack_f8) {
      pauVar18 = local_110[0];
      if ((0xfff < uStack_f8 + 1) &&
         (pauVar18 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
         0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar18))))
      goto LAB_1400a3888;
      free(pauVar18);
      pauVar18 = local_98;
    }
    *(uint *)((longlong)pauVar18[7] + 4) = uVar15;
    local_138[0] = (char)pauVar56;
    param_4 = (undefined1 (*) [16])(local_138 + 1);
    (**(code **)(*(longlong *)**(undefined8 **)((longlong)pauVar18[6] + 8) + 0x20))
              ((longlong *)**(undefined8 **)((longlong)pauVar18[6] + 8),
               (undefined1 (*) [16])local_110,pauVar26);
    pauVar18 = (undefined1 (*) [16])local_110;
    if (0xf < uStack_f8) {
      pauVar18 = local_110[0];
    }
    if (lStack_100 != 1) {
      pauVar18 = pauVar26;
    }
    unaff_RDI = (undefined1 (*) [16])(ulonglong)(byte)*(uint *)*pauVar18;
    if (0xf < uStack_f8) {
      pauVar18 = local_110[0];
      if ((0xfff < uStack_f8 + 1) &&
         (pauVar18 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
         0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar18))))
      goto LAB_1400a3888;
      free(pauVar18);
    }
  }
  pauVar18 = local_d0;
  bVar10 = (*local_b0)[0];
  uVar15 = (uint)bVar10;
  uVar39 = (ulonglong)unaff_RDI & 0xff;
  if ((uint)bVar10 < (uint)uVar39) goto LAB_1400a3c47;
  unaff_RSI = pauVar22;
  if ((*(uint *)local_98[5] & 0x100) != 0) {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,unaff_RDI);
    uVar39 = (ulonglong)(uint)(int)cVar14;
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*pauVar18 + 8);
    cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,(uint)bVar10);
    uVar15 = (uint)cVar14;
    unaff_RSI = pauVar18;
  }
  if ((uint)uVar39 <= uVar15) {
    unaff_RSI = *(undefined1 (**) [16])*local_a0;
    do {
      uVar45 = (uint)uVar39;
      if (*(uint *)local_98[6] <= uVar15) {
        if (uVar15 - uVar45 < *(uint *)((longlong)local_98[6] + 4)) goto joined_r0x00014009d630;
        pauVar26 = *(undefined1 (**) [16])((longlong)unaff_RSI[3] + 8);
        if (pauVar26 == (undefined1 (*) [16])0x0) {
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pauVar26 = operator_new(0x10);
          *pauVar26 = auVar72._0_16_;
          *(undefined1 (**) [16])((longlong)unaff_RSI[3] + 8) = pauVar26;
        }
        uVar45 = *(uint *)((longlong)*pauVar26 + 4);
        if (uVar45 < *(uint *)*pauVar26) {
          pvVar19 = *(void **)((longlong)*pauVar26 + 8);
        }
        else {
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pvVar19 = realloc(*(void **)((longlong)*pauVar26 + 8),(ulonglong)(uVar45 + 0x10));
          if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
          *(void **)((longlong)*pauVar26 + 8) = pvVar19;
          *(uint *)*pauVar26 = uVar45 + 0x10;
          uVar45 = *(uint *)((longlong)*pauVar26 + 4);
        }
        unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar45;
        *(uint *)((longlong)*pauVar26 + 4) = uVar45 + 1;
        *(byte *)((longlong)pvVar19 + (longlong)unaff_RDI) = (byte)uVar39;
        unaff_RSI = *(undefined1 (**) [16])((longlong)unaff_RSI[3] + 8);
        uVar45 = *(uint *)((longlong)*unaff_RSI + 4);
        if (uVar45 < *(uint *)*unaff_RSI) {
          pvVar19 = *(void **)((longlong)*unaff_RSI + 8);
        }
        else {
          auVar71 = ZEXT1664(auVar71._0_16_);
          auVar72 = ZEXT1664(auVar72._0_16_);
          pvVar19 = realloc(*(void **)((longlong)*unaff_RSI + 8),(ulonglong)(uVar45 + 0x10));
          if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
          *(void **)((longlong)*unaff_RSI + 8) = pvVar19;
          *(uint *)*unaff_RSI = uVar45 + 0x10;
          uVar45 = *(uint *)((longlong)*unaff_RSI + 4);
        }
        pauVar26 = (undefined1 (*) [16])(ulonglong)uVar45;
        *(uint *)((longlong)*unaff_RSI + 4) = uVar45 + 1;
        *(char *)((longlong)pvVar19 + (longlong)pauVar26) = (char)uVar15;
        break;
      }
      pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8);
      if (pauVar31 == (undefined1 (*) [32])0x0) {
        auVar71 = ZEXT1664(auVar71._0_16_);
        auVar72 = ZEXT1664(auVar72._0_16_);
        pauVar31 = operator_new(0x20);
        *pauVar31 = ZEXT1232(ZEXT812(0));
        *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8) = pauVar31;
      }
      pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3));
      *pbVar41 = *pbVar41 | (byte)(1 << ((byte)uVar39 & 7));
      uVar39 = (ulonglong)(uVar45 + 1);
    } while (uVar45 + 1 <= uVar15);
  }
code_r0x000140097da6:
  pauVar18 = param_4;
  ppuVar55 = (undefined **)(ulonglong)*(uint *)*local_78;
  goto code_r0x000140097db0;
code_r0x00014009a185:
  uVar15 = (uint)(char)pcVar43;
  ppuVar55 = (undefined **)(ulonglong)uVar15;
  if ((uVar39 & 0x400000) == 0) {
    switch(uVar15) {
    case 0x22:
    case 0x2f:
      uVar57 = uVar39 & 0x1000000;
      break;
    default:
      goto code_r0x00014009e907;
    case 0x24:
    case 0x2a:
    case 0x2e:
    case 0x5b:
    case 0x5c:
    case 0x5e:
    case 0x7c:
      goto code_r0x00014009aee5;
    case 0x28:
    case 0x29:
    case 0x2b:
    case 0x3f:
    case 0x7b:
    case 0x7d:
      uVar57 = uVar39 & 0x800000;
    }
    if (uVar57 == 0) goto code_r0x00014009e907;
  }
  else if ((uVar15 - 0x44 < 0x34) &&
          ((0x8800180088001U >> ((ulonglong)(uVar15 - 0x44) & 0x3f) & 1) != 0))
  goto code_r0x00014009e907;
code_r0x00014009aee5:
  *(uint *)*local_b0 = uVar15;
  if (pauVar22 == param_4) {
code_r0x00014009afa9:
    param_4 = unaff_RSI;
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    goto code_r0x00014009b230;
  }
  if ((((*pauVar22)[0] == '\\') &&
      (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1), pauVar56 != param_4)) &&
     ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar56 & 0xfe) == 0x28)) ||
      (((uVar39 & 0x10) == 0 && (((*pauVar56)[0] == '}' || ((*pauVar56)[0] == '{')))))))) {
    pauVar22 = pauVar56;
  }
  pauVar56 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
  *(undefined1 (**) [16])*local_98 = pauVar56;
  if (pauVar56 == param_4) goto code_r0x00014009afa9;
  cVar14 = (*pauVar56)[0];
  uVar45 = (uint)cVar14;
  auVar71 = ZEXT1664(auVar71._0_16_);
  auVar72 = ZEXT1664(auVar72._0_16_);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
    if ((char)local_b8 != '\0') {
code_r0x0001400981f4:
      *(uint *)*local_78 = 0x7c;
    }
    break;
  case (undefined1 (*) [16])0x1a:
    if ((((ulonglong)local_90 & 0x2000000) != 0) &&
       (pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2), pauVar22 != param_4)) {
      cVar14 = (*pauVar22)[0];
joined_r0x00014009b1b5:
      if (cVar14 != '\n') goto code_r0x00014009b221;
    }
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    uVar39 = (ulonglong)local_90 & 8;
    goto joined_r0x00014009aff0;
  case (undefined1 (*) [16])0x20:
    if (((ulonglong)local_90 & 0x4000000) == 0) break;
    switch(*(uint *)((longlong)*local_a8 + 8)) {
    case 2:
      pauVar22 = local_a8;
code_r0x000140098492:
      uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)pauVar22[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014009b221;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014009b221;
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
    uVar39 = (ulonglong)local_90 & 1;
joined_r0x00014009aff0:
    if (uVar39 == 0) {
code_r0x00014009b221:
      *(uint *)*local_78 = 0;
    }
    break;
  case (undefined1 (*) [16])0x52:
    pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 2);
    if (pauVar22 != param_4) {
      if ((((ulonglong)local_90 & 8) != 0) ||
         (uVar15 = (uint)(byte)(*pauVar22)[0], ((*pauVar22)[0] & 0xfe) != 0x28)) {
        if (((ulonglong)local_90 & 0x10) != 0) break;
        uVar15 = (uint)(byte)(*pauVar22)[0];
        if (uVar15 != 0x7d) {
code_r0x000140098384:
          if (uVar15 != 0x7b) break;
        }
      }
code_r0x00014009838d:
      *(char *)local_88 = (char)uVar15;
      *(uint *)*local_78 = uVar15;
    }
    break;
  case (undefined1 (*) [16])0x54:
    if (((ulonglong)local_90 & 0x2000000) != 0) {
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        pauVar22 = local_a8;
code_r0x000140098b84:
        uVar15 = *(uint *)(**(undefined1 (**) [16])((longlong)pauVar22[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x00014009b221;
        break;
      default:
        goto code_r0x00014009b221;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
    uVar39 = (ulonglong)local_90 & 0x10;
    goto joined_r0x00014009b17e;
  case (undefined1 (*) [16])0x72:
    uVar39 = (ulonglong)local_90 & 2;
joined_r0x00014009b17e:
    if (uVar39 != 0) break;
    goto code_r0x00014009b221;
  }
  goto code_r0x00014009b230;
code_r0x000140098ece:
  if ((int)ppuVar55 != 0) goto code_r0x0001400a1917;
  goto code_r0x00014009b23f;
code_r0x00014009d01d:
  do {
    cVar14 = (char)unaff_RSI;
    iVar58 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar58 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar58 - 0x57;
    }
    else {
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar58 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)pcVar43))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (int)pcVar43 * 0x10;
    pcVar43 = (char *)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar18 == pauVar22) {
code_r0x00014009cff0:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
      ppuVar55 = (undefined **)pauVar22;
      goto code_r0x00014009d00d;
    }
    if ((((*pauVar18)[0] == '\\') &&
        (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar56 != pauVar22)) &&
       ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar56 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 && (((*pauVar56)[0] == '}' || ((*pauVar56)[0] == '{')))))))) {
      pauVar18 = pauVar56;
    }
    ppuVar55 = (undefined **)((longlong)*pauVar18 + 1);
    *(undefined ***)*local_98 = ppuVar55;
    if ((undefined1 (*) [16])ppuVar55 == pauVar22) goto code_r0x00014009cff0;
    bVar10 = (*(undefined1 (*) [16])ppuVar55)[0];
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_a8 & 0xffffffff;
      pauVar26 = pauVar22;
      goto code_r0x00014009d00d;
    }
    uVar39 = (ulonglong)local_a8 & 0xffffffff;
    pauVar26 = pauVar22;
    switch(uVar45) {
    case 10:
      if ((char)local_c8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar22)) &&
         ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014009d2b1;
      break;
    case 0x28:
    case 0x29:
      uVar57 = (ulonglong)local_a8 & 8;
      goto joined_r0x00014009d14d;
    case 0x2a:
      if (((ulonglong)local_a8 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_b8 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014009d2b1;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009d2b1;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar57 = (ulonglong)local_a8 & 1;
joined_r0x00014009d14d:
      if (uVar57 == 0) {
code_r0x00014009d2b1:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if (pauVar18 != pauVar22) {
        if ((((ulonglong)local_a8 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009d1f8:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
        }
        else if (((ulonglong)local_a8 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009d1f8;
        }
      }
      break;
    case 0x5e:
      if (((ulonglong)local_a8 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_b8 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014009d2b1;
          break;
        default:
          goto code_r0x00014009d2b1;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar57 = (ulonglong)local_a8 & 0x10;
      goto joined_r0x00014009d16b;
    case 0x7c:
      uVar57 = (ulonglong)local_a8 & 2;
joined_r0x00014009d16b:
      if (uVar57 != 0) break;
      goto code_r0x00014009d2b1;
    }
code_r0x00014009d00d:
    bVar60 = !bVar62;
    pauVar18 = (undefined1 (*) [16])ppuVar55;
    bVar62 = true;
  } while (bVar60);
  goto code_r0x00014009e5b0;
code_r0x00014009cd09:
  do {
    cVar14 = (char)unaff_RSI;
    iVar16 = (int)cVar14;
    if ((byte)(cVar14 - 0x30U) < 10) {
      uVar15 = iVar16 - 0x30;
    }
    else if ((byte)(cVar14 + 0x9fU) < 6) {
      uVar15 = iVar16 - 0x57;
    }
    else {
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar14 + 0xbfU);
      if (5 < (byte)(cVar14 + 0xbfU)) goto code_r0x0001400a1917;
      uVar15 = iVar16 - 0x37;
    }
    if ((uVar15 == 0xffffffff) || ((int)((uVar15 ^ 0x7ffffff0) >> 4) < (int)pcVar43))
    goto code_r0x0001400a1917;
    uVar15 = uVar15 + (int)pcVar43 * 0x10;
    pcVar43 = (char *)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar18 == pauVar22) {
code_r0x00014009cce0:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
      ppuVar55 = (undefined **)pauVar22;
      goto code_r0x00014009ccfd;
    }
    if ((((*pauVar18)[0] == '\\') &&
        (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar56 != pauVar22)) &&
       ((((uVar39 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar56 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 && (((*pauVar56)[0] == '}' || ((*pauVar56)[0] == '{')))))))) {
      pauVar18 = pauVar56;
    }
    ppuVar55 = (undefined **)((longlong)*pauVar18 + 1);
    *(undefined ***)*local_98 = ppuVar55;
    if ((undefined1 (*) [16])ppuVar55 == pauVar22) goto code_r0x00014009cce0;
    bVar10 = (*(undefined1 (*) [16])ppuVar55)[0];
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar45 = (uint)(char)bVar10;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = uVar45;
    if (pvVar19 == (void *)0x0) {
      uVar15 = 0;
    }
    *(uint *)*local_78 = uVar15;
    *(byte *)local_88 = bVar10;
    if (0x73 < uVar45 - 10) {
      uVar39 = (ulonglong)local_a8 & 0xffffffff;
      pauVar26 = pauVar22;
      goto code_r0x00014009ccfd;
    }
    uVar39 = (ulonglong)local_a8 & 0xffffffff;
    pauVar26 = pauVar22;
    switch(uVar45) {
    case 10:
      if ((char)local_c8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar22)) &&
         ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014009cfa1;
      break;
    case 0x28:
    case 0x29:
      uVar57 = (ulonglong)local_a8 & 8;
      goto joined_r0x00014009ce3d;
    case 0x2a:
      if (((ulonglong)local_a8 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_b8 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x00014009cfa1;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009cfa1;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar57 = (ulonglong)local_a8 & 1;
joined_r0x00014009ce3d:
      if (uVar57 == 0) {
code_r0x00014009cfa1:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if (pauVar18 != pauVar22) {
        if ((((ulonglong)local_a8 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009cee8:
          *(char *)local_88 = (char)uVar15;
          *(uint *)*local_78 = uVar15;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
        }
        else if (((ulonglong)local_a8 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009cee8;
        }
      }
      break;
    case 0x5e:
      if (((ulonglong)local_a8 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_b8 + 8)) {
        case 2:
          uVar15 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
          if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0))
          goto code_r0x00014009cfa1;
          break;
        default:
          goto code_r0x00014009cfa1;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar57 = (ulonglong)local_a8 & 0x10;
      goto joined_r0x00014009ce5b;
    case 0x7c:
      uVar57 = (ulonglong)local_a8 & 2;
joined_r0x00014009ce5b:
      if (uVar57 != 0) break;
      goto code_r0x00014009cfa1;
    }
code_r0x00014009ccfd:
    iVar58 = iVar58 + 1;
    pauVar18 = (undefined1 (*) [16])ppuVar55;
  } while (iVar58 != 0);
  goto code_r0x00014009e5b0;
code_r0x00014009c761:
  do {
    if (((byte)uVar15 & 0xf8) != 0x30) {
      if ((int)unaff_RSI == 0) goto code_r0x00014009c6d4;
      break;
    }
    if ((int)(0x8000002f - uVar15 >> 3) < (int)pcVar43) goto code_r0x0001400a1917;
    uVar15 = (uVar15 + (int)pcVar43 * 8) - 0x30;
    pcVar43 = (char *)(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if ((undefined1 (*) [16])ppuVar55 == pauVar22) {
code_r0x00014009c730:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      ppuVar55 = (undefined **)pauVar22;
      uVar15 = 0xff;
      goto code_r0x00014009c750;
    }
    pauVar18 = (undefined1 (*) [16])ppuVar55;
    if ((((char)*(uint *)*(undefined1 (*) [16])ppuVar55 == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1),
        pauVar26 != pauVar22)) &&
       ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
        (((uVar39 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
      pauVar18 = pauVar26;
    }
    ppuVar55 = (undefined **)((longlong)*pauVar18 + 1);
    *(undefined ***)*local_98 = ppuVar55;
    pauVar26 = pauVar22;
    if ((undefined1 (*) [16])ppuVar55 == pauVar22) goto code_r0x00014009c730;
    bVar10 = (byte)*(uint *)*(undefined1 (*) [16])ppuVar55;
    uVar15 = (uint)bVar10;
    uVar46 = (uint)(char)bVar10;
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    uVar45 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar45 = 0;
    }
    *(uint *)*local_78 = uVar45;
    *(byte *)local_88 = bVar10;
    pauVar26 = (undefined1 (*) [16])ppuVar55;
    if (0x73 < uVar46 - 10) {
      uVar39 = (ulonglong)local_a8 & 0xffffffff;
      goto code_r0x00014009c750;
    }
    uVar39 = (ulonglong)local_a8 & 0xffffffff;
    switch(uVar46) {
    case 10:
      if ((char)local_c8 != '\0') {
        *(uint *)*local_78 = 0x7c;
      }
      break;
    case 0x24:
      if (((((ulonglong)local_a8 & 0x2000000) != 0) &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != pauVar22)) &&
         ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x00014009c9d3;
      break;
    case 0x28:
    case 0x29:
      uVar57 = (ulonglong)local_a8 & 8;
      goto joined_r0x00014009c873;
    case 0x2a:
      if (((ulonglong)local_a8 & 0x4000000) == 0) break;
      switch(*(uint *)((longlong)*local_b8 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
        if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x00014009c9d3;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x00014009c9d3;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar57 = (ulonglong)local_a8 & 1;
joined_r0x00014009c873:
      if (uVar57 == 0) {
code_r0x00014009c9d3:
        *(uint *)*local_78 = 0;
      }
      break;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if (pauVar18 != pauVar22) {
        if ((((ulonglong)local_a8 & 8) == 0) &&
           (bVar10 = (byte)*(uint *)*pauVar18, uVar45 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x00014009c91f:
          *(char *)local_88 = (char)uVar45;
          *(uint *)*local_78 = uVar45;
          uVar15 = uVar45;
        }
        else if (((ulonglong)local_a8 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*pauVar18;
          uVar45 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009c91f;
        }
      }
      break;
    case 0x5e:
      if (((ulonglong)local_a8 & 0x2000000) != 0) {
        switch(*(uint *)((longlong)*local_b8 + 8)) {
        case 2:
          uVar45 = *(uint *)(*(longlong *)((longlong)local_b8[1] + 8) + 8);
          if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0))
          goto code_r0x00014009c9d3;
          break;
        default:
          goto code_r0x00014009c9d3;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar57 = (ulonglong)local_a8 & 0x10;
      goto joined_r0x00014009c891;
    case 0x7c:
      uVar57 = (ulonglong)local_a8 & 2;
joined_r0x00014009c891:
      if (uVar57 != 0) break;
      goto code_r0x00014009c9d3;
    }
code_r0x00014009c750:
    uVar45 = (int)unaff_RSI + 1;
    unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar45;
  } while (uVar45 != 3);
  if ((int)pcVar43 == 0) goto code_r0x0001400a1917;
code_r0x00014009e5b0:
  pauVar22 = unaff_RSI;
  if (0xff < (uint)pcVar43) goto code_r0x0001400a1917;
code_r0x00014009e5bd:
  *(int *)*local_b0 = (int)(char)pcVar43;
  goto code_r0x00014009d43e;
code_r0x00014009c6d4:
  uVar15 = (uint)(char)uVar15;
  if ((uVar39 & 0x400000) == 0) {
    switch(uVar15) {
    case 0x22:
    case 0x2f:
      uVar57 = uVar39 & 0x1000000;
      break;
    default:
      goto code_r0x00014009e835;
    case 0x24:
    case 0x2a:
    case 0x2e:
    case 0x5b:
    case 0x5c:
    case 0x5e:
    case 0x7c:
      goto code_r0x00014009d372;
    case 0x28:
    case 0x29:
    case 0x2b:
    case 0x3f:
    case 0x7b:
    case 0x7d:
      uVar57 = uVar39 & 0x800000;
    }
    if (uVar57 == 0) goto code_r0x00014009e835;
  }
  else if ((uVar15 - 0x44 < 0x34) &&
          ((0x8800180088001U >> ((ulonglong)(uVar15 - 0x44) & 0x3f) & 1) != 0))
  goto code_r0x00014009e835;
code_r0x00014009d372:
  *(uint *)*local_b0 = uVar15;
  if (pauVar26 == pauVar22) goto code_r0x00014009d427;
  if ((((char)*(uint *)*pauVar26 == '\\') &&
      (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != pauVar22)) &&
     ((((uVar39 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
      (((uVar39 & 0x10) == 0 &&
       ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
    pauVar26 = pauVar18;
  }
  pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
  *(undefined1 (**) [16])*local_98 = pauVar18;
  if (pauVar18 == pauVar22) goto code_r0x00014009d427;
  cVar14 = (char)*(uint *)*pauVar18;
  uVar45 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  switch(uVar45) {
  case 10:
    if ((char)local_c8 == '\0') goto code_r0x00014009d43e;
    goto code_r0x00014009b889;
  default:
    goto code_r0x00014009d43e;
  case 0x24:
    if ((((ulonglong)local_a8 & 0x2000000) == 0) ||
       (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2), pauVar26 == pauVar22))
    goto code_r0x00014009d43e;
    cVar14 = (char)*(uint *)*pauVar26;
    goto joined_r0x00014009e010;
  case 0x28:
  case 0x29:
    uVar39 = (ulonglong)local_a8 & 8;
    break;
  case 0x2a:
    if (((ulonglong)local_a8 & 0x4000000) == 0) goto code_r0x00014009d43e;
    switch(*(uint *)((longlong)*local_b8 + 8)) {
    case 2:
      pauVar18 = local_b8;
      goto code_r0x00014009b960;
    default:
      goto code_r0x00014009d43e;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014009ca7e;
    }
  case 0x2b:
  case 0x3f:
    uVar39 = (ulonglong)local_a8 & 1;
    break;
  case 0x5c:
    pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 2);
    if (pauVar26 == pauVar22) goto code_r0x00014009d43e;
    if ((((ulonglong)local_a8 & 8) != 0) ||
       (bVar10 = (byte)*(uint *)*pauVar26, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
      if (((ulonglong)local_a8 & 0x10) != 0) goto code_r0x00014009d43e;
      uVar15 = (uint)(byte)*(uint *)*pauVar26;
      goto code_r0x00014009b901;
    }
    goto code_r0x00014009b90f;
  case 0x5e:
    if (((ulonglong)local_a8 & 0x2000000) == 0) goto code_r0x00014009d43e;
    switch(*(uint *)((longlong)*local_b8 + 8)) {
    case 2:
      pauVar18 = local_b8;
      break;
    default:
      goto code_r0x00014009ca7e;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014009d43e;
    }
    goto code_r0x00014009b9ba;
  case 0x7b:
  case 0x7d:
    uVar39 = (ulonglong)local_a8 & 0x10;
    break;
  case 0x7c:
    uVar39 = (ulonglong)local_a8 & 2;
  }
  if (uVar39 == 0) goto code_r0x00014009ca7e;
  goto code_r0x00014009d43e;
code_r0x00014009c2e0:
  pauVar22 = unaff_RSI;
  if (uVar45 != 0) goto code_r0x0001400a1917;
  goto code_r0x00014009d43e;
code_r0x0001400a1917:
  std::_Xregex_error(2);
LAB_1400a1924:
  uVar45 = (uint)ppuVar55;
  *(uint *)*local_78 = 0xffffffff;
  *(undefined1 *)local_88 = 0xff;
  std::_Xregex_error(7);
code_r0x0001400a1948:
  std::_Xregex_error(10);
code_r0x0001400a1955:
  std::_Xregex_error(5);
code_r0x0001400a1962:
  *(uint *)*local_78 = 0xffffffff;
  *(undefined1 *)local_88 = 0xff;
  std::_Xregex_error(local_ec);
  unaff_RBX = pauVar26;
code_r0x0001400a1984:
  if ((((*unaff_RSI)[0] == '\\') &&
      (pauVar26 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])pcVar43 + 2),
      pauVar26 != param_4)) &&
     ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
      (((*(uint *)*local_80 & 0x10) == 0 &&
       ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
    unaff_RSI = pauVar26;
  }
  pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
  *(undefined1 (**) [16])*local_98 = pauVar26;
  local_e8 = pauVar26;
  if (pauVar26 != param_4) goto LAB_1400a1a29;
  *(uint *)*local_78 = 0xffffffff;
  *(undefined1 *)local_88 = 0xff;
  uVar39 = 0xffffffff;
  goto LAB_1400a1f04;
code_r0x00014009e835:
  uVar15 = *(uint *)*local_b0;
  pauVar18 = param_4;
code_r0x00014009e83b:
  uVar39 = (ulonglong)uVar15;
  if ((*(uint *)local_98[5] & 0x100) != 0) {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar39);
    uVar39 = (ulonglong)uVar15;
  }
  pauVar22 = *(undefined1 (**) [16])*local_a0;
  pauVar31 = *(undefined1 (**) [32])(pauVar22[2] + 8);
  if (pauVar31 == (undefined1 (*) [32])0x0) {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar31 = operator_new(0x20);
    *pauVar31 = ZEXT1232(ZEXT812(0));
    *(undefined1 (**) [32])(pauVar22[2] + 8) = pauVar31;
  }
  unaff_RDI = (undefined1 (*) [16])(uVar39 & 0xffffffffffffff07);
  pbVar41 = (byte *)((longlong)*pauVar31 + ((uVar39 & 0xff) >> 3));
  *pbVar41 = *pbVar41 | '\x01' << (sbyte)unaff_RDI;
  uVar39 = CONCAT71((int7)((ulonglong)pauVar26 >> 8),0x2d);
  if ((*(uint *)local_98[5] & 0x100) != 0) {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,0x2d);
    uVar39 = (ulonglong)uVar15;
  }
  unaff_RSI = *(undefined1 (**) [16])*local_a0;
  pauVar31 = *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8);
  if (pauVar31 == (undefined1 (*) [32])0x0) {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar31 = operator_new(0x20);
    *pauVar31 = ZEXT1232(ZEXT812(0));
    *(undefined1 (**) [32])((longlong)unaff_RSI[2] + 8) = pauVar31;
  }
  pauVar26 = (undefined1 (*) [16])(uVar39 & 0xffffffffffffff07);
  pbVar41 = (byte *)((longlong)*pauVar31 + ((uVar39 & 0xff) >> 3));
  *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
  param_4 = pauVar18;
code_r0x00014009e907:
  if (*(uint *)*local_78 != 0x5d) goto code_r0x0001400a19fa;
  unaff_RSI = *(undefined1 (**) [16])*local_98;
  pauVar18 = *(undefined1 (**) [16])local_98[1];
  if (unaff_RSI != pauVar18) {
    if ((((char)*(uint *)*unaff_RSI == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), pauVar26 != pauVar18)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*(uint *)*pauVar26 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 &&
         ((cVar14 = (char)*(uint *)*pauVar26, cVar14 == '}' || (cVar14 == '{')))))))) {
      unaff_RSI = pauVar26;
    }
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RSI;
  }
  if (unaff_RSI == pauVar18) {
LAB_140094880:
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    goto LAB_140094897;
  }
  cVar14 = (char)*(uint *)*unaff_RSI;
  uVar45 = (uint)cVar14;
  pauVar22 = (undefined1 (*) [16])0x0;
  auVar71 = ZEXT1664(auVar71._0_16_);
  auVar72 = ZEXT1664(auVar72._0_16_);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  unaff_RDI = (undefined1 (*) [16])(ulonglong)(uVar45 - 10);
  switch(unaff_RDI) {
  case (undefined1 (*) [16])0x0:
code_r0x00014009ea51:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
code_r0x00014009ea6e:
      *(uint *)*local_78 = 0x7c;
      goto LAB_140094897;
    }
    break;
  default:
    goto LAB_1400a00b9;
  case (undefined1 (*) [16])0x1a:
code_r0x00014009ea26:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1), unaff_RSI != pauVar18)) &&
       ((char)*(uint *)*unaff_RSI != '\n')) goto code_r0x00014009f5a4;
    break;
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
code_r0x00014009e9d2:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x00014009e9f1;
  case (undefined1 (*) [16])0x20:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
code_r0x00014009eb12:
      lVar29 = *(longlong *)(pauVar26[1] + 8);
code_r0x00014009eb16:
      if ((*(uint *)(lVar29 + 8) < 0x15) && ((0x102100U >> (*(uint *)(lVar29 + 8) & 0x1f) & 1) != 0)
         ) goto code_r0x00014009f5a4;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x00014009f5a4;
    }
    break;
  case (undefined1 (*) [16])0x21:
  case (undefined1 (*) [16])0x35:
code_r0x00014009e9e7:
    bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x00014009e9f1:
    if (bVar10 == 0) {
code_r0x00014009f5a4:
      *(uint *)*local_78 = 0;
      goto LAB_140094897;
    }
    break;
  case (undefined1 (*) [16])0x52:
code_r0x00014009ea80:
    unaff_RSI = (undefined1 (*) [16])((longlong)*unaff_RSI + 1);
    if (unaff_RSI != pauVar18) {
code_r0x00014009ea8c:
      if (((*(uint *)*local_80 & 8) != 0) ||
         (bVar10 = (byte)*(uint *)*unaff_RSI, uVar15 = (uint)bVar10, (bVar10 & 0xfe) != 0x28)) {
        if ((*(uint *)*local_80 & 0x10) == 0) {
          bVar10 = (byte)*(uint *)*unaff_RSI;
          uVar15 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x00014009eac1;
        }
        break;
      }
code_r0x00014009eac1:
      *(char *)local_88 = (char)uVar15;
      *(uint *)*local_78 = uVar15;
    }
    goto LAB_1400a00b9;
  case (undefined1 (*) [16])0x54:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      switch(*(undefined4 *)(*pauVar26 + 8)) {
      case 2:
code_r0x00014009eb6c:
        lVar29 = *(longlong *)(pauVar26[1] + 8);
code_r0x00014009eb70:
        if ((0x14 < *(uint *)(lVar29 + 8)) ||
           ((0x102100U >> (*(uint *)(lVar29 + 8) & 0x1f) & 1) == 0)) goto code_r0x00014009f5a4;
        break;
      default:
        goto code_r0x00014009f5a4;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case (undefined1 (*) [16])0x71:
  case (undefined1 (*) [16])0x73:
code_r0x00014009e9fc:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x00014009ea1b;
  case (undefined1 (*) [16])0x72:
code_r0x00014009ea11:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x00014009ea1b:
    if (bVar10 != 0) break;
    goto code_r0x00014009f5a4;
  }
code_r0x0001400a00b0:
  uVar15 = *(uint *)*local_78;
LAB_1400a00b9:
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  pauVar18 = (undefined1 (*) [16])0x0;
  pauVar26 = (undefined1 (*) [16])0x0;
  if ((int)uVar15 < 0x3f) {
    pauVar26 = pauVar18;
    if (uVar15 != 0x2a) {
      if (uVar15 != 0x2b) goto LAB_140094897;
      pauVar26 = (undefined1 (*) [16])0x1;
    }
    goto LAB_1400a0bde;
  }
  if (uVar15 == 0x3f) {
    unaff_RDI = (undefined1 (*) [16])0x1;
    goto LAB_1400a0be3;
  }
  if (uVar15 != 0x7b) goto LAB_140094897;
  pauVar56 = *(undefined1 (**) [16])*local_98;
  pauVar37 = *(undefined1 (**) [16])local_98[1];
  if (pauVar56 != pauVar37) {
    if ((((*pauVar56)[0] == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 1), pauVar18 != pauVar37)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))
        ))) {
      pauVar56 = pauVar18;
    }
    pauVar56 = (undefined1 (*) [16])((longlong)*pauVar56 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar56;
  }
  if (pauVar56 == pauVar37) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    unaff_RSI = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xff);
    goto LAB_1400a0386;
  }
  bVar10 = (*pauVar56)[0];
  unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
  uVar45 = (uint)(char)bVar10;
  auVar71 = ZEXT1664(auVar69);
  auVar72 = ZEXT1664(auVar70);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  switch(uVar45) {
  case 10:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
    }
    break;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 1), pauVar18 != pauVar37)) &&
       ((char)*(uint *)*pauVar18 != '\n')) goto code_r0x0001400a0379;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x0001400a01f6;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x0001400a0379;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400a0379;
    }
    break;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x0001400a01f6:
    if (bVar10 == 0) {
code_r0x0001400a0379:
      *(uint *)*local_78 = 0;
    }
    break;
  case 0x5c:
    pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 1);
    if (pauVar18 != pauVar37) {
      if (((*(uint *)*local_80 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*pauVar18, uVar15 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400a02cd:
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
        unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar15;
      }
      else if ((*(uint *)*local_80 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*pauVar18;
        uVar15 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a02cd;
      }
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x0001400a0379;
        break;
      default:
        goto code_r0x0001400a0379;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x0001400a0220;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x0001400a0220:
    if (bVar10 != 0) break;
    goto code_r0x0001400a0379;
  }
LAB_1400a0386:
  *(uint *)*local_b0 = 0;
  ppuVar55 = (undefined **)pauVar56;
  if ((byte)((char)unaff_RSI - 0x3aU) < 0xf6) goto LAB_1400a1abd;
  uVar15 = *(uint *)*local_80;
  local_d8 = *(undefined1 (**) [16])*local_a0;
  local_e8 = (undefined1 (*) [16])CONCAT71(local_e8._1_7_,(byte)uVar15 >> 2 & *local_c0 == 0);
  local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,uVar15);
  auVar66._4_4_ = uVar15;
  auVar66._0_4_ = uVar15;
  auVar66._8_4_ = uVar15;
  auVar66._12_4_ = uVar15;
  auVar69 = vpand_avx(auVar66,auVar71._0_16_);
  auVar69 = vpcmpeqd_avx(auVar69,auVar72._0_16_);
  local_dc = vmovmskps_avx(auVar69);
  bVar10 = (byte)local_dc;
  local_ec = CONCAT31(local_ec._1_3_,bVar10 >> 3);
  local_b8 = (undefined1 (*) [16])CONCAT71(local_b8._1_7_,(bVar10 & 4) >> 2);
  local_c8 = (undefined1 (*) [16])CONCAT71(local_c8._1_7_,(bVar10 & 2) >> 1);
  pauVar26 = (undefined1 (*) [16])0x0;
  pcVar43 = (char *)0x80000002;
  do {
    uVar15 = (uint)unaff_RSI & 0xff;
    ppuVar55 = (undefined **)pauVar56;
    if ((int)((0x8000002f - uVar15) / 10) < (int)pauVar26) goto LAB_1400a1abd;
    uVar15 = (uVar15 + (int)pauVar26 * 10) - 0x30;
    pauVar26 = (undefined1 (*) [16])(ulonglong)uVar15;
    *(uint *)*local_b0 = uVar15;
    if (pauVar56 == pauVar37) goto LAB_1400a1924;
    pauVar28 = pauVar56;
    if ((((*pauVar56)[0] == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 1), pauVar18 != pauVar37)) &&
       (((((ulonglong)local_90 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        ((((ulonglong)local_90 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{'))))
        )))) {
      pauVar28 = pauVar18;
    }
    pauVar56 = (undefined1 (*) [16])((longlong)*pauVar28 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar56;
    ppuVar55 = (undefined **)pauVar28;
    if (pauVar56 == pauVar37) goto LAB_1400a1924;
    bVar10 = (*pauVar56)[0];
    unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
    uVar46 = (uint)(char)bVar10;
    pauVar22 = (undefined1 (*) [16])0x0;
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
    auVar70 = auVar72._0_16_;
    auVar69 = auVar71._0_16_;
    uVar45 = uVar46;
    if (pvVar19 == (void *)0x0) {
      uVar45 = 0;
    }
    *(uint *)*local_78 = uVar45;
    *(byte *)local_88 = bVar10;
    pauVar18 = pauVar28;
    switch(uVar46) {
    case 10:
      if ((char)local_e8 != '\0') {
        *(uint *)*local_78 = 0x7c;
        uVar45 = 0x7c;
      }
      break;
    case 0x24:
      if ((((char)local_c8 == '\0') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar28 + 2), pauVar18 != pauVar37)) &&
         ((*pauVar18)[0] != '\n')) goto code_r0x0001400a0680;
      break;
    case 0x28:
    case 0x29:
      uVar39 = (ulonglong)local_90 & 8;
      goto joined_r0x0001400a052b;
    case 0x2a:
      if ((local_dc & 1) != 0) break;
      switch(*(undefined4 *)(*local_d8 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
        if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0)) goto code_r0x0001400a0680;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400a0680;
      }
      break;
    case 0x2b:
    case 0x3f:
      uVar12 = (char)local_b8;
      goto joined_r0x0001400a053a;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar28 + 2);
      if (pauVar18 != pauVar37) {
        if ((((ulonglong)local_90 & 8) == 0) &&
           (uVar46 = (uint)(byte)(*pauVar18)[0], ((*pauVar18)[0] & 0xfe) == 0x28)) {
code_r0x0001400a05d2:
          *(char *)local_88 = (char)uVar46;
          *(uint *)*local_78 = uVar46;
          unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar46;
          uVar45 = uVar46;
        }
        else if (((ulonglong)local_90 & 0x10) == 0) {
          bVar10 = (*pauVar18)[0];
          uVar46 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a05d2;
        }
      }
      break;
    case 0x5e:
      if ((char)local_c8 == '\0') {
        switch(*(undefined4 *)(*local_d8 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
          if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0))
          goto code_r0x0001400a0680;
          break;
        default:
          goto code_r0x0001400a0680;
        case 8:
        case 0xd:
        case 0x14:
          break;
        }
      }
      break;
    case 0x7b:
    case 0x7d:
      uVar39 = (ulonglong)local_90 & 0x10;
joined_r0x0001400a052b:
      if (uVar39 == 0) {
code_r0x0001400a0680:
        *(uint *)*local_78 = 0;
        uVar45 = 0;
      }
      break;
    case 0x7c:
      uVar12 = (undefined1)local_ec;
joined_r0x0001400a053a:
      if (uVar12 == '\0') break;
      goto code_r0x0001400a0680;
    }
  } while (((int)pcVar43 != 0) &&
          (pcVar43 = (char *)(ulonglong)((int)pcVar43 + 1), pauVar18 = pauVar56,
          (byte)((char)unaff_RSI - 0x30U) < 10));
  unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar15;
  ppuVar55 = (undefined **)pauVar18;
  if (uVar45 != 0x2c) goto LAB_1400a0bc7;
  if (pauVar56 == pauVar37) goto LAB_1400a1a9c;
  if ((((*pauVar56)[0] == '\\') &&
      (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar28 + 2), pauVar18 != pauVar37)) &&
     (((((ulonglong)local_90 & 8) == 0 &&
       (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
      ((((ulonglong)local_90 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{'))))))
     )) {
    pauVar56 = pauVar18;
  }
  pauVar18 = (undefined1 (*) [16])((longlong)*pauVar56 + 1);
  *(undefined1 (**) [16])*local_98 = pauVar18;
  if (pauVar18 == pauVar37) goto LAB_1400a1a9c;
  bVar10 = (byte)*(uint *)*pauVar18;
  unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
  uVar46 = (uint)(char)bVar10;
  pauVar22 = (undefined1 (*) [16])0x0;
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar45 = uVar46;
  if (pvVar19 == (void *)0x0) {
    uVar45 = 0;
  }
  *(uint *)*local_78 = uVar45;
  *(byte *)local_88 = bVar10;
  ppuVar55 = (undefined **)pauVar18;
  switch(uVar46) {
  case 10:
    uVar46 = 0x7c;
    if ((char)local_e8 != '\0') goto code_r0x0001400a08e2;
    break;
  case 0x24:
    if ((((char)local_c8 == '\0') &&
        (pauVar56 = (undefined1 (*) [16])((longlong)*pauVar56 + 2), pauVar56 != pauVar37)) &&
       (uVar46 = 0, (char)*(uint *)*pauVar56 != '\n')) goto code_r0x0001400a08e2;
    break;
  case 0x28:
  case 0x29:
    uVar39 = (ulonglong)local_90 & 8;
    goto joined_r0x0001400a0794;
  case 0x2a:
    if ((local_dc & 1) != 0) break;
    uVar46 = 0;
    pauVar22 = (undefined1 (*) [16])&UNK_1400b9c94;
    switch(*(undefined4 *)(*local_d8 + 8)) {
    case 2:
      uVar47 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
      if ((uVar47 < 0x15) &&
         (pauVar22 = (undefined1 (*) [16])0x102100, (0x102100U >> (uVar47 & 0x1f) & 1) != 0))
      goto code_r0x0001400a08e2;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400a08e2;
    }
    break;
  case 0x2b:
  case 0x3f:
    uVar12 = (char)local_b8;
    goto joined_r0x0001400a07a5;
  case 0x5c:
    pauVar56 = (undefined1 (*) [16])((longlong)*pauVar56 + 2);
    if (pauVar56 != pauVar37) {
      if ((((ulonglong)local_90 & 8) == 0) &&
         (bVar10 = (byte)*(uint *)*pauVar56, uVar46 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400a082f:
        *(char *)local_88 = (char)uVar46;
        *(uint *)*local_78 = uVar46;
        unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar46;
        uVar45 = uVar46;
      }
      else if (((ulonglong)local_90 & 0x10) == 0) {
        bVar10 = (byte)*(uint *)*pauVar56;
        uVar46 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a082f;
      }
    }
    break;
  case 0x5e:
    if ((char)local_c8 == '\0') {
      uVar46 = 0;
      pauVar22 = (undefined1 (*) [16])&UNK_1400b9c48;
      switch(*(undefined4 *)(*local_d8 + 8)) {
      case 2:
        uVar47 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
        if ((0x14 < uVar47) ||
           (pauVar22 = (undefined1 (*) [16])0x102100, (0x102100U >> (uVar47 & 0x1f) & 1) == 0))
        goto code_r0x0001400a08e2;
        break;
      default:
        goto code_r0x0001400a08e2;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    uVar39 = (ulonglong)local_90 & 0x10;
joined_r0x0001400a0794:
    uVar46 = 0;
    if (uVar39 != 0) break;
code_r0x0001400a08e2:
    *(uint *)*local_78 = uVar46;
    goto LAB_1400a08eb;
  case 0x7c:
    uVar12 = (undefined1)local_ec;
joined_r0x0001400a07a5:
    uVar46 = 0;
    if (uVar12 == '\0') break;
    goto code_r0x0001400a08e2;
  }
  if (uVar45 == 0x7d) {
LAB_1400a0bde:
    unaff_RDI = (undefined1 (*) [16])0xffffffff;
    pauVar18 = pauVar26;
  }
  else {
LAB_1400a08eb:
    *(uint *)*local_b0 = 0;
    if ((byte)((char)unaff_RSI - 0x3aU) < 0xf6) goto LAB_1400a1abd;
    unaff_RDI = (undefined1 (*) [16])0x0;
    pauVar22 = (undefined1 (*) [16])0x80000002;
    do {
      ppuVar55 = (undefined **)pauVar18;
      if ((int)((0x8000002fU - (int)unaff_RSI) / 10) < (int)unaff_RDI) goto LAB_1400a1abd;
      uVar45 = ((int)unaff_RSI + (int)unaff_RDI * 10) - 0x30;
      unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar45;
      *(uint *)*local_b0 = uVar45;
      if (pauVar18 == pauVar37) goto LAB_1400a1924;
      if ((((char)*(uint *)*pauVar18 == '\\') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 1), pauVar18 != pauVar37)) &&
         (((((ulonglong)local_90 & 8) == 0 && ((*(uint *)*pauVar18 & 0xfe) == 0x28)) ||
          ((((ulonglong)local_90 & 0x10) == 0 &&
           ((cVar14 = (char)*(uint *)*pauVar18, cVar14 == '}' || (cVar14 == '{')))))))) {
        ppuVar55 = (undefined **)pauVar18;
      }
      pauVar18 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 1);
      *(undefined1 (**) [16])*local_98 = pauVar18;
      pcVar43 = (char *)pauVar18;
      if (pauVar18 == pauVar37) goto LAB_1400a1924;
      local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,(int)pauVar22);
      bVar10 = (byte)*(uint *)*pauVar18;
      unaff_RSI = (undefined1 (*) [16])(ulonglong)bVar10;
      uVar46 = (uint)(char)bVar10;
      pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
      auVar70 = auVar72._0_16_;
      auVar69 = auVar71._0_16_;
      uVar45 = uVar46;
      if (pvVar19 == (void *)0x0) {
        uVar45 = 0;
      }
      *(uint *)*local_78 = uVar45;
      *(byte *)local_88 = bVar10;
      switch(uVar46) {
      case 10:
        if ((char)local_e8 != '\0') {
          *(uint *)*local_78 = 0x7c;
          uVar45 = 0x7c;
        }
        break;
      case 0x24:
        if ((((char)local_c8 == '\0') &&
            (pauVar22 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 2),
            pauVar22 != pauVar37)) && ((char)*(uint *)*pauVar22 != '\n')) goto code_r0x0001400a0b90;
        break;
      case 0x28:
      case 0x29:
        uVar39 = (ulonglong)local_90 & 8;
        goto joined_r0x0001400a0a44;
      case 0x2a:
        if ((local_dc & 1) != 0) break;
        switch(*(undefined4 *)(*local_d8 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
          if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0))
          goto code_r0x0001400a0b90;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x0001400a0b90;
        }
        break;
      case 0x2b:
      case 0x3f:
        uVar12 = (char)local_b8;
        goto joined_r0x0001400a0a53;
      case 0x5c:
        pauVar22 = (undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 2);
        if (pauVar22 != pauVar37) {
          if ((((ulonglong)local_90 & 8) == 0) &&
             (bVar10 = (byte)*(uint *)*pauVar22, uVar46 = (uint)bVar10, (bVar10 & 0xfe) == 0x28)) {
code_r0x0001400a0ae8:
            *(char *)local_88 = (char)uVar46;
            *(uint *)*local_78 = uVar46;
            unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar46;
            uVar45 = uVar46;
          }
          else if (((ulonglong)local_90 & 0x10) == 0) {
            bVar10 = (byte)*(uint *)*pauVar22;
            uVar46 = (uint)bVar10;
            if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a0ae8;
          }
        }
        break;
      case 0x5e:
        if ((char)local_c8 == '\0') {
          switch(*(undefined4 *)(*local_d8 + 8)) {
          case 2:
            uVar46 = *(uint *)(*(longlong *)(local_d8[1] + 8) + 8);
            if ((0x14 < uVar46) || ((0x102100U >> (uVar46 & 0x1f) & 1) == 0))
            goto code_r0x0001400a0b90;
            break;
          default:
            goto code_r0x0001400a0b90;
          case 8:
          case 0xd:
          case 0x14:
            break;
          }
        }
        break;
      case 0x7b:
      case 0x7d:
        uVar39 = (ulonglong)local_90 & 0x10;
joined_r0x0001400a0a44:
        if (uVar39 == 0) {
code_r0x0001400a0b90:
          *(uint *)*local_78 = 0;
          uVar45 = 0;
        }
        break;
      case 0x7c:
        uVar12 = (undefined1)local_ec;
joined_r0x0001400a0a53:
        if (uVar12 == '\0') break;
        goto code_r0x0001400a0b90;
      }
      pauVar22 = (undefined1 (*) [16])((ulonglong)local_a8 & 0xffffffff);
      ppuVar55 = (undefined **)pauVar26;
    } while (((uint)local_a8 != 0) &&
            (pauVar22 = (undefined1 (*) [16])(ulonglong)((uint)local_a8 + 1),
            ppuVar55 = (undefined **)pauVar18, (byte)((char)unaff_RSI - 0x30U) < 10));
LAB_1400a0bc7:
    if (uVar45 != 0x7d) goto LAB_1400a1abd;
    if ((int)unaff_RDI == -1) goto LAB_1400a0bde;
    pauVar18 = pauVar26;
    if ((int)unaff_RDI < (int)uVar15) goto LAB_1400a1abd;
  }
LAB_1400a0be3:
  puVar36 = (uint *)(*(longlong *)((longlong)local_98[4] + 8) + 0xc);
  *puVar36 = *puVar36 | 4;
  pbVar41 = *(byte **)*local_98;
  pbVar4 = *(byte **)local_98[1];
  if (pbVar41 != pbVar4) {
    if (((*pbVar41 == 0x5c) && (pbVar2 = pbVar41 + 1, pbVar2 != pbVar4)) &&
       ((((*(uint *)*local_80 & 8) == 0 && ((*pbVar2 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && ((*pbVar2 == 0x7d || (*pbVar2 == 0x7b)))))))) {
      pbVar41 = pbVar2;
    }
    pbVar41 = pbVar41 + 1;
    *(byte **)*local_98 = pbVar41;
  }
  if (pbVar41 == pbVar4) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    uVar17 = (undefined4)CONCAT71((int7)((ulonglong)pauVar22 >> 8),1);
    goto LAB_1400a1100;
  }
  bVar10 = *pbVar41;
  uVar45 = (uint)(char)bVar10;
  puVar53 = (undefined *)0x0;
  auVar71 = ZEXT1664(auVar69);
  auVar72 = ZEXT1664(auVar70);
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar15 = uVar45;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  switch(uVar45) {
  case 10:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      uVar17 = (undefined4)CONCAT71((int7)((ulonglong)puVar53 >> 8),1);
      goto LAB_1400a1100;
    }
    break;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) && (pbVar41 + 1 != pbVar4)) && (pbVar41[1] != 10))
    goto code_r0x0001400a0e71;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x0001400a0d12;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    puVar53 = &UNK_1400ba164;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar45 < 0x15) && ((0x102100U >> (uVar45 & 0x1f) & 1) != 0)) goto code_r0x0001400a0e71;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400a0e71;
    }
    break;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x0001400a0d12;
  case 0x5c:
    pbVar2 = pbVar41 + 1;
    if (pbVar2 != pbVar4) {
      uVar45 = *(uint *)*local_80;
      puVar53 = (undefined *)(ulonglong)uVar45;
      if ((uVar45 & 8) == 0) {
        param_4 = (undefined1 (*) [16])((ulonglong)*pbVar2 & 0xfffffffffffffffe);
        uVar46 = (uint)*pbVar2;
        if ((char)param_4 != '(') goto code_r0x0001400a0da8;
code_r0x0001400a0dc3:
        uVar15 = uVar46;
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
      }
      else {
code_r0x0001400a0da8:
        if ((uVar45 & 0x10) == 0) {
          bVar10 = *pbVar2;
          uVar46 = (uint)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a0dc3;
        }
      }
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      puVar53 = &UNK_1400ba118;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar45 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar45) || ((0x102100U >> (uVar45 & 0x1f) & 1) == 0)) goto code_r0x0001400a0e71;
        break;
      default:
        goto code_r0x0001400a0e71;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x0001400a0d12;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x0001400a0d12:
    if (bVar10 != 0) break;
code_r0x0001400a0e71:
    *(uint *)*local_78 = 0;
    uVar17 = (undefined4)CONCAT71((int7)((ulonglong)puVar53 >> 8),1);
    goto LAB_1400a1100;
  }
  uVar45 = *(uint *)*local_80;
  ppuVar55 = (undefined **)(ulonglong)uVar45;
  uVar17 = (undefined4)CONCAT71((int7)((ulonglong)puVar53 >> 8),1);
  if (((uVar45 & 0x400) == 0) || (uVar15 != 0x3f)) goto LAB_1400a1100;
  if (((*pbVar41 == 0x5c) && (pbVar2 = pbVar41 + 1, pbVar2 != pbVar4)) &&
     ((((uVar45 & 8) == 0 && ((*pbVar2 & 0xfe) == 0x28)) ||
      (((uVar45 & 0x10) == 0 && ((*pbVar2 == 0x7d || (*pbVar2 == 0x7b)))))))) {
    pbVar41 = pbVar2;
  }
  pbVar2 = pbVar41 + 1;
  *(byte **)*local_98 = pbVar2;
  if (pbVar2 == pbVar4) {
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    uVar17 = 0;
    goto LAB_1400a1100;
  }
  bVar10 = *pbVar2;
  uVar46 = (uint)(char)bVar10;
  pvVar19 = memchr(&DAT_140111e80,uVar46,0x17);
  auVar70 = auVar72._0_16_;
  auVar69 = auVar71._0_16_;
  uVar17 = 0;
  uVar15 = uVar46;
  if (pvVar19 == (void *)0x0) {
    uVar15 = 0;
  }
  *(uint *)*local_78 = uVar15;
  *(byte *)local_88 = bVar10;
  switch(uVar46) {
  case 10:
    uVar17 = 0;
    if (((uVar45 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      break;
    }
  default:
    goto LAB_1400a1100;
  case 0x24:
    if ((((uVar45 & 0x2000000) != 0) && (pbVar41 + 2 != pbVar4)) && (pbVar41[2] != 10))
    goto code_r0x0001400a10e9;
    break;
  case 0x28:
  case 0x29:
    uVar45 = uVar45 & 8;
    goto joined_r0x0001400a0f7f;
  case 0x2a:
    if ((uVar45 & 0x4000000) == 0) break;
    uVar17 = 0;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      uVar17 = 0;
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x0001400a10e9;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto code_r0x0001400a10e9;
    }
    goto LAB_1400a1100;
  case 0x2b:
  case 0x3f:
    uVar45 = uVar45 & 1;
joined_r0x0001400a0f7f:
    if (uVar45 == 0) {
code_r0x0001400a10e9:
      *(uint *)*local_78 = 0;
    }
    break;
  case 0x5c:
    pbVar41 = pbVar41 + 2;
    if (pbVar41 != pbVar4) {
      if (((uVar45 & 8) == 0) && (uVar15 = (uint)*pbVar41, (*pbVar41 & 0xfe) == 0x28)) {
code_r0x0001400a103a:
        *(char *)local_88 = (char)uVar15;
        *(uint *)*local_78 = uVar15;
      }
      else if ((uVar45 & 0x10) == 0) {
        bVar10 = *pbVar41;
        uVar15 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a103a;
      }
    }
    break;
  case 0x5e:
    if ((uVar45 & 0x2000000) != 0) {
      uVar17 = 0;
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if (uVar15 < 0x15) {
          uVar45 = 0x102100U >> (uVar15 & 0x1f) & 1;
          goto joined_r0x0001400a0f9d;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto LAB_1400a1100;
      }
      goto code_r0x0001400a10e9;
    }
    break;
  case 0x7b:
  case 0x7d:
    uVar45 = uVar45 & 0x10;
    goto joined_r0x0001400a0f9d;
  case 0x7c:
    uVar45 = uVar45 & 2;
joined_r0x0001400a0f9d:
    if (uVar45 != 0) break;
    goto code_r0x0001400a10e9;
  }
  uVar17 = 0;
LAB_1400a1100:
  local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,uVar17);
  pcVar43 = *(char **)*local_a0;
  uVar15 = *(uint *)((longlong)*(undefined1 (*) [16])pcVar43 + 8);
  if (uVar15 == 6) {
    unaff_RSI = (undefined1 (*) [16])pcVar43;
    if (*(uint *)((longlong)*(undefined1 (*) [16])((longlong)pcVar43 + 0x20) + 4) != 1) {
      lVar29 = *(longlong *)((longlong)*(undefined1 (*) [16])((longlong)pcVar43 + 0x20) + 8);
      uVar15 = *(uint *)((longlong)*(undefined1 (*) [16])((longlong)pcVar43 + 0x20) + 4) - 1;
      *(uint *)((longlong)*(undefined1 (*) [16])((longlong)pcVar43 + 0x20) + 4) = uVar15;
      uVar12 = *(undefined1 *)(lVar29 + (ulonglong)uVar15);
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      if ((*(int *)(*pauVar26 + 8) != 6) || (((*pauVar26)[0xc] & 4) != 0)) {
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        pauVar22 = operator_new(0x30);
        auVar69 = auVar71._0_16_;
        *(undefined4 *)((longlong)*pauVar22 + 8) = 6;
        *(undefined8 *)((longlong)*pauVar22 + 0xc) = 0;
        *(undefined4 *)(pauVar22[1] + 4) = 0;
        *(undefined ***)*pauVar22 = std::_Node_str<char>::vftable;
        auVar70 = auVar72._0_16_;
        pauVar22[2] = auVar70;
        *(undefined1 (**) [16])(pauVar22[1] + 8) = pauVar26;
        if (*(longlong *)pauVar26[1] != 0) {
          *(longlong *)pauVar22[1] = *(longlong *)pauVar26[1];
          *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar22;
          pauVar26 = *(undefined1 (**) [16])*local_a0;
        }
        *(undefined1 (**) [16])pauVar26[1] = pauVar22;
        *(undefined1 (**) [16])*local_a0 = pauVar22;
      }
      if ((*(uint *)local_98[5] & 0x100) == 0) {
        if ((*(uint *)local_98[5] & 0x800) != 0) {
          local_138[0] = uVar12;
          plVar3 = *(longlong **)**(undefined1 (**) [16])*local_d0;
          param_4 = (undefined1 (*) [16])(local_138 + 1);
          auVar71 = ZEXT1664(auVar69);
          auVar72 = ZEXT1664(auVar70);
          (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 (*) [16])local_110,&local_138);
          auVar70 = auVar72._0_16_;
          auVar69 = auVar71._0_16_;
          pauVar26 = (undefined1 (*) [16])local_110;
          if (0xf < uStack_f8) {
            pauVar26 = local_110[0];
          }
          if (lStack_100 != 1) {
            pauVar26 = &local_138;
          }
          uVar12 = (undefined1)*(uint *)*pauVar26;
          if (0xf < uStack_f8) {
            pauVar26 = local_110[0];
            if ((0xfff < uStack_f8 + 1) &&
               (pauVar26 = *(undefined1 (**) [16])((longlong)local_110[0][-1] + 8),
               0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pauVar26))))
            goto LAB_1400a3888;
            free(pauVar26);
            auVar70 = auVar72._0_16_;
            auVar69 = auVar71._0_16_;
          }
        }
      }
      else {
        plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        uVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar12);
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
      }
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      uVar15 = *(uint *)(pauVar26[2] + 4);
      if (uVar15 < *(uint *)pauVar26[2]) {
        pvVar19 = *(void **)(pauVar26[2] + 8);
      }
      else {
        auVar71 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar70);
        pvVar19 = realloc(*(void **)(pauVar26[2] + 8),(ulonglong)(uVar15 + 0x10));
        auVar70 = auVar72._0_16_;
        auVar69 = auVar71._0_16_;
        if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
        *(void **)(pauVar26[2] + 8) = pvVar19;
        *(uint *)pauVar26[2] = uVar15 + 0x10;
        uVar15 = *(uint *)(pauVar26[2] + 4);
      }
      *(uint *)(pauVar26[2] + 4) = uVar15 + 1;
      *(undefined1 *)((longlong)pvVar19 + (ulonglong)uVar15) = uVar12;
      pcVar43 = *(char **)*local_a0;
      uVar15 = *(uint *)((longlong)*(undefined1 (*) [16])pcVar43 + 8);
      goto LAB_1400a12ba;
    }
  }
  else {
LAB_1400a12ba:
    if ((uVar15 == 0xe) || (unaff_RSI = (undefined1 (*) [16])pcVar43, uVar15 == 9)) {
      unaff_RSI = *(undefined1 (**) [16])*(undefined1 (*) [16])((longlong)pcVar43 + 0x20);
    }
  }
  if (((int)unaff_RDI == 1) && ((int)pauVar18 == 0)) {
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar26 = operator_new(0x20);
    *(undefined4 *)((longlong)*pauVar26 + 8) = 0x11;
    *(undefined1 (*) [16])((longlong)*pauVar26 + 0xc) = auVar72._0_16_;
    *(undefined4 *)(pauVar26[1] + 0xc) = 0;
    *(undefined ***)*pauVar26 = std::_Node_endif::vftable;
    puVar23 = operator_new(0x30);
    *(undefined4 *)(puVar23 + 1) = 0x10;
    *(undefined1 (*) [16])((longlong)puVar23 + 0xc) = auVar72._0_16_;
    *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
    *puVar23 = std::_Node_if::vftable;
    puVar23[4] = pauVar26;
    puVar23[5] = 0;
    ppuVar55 = operator_new(0x30);
    *(uint *)((longlong)*(undefined1 (*) [16])ppuVar55 + 8) = 0x10;
    *(undefined1 (*) [16])((longlong)*(undefined1 (*) [16])ppuVar55 + 0xc) = auVar72._0_16_;
    *(uint *)((longlong)*(undefined1 (*) [16])((longlong)ppuVar55 + 0x10) + 0xc) = 0;
    *(undefined ***)*(undefined1 (*) [16])ppuVar55 = std::_Node_if::vftable;
    *(undefined1 (**) [16])*(undefined1 (*) [16])((longlong)ppuVar55 + 0x20) = pauVar26;
    *(uint *)((undefined1 *)((longlong)ppuVar55 + 0x20) + 8) = 0;
    *(uint *)((undefined1 *)((longlong)ppuVar55 + 0x20) + 0xc) = 0;
    unaff_RDI = operator_new(0x20);
    *(undefined ***)*unaff_RDI = std::_Node_base::vftable;
    *(uint *)((longlong)*unaff_RDI + 8) = 8;
    *(undefined1 (*) [16])((longlong)*unaff_RDI + 0xc) = auVar72._0_16_;
    *(uint *)((longlong)unaff_RDI[1] + 0xc) = 0;
    puVar30 = operator_new(0x28);
    puVar30[1] = 9;
    *puVar30 = std::_Node_end_group::vftable;
    puVar30[4] = unaff_RDI;
    *(undefined1 (**) [16])*(undefined1 (*) [16])((longlong)ppuVar55 + 0x10) = unaff_RDI;
    *(undefined ***)((longlong)unaff_RDI[1] + 8) = ppuVar55;
    *(undefined8 **)unaff_RDI[1] = puVar30;
    puVar30[3] = unaff_RDI;
    puVar30[2] = pauVar26;
    puVar23[5] = ppuVar55;
    *(char **)(pauVar26[1] + 8) = pcVar43;
    if (*(longlong *)*(undefined1 (*) [16])((longlong)pcVar43 + 0x10) != 0) {
      *(longlong *)pauVar26[1] = *(longlong *)*(undefined1 (*) [16])((longlong)pcVar43 + 0x10);
      *(undefined1 (**) [16])(*(longlong *)*(undefined1 (*) [16])((longlong)pcVar43 + 0x10) + 0x18)
           = pauVar26;
      pcVar43 = *(char **)*local_a0;
    }
    *(undefined1 (**) [16])*(undefined1 (*) [16])((longlong)pcVar43 + 0x10) = pauVar26;
    *(undefined1 (**) [16])*local_a0 = pauVar26;
    *(undefined8 **)(*(longlong *)((longlong)unaff_RSI[1] + 8) + 0x10) = puVar23;
    puVar23[3] = *(undefined8 *)((longlong)unaff_RSI[1] + 8);
    *(undefined8 **)((longlong)unaff_RSI[1] + 8) = puVar23;
    puVar23[2] = unaff_RSI;
    if ((byte)local_90 == '\0') {
      lVar29 = *(longlong *)*(undefined1 (*) [16])((longlong)ppuVar55 + 0x10);
      uVar5 = *(undefined8 *)((longlong)unaff_RSI[1] + 8);
      *(undefined8 *)((longlong)unaff_RSI[1] + 8) = *(undefined8 *)(lVar29 + 0x18);
      *(undefined8 *)(lVar29 + 0x18) = uVar5;
      uVar5 = puVar23[2];
      puVar23[2] = *(undefined8 *)*(undefined1 (*) [16])((longlong)ppuVar55 + 0x10);
      *(undefined8 *)*(undefined1 (*) [16])((longlong)ppuVar55 + 0x10) = uVar5;
    }
  }
  else {
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar22 = operator_new(0x28);
    *(undefined4 *)((longlong)*pauVar22 + 8) = 0x13;
    *(undefined1 (*) [16])((longlong)*pauVar22 + 0xc) = auVar72._0_16_;
    *(undefined4 *)(pauVar22[1] + 0xc) = 0;
    *(undefined ***)*pauVar22 = std::_Node_end_rep::vftable;
    *(undefined8 *)pauVar22[2] = 0;
    puVar23 = operator_new(0x38);
    iVar58 = *(int *)(*(longlong *)local_98[4] + 0x24);
    *(int *)(*(longlong *)local_98[4] + 0x24) = iVar58 + 1;
    *(undefined4 *)(puVar23 + 1) = 0x12;
    *(uint *)((longlong)puVar23 + 0xc) = (uint)(byte)local_90 * 2;
    *(undefined1 (*) [16])(puVar23 + 2) = auVar72._0_16_;
    *puVar23 = std::_Node_rep::vftable;
    *(int *)(puVar23 + 4) = (int)pauVar18;
    *(int *)((longlong)puVar23 + 0x24) = (int)unaff_RDI;
    puVar23[5] = pauVar22;
    *(int *)(puVar23 + 6) = iVar58;
    *(undefined4 *)((longlong)puVar23 + 0x34) = 0xffffffff;
    *(undefined8 **)pauVar22[2] = puVar23;
    pauVar26 = *(undefined1 (**) [16])((longlong)local_98[4] + 8);
    *(undefined1 (**) [16])(pauVar22[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar22[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar22;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar22;
    *(undefined1 (**) [16])*local_a0 = pauVar22;
    *(undefined8 **)(*(longlong *)((longlong)unaff_RSI[1] + 8) + 0x10) = puVar23;
    puVar23[3] = *(undefined8 *)((longlong)unaff_RSI[1] + 8);
    *(undefined8 **)((longlong)unaff_RSI[1] + 8) = puVar23;
    puVar23[2] = unaff_RSI;
    param_4 = local_98;
  }
LAB_140094897:
  uVar15 = *(uint *)*local_78;
  bVar62 = false;
  pauVar26 = pauVar18;
  goto LAB_1400948a2;
code_r0x0001400a19fa:
  std::_Xregex_error(4);
code_r0x0001400a1a07:
  *(uint *)*local_78 = 0;
code_r0x0001400a1a14:
  std::_Xregex_error(local_ec);
  unaff_RBX = pauVar26;
code_r0x0001400a1a1c:
  uVar45 = (uint)ppuVar55;
  pauVar26 = (undefined1 (*) [16])0x3;
  std::_Xregex_error(3);
LAB_1400a1a29:
  cVar14 = (char)*(uint *)*pauVar26;
  uVar15 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar15,0x17);
  uVar39 = 0;
  if (pvVar19 != (void *)0x0) {
    uVar39 = (ulonglong)uVar15;
  }
  *(uint *)*local_78 = (uint)uVar39;
  *(char *)local_88 = cVar14;
  param_4 = unaff_RBX;
  switch(uVar15) {
  case 10:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
      *(uint *)*local_78 = 0x7c;
      uVar39 = 0x7c;
    }
    break;
  case 0x24:
    if ((((*(uint *)*local_80 & 0x2000000) != 0) &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2), pauVar26 != unaff_RBX)) &&
       ((*pauVar26)[0] != '\n')) goto LAB_1400a1ef5;
    break;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x0001400a1afe;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) break;
    switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
    case 2:
      uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto LAB_1400a1ef5;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto LAB_1400a1ef5;
    }
    break;
  case 0x2b:
  case 0x3f:
    goto code_r0x0001400a1adf;
  case 0x5c:
    pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RSI + 2);
    if (pauVar26 != unaff_RBX) {
      if (((*(uint *)*local_80 & 8) == 0) &&
         (uVar57 = (ulonglong)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) == 0x28)) {
code_r0x0001400a2967:
        *(char *)local_88 = (char)uVar57;
        *(uint *)*local_78 = (uint)uVar57;
        uVar39 = uVar57;
      }
      else if ((*(uint *)*local_80 & 0x10) == 0) {
        bVar10 = (*pauVar26)[0];
        uVar57 = (ulonglong)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a2967;
      }
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto LAB_1400a1ef5;
        break;
      default:
        goto LAB_1400a1ef5;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
joined_r0x0001400a1afe:
    if (bVar10 != 0) break;
    goto LAB_1400a1ef5;
  case 0x7c:
    goto code_r0x0001400a1d1b;
  }
  goto LAB_1400a1f04;
joined_r0x00014009d630:
  if (uVar15 < uVar45) goto code_r0x000140097da6;
  iVar58 = (int)uVar39;
  if ((*(uint *)local_98[5] & 0x100) != 0) {
    plVar3 = *(longlong **)(**(undefined1 (**) [16])*local_d0 + 8);
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    uVar45 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar39);
    uVar39 = (ulonglong)uVar45;
  }
  unaff_RSI = *(undefined1 (**) [16])*local_a0;
  pauVar26 = *(undefined1 (**) [16])unaff_RSI[3];
  if (pauVar26 == (undefined1 (*) [16])0x0) {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pauVar26 = operator_new(0x10);
    *pauVar26 = auVar72._0_16_;
    *(undefined1 (**) [16])unaff_RSI[3] = pauVar26;
  }
  uVar45 = *(uint *)((longlong)*pauVar26 + 4);
  if (uVar45 < *(uint *)*pauVar26) {
    pvVar19 = *(void **)((longlong)*pauVar26 + 8);
  }
  else {
    auVar71 = ZEXT1664(auVar71._0_16_);
    auVar72 = ZEXT1664(auVar72._0_16_);
    pvVar19 = realloc(*(void **)((longlong)*pauVar26 + 8),(ulonglong)(uVar45 + 0x10));
    if (pvVar19 == (void *)0x0) goto LAB_1400a353c;
    *(void **)((longlong)*pauVar26 + 8) = pvVar19;
    *(uint *)*pauVar26 = uVar45 + 0x10;
    uVar45 = *(uint *)((longlong)*pauVar26 + 4);
  }
  unaff_RDI = (undefined1 (*) [16])(ulonglong)uVar45;
  *(uint *)((longlong)*pauVar26 + 4) = uVar45 + 1;
  *(char *)((longlong)pvVar19 + (longlong)unaff_RDI) = (char)uVar39;
  uVar45 = iVar58 + 1;
  uVar39 = (ulonglong)uVar45;
  goto joined_r0x00014009d630;
code_r0x0001400a1b09:
  std::_Xregex_error(0xe);
code_r0x0001400a1b16:
  lVar50 = *(longlong *)((longlong)local_98[4] + 8);
  uVar33 = *(ushort *)
            (*(longlong *)(*(longlong *)(*(longlong *)((longlong)local_98[6] + 8) + 8) + 0x18) +
            (ulonglong)(byte)*(uint *)((longlong)local_98[7] + 8) * 2);
  uVar39 = 0;
  do {
    uVar32 = uVar42;
    if ((uVar42 == 0xffff) && (uVar32 = 0x107, uVar39 == 0x5f)) {
      if ((uVar33 & 1) == 0) {
code_r0x0001400a1b99:
        pauVar31 = *(undefined1 (**) [32])(lVar50 + 0x28);
        if (pauVar31 == (undefined1 (*) [32])0x0) {
          pauVar31 = operator_new(0x20);
          *pauVar31 = ZEXT1232(ZEXT812(0));
          *(undefined1 (**) [32])(lVar50 + 0x28) = pauVar31;
        }
        pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
        *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
      }
    }
    else if ((bool)((byte)uVar33 & 1) !=
             ((*(ushort *)
                (*(longlong *)(*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) +
                uVar39 * 2) & uVar32) != 0)) goto code_r0x0001400a1b99;
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x100);
  pauVar26 = *(undefined1 (**) [16])*local_98;
  unaff_RBX = *(undefined1 (**) [16])local_98[1];
  if (pauVar26 != unaff_RBX) {
    if ((((*pauVar26)[0] == '\\') &&
        (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar18 != unaff_RBX)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar18 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar18)[0] == '}' || ((*pauVar18)[0] == '{')))))
        ))) {
      pauVar26 = pauVar18;
    }
    pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar26;
  }
  pauVar22 = (undefined1 (*) [16])0x100;
  if (pauVar26 != unaff_RBX) {
    cVar14 = (*pauVar26)[0];
    uVar45 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
    uVar15 = 0;
    if (pvVar19 != (void *)0x0) {
      uVar15 = uVar45;
    }
    *(uint *)*local_78 = uVar15;
    *(char *)local_88 = cVar14;
    switch(uVar45) {
    case 10:
      goto code_r0x0001400a3b01;
    default:
      goto LAB_1400a3c47;
    case 0x24:
code_r0x0001400a1c73:
      pauVar22 = (undefined1 (*) [16])0x100;
      if ((((*(uint *)*local_80 & 0x2000000) == 0) ||
          (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar26 == unaff_RBX)) ||
         ((*pauVar26)[0] == '\n')) goto LAB_1400a3c47;
      goto LAB_1400a3b45;
    case 0x28:
    case 0x29:
      goto code_r0x0001400a33ed;
    case 0x2a:
      if ((*(uint *)*local_80 & 0x4000000) == 0) goto LAB_1400a3c47;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      switch(*(undefined4 *)(*pauVar26 + 8)) {
      case 2:
        goto code_r0x0001400a3439;
      default:
        goto LAB_1400a3c47;
      case 8:
      case 0xd:
      case 0x14:
        goto LAB_1400a3b45;
      }
    case 0x2b:
    case 0x3f:
      goto code_r0x0001400a3aca;
    case 0x5c:
code_r0x0001400a28ba:
      pauVar22 = (undefined1 (*) [16])0x100;
      pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
      if (pauVar26 == unaff_RBX) goto LAB_1400a3c47;
      if (((*(uint *)*local_80 & 8) != 0) ||
         (uVar15 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) != 0x28)) {
        if ((*(uint *)*local_80 & 0x10) != 0) goto LAB_1400a3c47;
        bVar10 = (*pauVar26)[0];
        goto code_r0x0001400a3bb8;
      }
      goto code_r0x0001400a3bc6;
    case 0x5e:
      if ((*(uint *)*local_80 & 0x2000000) == 0) goto LAB_1400a3c47;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
      switch(*(undefined4 *)(*pauVar26 + 8)) {
      case 2:
        goto code_r0x0001400a3493;
      default:
        goto LAB_1400a3b45;
      case 8:
      case 0xd:
      case 0x14:
        goto LAB_1400a3c47;
      }
    case 0x7b:
    case 0x7d:
      goto code_r0x0001400a3af0;
    case 0x7c:
      goto code_r0x0001400a3b35;
    }
  }
  goto code_r0x0001400a337b;
code_r0x0001400a1d16:
  uVar39 = 0x7fffffffffffffff;
  FUN_1400bf7e0();
code_r0x0001400a1d1b:
  bVar10 = (byte)*(uint *)*local_80 & 2;
  goto joined_r0x0001400a1d25;
LAB_1400a17b0:
  if (bVar62) {
    auVar71 = ZEXT1664(auVar69);
    auVar72 = ZEXT1664(auVar70);
    pauVar18 = operator_new(0x20);
    *(undefined ***)*pauVar18 = std::_Node_base::vftable;
    *(undefined4 *)((longlong)*pauVar18 + 8) = 8;
    *(undefined8 *)((longlong)*pauVar18 + 0xc) = 0;
    *(undefined4 *)(pauVar18[1] + 4) = 0;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    *(undefined1 (**) [16])(pauVar18[1] + 8) = pauVar26;
    if (*(longlong *)pauVar26[1] != 0) {
      *(longlong *)pauVar18[1] = *(longlong *)pauVar26[1];
      *(undefined1 (**) [16])(*(longlong *)pauVar26[1] + 0x18) = pauVar18;
      pauVar26 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar26[1] = pauVar18;
    *(undefined1 (**) [16])*local_a0 = pauVar18;
    uVar15 = *(int *)((longlong)*pauVar18 + 8) - 8;
    uVar17 = 0xe;
    if (uVar15 < 4) {
      uVar17 = (&DAT_1401123dc)[uVar15];
    }
    pauVar26 = operator_new(0x28);
    auVar70 = auVar72._0_16_;
    auVar69 = auVar71._0_16_;
    *(undefined4 *)((longlong)*pauVar26 + 8) = uVar17;
    *(undefined8 *)((longlong)*pauVar26 + 0xc) = 0;
    *(undefined4 *)(pauVar26[1] + 4) = 0;
    *(undefined ***)*pauVar26 = std::_Node_end_group::vftable;
    *(undefined1 (**) [16])pauVar26[2] = pauVar18;
    *(undefined1 (**) [16])(pauVar26[1] + 8) = pauVar18;
    lVar29 = *(longlong *)pauVar18[1];
    if (lVar29 != 0) {
      *(longlong *)pauVar26[1] = lVar29;
      *(undefined1 (**) [16])(lVar29 + 0x18) = pauVar26;
      pauVar18 = *(undefined1 (**) [16])*local_a0;
    }
    *(undefined1 (**) [16])pauVar18[1] = pauVar26;
    *(undefined1 (**) [16])*local_a0 = pauVar26;
  }
  else {
    pauVar26 = *(undefined1 (**) [16])*local_a0;
  }
  pauVar18 = *(undefined1 (**) [16])(lVar50 + 0x10);
  lVar29 = *(longlong *)pauVar21[1];
  *(undefined1 (**) [16])*local_a0 = pauVar21;
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined1 (**) [16])pauVar26[1] = pauVar21;
  do {
    unaff_RDI = pauVar18;
    pauVar18 = *(undefined1 (**) [16])((longlong)unaff_RDI[2] + 8);
  } while (*(undefined1 (**) [16])((longlong)unaff_RDI[2] + 8) != (undefined1 (*) [16])0x0);
  auVar71 = ZEXT1664(auVar69);
  auVar72 = ZEXT1664(auVar70);
  puVar23 = operator_new(0x30);
  *(undefined4 *)(puVar23 + 1) = 0x10;
  *(undefined1 (*) [16])((longlong)puVar23 + 0xc) = auVar72._0_16_;
  *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
  *puVar23 = std::_Node_if::vftable;
  puVar23[4] = pauVar21;
  puVar23[5] = 0;
  *(undefined8 **)((longlong)unaff_RDI[2] + 8) = puVar23;
  puVar23[2] = lVar29;
  *(undefined8 *)(lVar29 + 0x18) = *(undefined8 *)((longlong)unaff_RDI[2] + 8);
  goto LAB_1400945d0;
code_r0x0001400a1a8f:
  std::_Xregex_error(6);
LAB_1400a1a9c:
  *(uint *)*local_78 = 0xffffffff;
  *(undefined1 *)local_88 = 0xff;
  *(uint *)*local_b0 = 0;
  ppuVar55 = (undefined **)pauVar18;
LAB_1400a1abd:
  uVar45 = (uint)ppuVar55;
  std::_Xregex_error(7);
code_r0x0001400a1aca:
  *(uint *)*local_78 = 0x7c;
  uVar39 = (ulonglong)local_ec;
  std::_Xregex_error(local_ec);
  unaff_RBX = pauVar26;
code_r0x0001400a1adf:
  bVar10 = (byte)*(uint *)*local_80 & 1;
joined_r0x0001400a1d25:
  if (bVar10 == 0) {
LAB_1400a1ef5:
    *(uint *)*local_78 = 0;
    uVar39 = 0;
  }
LAB_1400a1f04:
  local_dc = 1;
  if (((uVar45 != 0x3a) && (local_dc = 0, uVar45 != 0x3d)) && (local_dc = 0xe, uVar45 == 0x2e)) {
    local_dc = 0;
  }
  uVar15 = *(uint *)*local_80;
  pauVar22 = (undefined1 (*) [16])(ulonglong)uVar15;
  local_a8 = *(undefined1 (**) [16])*local_a0;
  auVar67._4_4_ = uVar15;
  auVar67._0_4_ = uVar15;
  auVar67._8_4_ = uVar15;
  auVar67._12_4_ = uVar15;
  auVar69 = vpand_avx(auVar67,_DAT_14010b170);
  auVar69 = vpcmpeqd_avx(auVar69,(undefined1  [16])0x0);
  uVar17 = vmovmskps_avx(auVar69);
  bVar10 = (byte)uVar17;
  local_b0 = (undefined1 (*) [16])CONCAT71(local_b0._1_7_,(bVar10 & 2) >> 1);
  local_90 = (undefined1 (*) [16])CONCAT71(local_90._1_7_,(bVar10 & 4) >> 2);
  local_b8 = (undefined1 (*) [16])CONCAT44(local_b8._4_4_,uVar17);
  local_c8 = (undefined1 (*) [16])CONCAT71(local_c8._1_7_,bVar10 >> 3);
  local_d8 = (undefined1 (*) [16])CONCAT71(local_d8._1_7_,*local_c0 == 0 & (byte)uVar15 >> 2);
  pcVar43 = (char *)0x0;
  pauVar26 = local_e8;
  while( true ) {
    uVar47 = (uint)pcVar43;
    uVar46 = (uint)uVar39 + 1;
    if ((uVar46 < 0x3f) && ((0x4800800000000001U >> ((ulonglong)uVar46 & 0x3f) & 1) != 0)) break;
    if (pauVar26 == param_4) {
LAB_1400a1fa0:
      *(uint *)*local_78 = 0xffffffff;
      *(undefined1 *)local_88 = 0xff;
      uVar39 = 0xffffffff;
      pauVar26 = param_4;
      goto LAB_1400a1fbf;
    }
    pauVar18 = pauVar26;
    if ((((*pauVar26)[0] == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1), pauVar26 != param_4)) &&
       ((((uVar15 & 8) == 0 && (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
        (((uVar15 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))) {
      pauVar18 = pauVar26;
    }
    pauVar26 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
    *(undefined1 (**) [16])*local_98 = pauVar26;
    if (pauVar26 == param_4) goto LAB_1400a1fa0;
    cVar14 = (*pauVar26)[0];
    uVar48 = (uint)cVar14;
    pvVar19 = memchr(&DAT_140111e80,uVar48,0x17);
    uVar46 = uVar48;
    if (pvVar19 == (void *)0x0) {
      uVar46 = 0;
    }
    uVar39 = (ulonglong)uVar46;
    *(uint *)*local_78 = uVar46;
    *(char *)local_88 = cVar14;
    param_4 = unaff_RBX;
    switch(uVar48) {
    case 10:
      if ((char)local_d8 != '\0') {
        *(uint *)*local_78 = 0x7c;
        uVar39 = 0x7c;
      }
      break;
    case 0x24:
      if ((((char)local_b0 == '\0') &&
          (pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2), pauVar18 != unaff_RBX)) &&
         ((*pauVar18)[0] != '\n')) goto code_r0x0001400a21ff;
      break;
    case 0x28:
    case 0x29:
      uVar46 = uVar15 & 8;
      goto joined_r0x0001400a20b3;
    case 0x2a:
      if (((ulonglong)local_b8 & 1) == 0) {
        switch(*(uint *)((longlong)*local_a8 + 8)) {
        case 2:
          uVar46 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
          if ((uVar46 < 0x15) && ((0x102100U >> (uVar46 & 0x1f) & 1) != 0))
          goto code_r0x0001400a21ff;
          break;
        case 8:
        case 0xd:
        case 0x14:
          goto code_r0x0001400a21ff;
        }
      }
      break;
    case 0x2b:
    case 0x3f:
      cVar14 = (byte)local_90;
      goto joined_r0x0001400a20c2;
    case 0x5c:
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar18 + 2);
      if (pauVar18 != unaff_RBX) {
        if (((uVar15 & 8) == 0) &&
           (uVar57 = (ulonglong)(byte)(*pauVar18)[0], ((*pauVar18)[0] & 0xfe) == 0x28)) {
code_r0x0001400a214e:
          *(char *)local_88 = (char)uVar57;
          *(uint *)*local_78 = (uint)uVar57;
          uVar39 = uVar57;
        }
        else if ((uVar15 & 0x10) == 0) {
          bVar10 = (*pauVar18)[0];
          uVar57 = (ulonglong)bVar10;
          if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a214e;
        }
      }
      break;
    case 0x5e:
      if ((char)local_b0 != '\0') break;
      switch(*(uint *)((longlong)*local_a8 + 8)) {
      case 2:
        uVar46 = *(uint *)(*(longlong *)((longlong)local_a8[1] + 8) + 8);
        if (uVar46 < 0x15) {
          uVar46 = 0x102100U >> (uVar46 & 0x1f) & 1;
          goto joined_r0x0001400a20b3;
        }
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto LAB_1400a1fbf;
      }
      goto code_r0x0001400a21ff;
    case 0x7b:
    case 0x7d:
      uVar46 = uVar15 & 0x10;
joined_r0x0001400a20b3:
      if (uVar46 == 0) {
code_r0x0001400a21ff:
        *(uint *)*local_78 = 0;
        uVar39 = 0;
      }
      break;
    case 0x7c:
      cVar14 = (char)local_c8;
joined_r0x0001400a20c2:
      if (cVar14 == '\0') break;
      goto code_r0x0001400a21ff;
    }
LAB_1400a1fbf:
    pcVar43 = (char *)(ulonglong)(uVar47 + 1);
  }
  if ((uint)uVar39 != uVar45) goto LAB_1400a3ae8;
  local_b0 = pauVar26;
  if (uVar45 == 0x3a) {
    lVar50 = *(longlong *)((longlong)local_98[6] + 8);
    local_a8 = (undefined1 (*) [16])CONCAT44(local_a8._4_4_,*(uint *)local_98[7]);
    local_90 = (undefined1 (*) [16])((longlong)pauVar26 - (longlong)local_e8);
    pcVar43 = "alnum";
    uVar39 = 0;
    bVar62 = false;
    do {
      if (local_90 == (undefined1 (*) [16])(ulonglong)(uint)(&DAT_140111f70)[uVar39 * 6]) {
        pauVar26 = local_e8;
        if (local_e8 == local_b0) {
LAB_1400a2325:
          uVar33 = (&DAT_140111f74)[(uVar39 & 0xffffffff) * 0xc];
          goto LAB_1400a2337;
        }
        while( true ) {
          cVar14 = *pcVar43;
          plVar3 = *(longlong **)(lVar50 + 8);
          cVar13 = (**(code **)(*plVar3 + 0x20))(plVar3,(*pauVar26)[0]);
          plVar3 = *(longlong **)(lVar50 + 8);
          cVar14 = (**(code **)(*plVar3 + 0x20))(plVar3,cVar14);
          if (cVar13 != cVar14) break;
          pauVar26 = (undefined1 (*) [16])((longlong)*pauVar26 + 1);
          pcVar43 = pcVar43 + 1;
          if (pauVar26 == local_b0) {
            if (!bVar62) goto LAB_1400a2325;
            goto LAB_1400a22e9;
          }
        }
      }
      uVar39 = uVar39 + 1;
      pcVar43 = (&PTR_s_alnum_140111f60)[uVar39 * 3];
      bVar62 = pcVar43 == (char *)0x0;
    } while (uVar39 != 0xf);
LAB_1400a22e9:
    uVar33 = 0;
LAB_1400a2337:
    uVar42 = uVar33 | 3;
    if ((uVar33 & 3) == 0) {
      uVar42 = uVar33;
    }
    if (((ulonglong)local_a8 & 0x100) == 0) {
      uVar42 = uVar33;
    }
    if (uVar42 == 0) {
code_r0x0001400a2350:
      std::_Xregex_error(1);
    }
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    uVar39 = 0;
    do {
      uVar33 = uVar42;
      if (((uVar42 == 0xffff) && (uVar33 = 0x107, uVar39 == 0x5f)) ||
         ((*(ushort *)
            (*(longlong *)(*(longlong *)(**(undefined1 (**) [16])*local_d0 + 8) + 0x18) + uVar39 * 2
            ) & uVar33) != 0)) {
        pauVar31 = *(undefined1 (**) [32])(pauVar26[2] + 8);
        if (pauVar31 == (undefined1 (*) [32])0x0) {
          pauVar31 = operator_new(0x20);
          *pauVar31 = ZEXT1232(ZEXT812(0));
          *(undefined1 (**) [32])(pauVar26[2] + 8) = pauVar31;
        }
        pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3 & 0x1fffffff));
        *pbVar41 = *pbVar41 | '\x01' << ((byte)uVar39 & 7);
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 != 0x100);
  }
  else if (uVar45 == 0x2e) {
    if (local_e8 == pauVar26) {
LAB_1400a23e2:
      uVar47 = (uint)pcVar43;
      std::_Xregex_error(0);
    }
    pauVar18 = local_a8 + 2;
    for (pauVar26 = *(undefined1 (**) [16])local_a8[2]; pauVar26 != (undefined1 (*) [16])0x0;
        pauVar26 = *(undefined1 (**) [16])(pauVar26[1] + 8)) {
      if (*(uint *)*pauVar26 <= uVar47) {
        pauVar21 = local_b0;
        pauVar22 = local_e8;
        if (*(uint *)*pauVar26 == uVar47) goto LAB_1400a24ab;
        goto LAB_1400a245d;
      }
      pauVar18 = (undefined1 (*) [16])(pauVar26[1] + 8);
    }
    pauVar26 = (undefined1 (*) [16])0x0;
LAB_1400a245d:
    pauVar21 = operator_new(0x20);
    *(uint *)*pauVar21 = uVar47;
    auVar68._0_12_ = ZEXT812(0);
    auVar68._12_4_ = 0;
    *(undefined1 (*) [16])((longlong)*pauVar21 + 8) = auVar68;
    *(undefined1 (**) [16])*pauVar18 = pauVar21;
    *(undefined1 (**) [16])(pauVar21[1] + 8) = pauVar26;
    pauVar26 = *(undefined1 (**) [16])*pauVar18;
    pauVar21 = local_b0;
    pauVar22 = local_e8;
LAB_1400a24ab:
    do {
      uVar12 = (*pauVar22)[0];
      uVar15 = *(uint *)(*pauVar26 + 0xc);
      if (uVar15 < *(uint *)(*pauVar26 + 8)) {
        pvVar19 = *(void **)pauVar26[1];
      }
      else {
        pvVar19 = realloc(*(void **)pauVar26[1],(ulonglong)(uVar15 + 0x10));
        if (pvVar19 == (void *)0x0) {
LAB_1400a353c:
                    /* WARNING: Subroutine does not return */
          std::_Xbad_alloc();
        }
        *(void **)pauVar26[1] = pvVar19;
        *(uint *)(*pauVar26 + 8) = uVar15 + 0x10;
        uVar15 = *(uint *)(*pauVar26 + 0xc);
        pauVar21 = local_b0;
      }
      pauVar22 = (undefined1 (*) [16])((longlong)*pauVar22 + 1);
      *(uint *)(*pauVar26 + 0xc) = uVar15 + 1;
      *(undefined1 *)((longlong)pvVar19 + (ulonglong)uVar15) = uVar12;
    } while (pauVar22 != pauVar21);
  }
  else if (uVar45 == 0x3d) {
    if (local_e8 == pauVar26) goto LAB_1400a23e2;
    local_b0 = (undefined1 (*) [16])((longlong)pauVar26 - (longlong)local_e8);
    if ((longlong)local_b0 < 0) {
code_r0x0001400a2320:
                    /* WARNING: Subroutine does not return */
      FUN_1400bf760();
    }
    pauVar18 = *(undefined1 (**) [16])*local_d0;
    if (local_b0 < (undefined1 (*) [16])0x1000) {
LAB_1400a24e5:
      local_90 = operator_new((__uint64)local_b0);
    }
    else {
      pvVar19 = operator_new((longlong)local_b0[2] + 7);
      local_90 = (undefined1 (*) [16])((longlong)pvVar19 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)local_90[-1] + 8) = pvVar19;
    }
    pauVar26 = local_90;
    lVar50 = (longlong)*local_90 + (longlong)local_b0;
    memmove(local_90,local_e8,(size_t)local_b0);
    (**(code **)(**(longlong **)((longlong)*pauVar18 + 8) + 0x18))
              (*(longlong **)((longlong)*pauVar18 + 8),pauVar26,lVar50);
    (**(code **)(**(longlong **)*pauVar18 + 0x20))
              (*(longlong **)*pauVar18,local_110,local_90,lVar50);
    local_138._8_8_ = local_110[1];
    local_138._0_8_ = local_110[0];
    sStack_128 = lStack_100;
    pauStack_120 = (undefined1 (*) [16])uStack_f8;
    if ((undefined1 (*) [16])0xfff < local_b0) {
      if (0x1f < (ulonglong)
                 ((longlong)local_90 +
                 (-8 - (longlong)*(undefined1 (**) [16])((longlong)local_90[-1] + 8))))
      goto LAB_1400a3888;
      local_b0 = (undefined1 (*) [16])((longlong)local_b0[2] + 7);
      local_90 = *(undefined1 (**) [16])((longlong)local_90[-1] + 8);
    }
    free(local_90);
    sVar9 = sStack_128;
    local_90 = pauStack_120;
    local_b8 = (undefined1 (*) [16])local_138._0_8_;
    if ((undefined1 (*) [16])0xf < pauStack_120) {
      local_140 = (undefined1 (*) [16])local_138._0_8_;
    }
    for (uVar39 = 0; (uint)uVar39 < 0x100; uVar39 = (ulonglong)((uint)uVar39 + 1)) {
      pauVar26 = *(undefined1 (**) [16])*local_d0;
      local_b0 = operator_new(1);
      lVar50 = (longlong)*local_b0 + 1;
      (*local_b0)[0] = (byte)uVar39;
      plVar3 = *(longlong **)(*pauVar26 + 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,local_b0,lVar50);
      plVar3 = *(longlong **)*pauVar26;
      (**(code **)(*plVar3 + 0x20))(plVar3,local_110,local_b0,lVar50);
      local_168._8_8_ = local_110[1];
      local_168._0_8_ = local_110[0];
      local_168._16_8_ = lStack_100;
      local_168._24_8_ = uStack_f8;
      free(local_b0);
      uVar5 = local_168._24_8_;
      if (local_168._16_8_ == sVar9) {
        puVar40 = local_168;
        if (0xf < (ulonglong)local_168._24_8_) {
          puVar40 = (undefined1 *)local_168._0_8_;
        }
        iVar58 = memcmp(puVar40,local_140,sVar9);
        bVar62 = iVar58 == 0;
      }
      else {
        bVar62 = false;
      }
      if (0xf < (ulonglong)uVar5) {
        puVar40 = (undefined1 *)local_168._0_8_;
        if ((0xfff < uVar5 + 1) &&
           (puVar40 = *(undefined1 **)(local_168._0_8_ + -8),
           (undefined1 *)0x1f < (undefined1 *)(local_168._0_8_ + (-8 - (longlong)puVar40))))
        goto LAB_1400a3888;
        free(puVar40);
      }
      if (bVar62) {
        pauVar31 = *(undefined1 (**) [32])((longlong)local_a8[2] + 8);
        if (pauVar31 == (undefined1 (*) [32])0x0) {
          pauVar31 = operator_new(0x20);
          *pauVar31 = ZEXT1232(ZEXT812(0));
          *(undefined1 (**) [32])((longlong)local_a8[2] + 8) = pauVar31;
        }
        pbVar41 = (byte *)((longlong)*pauVar31 + (uVar39 >> 3));
        *pbVar41 = *pbVar41 | (byte)(1 << ((byte)uVar39 & 7));
      }
    }
    if ((undefined1 (*) [16])0xf < local_90) {
      pauVar26 = local_b8;
      if ((0xfff < (longlong)*local_90 + 1U) &&
         (pauVar26 = *(undefined1 (**) [16])((longlong)local_b8[-1] + 8),
         0x1f < (ulonglong)
                ((longlong)local_b8 +
                (-8 - (longlong)*(undefined1 (**) [16])((longlong)local_b8[-1] + 8))))) {
LAB_1400a3888:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      local_b8 = pauVar26;
      free(local_b8);
    }
  }
  unaff_RBX = *(undefined1 (**) [16])*local_98;
  pauVar22 = *(undefined1 (**) [16])local_98[1];
  if (unaff_RBX != pauVar22) {
    if ((((*unaff_RBX)[0] == '\\') &&
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1), pauVar26 != pauVar22)) &&
       ((((*(uint *)*local_80 & 8) == 0 &&
         (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
        (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))
        ))) {
      unaff_RBX = pauVar26;
    }
    unaff_RBX = (undefined1 (*) [16])((longlong)*unaff_RBX + 1);
    *(undefined1 (**) [16])*local_98 = unaff_RBX;
  }
  if (unaff_RBX == pauVar22) {
code_r0x0001400a30fc:
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    std::_Xregex_error(local_dc);
  }
  cVar14 = (*unaff_RBX)[0];
  eVar49 = (error_type)cVar14;
  pvVar19 = memchr(&DAT_140111e80,eVar49,0x17);
  eVar34 = 0;
  if (pvVar19 != (void *)0x0) {
    eVar34 = eVar49;
  }
  *(error_type *)*local_78 = eVar34;
  *(char *)local_88 = cVar14;
  switch(eVar49) {
  case 10:
    if (((*(uint *)*local_80 & 4) != 0) && (*local_c0 == 0)) {
code_r0x0001400a31e0:
      *(uint *)*local_78 = 0x7c;
      eVar34 = local_dc;
      std::_Xregex_error(local_dc);
      goto code_r0x0001400a31f5;
    }
    break;
  case 0x24:
code_r0x0001400a31f5:
    if ((((*(uint *)*local_80 & 0x2000000) == 0) ||
        (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1), pauVar26 == pauVar22)) ||
       ((*pauVar26)[0] == '\n')) break;
    goto code_r0x0001400a3adb;
  case 0x28:
  case 0x29:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x0001400a31b8;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto code_r0x0001400a3adb;
        break;
      case 8:
      case 0xd:
      case 0x14:
        goto code_r0x0001400a3adb;
      }
    }
    break;
  case 0x2b:
  case 0x3f:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x0001400a31b8;
  case 0x5c:
    pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1);
    if (pauVar26 != pauVar22) {
      if (((*(uint *)*local_80 & 8) == 0) &&
         (eVar49 = (uint)(byte)(*pauVar26)[0], ((*pauVar26)[0] & 0xfe) == 0x28)) {
code_r0x0001400a3269:
        eVar34 = eVar49;
        *(char *)local_88 = (char)eVar34;
        *(error_type *)*local_78 = eVar34;
      }
      else if ((*(uint *)*local_80 & 0x10) == 0) {
        bVar10 = (*pauVar26)[0];
        eVar49 = (uint)bVar10;
        if ((bVar10 == 0x7d) || (bVar10 == 0x7b)) goto code_r0x0001400a3269;
      }
    }
    break;
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) != 0) {
      switch(*(undefined4 *)(**(undefined1 (**) [16])*local_a0 + 8)) {
      case 2:
        uVar15 = *(uint *)(*(longlong *)((*(undefined1 (**) [16])*local_a0)[1] + 8) + 8);
        if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto code_r0x0001400a3adb;
        break;
      default:
        goto code_r0x0001400a3adb;
      case 8:
      case 0xd:
      case 0x14:
        break;
      }
    }
    break;
  case 0x7b:
  case 0x7d:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x0001400a31b8;
  case 0x7c:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x0001400a31b8:
    if (bVar10 != 0) break;
code_r0x0001400a3adb:
    *(uint *)*local_78 = 0;
    goto LAB_1400a3ae8;
  }
  if (eVar34 != 0x5d) {
LAB_1400a3ae8:
    std::_Xregex_error(local_dc);
code_r0x0001400a3af0:
    bVar10 = (byte)*(uint *)*local_80 & 0x10;
    goto joined_r0x0001400a3ad4;
  }
  if ((((*unaff_RBX)[0] == '\\') &&
      (pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1), pauVar26 != pauVar22)) &&
     ((((*(uint *)*local_80 & 8) == 0 &&
       (((ulonglong)*(undefined1 (**) [16])*pauVar26 & 0xfe) == 0x28)) ||
      (((*(uint *)*local_80 & 0x10) == 0 && (((*pauVar26)[0] == '}' || ((*pauVar26)[0] == '{')))))))
     ) {
    unaff_RBX = pauVar26;
  }
  pauVar26 = (undefined1 (*) [16])((longlong)*unaff_RBX + 1);
  *(undefined1 (**) [16])*local_98 = pauVar26;
  if (pauVar26 == pauVar22) {
code_r0x0001400a337b:
    *(uint *)*local_78 = 0xffffffff;
    *(undefined1 *)local_88 = 0xff;
    std::_Xregex_error(8);
    pauVar26 = extraout_RAX;
  }
  cVar14 = (*pauVar26)[0];
  uVar45 = (uint)cVar14;
  pvVar19 = memchr(&DAT_140111e80,uVar45,0x17);
  uVar15 = 0;
  if (pvVar19 != (void *)0x0) {
    uVar15 = uVar45;
  }
  *(uint *)*local_78 = uVar15;
  *(char *)local_88 = cVar14;
  switch(uVar45) {
  case 10:
code_r0x0001400a3b01:
    if (((*(uint *)*local_80 & 4) == 0) || (*local_c0 != 0)) goto LAB_1400a3c47;
    *(uint *)*local_78 = 0x7c;
    std::_Xregex_error(8);
  case 0x7c:
code_r0x0001400a3b35:
    bVar10 = (byte)*(uint *)*local_80 & 2;
joined_r0x0001400a3ad4:
    if (bVar10 != 0) goto LAB_1400a3c47;
    break;
  default:
    goto LAB_1400a3c47;
  case 0x24:
    goto code_r0x0001400a3b5c;
  case 0x28:
  case 0x29:
code_r0x0001400a33ed:
    bVar10 = (byte)*(uint *)*local_80 & 8;
    goto joined_r0x0001400a3ad4;
  case 0x2a:
    if ((*(uint *)*local_80 & 0x4000000) == 0) goto LAB_1400a3c47;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
code_r0x0001400a3439:
      uVar15 = *(uint *)(*(longlong *)(pauVar26[1] + 8) + 8);
      if ((0x14 < uVar15) || ((0x102100U >> (uVar15 & 0x1f) & 1) == 0)) goto LAB_1400a3c47;
      break;
    default:
      goto LAB_1400a3c47;
    case 8:
    case 0xd:
    case 0x14:
      break;
    }
    break;
  case 0x2b:
  case 0x3f:
code_r0x0001400a3aca:
    bVar10 = (byte)*(uint *)*local_80 & 1;
    goto joined_r0x0001400a3ad4;
  case 0x5c:
code_r0x0001400a3b84:
    unaff_RBX = (undefined1 (*) [16])((longlong)*unaff_RBX + 2);
    if (unaff_RBX == pauVar22) goto LAB_1400a3c47;
    if (((*(uint *)*local_80 & 8) != 0) ||
       (uVar15 = (uint)(byte)(*unaff_RBX)[0], ((*unaff_RBX)[0] & 0xfe) != 0x28)) {
      if ((*(uint *)*local_80 & 0x10) != 0) goto LAB_1400a3c47;
      bVar10 = (*unaff_RBX)[0];
code_r0x0001400a3bb8:
      uVar15 = (uint)bVar10;
      if ((uVar15 != 0x7d) && (uVar15 != 0x7b)) goto LAB_1400a3c47;
    }
code_r0x0001400a3bc6:
    *(char *)local_88 = (char)uVar15;
    *(uint *)*local_78 = uVar15;
    std::_Xregex_error(8);
code_r0x0001400a3be5:
    if ((*(uint *)*local_80 & 0x4000000) == 0) goto LAB_1400a3c47;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
      goto code_r0x0001400a3439;
    default:
      goto LAB_1400a3c47;
    case 8:
    case 0xd:
    case 0x14:
      break;
    }
  case 0x5e:
    if ((*(uint *)*local_80 & 0x2000000) == 0) goto LAB_1400a3c47;
    pauVar26 = *(undefined1 (**) [16])*local_a0;
    switch(*(undefined4 *)(*pauVar26 + 8)) {
    case 2:
code_r0x0001400a3493:
      uVar15 = *(uint *)(*(longlong *)(pauVar26[1] + 8) + 8);
      if ((uVar15 < 0x15) && ((0x102100U >> (uVar15 & 0x1f) & 1) != 0)) goto LAB_1400a3c47;
      break;
    case 8:
    case 0xd:
    case 0x14:
      goto LAB_1400a3c47;
    }
    break;
  case 0x7b:
  case 0x7d:
    goto code_r0x0001400a3af0;
  }
LAB_1400a3b45:
  do {
    *(uint *)*local_78 = 0;
    std::_Xregex_error(8);
code_r0x0001400a3b5c:
  } while ((((*(uint *)*local_80 & 0x2000000) != 0) &&
           (unaff_RBX = (undefined1 (*) [16])((longlong)*unaff_RBX + 2), unaff_RBX != pauVar22)) &&
          ((*unaff_RBX)[0] != '\n'));
LAB_1400a3c47:
  std::_Xregex_error(8);
code_r0x0001400a3c51:
  FUN_1400bf7e0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

