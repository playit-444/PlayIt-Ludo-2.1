#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Assets.Scripts.Player
struct Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77;
// Assets.Scripts.Player[]
struct PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F;
// GameManager
struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89;
// GameManager/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D;
// GameManager/Tile
struct Tile_t49BF473E552909D111D297E3E1332788ED4F3A76;
// GameMessage
struct GameMessage_tA9BAFD405201693520651EF9831C04120F862005;
// Pawn
struct Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992;
// Pawn[]
struct PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t64F8A3FCC69F03A49F85382986234D3A4B14F506;
// System.Collections.Generic.IEnumerable`1<Pawn>
struct IEnumerable_1_t80C43AA4EAB493906686565E251AC3680E119C8A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`2<Pawn,System.Boolean>
struct Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameMessage_tA9BAFD405201693520651EF9831C04120F862005_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t64F8A3FCC69F03A49F85382986234D3A4B14F506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB715D89D6589E699639FF0716A2BE52C44EEEE;
IL2CPP_EXTERN_C String_t* _stringLiteral1AC709BD6000B7CD089ABBBF14CFAF228CC11E9C;
IL2CPP_EXTERN_C String_t* _stringLiteral2F565DB17C77B2FA2169003276D278FA1CB7B871;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF08A84F15B98CE4D14B707F4A093B3CC8B853E;
IL2CPP_EXTERN_C String_t* _stringLiteralA56BE00657AB09790B20B8764D15997B57ACDF65;
IL2CPP_EXTERN_C String_t* _stringLiteralCBDC894761432E6E4F3F3CF34CDE6881CFAA0C25;
IL2CPP_EXTERN_C String_t* _stringLiteralD9F9D65FE26CA95561E112517D68F5C0FF5F96CA;
IL2CPP_EXTERN_C String_t* _stringLiteralEF4D40A27007EDEE2935C0C47A8789C2E9045F1B;
IL2CPP_EXTERN_C String_t* _stringLiteralF244885D80A1A3475EA757E7F6A89824A232AB2F;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m4793AA1966D6464F305DA534DB59888C891780D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m050EB49EC1B04A6168DE33894F4DFBFE8BD7D35A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m8380B3A956A27D51AF223C912F9B3DC9CF9ECF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB1C023E4F3598340FA49855BEF41911E2CB2F53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_mDA46A7B3749E3ECB497B3DB68C344C10B41E93C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m2354BE99FD8269843A3C03F5DC54A95B5E689451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTile_t49BF473E552909D111D297E3E1332788ED4F3A76_mE7406DF4925A50B7F3C5C7B382B23A86007C79C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CMovePawnU3Eb__0_mF53695330DF36D09D8F33E38445EB420CD584D38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CMovePawnU3Eb__1_m153C1425DC5B6FCB897A449B5B285C58B3097307_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GameManager_HandleMessageFromJS_mF38468ED27764444C863DEEB1D51EDE5CFDFB2D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Initialize_m817384BE4FBC5FBDF542231B610BD3EBBBEC109B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_MovePawnToGoal_mCBFA469EB8531B931DAF1B2FBABBBBC2A43F9970_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_MovePawnToHome_mB0AB76AC5D99D9BA725D14807ED3A16747FE7FDC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_MovePawn_m7185D246FFFB3B5C3303142BFE65DDF32471F4A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Roll_m97D84DF3F3227C1BD1567DC4257308D575EF39EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_SelectPawn_mE2A1712B0ED83B33FE01A5C8A07CBA4140BA86A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_SendMessageToJS_mDDB88C291AF1B990563EBFFFC8F25B99F61AF0D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F;
struct PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// Assets.Scripts.Player
struct  Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77  : public RuntimeObject
{
public:
	// System.Int64 Assets.Scripts.Player::id
	int64_t ___id_0;
	// System.String Assets.Scripts.Player::name
	String_t* ___name_1;
	// System.Int32 Assets.Scripts.Player::teamId
	int32_t ___teamId_2;
	// System.Int64 Assets.Scripts.Player::<Id>k__BackingField
	int64_t ___U3CIdU3Ek__BackingField_3;
	// System.String Assets.Scripts.Player::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.Int32 Assets.Scripts.Player::<TeamId>k__BackingField
	int32_t ___U3CTeamIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77, ___id_0)); }
	inline int64_t get_id_0() const { return ___id_0; }
	inline int64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_teamId_2() { return static_cast<int32_t>(offsetof(Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77, ___teamId_2)); }
	inline int32_t get_teamId_2() const { return ___teamId_2; }
	inline int32_t* get_address_of_teamId_2() { return &___teamId_2; }
	inline void set_teamId_2(int32_t value)
	{
		___teamId_2 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77, ___U3CIdU3Ek__BackingField_3)); }
	inline int64_t get_U3CIdU3Ek__BackingField_3() const { return ___U3CIdU3Ek__BackingField_3; }
	inline int64_t* get_address_of_U3CIdU3Ek__BackingField_3() { return &___U3CIdU3Ek__BackingField_3; }
	inline void set_U3CIdU3Ek__BackingField_3(int64_t value)
	{
		___U3CIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77, ___U3CNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameU3Ek__BackingField_4() const { return ___U3CNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_4() { return &___U3CNameU3Ek__BackingField_4; }
	inline void set_U3CNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTeamIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77, ___U3CTeamIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CTeamIdU3Ek__BackingField_5() const { return ___U3CTeamIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTeamIdU3Ek__BackingField_5() { return &___U3CTeamIdU3Ek__BackingField_5; }
	inline void set_U3CTeamIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CTeamIdU3Ek__BackingField_5 = value;
	}
};


// GameManager_<>c__DisplayClass26_0
struct  U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D  : public RuntimeObject
{
public:
	// Pawn GameManager_<>c__DisplayClass26_0::pawn
	Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * ___pawn_0;

public:
	inline static int32_t get_offset_of_pawn_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D, ___pawn_0)); }
	inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * get_pawn_0() const { return ___pawn_0; }
	inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 ** get_address_of_pawn_0() { return &___pawn_0; }
	inline void set_pawn_0(Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * value)
	{
		___pawn_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pawn_0), (void*)value);
	}
};


// GameManager_Tile
struct  Tile_t49BF473E552909D111D297E3E1332788ED4F3A76  : public RuntimeObject
{
public:
	// System.Int32 GameManager_Tile::index
	int32_t ___index_0;
	// System.Int32 GameManager_Tile::type
	int32_t ___type_1;
	// System.Int32 GameManager_Tile::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_2;
	// System.Int32 GameManager_Tile::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Tile_t49BF473E552909D111D297E3E1332788ED4F3A76, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Tile_t49BF473E552909D111D297E3E1332788ED4F3A76, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Tile_t49BF473E552909D111D297E3E1332788ED4F3A76, ___U3CIndexU3Ek__BackingField_2)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_2() const { return ___U3CIndexU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_2() { return &___U3CIndexU3Ek__BackingField_2; }
	inline void set_U3CIndexU3Ek__BackingField_2(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Tile_t49BF473E552909D111D297E3E1332788ED4F3A76, ___U3CTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
	}
};


// GameMessage
struct  GameMessage_tA9BAFD405201693520651EF9831C04120F862005  : public RuntimeObject
{
public:
	// System.String GameMessage::<RoomId>k__BackingField
	String_t* ___U3CRoomIdU3Ek__BackingField_0;
	// System.String GameMessage::<Action>k__BackingField
	String_t* ___U3CActionU3Ek__BackingField_1;
	// System.Object[] GameMessage::<Args>k__BackingField
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___U3CArgsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CRoomIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GameMessage_tA9BAFD405201693520651EF9831C04120F862005, ___U3CRoomIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CRoomIdU3Ek__BackingField_0() const { return ___U3CRoomIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRoomIdU3Ek__BackingField_0() { return &___U3CRoomIdU3Ek__BackingField_0; }
	inline void set_U3CRoomIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CRoomIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GameMessage_tA9BAFD405201693520651EF9831C04120F862005, ___U3CActionU3Ek__BackingField_1)); }
	inline String_t* get_U3CActionU3Ek__BackingField_1() const { return ___U3CActionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CActionU3Ek__BackingField_1() { return &___U3CActionU3Ek__BackingField_1; }
	inline void set_U3CActionU3Ek__BackingField_1(String_t* value)
	{
		___U3CActionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CArgsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameMessage_tA9BAFD405201693520651EF9831C04120F862005, ___U3CArgsU3Ek__BackingField_2)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_U3CArgsU3Ek__BackingField_2() const { return ___U3CArgsU3Ek__BackingField_2; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_U3CArgsU3Ek__BackingField_2() { return &___U3CArgsU3Ek__BackingField_2; }
	inline void set_U3CArgsU3Ek__BackingField_2(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___U3CArgsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CArgsU3Ek__BackingField_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// GameManager_TileType
struct  TileType_t2D75453F96B840A2C64A411DE9B521887214AA8A 
{
public:
	// System.Int32 GameManager_TileType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileType_t2D75453F96B840A2C64A411DE9B521887214AA8A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.Func`2<Pawn,System.Boolean>
struct  Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// GameManager
struct  GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single GameManager::pieceMoveSpeed
	float ___pieceMoveSpeed_4;
	// UnityEngine.GameObject GameManager::homePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___homePrefab_5;
	// UnityEngine.GameObject GameManager::pawnPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___pawnPrefab_6;
	// UnityEngine.Vector3[] GameManager::homePositions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___homePositions_7;
	// UnityEngine.Material[] GameManager::teamColours
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___teamColours_8;
	// UnityEngine.GameObject GameManager::homesObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___homesObject_9;
	// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32> GameManager::playerHomeEntrances
	RuntimeObject* ___playerHomeEntrances_10;
	// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32> GameManager::playerGoalEntrances
	RuntimeObject* ___playerGoalEntrances_11;
	// UnityEngine.GameObject[] GameManager::tiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___tiles_12;
	// UnityEngine.GameObject[] GameManager::goalRoadTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___goalRoadTiles_13;
	// UnityEngine.GameObject[] GameManager::goals
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___goals_14;
	// Assets.Scripts.Player[] GameManager::players
	PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* ___players_15;
	// Assets.Scripts.Player GameManager::ownPlayer
	Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * ___ownPlayer_16;
	// Pawn[] GameManager::playerPawns
	PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6* ___playerPawns_17;
	// UnityEngine.Camera GameManager::mainCam
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___mainCam_18;
	// Pawn GameManager::selectedPawn
	Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * ___selectedPawn_19;
	// System.Int64 GameManager::playerTurn
	int64_t ___playerTurn_20;
	// Assets.Scripts.Player[] GameManager::<Players>k__BackingField
	PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* ___U3CPlayersU3Ek__BackingField_21;
	// UnityEngine.Canvas GameManager::canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___canvas_22;
	// UnityEngine.UI.Text GameManager::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_23;

public:
	inline static int32_t get_offset_of_pieceMoveSpeed_4() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___pieceMoveSpeed_4)); }
	inline float get_pieceMoveSpeed_4() const { return ___pieceMoveSpeed_4; }
	inline float* get_address_of_pieceMoveSpeed_4() { return &___pieceMoveSpeed_4; }
	inline void set_pieceMoveSpeed_4(float value)
	{
		___pieceMoveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_homePrefab_5() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___homePrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_homePrefab_5() const { return ___homePrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_homePrefab_5() { return &___homePrefab_5; }
	inline void set_homePrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___homePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___homePrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_pawnPrefab_6() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___pawnPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_pawnPrefab_6() const { return ___pawnPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_pawnPrefab_6() { return &___pawnPrefab_6; }
	inline void set_pawnPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___pawnPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pawnPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_homePositions_7() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___homePositions_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_homePositions_7() const { return ___homePositions_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_homePositions_7() { return &___homePositions_7; }
	inline void set_homePositions_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___homePositions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___homePositions_7), (void*)value);
	}

	inline static int32_t get_offset_of_teamColours_8() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___teamColours_8)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_teamColours_8() const { return ___teamColours_8; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_teamColours_8() { return &___teamColours_8; }
	inline void set_teamColours_8(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___teamColours_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teamColours_8), (void*)value);
	}

	inline static int32_t get_offset_of_homesObject_9() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___homesObject_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_homesObject_9() const { return ___homesObject_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_homesObject_9() { return &___homesObject_9; }
	inline void set_homesObject_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___homesObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___homesObject_9), (void*)value);
	}

	inline static int32_t get_offset_of_playerHomeEntrances_10() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___playerHomeEntrances_10)); }
	inline RuntimeObject* get_playerHomeEntrances_10() const { return ___playerHomeEntrances_10; }
	inline RuntimeObject** get_address_of_playerHomeEntrances_10() { return &___playerHomeEntrances_10; }
	inline void set_playerHomeEntrances_10(RuntimeObject* value)
	{
		___playerHomeEntrances_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerHomeEntrances_10), (void*)value);
	}

	inline static int32_t get_offset_of_playerGoalEntrances_11() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___playerGoalEntrances_11)); }
	inline RuntimeObject* get_playerGoalEntrances_11() const { return ___playerGoalEntrances_11; }
	inline RuntimeObject** get_address_of_playerGoalEntrances_11() { return &___playerGoalEntrances_11; }
	inline void set_playerGoalEntrances_11(RuntimeObject* value)
	{
		___playerGoalEntrances_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerGoalEntrances_11), (void*)value);
	}

	inline static int32_t get_offset_of_tiles_12() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___tiles_12)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_tiles_12() const { return ___tiles_12; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_tiles_12() { return &___tiles_12; }
	inline void set_tiles_12(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___tiles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiles_12), (void*)value);
	}

	inline static int32_t get_offset_of_goalRoadTiles_13() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___goalRoadTiles_13)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_goalRoadTiles_13() const { return ___goalRoadTiles_13; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_goalRoadTiles_13() { return &___goalRoadTiles_13; }
	inline void set_goalRoadTiles_13(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___goalRoadTiles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goalRoadTiles_13), (void*)value);
	}

	inline static int32_t get_offset_of_goals_14() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___goals_14)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_goals_14() const { return ___goals_14; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_goals_14() { return &___goals_14; }
	inline void set_goals_14(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___goals_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goals_14), (void*)value);
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___players_15)); }
	inline PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* get_players_15() const { return ___players_15; }
	inline PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_ownPlayer_16() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___ownPlayer_16)); }
	inline Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * get_ownPlayer_16() const { return ___ownPlayer_16; }
	inline Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 ** get_address_of_ownPlayer_16() { return &___ownPlayer_16; }
	inline void set_ownPlayer_16(Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * value)
	{
		___ownPlayer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ownPlayer_16), (void*)value);
	}

	inline static int32_t get_offset_of_playerPawns_17() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___playerPawns_17)); }
	inline PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6* get_playerPawns_17() const { return ___playerPawns_17; }
	inline PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6** get_address_of_playerPawns_17() { return &___playerPawns_17; }
	inline void set_playerPawns_17(PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6* value)
	{
		___playerPawns_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPawns_17), (void*)value);
	}

	inline static int32_t get_offset_of_mainCam_18() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___mainCam_18)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_mainCam_18() const { return ___mainCam_18; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_mainCam_18() { return &___mainCam_18; }
	inline void set_mainCam_18(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___mainCam_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCam_18), (void*)value);
	}

	inline static int32_t get_offset_of_selectedPawn_19() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___selectedPawn_19)); }
	inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * get_selectedPawn_19() const { return ___selectedPawn_19; }
	inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 ** get_address_of_selectedPawn_19() { return &___selectedPawn_19; }
	inline void set_selectedPawn_19(Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * value)
	{
		___selectedPawn_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedPawn_19), (void*)value);
	}

	inline static int32_t get_offset_of_playerTurn_20() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___playerTurn_20)); }
	inline int64_t get_playerTurn_20() const { return ___playerTurn_20; }
	inline int64_t* get_address_of_playerTurn_20() { return &___playerTurn_20; }
	inline void set_playerTurn_20(int64_t value)
	{
		___playerTurn_20 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___U3CPlayersU3Ek__BackingField_21)); }
	inline PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* get_U3CPlayersU3Ek__BackingField_21() const { return ___U3CPlayersU3Ek__BackingField_21; }
	inline PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F** get_address_of_U3CPlayersU3Ek__BackingField_21() { return &___U3CPlayersU3Ek__BackingField_21; }
	inline void set_U3CPlayersU3Ek__BackingField_21(PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* value)
	{
		___U3CPlayersU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayersU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_22() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___canvas_22)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_canvas_22() const { return ___canvas_22; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_canvas_22() { return &___canvas_22; }
	inline void set_canvas_22(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___canvas_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_22), (void*)value);
	}

	inline static int32_t get_offset_of_text_23() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___text_23)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_23() const { return ___text_23; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_23() { return &___text_23; }
	inline void set_text_23(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_23), (void*)value);
	}
};


// Pawn
struct  Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Pawn::id
	int32_t ___id_4;
	// System.Int32 Pawn::position
	int32_t ___position_5;
	// System.Int64 Pawn::owner
	int64_t ___owner_6;
	// System.Boolean Pawn::onGoalTile
	bool ___onGoalTile_7;
	// System.Int32 Pawn::teamId
	int32_t ___teamId_8;
	// System.Int32 Pawn::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992, ___position_5)); }
	inline int32_t get_position_5() const { return ___position_5; }
	inline int32_t* get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(int32_t value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_owner_6() { return static_cast<int32_t>(offsetof(Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992, ___owner_6)); }
	inline int64_t get_owner_6() const { return ___owner_6; }
	inline int64_t* get_address_of_owner_6() { return &___owner_6; }
	inline void set_owner_6(int64_t value)
	{
		___owner_6 = value;
	}

	inline static int32_t get_offset_of_onGoalTile_7() { return static_cast<int32_t>(offsetof(Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992, ___onGoalTile_7)); }
	inline bool get_onGoalTile_7() const { return ___onGoalTile_7; }
	inline bool* get_address_of_onGoalTile_7() { return &___onGoalTile_7; }
	inline void set_onGoalTile_7(bool value)
	{
		___onGoalTile_7 = value;
	}

	inline static int32_t get_offset_of_teamId_8() { return static_cast<int32_t>(offsetof(Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992, ___teamId_8)); }
	inline int32_t get_teamId_8() const { return ___teamId_8; }
	inline int32_t* get_address_of_teamId_8() { return &___teamId_8; }
	inline void set_teamId_8(int32_t value)
	{
		___teamId_8 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992, ___U3CIdU3Ek__BackingField_9)); }
	inline int32_t get_U3CIdU3Ek__BackingField_9() const { return ___U3CIdU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_9() { return &___U3CIdU3Ek__BackingField_9; }
	inline void set_U3CIdU3Ek__BackingField_9(int32_t value)
	{
		___U3CIdU3Ek__BackingField_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Assets.Scripts.Player[]
struct PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * m_Items[1];

public:
	inline Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * m_Items[1];

public:
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Pawn[]
struct PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * m_Items[1];

public:
	inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_m20A1F6AF8500AC3F787AF7D68CC6DE42B2612B9D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_mF8684FFB3D1B521FA5AF993089EBE02FF4690B18_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebGLInput::set_captureAllKeyboardInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_set_captureAllKeyboardInput_m4D4615B54D4CED52198FFE53BDAE27548C0194E6 (bool ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___p0, const RuntimeMethod* method);
// System.Int32 GameManager::GetHomeEntranceIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_GetHomeEntranceIndex_m3028CA10BA50B857B77460AAC8C139FFC0BA82E8 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___teamId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0 (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCE618579F667A62D15CB74CEF76147136EB2D495 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Pawn>()
inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * GameObject_GetComponent_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m2354BE99FD8269843A3C03F5DC54A95B5E689451 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GameManager::SelectPawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SelectPawn_mE2A1712B0ED83B33FE01A5C8A07CBA4140BA86A7 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m7AA360E8D19CAA86BF5623089968D2D63CFF74BB (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void GameManager/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m123AB681A4A93ABBC3C2834CCE54611EE10D172E (U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * __this, const RuntimeMethod* method);
// System.Int64 Pawn::get_Owner()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Pawn_get_Owner_m04D22975D0AF4E7B90A59E2D36E99F5C785319AB_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method);
// System.Int32 Pawn::get_Position()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method);
// System.Boolean Pawn::get_OnGoalTile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Pawn_get_OnGoalTile_m0F34F5E774D63920DF4496C065A71BFD9ACF1D27_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method);
// System.Void GameManager::MovePawnToGoal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_MovePawnToGoal_mCBFA469EB8531B931DAF1B2FBABBBBC2A43F9970 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___idx0, const RuntimeMethod* method);
// System.Int32 Pawn::get_TeamId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Pawn::set_Position(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameManager/Tile>()
inline Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * GameObject_GetComponent_TisTile_t49BF473E552909D111D297E3E1332788ED4F3A76_mE7406DF4925A50B7F3C5C7B382B23A86007C79C6 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Int32 GameManager/Tile::get_Index()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Tile_get_Index_m110EA0B10C4D631091E7996E518C04481B47E89E_inline (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Pawn,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB1C023E4F3598340FA49855BEF41911E2CB2F53D (Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<Pawn>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m8380B3A956A27D51AF223C912F9B3DC9CF9ECF5B (RuntimeObject* ___source0, Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared)(___source0, ___predicate1, method);
}
// System.Int32 System.Linq.Enumerable::Count<Pawn>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m4793AA1966D6464F305DA534DB59888C891780D8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_m20A1F6AF8500AC3F787AF7D68CC6DE42B2612B9D_gshared)(___source0, method);
}
// System.Int32 GameManager/Tile::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Tile_get_Type_m93C8401CFFA46068A1DF8482772355B35D24373F_inline (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, const RuntimeMethod* method);
// System.Int32 Pawn::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Pawn_get_Id_m53D6E7635390F18BDC09DE960F63E5E60C73A2C8_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method);
// System.Void GameManager::MovePawnToHome(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_MovePawnToHome_mB0AB76AC5D99D9BA725D14807ED3A16747FE7FDC (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___idx0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<Pawn>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * Enumerable_First_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m050EB49EC1B04A6168DE33894F4DFBFE8BD7D35A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mF8684FFB3D1B521FA5AF993089EBE02FF4690B18_gshared)(___source0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Assets.Scripts.Player::get_TeamId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Player_get_TeamId_m50F34AA3BDCF074C390EA97B543BC700038E4984_inline (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Pawn>()
inline Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * GameObject_AddComponent_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_mDA46A7B3749E3ECB497B3DB68C344C10B41E93C9 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void Pawn::set_Id(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Pawn_set_Id_m1FAD5329A9C84E5B23602499511CDEB5639086E3_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int64 Assets.Scripts.Player::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Player_get_Id_mE225C1783918A8A6644F7790EE256B480D077A40_inline (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, const RuntimeMethod* method);
// System.Void Pawn::set_Owner(System.Int64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Pawn_set_Owner_m30CB3E5DFD903421E38CE0449E7D10EA3F594A3C_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void Pawn::set_TeamId(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Pawn_set_TeamId_m57127E97E0CFA3AD1E81A9724FCBB91E6A15DEDE_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void GameMessage::.ctor(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage__ctor_m60130ED37B1584D4421E99502FBAFD6D5C15B1BA (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, String_t* ___roomId0, String_t* ___action1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void GameManager::SendMessageToJS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SendMessageToJS_mDDB88C291AF1B990563EBFFFC8F25B99F61AF0D5 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void GameManager::HandleUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleUnityMessage_mDE3CBF4702A2EDE05D368AEDC576D4F2A291D07B (String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void GameMessage::set_RoomId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameMessage_set_RoomId_m13AAA68B9BFA8337D137A152CBB8C87D382456E6_inline (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GameMessage::set_Action(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameMessage_set_Action_m775731E0CDEBF5151DCD47B2042F8E1EBEE262B8_inline (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GameMessage::set_Args(System.Object[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameMessage_set_Args_m18E2C19F44ED4D597A2DE6FC3977B1DC7FE4F8BB_inline (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 Assets.Scripts.Player::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Player_get_Id_mE225C1783918A8A6644F7790EE256B480D077A40 (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, const RuntimeMethod* method)
{
	{
		// public long Id { get; set; }
		int64_t L_0 = __this->get_U3CIdU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Assets.Scripts.Player::set_Id(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Id_m3D45FC9BCC3A33B1F963F2A4D451B0978D5D6367 (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public long Id { get; set; }
		int64_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Assets.Scripts.Player::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_Name_mC5EF07EF7FA6B79D7A9F7714D722A29FCFB5FE1D (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Assets.Scripts.Player::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Name_mE7DE4466B32BEF62818AA622E556EAC7426B13CF (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Assets.Scripts.Player::get_TeamId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_TeamId_m50F34AA3BDCF074C390EA97B543BC700038E4984 (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, const RuntimeMethod* method)
{
	{
		// public int TeamId { get; set; }
		int32_t L_0 = __this->get_U3CTeamIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Assets.Scripts.Player::set_TeamId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_TeamId_mE298FA6ED177C611C36505F5831CCA230F21FA94 (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int TeamId { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTeamIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Assets.Scripts.Player::.ctor(System.Int64,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m64DAEF04E6A071B1DBDD6BDFD6156ECB4EFFC109 (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, int64_t ___id0, String_t* ___name1, int32_t ___teamId2, const RuntimeMethod* method)
{
	{
		// public Player(long id, string name, int teamId)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.id = id;
		int64_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.name = name;
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		// this.teamId = teamId;
		int32_t L_2 = ___teamId2;
		__this->set_teamId_2(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DEFAULT_CALL HandleUnityMessage(char*);
// System.Void GameManager::HandleUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleUnityMessage_mDE3CBF4702A2EDE05D368AEDC576D4F2A291D07B (String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(HandleUnityMessage)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// Assets.Scripts.Player[] GameManager::get_Players()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* GameManager_get_Players_mFD2E92FC2E73D7126BEE562ADF442255A16454D0 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		// public Player[] Players { get; set; }
		PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* L_0 = __this->get_U3CPlayersU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void GameManager::set_Players(Assets.Scripts.Player[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_Players_m529BE7ABF36B6531EA987CA7F3808E7D5CCED693 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* ___value0, const RuntimeMethod* method)
{
	{
		// public Player[] Players { get; set; }
		PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* L_0 = ___value0;
		__this->set_U3CPlayersU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// WebGLInput.captureAllKeyboardInput = false;
		WebGLInput_set_captureAllKeyboardInput_m4D4615B54D4CED52198FFE53BDAE27548C0194E6((bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_00b9;
	}

IL_000d:
	{
		// GameObject home = Instantiate(homePrefab, homePositions[i], Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_homePrefab_5();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = __this->get_homePositions_7();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_0, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// home.GetComponent<MeshRenderer>().material = teamColours[i];
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = L_6;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_8 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_7, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_9 = __this->get_teamColours_8();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_8, L_12, /*hidden argument*/NULL);
		// home.transform.SetParent(homesObject.transform);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_homesObject_9();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_13, L_15, /*hidden argument*/NULL);
		// goals[i].GetComponent<MeshRenderer>().material = teamColours[i];
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_16 = __this->get_goals_14();
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_20 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_19, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_21 = __this->get_teamColours_8();
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_20, L_24, /*hidden argument*/NULL);
		// tiles[GetHomeEntranceIndex(i)].GetComponent<MeshRenderer>().material = teamColours[i];
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_25 = __this->get_tiles_12();
		int32_t L_26 = V_0;
		int32_t L_27 = GameManager_GetHomeEntranceIndex_m3028CA10BA50B857B77460AAC8C139FFC0BA82E8(__this, L_26, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_30 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_29, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_31 = __this->get_teamColours_8();
		int32_t L_32 = V_0;
		int32_t L_33 = L_32;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_30, L_34, /*hidden argument*/NULL);
		// for (int j = 0; j < 5; j++)
		V_1 = 0;
		goto IL_00b1;
	}

IL_008f:
	{
		// goalRoadTiles[(i * 5) + j].GetComponent<MeshRenderer>().material = teamColours[i];
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_35 = __this->get_goalRoadTiles_13();
		int32_t L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)5)), (int32_t)L_37));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_40 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_39, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_41 = __this->get_teamColours_8();
		int32_t L_42 = V_0;
		int32_t L_43 = L_42;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_40, L_44, /*hidden argument*/NULL);
		// for (int j = 0; j < 5; j++)
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00b1:
	{
		// for (int j = 0; j < 5; j++)
		int32_t L_46 = V_1;
		if ((((int32_t)L_46) < ((int32_t)5)))
		{
			goto IL_008f;
		}
	}
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00b9:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) < ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * V_1 = NULL;
	{
		// if (Input.GetButtonDown("Fire1"))
		bool L_0 = Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0(_stringLiteral0CB715D89D6589E699639FF0716A2BE52C44EEEE, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		// Debug.Log("fired!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral2F565DB17C77B2FA2169003276D278FA1CB7B871, /*hidden argument*/NULL);
		// Ray ray = mainCam.ScreenPointToRay(Input.mousePosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = __this->get_mainCam_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_3 = Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3(L_1, L_2, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_4 = Physics_Raycast_mCE618579F667A62D15CB74CEF76147136EB2D495(L_3, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		// GameObject obj = hit.transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		// Pawn p = obj.GetComponent<Pawn>();
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_7 = GameObject_GetComponent_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m2354BE99FD8269843A3C03F5DC54A95B5E689451(L_6, /*hidden argument*/GameObject_GetComponent_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m2354BE99FD8269843A3C03F5DC54A95B5E689451_RuntimeMethod_var);
		V_1 = L_7;
		// if (p != null)
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// Debug.Log("selected " + p.name);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_10 = V_1;
		String_t* L_11 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF244885D80A1A3475EA757E7F6A89824A232AB2F, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// selectedPawn = p;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_13 = V_1;
		__this->set_selectedPawn_19(L_13);
		// SelectPawn();
		GameManager_SelectPawn_mE2A1712B0ED83B33FE01A5C8A07CBA4140BA86A7(__this, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (Input.GetButtonUp("Fire1"))
		bool L_14 = Input_GetButtonUp_m7AA360E8D19CAA86BF5623089968D2D63CFF74BB(_stringLiteral0CB715D89D6589E699639FF0716A2BE52C44EEEE, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007f;
		}
	}
	{
		// selectedPawn = null;
		__this->set_selectedPawn_19((Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 *)NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void GameManager::MovePawn(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_MovePawn_m7185D246FFFB3B5C3303142BFE65DDF32471F4A7 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___idx0, int32_t ___moves1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_MovePawn_m7185D246FFFB3B5C3303142BFE65DDF32471F4A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_5 = NULL;
	int32_t V_6 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_11 = NULL;
	int32_t V_12 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_13 = NULL;
	{
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_0 = (U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass26_0__ctor_m123AB681A4A93ABBC3C2834CCE54611EE10D172E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Pawn pawn = playerPawns[idx];
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_1 = V_0;
		PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6* L_2 = __this->get_playerPawns_17();
		int32_t L_3 = ___idx0;
		int32_t L_4 = L_3;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		L_1->set_pawn_0(L_5);
		// int movesLeft = moves;
		int32_t L_6 = ___moves1;
		V_1 = L_6;
		// long ownerGoalIndex = playerGoalEntrances[pawn.Owner];
		RuntimeObject* L_7 = __this->get_playerGoalEntrances_11();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_8 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_9 = L_8->get_pawn_0();
		int64_t L_10 = Pawn_get_Owner_m04D22975D0AF4E7B90A59E2D36E99F5C785319AB_inline(L_9, /*hidden argument*/NULL);
		int32_t L_11 = InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::get_Item(!0) */, IDictionary_2_t64F8A3FCC69F03A49F85382986234D3A4B14F506_il2cpp_TypeInfo_var, L_7, L_10);
		V_2 = (((int64_t)((int64_t)L_11)));
		// int diff = tiles.Length - pawn.Position;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_12 = __this->get_tiles_12();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_13 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_14 = L_13->get_pawn_0();
		Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_14, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// for (int i = pawn.Position; i < tiles.Length; i++)
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_15 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_16 = L_15->get_pawn_0();
		int32_t L_17 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		goto IL_02da;
	}

IL_0055:
	{
		// if (pawn.OnGoalTile && pawn.Position != 6)
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_18 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_19 = L_18->get_pawn_0();
		bool L_20 = Pawn_get_OnGoalTile_m0F34F5E774D63920DF4496C065A71BFD9ACF1D27_inline(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_01e8;
		}
	}
	{
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_21 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_22 = L_21->get_pawn_0();
		int32_t L_23 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) == ((int32_t)6)))
		{
			goto IL_01e8;
		}
	}
	{
		// int atGoal = (pawn.Position + movesLeft);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_24 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_25 = L_24->get_pawn_0();
		int32_t L_26 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27));
		// if (atGoal > 5)
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) <= ((int32_t)5)))
		{
			goto IL_0092;
		}
	}
	{
		// atGoal = (5 - (atGoal - 5));
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)5, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)5))));
	}

IL_0092:
	{
		// if (atGoal == 0)
		int32_t L_30 = V_6;
		if (L_30)
		{
			goto IL_017f;
		}
	}
	{
		// MovePawnToGoal(idx);
		int32_t L_31 = ___idx0;
		GameManager_MovePawnToGoal_mCBFA469EB8531B931DAF1B2FBABBBBC2A43F9970(__this, L_31, /*hidden argument*/NULL);
		// GameObject newTile1 = null;
		V_7 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		// for (int k = 0; k < 4; k++)
		V_9 = 0;
		goto IL_00d3;
	}

IL_00a8:
	{
		// if (k == pawn.TeamId)
		int32_t L_32 = V_9;
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_33 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_34 = L_33->get_pawn_0();
		int32_t L_35 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_34, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)L_35))))
		{
			goto IL_00cd;
		}
	}
	{
		// newTile1 = goals[pawn.TeamId];
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_36 = __this->get_goals_14();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_37 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_38 = L_37->get_pawn_0();
		int32_t L_39 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_38, /*hidden argument*/NULL);
		int32_t L_40 = L_39;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_7 = L_41;
		// break;
		goto IL_00d8;
	}

IL_00cd:
	{
		// for (int k = 0; k < 4; k++)
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00d3:
	{
		// for (int k = 0; k < 4; k++)
		int32_t L_43 = V_9;
		if ((((int32_t)L_43) < ((int32_t)4)))
		{
			goto IL_00a8;
		}
	}

IL_00d8:
	{
		// if (newTile1 == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_45 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_44, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00ec;
		}
	}
	{
		// Debug.Log("oh no");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralEF4D40A27007EDEE2935C0C47A8789C2E9045F1B, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// int availableSpot = 0;
		V_8 = 0;
		// for (int j = 0; j < newTile1.transform.childCount; j++)
		V_10 = 0;
		goto IL_011b;
	}

IL_00f4:
	{
		// if (!newTile1.transform.GetChild(j).GetChild(0))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_46 = V_7;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_47 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_46, /*hidden argument*/NULL);
		int32_t L_48 = V_10;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_47, L_48, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_49, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_51 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0115;
		}
	}
	{
		// availableSpot = j;
		int32_t L_52 = V_10;
		V_8 = L_52;
		// break;
		goto IL_012b;
	}

IL_0115:
	{
		// for (int j = 0; j < newTile1.transform.childCount; j++)
		int32_t L_53 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_011b:
	{
		// for (int j = 0; j < newTile1.transform.childCount; j++)
		int32_t L_54 = V_10;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_55 = V_7;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_55, /*hidden argument*/NULL);
		int32_t L_57 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_56, /*hidden argument*/NULL);
		if ((((int32_t)L_54) < ((int32_t)L_57)))
		{
			goto IL_00f4;
		}
	}

IL_012b:
	{
		// pawn.Position = 6;
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_58 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_59 = L_58->get_pawn_0();
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_59, 6, /*hidden argument*/NULL);
		// pawn.transform.position =
		//     Vector3.Lerp(
		//         pawn.transform.position,
		//         newTile1.transform.GetChild(availableSpot).position,
		//         pieceMoveSpeed * movesLeft);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_60 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_61 = L_60->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_61, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_63 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_64 = L_63->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_65 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_64, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_65, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_67 = V_7;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_68 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_67, /*hidden argument*/NULL);
		int32_t L_69 = V_8;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_70 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_68, L_69, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_70, /*hidden argument*/NULL);
		float L_72 = __this->get_pieceMoveSpeed_4();
		int32_t L_73 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_66, L_71, ((float)il2cpp_codegen_multiply((float)L_72, (float)(((float)((float)L_73))))), /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_62, L_74, /*hidden argument*/NULL);
		// movesLeft = 0;
		V_1 = 0;
		// break;
		goto IL_02e9;
	}

IL_017f:
	{
		// else if (atGoal < 5)
		int32_t L_75 = V_6;
		if ((((int32_t)L_75) >= ((int32_t)5)))
		{
			goto IL_02e9;
		}
	}
	{
		// pawn.Position = atGoal;
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_76 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_77 = L_76->get_pawn_0();
		int32_t L_78 = V_6;
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_77, L_78, /*hidden argument*/NULL);
		// pawn.transform.position =
		//     Vector3.Lerp(
		//         pawn.transform.position,
		//         goalRoadTiles[(pawn.TeamId * 4) + atGoal].transform.position,
		//         pieceMoveSpeed * movesLeft);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_79 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_80 = L_79->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_81 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_80, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_82 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_83 = L_82->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_84 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_83, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_84, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_86 = __this->get_goalRoadTiles_13();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_87 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_88 = L_87->get_pawn_0();
		int32_t L_89 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_88, /*hidden argument*/NULL);
		int32_t L_90 = V_6;
		int32_t L_91 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_89, (int32_t)4)), (int32_t)L_90));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_92 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_93 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_92, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_93, /*hidden argument*/NULL);
		float L_95 = __this->get_pieceMoveSpeed_4();
		int32_t L_96 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_85, L_94, ((float)il2cpp_codegen_multiply((float)L_95, (float)(((float)((float)L_96))))), /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_81, L_97, /*hidden argument*/NULL);
		// break;
		goto IL_02e9;
	}

IL_01e8:
	{
		// if (i == ownerGoalIndex && movesLeft > 0)
		int32_t L_98 = V_4;
		int64_t L_99 = V_2;
		if ((!(((uint64_t)(((int64_t)((int64_t)L_98)))) == ((uint64_t)L_99))))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_100 = V_1;
		if ((((int32_t)L_100) <= ((int32_t)0)))
		{
			goto IL_026c;
		}
	}
	{
		// if (movesLeft == 6)
		int32_t L_101 = V_1;
		if ((!(((uint32_t)L_101) == ((uint32_t)6))))
		{
			goto IL_01ff;
		}
	}
	{
		// MovePawnToGoal(idx);
		int32_t L_102 = ___idx0;
		GameManager_MovePawnToGoal_mCBFA469EB8531B931DAF1B2FBABBBBC2A43F9970(__this, L_102, /*hidden argument*/NULL);
		// }
		goto IL_0268;
	}

IL_01ff:
	{
		// GameObject newTile2 = goalRoadTiles[(pawn.TeamId * 4) + movesLeft];
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_103 = __this->get_goalRoadTiles_13();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_104 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_105 = L_104->get_pawn_0();
		int32_t L_106 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_105, /*hidden argument*/NULL);
		int32_t L_107 = V_1;
		int32_t L_108 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_106, (int32_t)4)), (int32_t)L_107));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_109 = (L_103)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		V_11 = L_109;
		// pawn.Position = newTile2.GetComponent<Tile>().Index;
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_110 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_111 = L_110->get_pawn_0();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_112 = V_11;
		Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * L_113 = GameObject_GetComponent_TisTile_t49BF473E552909D111D297E3E1332788ED4F3A76_mE7406DF4925A50B7F3C5C7B382B23A86007C79C6(L_112, /*hidden argument*/GameObject_GetComponent_TisTile_t49BF473E552909D111D297E3E1332788ED4F3A76_mE7406DF4925A50B7F3C5C7B382B23A86007C79C6_RuntimeMethod_var);
		int32_t L_114 = Tile_get_Index_m110EA0B10C4D631091E7996E518C04481B47E89E_inline(L_113, /*hidden argument*/NULL);
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_111, L_114, /*hidden argument*/NULL);
		// pawn.transform.position = Vector3.Lerp(pawn.transform.position, newTile2.transform.position, pieceMoveSpeed * movesLeft);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_115 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_116 = L_115->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_117 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_116, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_118 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_119 = L_118->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_120 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_119, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_121 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_120, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_122 = V_11;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_123 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_122, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_124 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_123, /*hidden argument*/NULL);
		float L_125 = __this->get_pieceMoveSpeed_4();
		int32_t L_126 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_121, L_124, ((float)il2cpp_codegen_multiply((float)L_125, (float)(((float)((float)L_126))))), /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_117, L_127, /*hidden argument*/NULL);
	}

IL_0268:
	{
		// movesLeft = 0;
		V_1 = 0;
		// break;
		goto IL_02e9;
	}

IL_026c:
	{
		// GameObject newTile = tiles[pawn.Position + 1];
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_128 = __this->get_tiles_12();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_129 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_130 = L_129->get_pawn_0();
		int32_t L_131 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_130, /*hidden argument*/NULL);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_133 = (L_128)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		V_5 = L_133;
		// pawn.transform.position = Vector3.Lerp(pawn.transform.position, newTile.transform.position, pieceMoveSpeed);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_134 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_135 = L_134->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_136 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_135, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_137 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_138 = L_137->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_139 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_138, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_140 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_139, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_141 = V_5;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_142 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_141, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_143 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_142, /*hidden argument*/NULL);
		float L_144 = __this->get_pieceMoveSpeed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_145 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_140, L_143, L_144, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_136, L_145, /*hidden argument*/NULL);
		// pawn.Position++;
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_146 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_147 = L_146->get_pawn_0();
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_148 = L_147;
		int32_t L_149 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_148, /*hidden argument*/NULL);
		V_12 = L_149;
		int32_t L_150 = V_12;
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_148, ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1)), /*hidden argument*/NULL);
		// movesLeft--;
		int32_t L_151 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_151, (int32_t)1));
		// for (int i = pawn.Position; i < tiles.Length; i++)
		int32_t L_152 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
	}

IL_02da:
	{
		// for (int i = pawn.Position; i < tiles.Length; i++)
		int32_t L_153 = V_4;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_154 = __this->get_tiles_12();
		if ((((int32_t)L_153) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length)))))))
		{
			goto IL_0055;
		}
	}

IL_02e9:
	{
		// if (pawn.Position == tiles.Length - 1)
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_155 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_156 = L_155->get_pawn_0();
		int32_t L_157 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_156, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_158 = __this->get_tiles_12();
		if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_158)->max_length)))), (int32_t)1))))))
		{
			goto IL_0351;
		}
	}
	{
		// pawn.Position = 0;
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_159 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_160 = L_159->get_pawn_0();
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_160, 0, /*hidden argument*/NULL);
		// GameObject newTile = tiles[0];
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_161 = __this->get_tiles_12();
		int32_t L_162 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_163 = (L_161)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_162));
		V_13 = L_163;
		// pawn.transform.position = Vector3.Lerp(pawn.transform.position, newTile.transform.position, pieceMoveSpeed);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_164 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_165 = L_164->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_166 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_165, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_167 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_168 = L_167->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_169 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_168, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_170 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_169, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_171 = V_13;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_172 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_171, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_173 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_172, /*hidden argument*/NULL);
		float L_174 = __this->get_pieceMoveSpeed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_175 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_170, L_173, L_174, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_166, L_175, /*hidden argument*/NULL);
		// movesLeft--;
		int32_t L_176 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_176, (int32_t)1));
	}

IL_0351:
	{
		// } while (movesLeft > 0);
		int32_t L_177 = V_1;
		if ((((int32_t)L_177) > ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		// if (pawn.OnGoalTile)
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_178 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_179 = L_178->get_pawn_0();
		bool L_180 = Pawn_get_OnGoalTile_m0F34F5E774D63920DF4496C065A71BFD9ACF1D27_inline(L_179, /*hidden argument*/NULL);
		if (!L_180)
		{
			goto IL_0366;
		}
	}
	{
		// return;
		return;
	}

IL_0366:
	{
		// IEnumerable<Pawn> enemyPawns =
		//     playerPawns.Where(
		//         p => p.TeamId != pawn.TeamId &&
		//         p.Position == pawn.Position);
		PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6* L_181 = __this->get_playerPawns_17();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_182 = V_0;
		Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9 * L_183 = (Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9 *)il2cpp_codegen_object_new(Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9_il2cpp_TypeInfo_var);
		Func_2__ctor_mB1C023E4F3598340FA49855BEF41911E2CB2F53D(L_183, L_182, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass26_0_U3CMovePawnU3Eb__0_mF53695330DF36D09D8F33E38445EB420CD584D38_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB1C023E4F3598340FA49855BEF41911E2CB2F53D_RuntimeMethod_var);
		RuntimeObject* L_184 = Enumerable_Where_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m8380B3A956A27D51AF223C912F9B3DC9CF9ECF5B((RuntimeObject*)(RuntimeObject*)L_181, L_183, /*hidden argument*/Enumerable_Where_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m8380B3A956A27D51AF223C912F9B3DC9CF9ECF5B_RuntimeMethod_var);
		V_3 = L_184;
		// if (enemyPawns.Count() > 0)
		RuntimeObject* L_185 = V_3;
		int32_t L_186 = Enumerable_Count_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m4793AA1966D6464F305DA534DB59888C891780D8(L_185, /*hidden argument*/Enumerable_Count_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m4793AA1966D6464F305DA534DB59888C891780D8_RuntimeMethod_var);
		if ((((int32_t)L_186) <= ((int32_t)0)))
		{
			goto IL_03d5;
		}
	}
	{
		// if (enemyPawns.Count() > 2 || (tiles[pawn.Position].GetComponent<Tile>().Type & (int)TileType.GLOBE) > 0)
		RuntimeObject* L_187 = V_3;
		int32_t L_188 = Enumerable_Count_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m4793AA1966D6464F305DA534DB59888C891780D8(L_187, /*hidden argument*/Enumerable_Count_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m4793AA1966D6464F305DA534DB59888C891780D8_RuntimeMethod_var);
		if ((((int32_t)L_188) > ((int32_t)2)))
		{
			goto IL_03b1;
		}
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_189 = __this->get_tiles_12();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_190 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_191 = L_190->get_pawn_0();
		int32_t L_192 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_191, /*hidden argument*/NULL);
		int32_t L_193 = L_192;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_194 = (L_189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_193));
		Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * L_195 = GameObject_GetComponent_TisTile_t49BF473E552909D111D297E3E1332788ED4F3A76_mE7406DF4925A50B7F3C5C7B382B23A86007C79C6(L_194, /*hidden argument*/GameObject_GetComponent_TisTile_t49BF473E552909D111D297E3E1332788ED4F3A76_mE7406DF4925A50B7F3C5C7B382B23A86007C79C6_RuntimeMethod_var);
		int32_t L_196 = Tile_get_Type_m93C8401CFFA46068A1DF8482772355B35D24373F_inline(L_195, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_196&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_03c3;
		}
	}

IL_03b1:
	{
		// MovePawnToHome(pawn.Id);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_197 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_198 = L_197->get_pawn_0();
		int32_t L_199 = Pawn_get_Id_m53D6E7635390F18BDC09DE960F63E5E60C73A2C8_inline(L_198, /*hidden argument*/NULL);
		GameManager_MovePawnToHome_mB0AB76AC5D99D9BA725D14807ED3A16747FE7FDC(__this, L_199, /*hidden argument*/NULL);
		return;
	}

IL_03c3:
	{
		// MovePawnToHome(enemyPawns.First().Id);
		RuntimeObject* L_200 = V_3;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_201 = Enumerable_First_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m050EB49EC1B04A6168DE33894F4DFBFE8BD7D35A(L_200, /*hidden argument*/Enumerable_First_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m050EB49EC1B04A6168DE33894F4DFBFE8BD7D35A_RuntimeMethod_var);
		int32_t L_202 = Pawn_get_Id_m53D6E7635390F18BDC09DE960F63E5E60C73A2C8_inline(L_201, /*hidden argument*/NULL);
		GameManager_MovePawnToHome_mB0AB76AC5D99D9BA725D14807ED3A16747FE7FDC(__this, L_202, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_03d5:
	{
		// IEnumerable<Pawn> teamPawns =
		//     playerPawns.Where(
		//         p => p.TeamId == pawn.TeamId &&
		//         p.Position == pawn.Position);
		PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6* L_203 = __this->get_playerPawns_17();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_204 = V_0;
		Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9 * L_205 = (Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9 *)il2cpp_codegen_object_new(Func_2_t633B54C9FCD96539C507D63E5895C87DF75204E9_il2cpp_TypeInfo_var);
		Func_2__ctor_mB1C023E4F3598340FA49855BEF41911E2CB2F53D(L_205, L_204, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass26_0_U3CMovePawnU3Eb__1_m153C1425DC5B6FCB897A449B5B285C58B3097307_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB1C023E4F3598340FA49855BEF41911E2CB2F53D_RuntimeMethod_var);
		RuntimeObject* L_206 = Enumerable_Where_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m8380B3A956A27D51AF223C912F9B3DC9CF9ECF5B((RuntimeObject*)(RuntimeObject*)L_203, L_205, /*hidden argument*/Enumerable_Where_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m8380B3A956A27D51AF223C912F9B3DC9CF9ECF5B_RuntimeMethod_var);
		// if (teamPawns.Count() > 0 || (tiles[pawn.Position].GetComponent<Tile>().Type & (int)TileType.GLOBE) > 0)
		int32_t L_207 = Enumerable_Count_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m4793AA1966D6464F305DA534DB59888C891780D8(L_206, /*hidden argument*/Enumerable_Count_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_m4793AA1966D6464F305DA534DB59888C891780D8_RuntimeMethod_var);
		if ((((int32_t)L_207) > ((int32_t)0)))
		{
			goto IL_0415;
		}
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_208 = __this->get_tiles_12();
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_209 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_210 = L_209->get_pawn_0();
		int32_t L_211 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_210, /*hidden argument*/NULL);
		int32_t L_212 = L_211;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_213 = (L_208)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_212));
		Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * L_214 = GameObject_GetComponent_TisTile_t49BF473E552909D111D297E3E1332788ED4F3A76_mE7406DF4925A50B7F3C5C7B382B23A86007C79C6(L_213, /*hidden argument*/GameObject_GetComponent_TisTile_t49BF473E552909D111D297E3E1332788ED4F3A76_mE7406DF4925A50B7F3C5C7B382B23A86007C79C6_RuntimeMethod_var);
		int32_t L_215 = Tile_get_Type_m93C8401CFFA46068A1DF8482772355B35D24373F_inline(L_214, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_215&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_0432;
		}
	}

IL_0415:
	{
		// pawn.transform.GetChild(0).gameObject.SetActive(true);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_216 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_217 = L_216->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_218 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_217, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_219 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_218, 0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_220 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_219, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_220, (bool)1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0432:
	{
		// pawn.transform.GetChild(0).gameObject.SetActive(false);
		U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * L_221 = V_0;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_222 = L_221->get_pawn_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_223 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_222, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_224 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_223, 0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_225 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_224, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_225, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::MovePawnToHome(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_MovePawnToHome_mB0AB76AC5D99D9BA725D14807ED3A16747FE7FDC (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_MovePawnToHome_mB0AB76AC5D99D9BA725D14807ED3A16747FE7FDC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * V_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// Pawn pawn = playerPawns[idx];
		PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6* L_0 = __this->get_playerPawns_17();
		int32_t L_1 = ___idx0;
		int32_t L_2 = L_1;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// pawn.Position = -1;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_4 = V_0;
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_4, (-1), /*hidden argument*/NULL);
		// Transform obj = homesObject.transform.GetChild(pawn.TeamId);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_homesObject_9();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_7 = V_0;
		int32_t L_8 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// Transform newPos = null;
		V_2 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
		// for (int i = 0; i < obj.childCount; i++)
		V_3 = 0;
		goto IL_005a;
	}

IL_002d:
	{
		// if (obj.GetChild(i).GetChild(0).childCount == 1)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		int32_t L_11 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_10, L_11, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_12, 0, /*hidden argument*/NULL);
		int32_t L_14 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0056;
		}
	}
	{
		// newPos = obj.GetChild(i).GetChild(0).GetChild(0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = V_1;
		int32_t L_16 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_15, L_16, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_17, 0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_18, 0, /*hidden argument*/NULL);
		V_2 = L_19;
	}

IL_0056:
	{
		// for (int i = 0; i < obj.childCount; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005a:
	{
		// for (int i = 0; i < obj.childCount; i++)
		int32_t L_21 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = V_1;
		int32_t L_23 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_002d;
		}
	}
	{
		// if (newPos == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_24, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_006d;
		}
	}
	{
		// return;
		return;
	}

IL_006d:
	{
		// Vector3.Lerp(pawn.transform.position, newPos.position, pieceMoveSpeed * 4);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_26 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_27, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_pieceMoveSpeed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_28, L_30, ((float)il2cpp_codegen_multiply((float)L_31, (float)(4.0f))), /*hidden argument*/NULL);
		// pawn.transform.SetParent(newPos);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_32 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_32, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = V_2;
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_33, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::MovePawnToGoal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_MovePawnToGoal_mCBFA469EB8531B931DAF1B2FBABBBBC2A43F9970 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_MovePawnToGoal_mCBFA469EB8531B931DAF1B2FBABBBBC2A43F9970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// Pawn pawn = playerPawns[idx];
		PawnU5BU5D_tC64A2FB567FD73DB9BFDDDA019FC426B465620F6* L_0 = __this->get_playerPawns_17();
		int32_t L_1 = ___idx0;
		int32_t L_2 = L_1;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// pawn.Position = 6;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_4 = V_0;
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_4, 6, /*hidden argument*/NULL);
		// int availableSpot = 0;
		V_1 = 0;
		// GameObject goal = goals[pawn.TeamId];
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_5 = __this->get_goals_14();
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_6 = V_0;
		int32_t L_7 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// for (int j = 0; j < goal.transform.childCount; j++)
		V_3 = 0;
		goto IL_0045;
	}

IL_0024:
	{
		// if (!goal.transform.GetChild(j).GetChild(0))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_11, L_12, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_13, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		// availableSpot = j;
		int32_t L_16 = V_3;
		V_1 = L_16;
		// break;
		goto IL_0053;
	}

IL_0041:
	{
		// for (int j = 0; j < goal.transform.childCount; j++)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0045:
	{
		// for (int j = 0; j < goal.transform.childCount; j++)
		int32_t L_18 = V_3;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		int32_t L_21 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_21)))
		{
			goto IL_0024;
		}
	}

IL_0053:
	{
		// pawn.Position = 6;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_22 = V_0;
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_22, 6, /*hidden argument*/NULL);
		// pawn.transform.position =
		//     Vector3.Lerp(
		//         pawn.transform.position,
		//         goal.transform.GetChild(availableSpot).position,
		//         pieceMoveSpeed);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_23 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_23, /*hidden argument*/NULL);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_25 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_29, L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_pieceMoveSpeed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_27, L_32, L_33, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_24, L_34, /*hidden argument*/NULL);
		// pawn.transform.SetParent(goal.transform.GetChild(availableSpot).transform);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_35 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_35, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_37, /*hidden argument*/NULL);
		int32_t L_39 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_38, L_39, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_40, /*hidden argument*/NULL);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_36, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Initialize_m817384BE4FBC5FBDF542231B610BD3EBBBEC109B (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Initialize_m817384BE4FBC5FBDF542231B610BD3EBBBEC109B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// canvas.enabled = true;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_0 = __this->get_canvas_22();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_0, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < players.Length; i++)
		V_0 = 0;
		goto IL_00bc;
	}

IL_0013:
	{
		// GameObject home = homesObject.transform.GetChild(players[i].TeamId).gameObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_homesObject_9();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* L_3 = __this->get_players_15();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = Player_get_TeamId_m50F34AA3BDCF074C390EA97B543BC700038E4984_inline(L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_2, L_7, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// for (int j = 0; j < 4; j++)
		V_2 = 0;
		goto IL_00b4;
	}

IL_003a:
	{
		// GameObject pawn = Instantiate(pawnPrefab, home.transform.GetChild(j).GetChild(0).position, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_pawnPrefab_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_12, L_13, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_14, 0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_10, L_16, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// pawn.GetComponent<MeshRenderer>().material = teamColours[players[i].TeamId];
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = L_18;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_20 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_19, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_21 = __this->get_teamColours_8();
		PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* L_22 = __this->get_players_15();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = Player_get_TeamId_m50F34AA3BDCF074C390EA97B543BC700038E4984_inline(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_28 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_20, L_28, /*hidden argument*/NULL);
		// Pawn p = pawn.AddComponent<Pawn>();
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_29 = GameObject_AddComponent_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_mDA46A7B3749E3ECB497B3DB68C344C10B41E93C9(L_19, /*hidden argument*/GameObject_AddComponent_TisPawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992_mDA46A7B3749E3ECB497B3DB68C344C10B41E93C9_RuntimeMethod_var);
		// p.Id = (i * 4) + j;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_30 = L_29;
		int32_t L_31 = V_0;
		int32_t L_32 = V_2;
		Pawn_set_Id_m1FAD5329A9C84E5B23602499511CDEB5639086E3_inline(L_30, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)4)), (int32_t)L_32)), /*hidden argument*/NULL);
		// p.Position = -1;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_33 = L_30;
		Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline(L_33, (-1), /*hidden argument*/NULL);
		// p.Owner = players[i].Id;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_34 = L_33;
		PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* L_35 = __this->get_players_15();
		int32_t L_36 = V_0;
		int32_t L_37 = L_36;
		Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		int64_t L_39 = Player_get_Id_mE225C1783918A8A6644F7790EE256B480D077A40_inline(L_38, /*hidden argument*/NULL);
		Pawn_set_Owner_m30CB3E5DFD903421E38CE0449E7D10EA3F594A3C_inline(L_34, L_39, /*hidden argument*/NULL);
		// p.TeamId = i;
		int32_t L_40 = V_0;
		Pawn_set_TeamId_m57127E97E0CFA3AD1E81A9724FCBB91E6A15DEDE_inline(L_34, L_40, /*hidden argument*/NULL);
		// for (int j = 0; j < 4; j++)
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00b4:
	{
		// for (int j = 0; j < 4; j++)
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) < ((int32_t)4)))
		{
			goto IL_003a;
		}
	}
	{
		// for (int i = 0; i < players.Length; i++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00bc:
	{
		// for (int i = 0; i < players.Length; i++)
		int32_t L_44 = V_0;
		PlayerU5BU5D_t79368719034D514180C714B587DCBCE96236497F* L_45 = __this->get_players_15();
		if ((((int32_t)L_44) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::SelectPawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SelectPawn_mE2A1712B0ED83B33FE01A5C8A07CBA4140BA86A7 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_SelectPawn_mE2A1712B0ED83B33FE01A5C8A07CBA4140BA86A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * V_0 = NULL;
	{
		// var json = new GameMessage(string.Empty, "MOVE", selectedPawn.Id);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_3 = __this->get_selectedPawn_19();
		int32_t L_4 = Pawn_get_Id_m53D6E7635390F18BDC09DE960F63E5E60C73A2C8_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * L_7 = (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 *)il2cpp_codegen_object_new(GameMessage_tA9BAFD405201693520651EF9831C04120F862005_il2cpp_TypeInfo_var);
		GameMessage__ctor_m60130ED37B1584D4421E99502FBAFD6D5C15B1BA(L_7, L_0, _stringLiteral3BF08A84F15B98CE4D14B707F4A093B3CC8B853E, L_2, /*hidden argument*/NULL);
		V_0 = L_7;
		// SendMessageToJS(JsonUtility.ToJson(json));
		GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * L_8 = V_0;
		String_t* L_9 = JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573(L_8, /*hidden argument*/NULL);
		GameManager_SendMessageToJS_mDDB88C291AF1B990563EBFFFC8F25B99F61AF0D5(__this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Roll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Roll_m97D84DF3F3227C1BD1567DC4257308D575EF39EC (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Roll_m97D84DF3F3227C1BD1567DC4257308D575EF39EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * V_0 = NULL;
	{
		// var json = new GameMessage(string.Empty, "ROLL", null);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * L_1 = (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 *)il2cpp_codegen_object_new(GameMessage_tA9BAFD405201693520651EF9831C04120F862005_il2cpp_TypeInfo_var);
		GameMessage__ctor_m60130ED37B1584D4421E99502FBAFD6D5C15B1BA(L_1, L_0, _stringLiteralD9F9D65FE26CA95561E112517D68F5C0FF5F96CA, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		// SendMessageToJS(JsonUtility.ToJson(json));
		GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * L_2 = V_0;
		String_t* L_3 = JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573(L_2, /*hidden argument*/NULL);
		GameManager_SendMessageToJS_mDDB88C291AF1B990563EBFFFC8F25B99F61AF0D5(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 GameManager::GetHomeEntranceIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_GetHomeEntranceIndex_m3028CA10BA50B857B77460AAC8C139FFC0BA82E8 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___teamId0, const RuntimeMethod* method)
{
	{
		// int GetHomeEntranceIndex(int teamId) => (teamId * 13) + 2;
		int32_t L_0 = ___teamId0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)13))), (int32_t)2));
	}
}
// System.Int32 GameManager::GetGoalEntranceIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_GetGoalEntranceIndex_m4C2ACA5E2654D54B0CAD9FECD390637A0D92A69E (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___teamId0, const RuntimeMethod* method)
{
	{
		// int GetGoalEntranceIndex(int teamId) => teamId * 13;
		int32_t L_0 = ___teamId0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)13)));
	}
}
// System.Void GameManager::SendMessageToJS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SendMessageToJS_mDDB88C291AF1B990563EBFFFC8F25B99F61AF0D5 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_SendMessageToJS_mDDB88C291AF1B990563EBFFFC8F25B99F61AF0D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = "TRY U3D: " + msg;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_text_23();
		String_t* L_1 = ___msg0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA56BE00657AB09790B20B8764D15997B57ACDF65, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// HandleUnityMessage(msg);
		String_t* L_3 = ___msg0;
		GameManager_HandleUnityMessage_mDE3CBF4702A2EDE05D368AEDC576D4F2A291D07B(L_3, /*hidden argument*/NULL);
		// text.text = "U3D: " + msg;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_text_23();
		String_t* L_5 = ___msg0;
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCBDC894761432E6E4F3F3CF34CDE6881CFAA0C25, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void GameManager::HandleMessageFromJS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleMessageFromJS_mF38468ED27764444C863DEEB1D51EDE5CFDFB2D8 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_HandleMessageFromJS_mF38468ED27764444C863DEEB1D51EDE5CFDFB2D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = "JS: " + message;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_text_23();
		String_t* L_1 = ___message0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral1AC709BD6000B7CD089ABBBF14CFAF228CC11E9C, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF7F1107D38DE91EB8A57C1C3BB1A932C50CD9693 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager_<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m123AB681A4A93ABBC3C2834CCE54611EE10D172E (U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameManager_<>c__DisplayClass26_0::<MovePawn>b__0(Pawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass26_0_U3CMovePawnU3Eb__0_mF53695330DF36D09D8F33E38445EB420CD584D38 (U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * __this, Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * ___p0, const RuntimeMethod* method)
{
	{
		// p => p.TeamId != pawn.TeamId &&
		// p.Position == pawn.Position);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_0 = ___p0;
		int32_t L_1 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_0, /*hidden argument*/NULL);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_2 = __this->get_pawn_0();
		int32_t L_3 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_4 = ___p0;
		int32_t L_5 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_4, /*hidden argument*/NULL);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_6 = __this->get_pawn_0();
		int32_t L_7 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_6, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean GameManager_<>c__DisplayClass26_0::<MovePawn>b__1(Pawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass26_0_U3CMovePawnU3Eb__1_m153C1425DC5B6FCB897A449B5B285C58B3097307 (U3CU3Ec__DisplayClass26_0_tDDEB52E0188DBEA3DEE5F5FC579C97E80A4B1B4D * __this, Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * ___p0, const RuntimeMethod* method)
{
	{
		// p => p.TeamId == pawn.TeamId &&
		// p.Position == pawn.Position);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_0 = ___p0;
		int32_t L_1 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_0, /*hidden argument*/NULL);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_2 = __this->get_pawn_0();
		int32_t L_3 = Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_4 = ___p0;
		int32_t L_5 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_4, /*hidden argument*/NULL);
		Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * L_6 = __this->get_pawn_0();
		int32_t L_7 = Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline(L_6, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 GameManager_Tile::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tile_get_Index_m110EA0B10C4D631091E7996E518C04481B47E89E (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, const RuntimeMethod* method)
{
	{
		// public int Index { get; set; }
		int32_t L_0 = __this->get_U3CIndexU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void GameManager_Tile::set_Index(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_Index_m3ED9486EBFE2970B988CD5A75AAECBD973740082 (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Index { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIndexU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 GameManager_Tile::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tile_get_Type_m93C8401CFFA46068A1DF8482772355B35D24373F (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, const RuntimeMethod* method)
{
	{
		// public int Type { get; set; }
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void GameManager_Tile::set_Type(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_Type_m91E2A31B27A64FCD6D9F31F265CF76063ABD09F8 (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Type { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void GameManager_Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_m37BE34852D60041A05505CFD857BB39F3280FF05 (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, const RuntimeMethod* method)
{
	{
		// public Tile() { }
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// public Tile() { }
		return;
	}
}
// System.Void GameManager_Tile::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_m23EDFC0FF96B7C500555D135CB88035B9F2113DA (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, int32_t ___i0, int32_t ___t1, const RuntimeMethod* method)
{
	{
		// public Tile(int i, int t)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// index = i;
		int32_t L_0 = ___i0;
		__this->set_index_0(L_0);
		// type = t;
		int32_t L_1 = ___t1;
		__this->set_type_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameMessage::.ctor(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage__ctor_m60130ED37B1584D4421E99502FBAFD6D5C15B1BA (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, String_t* ___roomId0, String_t* ___action1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method)
{
	{
		// public GameMessage(string roomId, string action, params object[] args)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// RoomId = roomId;
		String_t* L_0 = ___roomId0;
		GameMessage_set_RoomId_m13AAA68B9BFA8337D137A152CBB8C87D382456E6_inline(__this, L_0, /*hidden argument*/NULL);
		// Action = action;
		String_t* L_1 = ___action1;
		GameMessage_set_Action_m775731E0CDEBF5151DCD47B2042F8E1EBEE262B8_inline(__this, L_1, /*hidden argument*/NULL);
		// Args = args;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args2;
		GameMessage_set_Args_m18E2C19F44ED4D597A2DE6FC3977B1DC7FE4F8BB_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String GameMessage::get_RoomId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameMessage_get_RoomId_m897BE0600EF47D589DDD9DB4D77CA23A3090E0B0 (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, const RuntimeMethod* method)
{
	{
		// public string RoomId { get; set; }
		String_t* L_0 = __this->get_U3CRoomIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void GameMessage::set_RoomId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage_set_RoomId_m13AAA68B9BFA8337D137A152CBB8C87D382456E6 (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string RoomId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CRoomIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String GameMessage::get_Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameMessage_get_Action_m389FED463EEA5AE33558737EDC6C2E11F5B92466 (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, const RuntimeMethod* method)
{
	{
		// public string Action { get; set; }
		String_t* L_0 = __this->get_U3CActionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GameMessage::set_Action(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage_set_Action_m775731E0CDEBF5151DCD47B2042F8E1EBEE262B8 (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Action { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CActionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object[] GameMessage::get_Args()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameMessage_get_Args_m9E9B2D6E1B30928052E3357E7FF8F3513BF44298 (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, const RuntimeMethod* method)
{
	{
		// public object[] Args { get; set; }
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = __this->get_U3CArgsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void GameMessage::set_Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage_set_Args_m18E2C19F44ED4D597A2DE6FC3977B1DC7FE4F8BB (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value0, const RuntimeMethod* method)
{
	{
		// public object[] Args { get; set; }
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___value0;
		__this->set_U3CArgsU3Ek__BackingField_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Pawn::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pawn_get_Id_m53D6E7635390F18BDC09DE960F63E5E60C73A2C8 (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Pawn::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_set_Id_m1FAD5329A9C84E5B23602499511CDEB5639086E3 (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 Pawn::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public int Position { get => position; set => position = value; }
		int32_t L_0 = __this->get_position_5();
		return L_0;
	}
}
// System.Void Pawn::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Position { get => position; set => position = value; }
		int32_t L_0 = ___value0;
		__this->set_position_5(L_0);
		return;
	}
}
// System.Int64 Pawn::get_Owner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Pawn_get_Owner_m04D22975D0AF4E7B90A59E2D36E99F5C785319AB (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public long Owner { get => owner; set => owner = value; }
		int64_t L_0 = __this->get_owner_6();
		return L_0;
	}
}
// System.Void Pawn::set_Owner(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_set_Owner_m30CB3E5DFD903421E38CE0449E7D10EA3F594A3C (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public long Owner { get => owner; set => owner = value; }
		int64_t L_0 = ___value0;
		__this->set_owner_6(L_0);
		return;
	}
}
// System.Boolean Pawn::get_OnGoalTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pawn_get_OnGoalTile_m0F34F5E774D63920DF4496C065A71BFD9ACF1D27 (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnGoalTile { get => onGoalTile; set => onGoalTile = value; }
		bool L_0 = __this->get_onGoalTile_7();
		return L_0;
	}
}
// System.Void Pawn::set_OnGoalTile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_set_OnGoalTile_m2B2980674A408AE55BD3A6BD025272B6E4544A4E (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnGoalTile { get => onGoalTile; set => onGoalTile = value; }
		bool L_0 = ___value0;
		__this->set_onGoalTile_7(L_0);
		return;
	}
}
// System.Int32 Pawn::get_TeamId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939 (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public int TeamId { get => teamId; set => teamId = value; }
		int32_t L_0 = __this->get_teamId_8();
		return L_0;
	}
}
// System.Void Pawn::set_TeamId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_set_TeamId_m57127E97E0CFA3AD1E81A9724FCBB91E6A15DEDE (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int TeamId { get => teamId; set => teamId = value; }
		int32_t L_0 = ___value0;
		__this->set_teamId_8(L_0);
		return;
	}
}
// System.Void Pawn::.ctor(System.Int32,System.Int32,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn__ctor_m0343353DB963AC31B9E6EE9EDE41F1E6EA88F8F5 (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___id0, int32_t ___position1, int64_t ___owner2, int32_t ___teamId3, const RuntimeMethod* method)
{
	{
		// public Pawn(int id, int position, long owner, int teamId)
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_4(L_0);
		// this.position = position;
		int32_t L_1 = ___position1;
		__this->set_position_5(L_1);
		// this.owner = owner;
		int64_t L_2 = ___owner2;
		__this->set_owner_6(L_2);
		// this.onGoalTile = false;
		__this->set_onGoalTile_7((bool)0);
		// this.teamId = teamId;
		int32_t L_3 = ___teamId3;
		__this->set_teamId_8(L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Pawn_get_Owner_m04D22975D0AF4E7B90A59E2D36E99F5C785319AB_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public long Owner { get => owner; set => owner = value; }
		int64_t L_0 = __this->get_owner_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Pawn_get_Position_m1AD8E9AA430A5E7537171193EC62F604A69560FC_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public int Position { get => position; set => position = value; }
		int32_t L_0 = __this->get_position_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Pawn_get_OnGoalTile_m0F34F5E774D63920DF4496C065A71BFD9ACF1D27_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnGoalTile { get => onGoalTile; set => onGoalTile = value; }
		bool L_0 = __this->get_onGoalTile_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Pawn_get_TeamId_m6D643AA1EA9084F4D2A097779E16120AFBA49939_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public int TeamId { get => teamId; set => teamId = value; }
		int32_t L_0 = __this->get_teamId_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Pawn_set_Position_mA4898D88A5AF5022A218899D159242330D546F2D_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Position { get => position; set => position = value; }
		int32_t L_0 = ___value0;
		__this->set_position_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Tile_get_Index_m110EA0B10C4D631091E7996E518C04481B47E89E_inline (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, const RuntimeMethod* method)
{
	{
		// public int Index { get; set; }
		int32_t L_0 = __this->get_U3CIndexU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Tile_get_Type_m93C8401CFFA46068A1DF8482772355B35D24373F_inline (Tile_t49BF473E552909D111D297E3E1332788ED4F3A76 * __this, const RuntimeMethod* method)
{
	{
		// public int Type { get; set; }
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Pawn_get_Id_m53D6E7635390F18BDC09DE960F63E5E60C73A2C8_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Player_get_TeamId_m50F34AA3BDCF074C390EA97B543BC700038E4984_inline (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, const RuntimeMethod* method)
{
	{
		// public int TeamId { get; set; }
		int32_t L_0 = __this->get_U3CTeamIdU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Pawn_set_Id_m1FAD5329A9C84E5B23602499511CDEB5639086E3_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Player_get_Id_mE225C1783918A8A6644F7790EE256B480D077A40_inline (Player_tF7ACA9028744E58F4FB5877C6632AB8836A49C77 * __this, const RuntimeMethod* method)
{
	{
		// public long Id { get; set; }
		int64_t L_0 = __this->get_U3CIdU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Pawn_set_Owner_m30CB3E5DFD903421E38CE0449E7D10EA3F594A3C_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public long Owner { get => owner; set => owner = value; }
		int64_t L_0 = ___value0;
		__this->set_owner_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Pawn_set_TeamId_m57127E97E0CFA3AD1E81A9724FCBB91E6A15DEDE_inline (Pawn_t4753B88345A3FDAB474A91ADF1145AFE05B4D992 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int TeamId { get => teamId; set => teamId = value; }
		int32_t L_0 = ___value0;
		__this->set_teamId_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameMessage_set_RoomId_m13AAA68B9BFA8337D137A152CBB8C87D382456E6_inline (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string RoomId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CRoomIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameMessage_set_Action_m775731E0CDEBF5151DCD47B2042F8E1EBEE262B8_inline (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Action { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CActionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameMessage_set_Args_m18E2C19F44ED4D597A2DE6FC3977B1DC7FE4F8BB_inline (GameMessage_tA9BAFD405201693520651EF9831C04120F862005 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value0, const RuntimeMethod* method)
{
	{
		// public object[] Args { get; set; }
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___value0;
		__this->set_U3CArgsU3Ek__BackingField_2(L_0);
		return;
	}
}
