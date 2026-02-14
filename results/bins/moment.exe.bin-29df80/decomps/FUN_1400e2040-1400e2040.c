
/* WARNING: Removing unreachable block (ram,0x0001400e2067) */

void FUN_1400e2040(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 _Size;
  undefined8 uVar3;
  int iVar4;
  size_t _Size_00;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  local_58 = ZEXT1632(auVar12);
  lVar11 = cpuid_basic_info(0);
  local_78 = ZEXT1232(CONCAT48(*(undefined4 *)(lVar11 + 8),
                               CONCAT44(*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 4))))
  ;
  local_98 = ZEXT1632(auVar12);
  _Size_00 = strlen(local_78);
  if ((longlong)_Size_00 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (_Size_00 < 0x10) {
    local_98._16_8_ = _Size_00;
    local_98._24_8_ = 0xf;
    memcpy(local_98,local_78,_Size_00);
    puVar8 = local_98;
  }
  else {
    uVar9 = 0x16;
    if (0x16 < (_Size_00 | 0xf)) {
      uVar9 = _Size_00 | 0xf;
    }
    if (uVar9 < 0xfff) {
      puVar8 = operator_new(uVar9 + 1);
    }
    else {
      pvVar5 = operator_new(uVar9 + 0x28);
      puVar8 = (undefined1 *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar8 + -8) = pvVar5;
    }
    local_98._0_8_ = puVar8;
    local_98._16_8_ = _Size_00;
    local_98._24_8_ = uVar9;
    memcpy(puVar8,local_78,_Size_00);
  }
  puVar8[_Size_00] = 0;
  uVar2 = local_98._0_8_;
  _Size = local_98._16_8_;
  uVar3 = local_98._24_8_;
  puVar8 = local_98;
  if (0xf < (ulonglong)local_98._24_8_) {
    puVar8 = (undefined1 *)local_98._0_8_;
  }
  if (local_98._16_8_ == 0) {
    uVar9 = 0xcbf29ce484222325;
  }
  else {
    uVar6 = (ulonglong)(local_98._16_4_ & 3);
    if ((ulonglong)local_98._16_8_ < 4) {
      uVar9 = 0xcbf29ce484222325;
      uVar7 = 0;
    }
    else {
      uVar9 = 0xcbf29ce484222325;
      uVar7 = 0;
      do {
        uVar9 = ((ulonglong)(byte)puVar8[uVar7 + 3] ^
                ((ulonglong)(byte)puVar8[uVar7 + 2] ^
                ((ulonglong)(byte)puVar8[uVar7 + 1] ^ ((byte)puVar8[uVar7] ^ uVar9) * 0x100000001b3)
                * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
        uVar7 = uVar7 + 4;
      } while ((local_98._16_8_ & 0xfffffffffffffffc) != uVar7);
    }
    if (uVar6 != 0) {
      uVar10 = 0;
      do {
        uVar9 = ((byte)puVar8[uVar10 + uVar7] ^ uVar9) * 0x100000001b3;
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
    }
  }
  lVar11 = *(longlong *)(DAT_14012ac58 + 8 + (uVar9 & DAT_14012ac70) * 0x10);
  if (lVar11 != DAT_14012ac48) {
    lVar1 = *(longlong *)(DAT_14012ac58 + (uVar9 & DAT_14012ac70) * 0x10);
    uVar9 = *(ulonglong *)(lVar11 + 0x20);
    while( true ) {
      if (_Size == uVar9) {
        if (*(ulonglong *)(lVar11 + 0x28) < 0x10) {
          pvVar5 = (void *)(lVar11 + 0x10);
        }
        else {
          pvVar5 = *(void **)(lVar11 + 0x10);
        }
        iVar4 = memcmp(puVar8,pvVar5,_Size);
        if (iVar4 == 0) goto LAB_1400e2267;
      }
      if (lVar11 == lVar1) break;
      lVar11 = *(longlong *)(lVar11 + 8);
      uVar9 = *(ulonglong *)(lVar11 + 0x20);
    }
  }
  lVar11 = 0;
LAB_1400e2267:
  if (0xf < (ulonglong)uVar3) {
    puVar8 = (undefined1 *)uVar2;
    if ((0xfff < uVar3 + 1) &&
       (puVar8 = *(undefined1 **)(uVar2 + -8),
       (undefined1 *)0x1f < (undefined1 *)(uVar2 + (-8 - (longlong)puVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar8);
  }
  if (lVar11 != 0) {
    LOCK();
    DAT_14012b250 = 1;
    UNLOCK();
  }
  return;
}

