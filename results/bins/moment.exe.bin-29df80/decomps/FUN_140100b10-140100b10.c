
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140100b10(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [32];
  code *pcVar5;
  _Facet_base *p_Var6;
  undefined1 _Memory [8];
  undefined1 auVar7 [32];
  _Locimp *p_Var8;
  size_t _Size;
  char ******ppppppcVar9;
  __uint64 _Var10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *_Memory_00;
  undefined4 uVar14;
  char *******pppppppcVar15;
  _Facet_base *p_Var16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  _Collvec local_100;
  _Facet_base *local_f0;
  undefined *local_e8;
  _Facet_base *local_e0;
  undefined1 local_d8 [8];
  undefined1 auStack_d0 [16];
  longlong lStack_c0;
  void *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_74;
  char *******local_68;
  undefined8 uStack_60;
  size_t sStack_58;
  ulonglong uStack_50;
  _Lockit local_40 [8];
  _Facet_base *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  DAT_14012b058 = (undefined8 *)0x0;
  DAT_14012b078 = std::locale::_Init(true);
  std::_Lockit::_Lockit(local_40,0);
  p_Var6 = DAT_14012b600;
  pcVar5 = id_exref;
  uVar17 = *(ulonglong *)id_exref;
  if (uVar17 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_f0,0);
    if (*(longlong *)pcVar5 == 0) {
      iVar2 = *(int *)_Id_cnt_exref;
      *(int *)_Id_cnt_exref = (int)((longlong)iVar2 + 1);
      *(longlong *)pcVar5 = (longlong)iVar2 + 1;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_f0);
    uVar17 = *(ulonglong *)pcVar5;
  }
  if ((((*(ulonglong *)(DAT_14012b078 + 0x18) <= uVar17) ||
       (p_Var16 = *(_Facet_base **)(*(longlong *)(DAT_14012b078 + 0x10) + uVar17 * 8),
       p_Var16 == (_Facet_base *)0x0)) &&
      ((DAT_14012b078[0x24] == (_Locimp)0x0 ||
       ((p_Var8 = std::locale::_Getgloballocale(), *(ulonglong *)(p_Var8 + 0x18) <= uVar17 ||
        (p_Var16 = *(_Facet_base **)(*(longlong *)(p_Var8 + 0x10) + uVar17 * 8),
        p_Var16 == (_Facet_base *)0x0)))))) && (p_Var16 = p_Var6, p_Var6 == (_Facet_base *)0x0)) {
    local_38 = operator_new(0x20);
    if (DAT_14012b078 == (_Locimp *)0x0) {
      local_68 = (char *******)0x0;
      uStack_60 = 0;
      sStack_58 = 0;
      uStack_50 = 0xf;
LAB_140100ce4:
      pppppppcVar15 = (char *******)&local_68;
    }
    else {
      p_Var8 = DAT_14012b078 + 0x30;
      if (*(_Locimp **)(DAT_14012b078 + 0x28) != (_Locimp *)0x0) {
        p_Var8 = *(_Locimp **)(DAT_14012b078 + 0x28);
      }
      local_68 = (char *******)0x0;
      uStack_60 = 0;
      sStack_58 = 0;
      uStack_50 = 0;
      _Size = strlen((char *)p_Var8);
      if ((longlong)_Size < 0) goto LAB_1401011ab;
      if (_Size < 0x10) {
        uStack_50 = 0xf;
        sStack_58 = _Size;
        memcpy(&local_68,p_Var8,_Size);
        pppppppcVar15 = (char *******)&local_68;
      }
      else {
        uVar17 = 0x16;
        if (0x16 < (_Size | 0xf)) {
          uVar17 = _Size | 0xf;
        }
        if (uVar17 < 0xfff) {
          pppppppcVar15 = operator_new(uVar17 + 1);
        }
        else {
          ppppppcVar9 = operator_new(uVar17 + 0x28);
          pppppppcVar15 = (char *******)((longlong)ppppppcVar9 + 0x27U & 0xffffffffffffffe0);
          pppppppcVar15[-1] = ppppppcVar9;
        }
        local_68 = pppppppcVar15;
        sStack_58 = _Size;
        uStack_50 = uVar17;
        memcpy(pppppppcVar15,p_Var8,_Size);
      }
      *(char *)((longlong)pppppppcVar15 + _Size) = '\0';
      pppppppcVar15 = local_68;
      if (uStack_50 < 0x10) goto LAB_140100ce4;
    }
    std::_Locinfo::_Locinfo((_Locinfo *)&local_f0,(char *)pppppppcVar15);
    p_Var6 = local_38;
    std::locale::facet::facet((facet *)local_38,0);
    *(undefined ***)p_Var6 = std::collate<char>::vftable;
    std::_Locinfo::_Getcoll((_Locinfo *)&local_f0,&local_100);
    p_Var6 = local_38;
    *(undefined8 *)(local_38 + 0x10) = local_100._0_8_;
    *(wchar_t **)(local_38 + 0x18) = local_100._LocaleName;
    std::_Locinfo::_Locinfo_dtor((_Locinfo *)&local_f0);
    if (local_98 != (undefined *)0x0) {
      free(local_98);
    }
    local_98 = (undefined *)0x0;
    if (local_a8 != (undefined8 *)0x0) {
      free(local_a8);
    }
    local_a8 = (undefined8 *)0x0;
    if (local_b8 != (void *)0x0) {
      free(local_b8);
    }
    local_b8 = (void *)0x0;
    if ((void *)auStack_d0._8_8_ != (void *)0x0) {
      free((void *)auStack_d0._8_8_);
    }
    auVar7 = _local_d8;
    auStack_d0._8_8_ = 0;
    auVar4 = _local_d8;
    local_d8 = auVar7._0_8_;
    _Memory = local_d8;
    bVar18 = local_d8 != (undefined1  [8])0x0;
    _local_d8 = auVar4;
    if (bVar18) {
      free((void *)_Memory);
    }
    auVar4._24_8_ = 0;
    auVar4._0_24_ = _auStack_d0;
    _local_d8 = auVar4 << 0x40;
    if (local_e8 != (undefined *)0x0) {
      free(local_e8);
    }
    local_e8 = (undefined *)0x0;
    std::_Lockit::~_Lockit((_Lockit *)&local_f0);
    if (0xf < uStack_50) {
      pppppppcVar15 = local_68;
      if ((0xfff < uStack_50 + 1) &&
         (pppppppcVar15 = (char *******)local_68[-1],
         (char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppcVar15))))
      goto LAB_1401011a0;
      free(pppppppcVar15);
    }
    std::_Facet_Register(p_Var6);
    p_Var16 = local_38;
    (**(code **)(*(longlong *)local_38 + 8))(local_38);
    DAT_14012b600 = p_Var16;
  }
  std::_Lockit::~_Lockit(local_40);
  _DAT_14012b060 = p_Var16;
  std::_Lockit::_Lockit((_Lockit *)&local_100,0);
  p_Var6 = DAT_14012b608;
  pcVar5 = id_exref;
  local_f0 = DAT_14012b608;
  uVar17 = *(ulonglong *)id_exref;
  if (uVar17 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_68,0);
    if (*(longlong *)pcVar5 == 0) {
      iVar2 = *(int *)_Id_cnt_exref;
      *(int *)_Id_cnt_exref = (int)((longlong)iVar2 + 1);
      *(longlong *)pcVar5 = (longlong)iVar2 + 1;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_68);
    uVar17 = *(ulonglong *)pcVar5;
  }
  if ((((*(ulonglong *)(DAT_14012b078 + 0x18) <= uVar17) ||
       (p_Var16 = *(_Facet_base **)(*(longlong *)(DAT_14012b078 + 0x10) + uVar17 * 8),
       p_Var16 == (_Facet_base *)0x0)) &&
      ((DAT_14012b078[0x24] == (_Locimp)0x0 ||
       ((p_Var8 = std::locale::_Getgloballocale(), *(ulonglong *)(p_Var8 + 0x18) <= uVar17 ||
        (p_Var16 = *(_Facet_base **)(*(longlong *)(p_Var8 + 0x10) + uVar17 * 8),
        p_Var16 == (_Facet_base *)0x0)))))) && (p_Var16 = p_Var6, p_Var6 == (_Facet_base *)0x0)) {
    _Var10 = std::ctype<char>::_Getcat((facet **)&local_f0,(locale *)&DAT_14012b070);
    if (_Var10 == 0xffffffffffffffff) {
      FUN_140086cd0();
LAB_1401011ab:
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    local_38 = local_f0;
    std::_Facet_Register(local_f0);
    (**(code **)(*(longlong *)local_38 + 8))();
    DAT_14012b608 = local_f0;
    p_Var16 = local_f0;
  }
  std::_Lockit::~_Lockit((_Lockit *)&local_100);
  local_f0 = (_Facet_base *)&DAT_140112656;
  local_e8 = &DAT_140112656;
  local_e0 = (_Facet_base *)&DAT_140112663;
  _local_d8 = ZEXT1232(ZEXT812(0));
  local_b8 = (void *)0x0;
  _DAT_14012b068 = p_Var16;
  puVar11 = operator_new(0x30);
  *(undefined4 *)(puVar11 + 1) = 0x14;
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  *(undefined1 (*) [16])((longlong)puVar11 + 0xc) = auVar19;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *puVar11 = std::_Root_node::vftable;
  *(undefined1 (*) [16])(puVar11 + 4) = auVar19;
  local_a0 = 1;
  local_98 = &DAT_14012b060;
  local_90 = 0x400000100;
  local_88 = &DAT_14012b060;
  local_80 = 1;
  local_74 = 0x8775dfb0000005c;
  local_78 = 0x5c;
  local_b0 = puVar11;
  local_a8 = puVar11;
  puVar12 = operator_new(0x28);
  *(undefined4 *)(puVar12 + 1) = 0xd;
  *(undefined8 *)((longlong)puVar12 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x14) = 0;
  *puVar12 = std::_Node_capture::vftable;
  *(undefined4 *)(puVar12 + 4) = 0;
  puVar12[3] = puVar11;
  puVar11[2] = puVar12;
  local_a8 = puVar12;
  FUN_140086d20(&local_f0);
  if (local_f0 != local_e0) {
    std::_Xregex_error(0xe);
LAB_1401011a0:
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar14 = 0xe;
  if (*(int *)(puVar12 + 1) - 8U < 4) {
    uVar14 = (&DAT_1401123dc)[*(int *)(puVar12 + 1) - 8U];
  }
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = uVar14;
  *(undefined8 *)((longlong)puVar11 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
  *puVar11 = std::_Node_end_group::vftable;
  puVar11[4] = puVar12;
  puVar11[3] = local_a8;
  if (local_a8[2] != 0) {
    puVar11[2] = local_a8[2];
    *(undefined8 **)(local_a8[2] + 0x18) = puVar11;
  }
  local_a8[2] = puVar11;
  local_a8 = puVar11;
  puVar13 = operator_new(0x20);
  puVar12 = local_b0;
  *puVar13 = std::_Node_base::vftable;
  *(undefined4 *)(puVar13 + 1) = 0x15;
  *(undefined8 *)((longlong)puVar13 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x14) = 0;
  puVar13[3] = puVar11;
  lVar3 = puVar11[2];
  if (lVar3 != 0) {
    puVar13[2] = lVar3;
    *(undefined8 **)(lVar3 + 0x18) = puVar13;
    puVar11 = local_a8;
  }
  puVar11[2] = puVar13;
  *(undefined4 *)(local_b0 + 4) = local_80;
  *(int *)(local_b0 + 5) = local_d8._0_4_ + 1;
  local_a8 = puVar13;
  FUN_1400bb4f0((longlong)local_b0,0,0);
  LOCK();
  piVar1 = (int *)((longlong)puVar12 + 0x2c);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (DAT_14012b058 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14012b058 + 0x2c);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    puVar11 = DAT_14012b058;
    if (*piVar1 == 0) {
      while (puVar11 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)puVar11[2];
        puVar11[2] = 0;
        (**(code **)*puVar11)(puVar11,1);
        puVar11 = puVar13;
      }
    }
  }
  DAT_14012b058 = puVar12;
  if ((void *)auStack_d0._0_8_ != (void *)0x0) {
    _Memory_00 = (void *)auStack_d0._0_8_;
    if ((0xfff < (ulonglong)(lStack_c0 - auStack_d0._0_8_)) &&
       (_Memory_00 = *(void **)(auStack_d0._0_8_ + -8),
       0x1f < (ulonglong)(auStack_d0._0_8_ + (-8 - (longlong)_Memory_00)))) goto LAB_1401011a0;
    free(_Memory_00);
  }
  atexit(FUN_140101590);
  return;
}

