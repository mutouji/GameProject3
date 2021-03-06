// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Game_Define.proto

#include "Game_Define.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
namespace protobuf_Game_5fDefine_2eproto {
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[16];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Game_Define.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021Game_Define.proto*\216\001\n\013EObjectType\022\013\n\007O"
      "T_NONE\020\000\022\r\n\tOT_PLAYER\020\001\022\n\n\006OT_NPC\020\002\022\016\n\nO"
      "T_MONSTER\020\003\022\n\n\006OT_PET\020\004\022\014\n\010OT_MOUNT\020\005\022\016\n"
      "\nOT_MACHINE\020\006\022\016\n\nOT_PARTNER\020\007\022\r\n\tOT_SUMM"
      "ON\020\010*\212\002\n\013EActionType\022\013\n\007AT_NONE\020\000\022\013\n\007AT_"
      "IDLE\020\001\022\016\n\nAT_FIXBODY\020\002\022\013\n\007AT_WALK\020\003\022\n\n\006A"
      "T_RUN\020\004\022\n\n\006AT_FLY\020\005\022\014\n\010AT_SKILL\020\006\022\013\n\007AT_"
      "MINE\020\007\022\013\n\007AT_ROLL\020\010\022\013\n\007AT_JUMP\020\t\022\013\n\007AT_B"
      "ORN\020\n\022\014\n\010AT_DANCE\020\013\022\013\n\007AT_DEAD\020\014\022\014\n\010AT_W"
      "OUND\020\r\022\017\n\013AT_BEATBACK\020\016\022\017\n\013AT_BEATDOWN\020\017"
      "\022\016\n\nAT_BEATFLY\020\020\022\017\n\013AT_FLOATING\020\021*F\n\rEAc"
      "tionStatue\022\013\n\007AS_NONE\020\000\022\013\n\007AS_HURT\020\001\022\014\n\010"
      "AS_START\020\002\022\r\n\006AS_END\020\377\377\377\177*q\n\tECopyType\022\014"
      "\n\010CPT_NONE\020\000\022\r\n\tCPT_LOGIN\020\001\022\017\n\013CPT_SELRO"
      "LE\020\002\022\014\n\010CPT_CITY\020\003\022\014\n\010CPT_MAIN\020\004\022\r\n\tCPT_"
      "WORLD\020\005\022\013\n\007CPT_END\020d*\232\001\n\rEObjectStatus\022\014"
      "\n\010EOS_NONE\020\000\022\014\n\010EOS_DEAD\020\001\022\020\n\014EOS_NOT_MO"
      "VE\020\002\022\020\n\014EOS_NOT_CAST\020\003\022\022\n\016EOS_NOT_BEHURT"
      "\020\004\022\025\n\021EOS_NOT_BECONTROL\020\005\022\017\n\013EOS_STEALTH"
      "\020\006\022\r\n\tEOS_BLIND\020\007*\367\001\n\tEItemType\022\014\n\010EIT_N"
      "ONE\020\000\022\r\n\tEIT_MONEY\020\001\022\016\n\nEIT_ACTION\020\002\022\014\n\010"
      "EIT_ITEM\020\003\022\r\n\tEIT_EQUIP\020\004\022\013\n\007EIT_GEM\020\005\022\016"
      "\n\nEIT_RELICS\020\006\022\r\n\tEIT_MOUNT\020\007\022\013\n\007EIT_PET"
      "\020\010\022\017\n\013EIT_PARTNER\020\t\022\017\n\013EIT_FASHION\020\n\022\013\n\007"
      "EIT_BOX\020\013\022\016\n\nEIT_ACTBOX\020\014\022\014\n\010EIT_CHIP\020\r\022"
      "\014\n\010EIT_RUNE\020\016\022\014\n\010EIT_DRUG\020\017*\212\001\n\010EBagType"
      "\022\014\n\010EBT_NONE\020\000\022\014\n\010EBT_ITEM\020\001\022\013\n\007EBT_GEM\020"
      "\002\022\017\n\013EBT_FASHION\020\003\022\014\n\010EBT_CHIP\020\004\022\014\n\010EBT_"
      "RUNE\020\005\022\014\n\010EBT_TASK\020\006\022\014\n\010EBT_SOUL\020\007\022\014\n\010EB"
      "T_CARD\020\010*4\n\rEFunctionType\022\021\n\rFUNC_BEGIN_"
      "ID\020\000\022\020\n\013FUNC_END_ID\020\226\001*\227\002\n\007EAttrID\022\t\n\005EA"
      "_HP\020\000\022\t\n\005EA_MP\020\001\022\r\n\tEA_HP_MAX\020\002\022\r\n\tEA_MP"
      "_MAX\020\003\022\014\n\010EA_SPEED\020\004\022\r\n\tEA_ATTACK\020\005\022\016\n\nE"
      "A_ELEMENT\020\006\022\020\n\014EA_MAGIC_DEF\020\007\022\021\n\rEA_PHYS"
      "IC_DEF\020\010\022\017\n\013EA_HIT_RATE\020\t\022\014\n\010EA_DODGE\020\n\022"
      "\020\n\014EA_MORE_HURT\020\013\022\020\n\014EA_LESS_HURT\020\014\022\017\n\013E"
      "A_CRIT_HIT\020\r\022\017\n\013EA_CRIT_DEF\020\016\022\020\n\014EA_CRIT"
      "_HURT\020\017\022\017\n\013EA_ATTR_NUM\020\020*4\n\005EShip\022\016\n\nES_"
      "NEUTRAL\020\000\022\r\n\tES_FRIEND\020\001\022\014\n\010ES_ENEMY\020\002*="
      "\n\014EHitShipType\022\014\n\010EHST_ALL\020\000\022\017\n\013EHST_FRI"
      "END\020\001\022\016\n\nEHST_ENEMY\020\002*\031\n\tEBuffType\022\014\n\010BF"
      "T_NONE\020\000*W\n\014EChatChannel\022\014\n\010CHL_NONE\020\000\022\r"
      "\n\tCHL_WORLD\020\001\022\017\n\013CHL_PRIVATE\020\002\022\r\n\tCHL_GU"
      "ILD\020\003\022\n\n\006CHL_GM\020\004*\230\001\n\tEEquipPos\022\014\n\010EEP_N"
      "ONE\020\000\022\016\n\nEEP_HELMET\020\001\022\020\n\014EEP_NECKLACE\020\002\022"
      "\r\n\tEEP_ARMOR\020\003\022\r\n\tEEP_SHOES\020\004\022\r\n\tEEP_WRI"
      "ST\020\005\022\014\n\010EEP_RING\020\006\022\020\n\014EEP_TALISMAN\020\007\022\016\n\n"
      "EEP_WEAPON\020\010*K\n\013ETaskStatus\022\014\n\010ETS_INIT\020"
      "\000\022\016\n\nETS_ACCEPT\020\001\022\016\n\nETS_FINISH\020\002\022\016\n\nETS"
      "_COMMIT\020\003*D\n\013ECopyResult\022\014\n\010ECR_NONE\020\000\022\013"
      "\n\007ECR_WIN\020\001\022\014\n\010ECR_LOST\020\002\022\014\n\010ECR_DRAW\020\003b"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 2047);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Game_Define.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Game_5fDefine_2eproto
const ::google::protobuf::EnumDescriptor* EObjectType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[0];
}
bool EObjectType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EActionType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[1];
}
bool EActionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EActionStatue_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[2];
}
bool EActionStatue_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 268435455:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ECopyType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[3];
}
bool ECopyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 100:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EObjectStatus_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[4];
}
bool EObjectStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EItemType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[5];
}
bool EItemType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EBagType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[6];
}
bool EBagType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EFunctionType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[7];
}
bool EFunctionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 150:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EAttrID_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[8];
}
bool EAttrID_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EShip_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[9];
}
bool EShip_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EHitShipType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[10];
}
bool EHitShipType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EBuffType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[11];
}
bool EBuffType_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EChatChannel_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[12];
}
bool EChatChannel_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EEquipPos_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[13];
}
bool EEquipPos_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskStatus_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[14];
}
bool ETaskStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ECopyResult_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[15];
}
bool ECopyResult_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
