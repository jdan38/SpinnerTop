#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Net.IPAddress,System.String>
struct Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001;
// ExitGames.Client.Photon.NonAllocDictionary`2/Node<System.Byte,System.Object>[]
struct NodeU5BU5D_tE98B11094091F2F0DBB4540436D8DDBAD50A5E3E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// ExitGames.Client.Photon.EventData
struct EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t78B1F159B4BE00E602332CE3D56F9D3877745A0A;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B;
// ExitGames.Client.Photon.UnknownType
struct UnknownType_t2D6F5A6540E728DC2C0DBC1B2BA56572469309C4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_tF534BC28927809361F2EB3E1435B3C27AD4683FC;
// ExitGames.Client.Photon.IPhotonSocket/<>c
struct U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0
struct U3CU3Ec__DisplayClass108_0_t7F368FB751FC188932070CF83BDAAE6A52E1390E;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0
struct U3CU3Ec__DisplayClass109_0_t2CA3A31BEB1D2542A7CB18775EE64CA2B20E634D;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t6F0F852884660B3EA5FD67078543E9EB4DA822E3;
// ExitGames.Client.Photon.SocketNative/LogCallbackDelegate
struct LogCallbackDelegate_t2B633BDDE269B5F6FAE8DBFBC0EBAE0381D73E65;
// ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext
struct ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F;
// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB;
// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t1F9CAB73D2DECBBF1D2F799B6BF8398B39103990;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t301E02C35DC01EF2AD37BB2A93D73016EFE63BAB;
// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961;

IL2CPP_EXTERN_C RuntimeClass* AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tD0798083762E913681956D75F75A9235EEFE72AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4____8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonAllocDictionary_2_GetEnumerator_m195C229E4A0DDB64377510C21C812CE51361EE9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PairIterator_MoveNext_mBD4A17562A154CFBB245E2AFD60C8D17620868CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PairIterator_get_Current_m1C5F326BB84EEC2FEE117FA73E289AB92CDECEA2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct  NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.NonAllocDictionary`2::_freeHead
	int32_t ____freeHead_1;
	// System.Int32 ExitGames.Client.Photon.NonAllocDictionary`2::_freeCount
	int32_t ____freeCount_2;
	// System.Int32 ExitGames.Client.Photon.NonAllocDictionary`2::_usedCount
	int32_t ____usedCount_3;
	// System.UInt32 ExitGames.Client.Photon.NonAllocDictionary`2::_capacity
	uint32_t ____capacity_4;
	// System.Int32[] ExitGames.Client.Photon.NonAllocDictionary`2::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_5;
	// ExitGames.Client.Photon.NonAllocDictionary`2/Node<K,V>[] ExitGames.Client.Photon.NonAllocDictionary`2::_nodes
	NodeU5BU5D_tE98B11094091F2F0DBB4540436D8DDBAD50A5E3E* ____nodes_6;
	// System.Boolean ExitGames.Client.Photon.NonAllocDictionary`2::isReadOnly
	bool ___isReadOnly_7;
	// System.Collections.Generic.ICollection`1<K> ExitGames.Client.Photon.NonAllocDictionary`2::keys
	RuntimeObject* ___keys_8;
	// System.Collections.Generic.ICollection`1<V> ExitGames.Client.Photon.NonAllocDictionary`2::values
	RuntimeObject* ___values_9;

public:
	inline static int32_t get_offset_of__freeHead_1() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ____freeHead_1)); }
	inline int32_t get__freeHead_1() const { return ____freeHead_1; }
	inline int32_t* get_address_of__freeHead_1() { return &____freeHead_1; }
	inline void set__freeHead_1(int32_t value)
	{
		____freeHead_1 = value;
	}

	inline static int32_t get_offset_of__freeCount_2() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ____freeCount_2)); }
	inline int32_t get__freeCount_2() const { return ____freeCount_2; }
	inline int32_t* get_address_of__freeCount_2() { return &____freeCount_2; }
	inline void set__freeCount_2(int32_t value)
	{
		____freeCount_2 = value;
	}

	inline static int32_t get_offset_of__usedCount_3() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ____usedCount_3)); }
	inline int32_t get__usedCount_3() const { return ____usedCount_3; }
	inline int32_t* get_address_of__usedCount_3() { return &____usedCount_3; }
	inline void set__usedCount_3(int32_t value)
	{
		____usedCount_3 = value;
	}

	inline static int32_t get_offset_of__capacity_4() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ____capacity_4)); }
	inline uint32_t get__capacity_4() const { return ____capacity_4; }
	inline uint32_t* get_address_of__capacity_4() { return &____capacity_4; }
	inline void set__capacity_4(uint32_t value)
	{
		____capacity_4 = value;
	}

	inline static int32_t get_offset_of__buckets_5() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ____buckets_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_5() const { return ____buckets_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_5() { return &____buckets_5; }
	inline void set__buckets_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_5), (void*)value);
	}

	inline static int32_t get_offset_of__nodes_6() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ____nodes_6)); }
	inline NodeU5BU5D_tE98B11094091F2F0DBB4540436D8DDBAD50A5E3E* get__nodes_6() const { return ____nodes_6; }
	inline NodeU5BU5D_tE98B11094091F2F0DBB4540436D8DDBAD50A5E3E** get_address_of__nodes_6() { return &____nodes_6; }
	inline void set__nodes_6(NodeU5BU5D_tE98B11094091F2F0DBB4540436D8DDBAD50A5E3E* value)
	{
		____nodes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nodes_6), (void*)value);
	}

	inline static int32_t get_offset_of_isReadOnly_7() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ___isReadOnly_7)); }
	inline bool get_isReadOnly_7() const { return ___isReadOnly_7; }
	inline bool* get_address_of_isReadOnly_7() { return &___isReadOnly_7; }
	inline void set_isReadOnly_7(bool value)
	{
		___isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_keys_8() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ___keys_8)); }
	inline RuntimeObject* get_keys_8() const { return ___keys_8; }
	inline RuntimeObject** get_address_of_keys_8() { return &___keys_8; }
	inline void set_keys_8(RuntimeObject* value)
	{
		___keys_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_8), (void*)value);
	}

	inline static int32_t get_offset_of_values_9() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC, ___values_9)); }
	inline RuntimeObject* get_values_9() const { return ___values_9; }
	inline RuntimeObject** get_address_of_values_9() { return &___values_9; }
	inline void set_values_9(RuntimeObject* value)
	{
		___values_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_9), (void*)value);
	}
};

struct NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC_StaticFields
{
public:
	// System.UInt32[] ExitGames.Client.Photon.NonAllocDictionary`2::_primeTableUInt
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____primeTableUInt_0;

public:
	inline static int32_t get_offset_of__primeTableUInt_0() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC_StaticFields, ____primeTableUInt_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__primeTableUInt_0() const { return ____primeTableUInt_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__primeTableUInt_0() { return &____primeTableUInt_0; }
	inline void set__primeTableUInt_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____primeTableUInt_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primeTableUInt_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// ExitGames.Client.Photon.ParameterDictionary
struct  ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B * ___wrapperPools_1;

public:
	inline static int32_t get_offset_of_paramDict_0() { return static_cast<int32_t>(offsetof(ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0, ___paramDict_0)); }
	inline NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * get_paramDict_0() const { return ___paramDict_0; }
	inline NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC ** get_address_of_paramDict_0() { return &___paramDict_0; }
	inline void set_paramDict_0(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * value)
	{
		___paramDict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDict_0), (void*)value);
	}

	inline static int32_t get_offset_of_wrapperPools_1() { return static_cast<int32_t>(offsetof(ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0, ___wrapperPools_1)); }
	inline StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B * get_wrapperPools_1() const { return ___wrapperPools_1; }
	inline StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B ** get_address_of_wrapperPools_1() { return &___wrapperPools_1; }
	inline void set_wrapperPools_1(StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B * value)
	{
		___wrapperPools_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapperPools_1), (void*)value);
	}
};


// System.Random
struct  Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


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


// ExitGames.Client.Photon.UnknownType
struct  UnknownType_t2D6F5A6540E728DC2C0DBC1B2BA56572469309C4  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.UnknownType::TypeCode
	uint8_t ___TypeCode_0;
	// System.Int32 ExitGames.Client.Photon.UnknownType::Size
	int32_t ___Size_1;
	// System.Byte[] ExitGames.Client.Photon.UnknownType::Data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Data_2;

public:
	inline static int32_t get_offset_of_TypeCode_0() { return static_cast<int32_t>(offsetof(UnknownType_t2D6F5A6540E728DC2C0DBC1B2BA56572469309C4, ___TypeCode_0)); }
	inline uint8_t get_TypeCode_0() const { return ___TypeCode_0; }
	inline uint8_t* get_address_of_TypeCode_0() { return &___TypeCode_0; }
	inline void set_TypeCode_0(uint8_t value)
	{
		___TypeCode_0 = value;
	}

	inline static int32_t get_offset_of_Size_1() { return static_cast<int32_t>(offsetof(UnknownType_t2D6F5A6540E728DC2C0DBC1B2BA56572469309C4, ___Size_1)); }
	inline int32_t get_Size_1() const { return ___Size_1; }
	inline int32_t* get_address_of_Size_1() { return &___Size_1; }
	inline void set_Size_1(int32_t value)
	{
		___Size_1 = value;
	}

	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(UnknownType_t2D6F5A6540E728DC2C0DBC1B2BA56572469309C4, ___Data_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Data_2() const { return ___Data_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_2), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// ExitGames.Client.Photon.Version
struct  Version_tD0798083762E913681956D75F75A9235EEFE72AF  : public RuntimeObject
{
public:

public:
};

struct Version_tD0798083762E913681956D75F75A9235EEFE72AF_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Version::clientVersion
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___clientVersion_0;

public:
	inline static int32_t get_offset_of_clientVersion_0() { return static_cast<int32_t>(offsetof(Version_tD0798083762E913681956D75F75A9235EEFE72AF_StaticFields, ___clientVersion_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_clientVersion_0() const { return ___clientVersion_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_clientVersion_0() { return &___clientVersion_0; }
	inline void set_clientVersion_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___clientVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_0), (void*)value);
	}
};


// ExitGames.Client.Photon.IPhotonSocket/<>c
struct  U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389_StaticFields
{
public:
	// ExitGames.Client.Photon.IPhotonSocket/<>c ExitGames.Client.Photon.IPhotonSocket/<>c::<>9
	U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 * ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.String> ExitGames.Client.Photon.IPhotonSocket/<>c::<>9__55_0
	Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * ___U3CU3E9__55_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__55_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389_StaticFields, ___U3CU3E9__55_0_1)); }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * get_U3CU3E9__55_0_1() const { return ___U3CU3E9__55_0_1; }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 ** get_address_of_U3CU3E9__55_0_1() { return &___U3CU3E9__55_0_1; }
	inline void set_U3CU3E9__55_0_1(Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * value)
	{
		___U3CU3E9__55_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__55_0_1), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase/GpBinaryV3Parameters
struct  GpBinaryV3Parameters_tC7409C5641ADFB01576D2BB98D4888685535EA2F  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext
struct  ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::workSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___workSocket_0;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::ReceivedHeaderBytes
	int32_t ___ReceivedHeaderBytes_1;
	// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::HeaderBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HeaderBuffer_2;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::ExpectedMessageBytes
	int32_t ___ExpectedMessageBytes_3;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::ReceivedMessageBytes
	int32_t ___ReceivedMessageBytes_4;
	// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::MessageBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___MessageBuffer_5;

public:
	inline static int32_t get_offset_of_workSocket_0() { return static_cast<int32_t>(offsetof(ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F, ___workSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_workSocket_0() const { return ___workSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_workSocket_0() { return &___workSocket_0; }
	inline void set_workSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___workSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_ReceivedHeaderBytes_1() { return static_cast<int32_t>(offsetof(ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F, ___ReceivedHeaderBytes_1)); }
	inline int32_t get_ReceivedHeaderBytes_1() const { return ___ReceivedHeaderBytes_1; }
	inline int32_t* get_address_of_ReceivedHeaderBytes_1() { return &___ReceivedHeaderBytes_1; }
	inline void set_ReceivedHeaderBytes_1(int32_t value)
	{
		___ReceivedHeaderBytes_1 = value;
	}

	inline static int32_t get_offset_of_HeaderBuffer_2() { return static_cast<int32_t>(offsetof(ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F, ___HeaderBuffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HeaderBuffer_2() const { return ___HeaderBuffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HeaderBuffer_2() { return &___HeaderBuffer_2; }
	inline void set_HeaderBuffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HeaderBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeaderBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_ExpectedMessageBytes_3() { return static_cast<int32_t>(offsetof(ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F, ___ExpectedMessageBytes_3)); }
	inline int32_t get_ExpectedMessageBytes_3() const { return ___ExpectedMessageBytes_3; }
	inline int32_t* get_address_of_ExpectedMessageBytes_3() { return &___ExpectedMessageBytes_3; }
	inline void set_ExpectedMessageBytes_3(int32_t value)
	{
		___ExpectedMessageBytes_3 = value;
	}

	inline static int32_t get_offset_of_ReceivedMessageBytes_4() { return static_cast<int32_t>(offsetof(ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F, ___ReceivedMessageBytes_4)); }
	inline int32_t get_ReceivedMessageBytes_4() const { return ___ReceivedMessageBytes_4; }
	inline int32_t* get_address_of_ReceivedMessageBytes_4() { return &___ReceivedMessageBytes_4; }
	inline void set_ReceivedMessageBytes_4(int32_t value)
	{
		___ReceivedMessageBytes_4 = value;
	}

	inline static int32_t get_offset_of_MessageBuffer_5() { return static_cast<int32_t>(offsetof(ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F, ___MessageBuffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_MessageBuffer_5() const { return ___MessageBuffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_MessageBuffer_5() { return &___MessageBuffer_5; }
	inline void set_MessageBuffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___MessageBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBuffer_5), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/<>c
struct  U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB_StaticFields
{
public:
	// ExitGames.Client.Photon.SupportClass/<>c ExitGames.Client.Photon.SupportClass/<>c::<>9
	U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t1F9CAB73D2DECBBF1D2F799B6BF8398B39103990  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::millisecondsInterval
	int32_t ___millisecondsInterval_0;
	// System.Func`1<System.Boolean> ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::myThread
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread_1;

public:
	inline static int32_t get_offset_of_millisecondsInterval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t1F9CAB73D2DECBBF1D2F799B6BF8398B39103990, ___millisecondsInterval_0)); }
	inline int32_t get_millisecondsInterval_0() const { return ___millisecondsInterval_0; }
	inline int32_t* get_address_of_millisecondsInterval_0() { return &___millisecondsInterval_0; }
	inline void set_millisecondsInterval_0(int32_t value)
	{
		___millisecondsInterval_0 = value;
	}

	inline static int32_t get_offset_of_myThread_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t1F9CAB73D2DECBBF1D2F799B6BF8398B39103990, ___myThread_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_myThread_1() const { return ___myThread_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_myThread_1() { return &___myThread_1; }
	inline void set_myThread_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___myThread_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myThread_1), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct  ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961  : public RuntimeObject
{
public:

public:
};

struct ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_StaticFields
{
public:
	// System.Random ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::_r
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ____r_0;

public:
	inline static int32_t get_offset_of__r_0() { return static_cast<int32_t>(offsetof(ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_StaticFields, ____r_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get__r_0() const { return ____r_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of__r_0() { return &____r_0; }
	inline void set__r_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		____r_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____r_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct  KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>
struct  PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 
{
public:
	// System.Int32 ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator::_index
	int32_t ____index_0;
	// ExitGames.Client.Photon.NonAllocDictionary`2<K,V> ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator::_dict
	NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * ____dict_1;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63, ____index_0)); }
	inline int32_t get__index_0() const { return ____index_0; }
	inline int32_t* get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(int32_t value)
	{
		____index_0 = value;
	}

	inline static int32_t get_offset_of__dict_1() { return static_cast<int32_t>(offsetof(PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63, ____dict_1)); }
	inline NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * get__dict_1() const { return ____dict_1; }
	inline NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC ** get_address_of__dict_1() { return &____dict_1; }
	inline void set__dict_1(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * value)
	{
		____dict_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dict_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct  __StaticArrayInitTypeSizeU3D120_t91D8736CF8A62C43B9E5965F19B1687C43E1E4AF 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t91D8736CF8A62C43B9E5965F19B1687C43E1E4AF__padding[120];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t640BC064CCB45C6CB5D1FC5D937BEFDD9966F0E5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t640BC064CCB45C6CB5D1FC5D937BEFDD9966F0E5__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct  __StaticArrayInitTypeSizeU3D192_tF92AF6B12BC2F552D49BD3B069FC7194DB3D30B5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_tF92AF6B12BC2F552D49BD3B069FC7194DB3D30B5__padding[192];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t8CA1621257BDB21E98A10D4049FFD17087B53168 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t8CA1621257BDB21E98A10D4049FFD17087B53168__padding[9];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=97
struct  __StaticArrayInitTypeSizeU3D97_tF12F6E1E2B5D51E37D5987D7662B7F5D7844FC92 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D97_tF12F6E1E2B5D51E37D5987D7662B7F5D7844FC92__padding[97];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=97 <PrivateImplementationDetails>::1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69
	__StaticArrayInitTypeSizeU3D97_tF12F6E1E2B5D51E37D5987D7662B7F5D7844FC92  ___1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0
	__StaticArrayInitTypeSizeU3D128_t640BC064CCB45C6CB5D1FC5D937BEFDD9966F0E5  ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1;
	// System.Int64 <PrivateImplementationDetails>::5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5
	int64_t ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B
	__StaticArrayInitTypeSizeU3D192_tF92AF6B12BC2F552D49BD3B069FC7194DB3D30B5  ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3;
	// System.Int32 <PrivateImplementationDetails>::8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB
	int32_t ___8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC
	__StaticArrayInitTypeSizeU3D9_t8CA1621257BDB21E98A10D4049FFD17087B53168  ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175
	__StaticArrayInitTypeSizeU3D120_t91D8736CF8A62C43B9E5965F19B1687C43E1E4AF  ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6;

public:
	inline static int32_t get_offset_of_U31D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4_StaticFields, ___1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0)); }
	inline __StaticArrayInitTypeSizeU3D97_tF12F6E1E2B5D51E37D5987D7662B7F5D7844FC92  get_U31D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0() const { return ___1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0; }
	inline __StaticArrayInitTypeSizeU3D97_tF12F6E1E2B5D51E37D5987D7662B7F5D7844FC92 * get_address_of_U31D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0() { return &___1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0; }
	inline void set_U31D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0(__StaticArrayInitTypeSizeU3D97_tF12F6E1E2B5D51E37D5987D7662B7F5D7844FC92  value)
	{
		___1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0 = value;
	}

	inline static int32_t get_offset_of_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4_StaticFields, ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1)); }
	inline __StaticArrayInitTypeSizeU3D128_t640BC064CCB45C6CB5D1FC5D937BEFDD9966F0E5  get_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1() const { return ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1; }
	inline __StaticArrayInitTypeSizeU3D128_t640BC064CCB45C6CB5D1FC5D937BEFDD9966F0E5 * get_address_of_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1() { return &___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1; }
	inline void set_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1(__StaticArrayInitTypeSizeU3D128_t640BC064CCB45C6CB5D1FC5D937BEFDD9966F0E5  value)
	{
		___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1 = value;
	}

	inline static int32_t get_offset_of_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4_StaticFields, ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2)); }
	inline int64_t get_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2() const { return ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2; }
	inline int64_t* get_address_of_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2() { return &___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2; }
	inline void set_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2(int64_t value)
	{
		___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2 = value;
	}

	inline static int32_t get_offset_of_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4_StaticFields, ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3)); }
	inline __StaticArrayInitTypeSizeU3D192_tF92AF6B12BC2F552D49BD3B069FC7194DB3D30B5  get_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3() const { return ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3; }
	inline __StaticArrayInitTypeSizeU3D192_tF92AF6B12BC2F552D49BD3B069FC7194DB3D30B5 * get_address_of_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3() { return &___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3; }
	inline void set_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3(__StaticArrayInitTypeSizeU3D192_tF92AF6B12BC2F552D49BD3B069FC7194DB3D30B5  value)
	{
		___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3 = value;
	}

	inline static int32_t get_offset_of_U38EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4_StaticFields, ___8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4)); }
	inline int32_t get_U38EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4() const { return ___8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4; }
	inline int32_t* get_address_of_U38EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4() { return &___8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4; }
	inline void set_U38EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4(int32_t value)
	{
		___8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4 = value;
	}

	inline static int32_t get_offset_of_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4_StaticFields, ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5)); }
	inline __StaticArrayInitTypeSizeU3D9_t8CA1621257BDB21E98A10D4049FFD17087B53168  get_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5() const { return ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5; }
	inline __StaticArrayInitTypeSizeU3D9_t8CA1621257BDB21E98A10D4049FFD17087B53168 * get_address_of_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5() { return &___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5; }
	inline void set_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5(__StaticArrayInitTypeSizeU3D9_t8CA1621257BDB21E98A10D4049FFD17087B53168  value)
	{
		___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5 = value;
	}

	inline static int32_t get_offset_of_FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4_StaticFields, ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6)); }
	inline __StaticArrayInitTypeSizeU3D120_t91D8736CF8A62C43B9E5965F19B1687C43E1E4AF  get_FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6() const { return ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6; }
	inline __StaticArrayInitTypeSizeU3D120_t91D8736CF8A62C43B9E5965F19B1687C43E1E4AF * get_address_of_FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6() { return &___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6; }
	inline void set_FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6(__StaticArrayInitTypeSizeU3D120_t91D8736CF8A62C43B9E5965F19B1687C43E1E4AF  value)
	{
		___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t5C49A564ABE0D267EB531C2C619ADC3DA2FC3104 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t5C49A564ABE0D267EB531C2C619ADC3DA2FC3104, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionStateValue
struct  ConnectionStateValue_tBA7084D5764BE0B76B0F11B1A436D81449527F63 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_tBA7084D5764BE0B76B0F11B1A436D81449527F63, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t7665E3740E87BD205C5A1EB42346E6D97766B6B9 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t7665E3740E87BD205C5A1EB42346E6D97766B6B9, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct  StatusCode_t5971490EE27E4EF5658F6A014DCC016CCCF47514 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t5971490EE27E4EF5658F6A014DCC016CCCF47514, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StructWrapping.WrappedType
struct  WrappedType_tECBACD3073F7C34F736DD2F50E07501A4D451373 
{
public:
	// System.Int32 ExitGames.Client.Photon.StructWrapping.WrappedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrappedType_tECBACD3073F7C34F736DD2F50E07501A4D451373, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Encryption.EncryptorNative/ChainingMode
struct  ChainingMode_t2A73099F561B22BAF7CE36BDBC9C6CD9A1C6558C 
{
public:
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative/ChainingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChainingMode_t2A73099F561B22BAF7CE36BDBC9C6CD9A1C6558C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Encryption.EncryptorNative/egDebugLevel
struct  egDebugLevel_t0F9FC4EB1450150C09E45CDA9AE814B4C09F173F 
{
public:
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative/egDebugLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(egDebugLevel_t0F9FC4EB1450150C09E45CDA9AE814B4C09F173F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.IProtocol/DeserializationFlags
struct  DeserializationFlags_t98AE05A2F2F544BF7BE532C344BE0AA76130CD5D 
{
public:
	// System.Int32 ExitGames.Client.Photon.IProtocol/DeserializationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeserializationFlags_t98AE05A2F2F544BF7BE532C344BE0AA76130CD5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
struct  KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E 
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::_interator
	PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  ____interator_0;

public:
	inline static int32_t get_offset_of__interator_0() { return static_cast<int32_t>(offsetof(KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E, ____interator_0)); }
	inline PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  get__interator_0() const { return ____interator_0; }
	inline PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 * get_address_of__interator_0() { return &____interator_0; }
	inline void set__interator_0(PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  value)
	{
		____interator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____interator_0))->____dict_1), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
struct KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshaled_pinvoke
{
	PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  ____interator_0;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
struct KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshaled_com
{
	PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  ____interator_0;
};

// ExitGames.Client.Photon.Protocol16/GpType
struct  GpType_t20566C13D963DB8AC7C8B678E7D91098F6549397 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol16/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_t20566C13D963DB8AC7C8B678E7D91098F6549397, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Protocol18/GpType
struct  GpType_tB5279A189BDAAE7B5A973AFF4250E3518C9795AE 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol18/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_tB5279A189BDAAE7B5A973AFF4250E3518C9795AE, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SocketNative/NativeDebugLevel
struct  NativeDebugLevel_t28FB30F4A07A176DF1669344821C6AEE3B9AC8C5 
{
public:
	// System.Byte ExitGames.Client.Photon.SocketNative/NativeDebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeDebugLevel_t28FB30F4A07A176DF1669344821C6AEE3B9AC8C5, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SocketNative/NativeSocketState
struct  NativeSocketState_tD03AC9D0F3216BA7E364A033655B4122E6B1B6B9 
{
public:
	// System.Byte ExitGames.Client.Photon.SocketNative/NativeSocketState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeSocketState_tD03AC9D0F3216BA7E364A033655B4122E6B1B6B9, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Net.IPAddress
struct  IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074 * ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001 * ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::PhotonToken
	RuntimeObject * ___PhotonToken_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___reusableEventData_28;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::watch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___watch_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::messageHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader_39;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_40;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___lagRandomizer_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * ___NetSimListOutgoing_42;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * ___NetSimListIncoming_43;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB * ___networkSimulationSettings_44;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_45;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___photonPeer_0)); }
	inline PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___SerializationProtocol_1)); }
	inline IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___usedTransportProtocol_2)); }
	inline uint8_t get_usedTransportProtocol_2() const { return ___usedTransportProtocol_2; }
	inline uint8_t* get_address_of_usedTransportProtocol_2() { return &___usedTransportProtocol_2; }
	inline void set_usedTransportProtocol_2(uint8_t value)
	{
		___usedTransportProtocol_2 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_3() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___PhotonSocket_3)); }
	inline IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * get_PhotonSocket_3() const { return ___PhotonSocket_3; }
	inline IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C ** get_address_of_PhotonSocket_3() { return &___PhotonSocket_3; }
	inline void set_PhotonSocket_3(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * value)
	{
		___PhotonSocket_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___U3CProxyServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_5() const { return ___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_5() { return &___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_6() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___peerConnectionState_6)); }
	inline uint8_t get_peerConnectionState_6() const { return ___peerConnectionState_6; }
	inline uint8_t* get_address_of_peerConnectionState_6() { return &___peerConnectionState_6; }
	inline void set_peerConnectionState_6(uint8_t value)
	{
		___peerConnectionState_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_7() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___ByteCountLastOperation_7)); }
	inline int32_t get_ByteCountLastOperation_7() const { return ___ByteCountLastOperation_7; }
	inline int32_t* get_address_of_ByteCountLastOperation_7() { return &___ByteCountLastOperation_7; }
	inline void set_ByteCountLastOperation_7(int32_t value)
	{
		___ByteCountLastOperation_7 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___ByteCountCurrentDispatch_8)); }
	inline int32_t get_ByteCountCurrentDispatch_8() const { return ___ByteCountCurrentDispatch_8; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_8() { return &___ByteCountCurrentDispatch_8; }
	inline void set_ByteCountCurrentDispatch_8(int32_t value)
	{
		___ByteCountCurrentDispatch_8 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_9() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___CommandInCurrentDispatch_9)); }
	inline NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074 * get_CommandInCurrentDispatch_9() const { return ___CommandInCurrentDispatch_9; }
	inline NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074 ** get_address_of_CommandInCurrentDispatch_9() { return &___CommandInCurrentDispatch_9; }
	inline void set_CommandInCurrentDispatch_9(NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074 * value)
	{
		___CommandInCurrentDispatch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_9), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_10() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___packetLossByCrc_10)); }
	inline int32_t get_packetLossByCrc_10() const { return ___packetLossByCrc_10; }
	inline int32_t* get_address_of_packetLossByCrc_10() { return &___packetLossByCrc_10; }
	inline void set_packetLossByCrc_10(int32_t value)
	{
		___packetLossByCrc_10 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_11() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___packetLossByChallenge_11)); }
	inline int32_t get_packetLossByChallenge_11() const { return ___packetLossByChallenge_11; }
	inline int32_t* get_address_of_packetLossByChallenge_11() { return &___packetLossByChallenge_11; }
	inline void set_packetLossByChallenge_11(int32_t value)
	{
		___packetLossByChallenge_11 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_12() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___ActionQueue_12)); }
	inline Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001 * get_ActionQueue_12() const { return ___ActionQueue_12; }
	inline Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001 ** get_address_of_ActionQueue_12() { return &___ActionQueue_12; }
	inline void set_ActionQueue_12(Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001 * value)
	{
		___ActionQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_13() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___peerID_13)); }
	inline int16_t get_peerID_13() const { return ___peerID_13; }
	inline int16_t* get_address_of_peerID_13() { return &___peerID_13; }
	inline void set_peerID_13(int16_t value)
	{
		___peerID_13 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_14() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___serverTimeOffset_14)); }
	inline int32_t get_serverTimeOffset_14() const { return ___serverTimeOffset_14; }
	inline int32_t* get_address_of_serverTimeOffset_14() { return &___serverTimeOffset_14; }
	inline void set_serverTimeOffset_14(int32_t value)
	{
		___serverTimeOffset_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_15() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___serverTimeOffsetIsAvailable_15)); }
	inline bool get_serverTimeOffsetIsAvailable_15() const { return ___serverTimeOffsetIsAvailable_15; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_15() { return &___serverTimeOffsetIsAvailable_15; }
	inline void set_serverTimeOffsetIsAvailable_15(bool value)
	{
		___serverTimeOffsetIsAvailable_15 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_16() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___roundTripTime_16)); }
	inline int32_t get_roundTripTime_16() const { return ___roundTripTime_16; }
	inline int32_t* get_address_of_roundTripTime_16() { return &___roundTripTime_16; }
	inline void set_roundTripTime_16(int32_t value)
	{
		___roundTripTime_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_17() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___roundTripTimeVariance_17)); }
	inline int32_t get_roundTripTimeVariance_17() const { return ___roundTripTimeVariance_17; }
	inline int32_t* get_address_of_roundTripTimeVariance_17() { return &___roundTripTimeVariance_17; }
	inline void set_roundTripTimeVariance_17(int32_t value)
	{
		___roundTripTimeVariance_17 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_18() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___lastRoundTripTime_18)); }
	inline int32_t get_lastRoundTripTime_18() const { return ___lastRoundTripTime_18; }
	inline int32_t* get_address_of_lastRoundTripTime_18() { return &___lastRoundTripTime_18; }
	inline void set_lastRoundTripTime_18(int32_t value)
	{
		___lastRoundTripTime_18 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___lowestRoundTripTime_19)); }
	inline int32_t get_lowestRoundTripTime_19() const { return ___lowestRoundTripTime_19; }
	inline int32_t* get_address_of_lowestRoundTripTime_19() { return &___lowestRoundTripTime_19; }
	inline void set_lowestRoundTripTime_19(int32_t value)
	{
		___lowestRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_20() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___highestRoundTripTimeVariance_20)); }
	inline int32_t get_highestRoundTripTimeVariance_20() const { return ___highestRoundTripTimeVariance_20; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_20() { return &___highestRoundTripTimeVariance_20; }
	inline void set_highestRoundTripTimeVariance_20(int32_t value)
	{
		___highestRoundTripTimeVariance_20 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_21() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timestampOfLastReceive_21)); }
	inline int32_t get_timestampOfLastReceive_21() const { return ___timestampOfLastReceive_21; }
	inline int32_t* get_address_of_timestampOfLastReceive_21() { return &___timestampOfLastReceive_21; }
	inline void set_timestampOfLastReceive_21(int32_t value)
	{
		___timestampOfLastReceive_21 = value;
	}

	inline static int32_t get_offset_of_bytesOut_23() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___bytesOut_23)); }
	inline int64_t get_bytesOut_23() const { return ___bytesOut_23; }
	inline int64_t* get_address_of_bytesOut_23() { return &___bytesOut_23; }
	inline void set_bytesOut_23(int64_t value)
	{
		___bytesOut_23 = value;
	}

	inline static int32_t get_offset_of_bytesIn_24() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___bytesIn_24)); }
	inline int64_t get_bytesIn_24() const { return ___bytesIn_24; }
	inline int64_t* get_address_of_bytesIn_24() { return &___bytesIn_24; }
	inline void set_bytesIn_24(int64_t value)
	{
		___bytesIn_24 = value;
	}

	inline static int32_t get_offset_of_PhotonToken_25() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___PhotonToken_25)); }
	inline RuntimeObject * get_PhotonToken_25() const { return ___PhotonToken_25; }
	inline RuntimeObject ** get_address_of_PhotonToken_25() { return &___PhotonToken_25; }
	inline void set_PhotonToken_25(RuntimeObject * value)
	{
		___PhotonToken_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonToken_25), (void*)value);
	}

	inline static int32_t get_offset_of_CustomInitData_26() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___CustomInitData_26)); }
	inline RuntimeObject * get_CustomInitData_26() const { return ___CustomInitData_26; }
	inline RuntimeObject ** get_address_of_CustomInitData_26() { return &___CustomInitData_26; }
	inline void set_CustomInitData_26(RuntimeObject * value)
	{
		___CustomInitData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_26), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_27() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___AppId_27)); }
	inline String_t* get_AppId_27() const { return ___AppId_27; }
	inline String_t** get_address_of_AppId_27() { return &___AppId_27; }
	inline void set_AppId_27(String_t* value)
	{
		___AppId_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_27), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_28() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___reusableEventData_28)); }
	inline EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * get_reusableEventData_28() const { return ___reusableEventData_28; }
	inline EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC ** get_address_of_reusableEventData_28() { return &___reusableEventData_28; }
	inline void set_reusableEventData_28(EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * value)
	{
		___reusableEventData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_28), (void*)value);
	}

	inline static int32_t get_offset_of_watch_29() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___watch_29)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_watch_29() const { return ___watch_29; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_watch_29() { return &___watch_29; }
	inline void set_watch_29(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___watch_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watch_29), (void*)value);
	}

	inline static int32_t get_offset_of_timeoutInt_30() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timeoutInt_30)); }
	inline int32_t get_timeoutInt_30() const { return ___timeoutInt_30; }
	inline int32_t* get_address_of_timeoutInt_30() { return &___timeoutInt_30; }
	inline void set_timeoutInt_30(int32_t value)
	{
		___timeoutInt_30 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_31() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timeLastAckReceive_31)); }
	inline int32_t get_timeLastAckReceive_31() const { return ___timeLastAckReceive_31; }
	inline int32_t* get_address_of_timeLastAckReceive_31() { return &___timeLastAckReceive_31; }
	inline void set_timeLastAckReceive_31(int32_t value)
	{
		___timeLastAckReceive_31 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_32() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___longestSentCall_32)); }
	inline int32_t get_longestSentCall_32() const { return ___longestSentCall_32; }
	inline int32_t* get_address_of_longestSentCall_32() { return &___longestSentCall_32; }
	inline void set_longestSentCall_32(int32_t value)
	{
		___longestSentCall_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_33() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timeLastSendAck_33)); }
	inline int32_t get_timeLastSendAck_33() const { return ___timeLastSendAck_33; }
	inline int32_t* get_address_of_timeLastSendAck_33() { return &___timeLastSendAck_33; }
	inline void set_timeLastSendAck_33(int32_t value)
	{
		___timeLastSendAck_33 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_34() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timeLastSendOutgoing_34)); }
	inline int32_t get_timeLastSendOutgoing_34() const { return ___timeLastSendOutgoing_34; }
	inline int32_t* get_address_of_timeLastSendOutgoing_34() { return &___timeLastSendOutgoing_34; }
	inline void set_timeLastSendOutgoing_34(int32_t value)
	{
		___timeLastSendOutgoing_34 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_35() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___ApplicationIsInitialized_35)); }
	inline bool get_ApplicationIsInitialized_35() const { return ___ApplicationIsInitialized_35; }
	inline bool* get_address_of_ApplicationIsInitialized_35() { return &___ApplicationIsInitialized_35; }
	inline void set_ApplicationIsInitialized_35(bool value)
	{
		___ApplicationIsInitialized_35 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_36() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___isEncryptionAvailable_36)); }
	inline bool get_isEncryptionAvailable_36() const { return ___isEncryptionAvailable_36; }
	inline bool* get_address_of_isEncryptionAvailable_36() { return &___isEncryptionAvailable_36; }
	inline void set_isEncryptionAvailable_36(bool value)
	{
		___isEncryptionAvailable_36 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_37() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___outgoingCommandsInStream_37)); }
	inline int32_t get_outgoingCommandsInStream_37() const { return ___outgoingCommandsInStream_37; }
	inline int32_t* get_address_of_outgoingCommandsInStream_37() { return &___outgoingCommandsInStream_37; }
	inline void set_outgoingCommandsInStream_37(int32_t value)
	{
		___outgoingCommandsInStream_37 = value;
	}

	inline static int32_t get_offset_of_messageHeader_39() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___messageHeader_39)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_messageHeader_39() const { return ___messageHeader_39; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_messageHeader_39() { return &___messageHeader_39; }
	inline void set_messageHeader_39(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___messageHeader_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHeader_39), (void*)value);
	}

	inline static int32_t get_offset_of_CryptoProvider_40() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___CryptoProvider_40)); }
	inline RuntimeObject* get_CryptoProvider_40() const { return ___CryptoProvider_40; }
	inline RuntimeObject** get_address_of_CryptoProvider_40() { return &___CryptoProvider_40; }
	inline void set_CryptoProvider_40(RuntimeObject* value)
	{
		___CryptoProvider_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_40), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_41() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___lagRandomizer_41)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_lagRandomizer_41() const { return ___lagRandomizer_41; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_lagRandomizer_41() { return &___lagRandomizer_41; }
	inline void set_lagRandomizer_41(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___lagRandomizer_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_41), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_42() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___NetSimListOutgoing_42)); }
	inline LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * get_NetSimListOutgoing_42() const { return ___NetSimListOutgoing_42; }
	inline LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA ** get_address_of_NetSimListOutgoing_42() { return &___NetSimListOutgoing_42; }
	inline void set_NetSimListOutgoing_42(LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * value)
	{
		___NetSimListOutgoing_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_42), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_43() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___NetSimListIncoming_43)); }
	inline LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * get_NetSimListIncoming_43() const { return ___NetSimListIncoming_43; }
	inline LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA ** get_address_of_NetSimListIncoming_43() { return &___NetSimListIncoming_43; }
	inline void set_NetSimListIncoming_43(LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * value)
	{
		___NetSimListIncoming_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_43), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_44() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___networkSimulationSettings_44)); }
	inline NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB * get_networkSimulationSettings_44() const { return ___networkSimulationSettings_44; }
	inline NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB ** get_address_of_networkSimulationSettings_44() { return &___networkSimulationSettings_44; }
	inline void set_networkSimulationSettings_44(NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB * value)
	{
		___networkSimulationSettings_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_44), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_45() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___TrafficPackageHeaderSize_45)); }
	inline int32_t get_TrafficPackageHeaderSize_45() const { return ___TrafficPackageHeaderSize_45; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_45() { return &___TrafficPackageHeaderSize_45; }
	inline void set_TrafficPackageHeaderSize_45(int32_t value)
	{
		___TrafficPackageHeaderSize_45 = value;
	}
};

struct PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E * ___MessageBufferPool_38;

public:
	inline static int32_t get_offset_of_peerCount_22() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046_StaticFields, ___peerCount_22)); }
	inline int16_t get_peerCount_22() const { return ___peerCount_22; }
	inline int16_t* get_address_of_peerCount_22() { return &___peerCount_22; }
	inline void set_peerCount_22(int16_t value)
	{
		___peerCount_22 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_38() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046_StaticFields, ___MessageBufferPool_38)); }
	inline Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E * get_MessageBufferPool_38() const { return ___MessageBufferPool_38; }
	inline Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E ** get_address_of_MessageBufferPool_38() { return &___MessageBufferPool_38; }
	inline void set_MessageBufferPool_38(Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E * value)
	{
		___MessageBufferPool_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_38), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct  Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_22;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_13)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_15)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_16)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}

	inline static int32_t get_offset_of_ID_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_22)); }
	inline int32_t get_ID_22() const { return ___ID_22; }
	inline int32_t* get_address_of_ID_22() { return &___ID_22; }
	inline void set_ID_22(int32_t value)
	{
		___ID_22 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_24;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_25;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_27;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_37;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_23)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_23() const { return ___AcceptAsyncCallback_23; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_23() { return &___AcceptAsyncCallback_23; }
	inline void set_AcceptAsyncCallback_23(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_24)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_24() const { return ___BeginAcceptCallback_24; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_24() { return &___BeginAcceptCallback_24; }
	inline void set_BeginAcceptCallback_24(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_25)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_25() const { return ___BeginAcceptReceiveCallback_25; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_25() { return &___BeginAcceptReceiveCallback_25; }
	inline void set_BeginAcceptReceiveCallback_25(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_26)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_26() const { return ___ConnectAsyncCallback_26; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_26() { return &___ConnectAsyncCallback_26; }
	inline void set_ConnectAsyncCallback_26(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_27)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_27() const { return ___BeginConnectCallback_27; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_27() { return &___BeginConnectCallback_27; }
	inline void set_BeginConnectCallback_27(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_28)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_28() const { return ___DisconnectAsyncCallback_28; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_28() { return &___DisconnectAsyncCallback_28; }
	inline void set_DisconnectAsyncCallback_28(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_29() const { return ___BeginDisconnectCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_29() { return &___BeginDisconnectCallback_29; }
	inline void set_BeginDisconnectCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_30() const { return ___ReceiveAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_30() { return &___ReceiveAsyncCallback_30; }
	inline void set_ReceiveAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_31() const { return ___BeginReceiveCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_31() { return &___BeginReceiveCallback_31; }
	inline void set_BeginReceiveCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_32)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_32() const { return ___BeginReceiveGenericCallback_32; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_32() { return &___BeginReceiveGenericCallback_32; }
	inline void set_BeginReceiveGenericCallback_32(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_33)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_33() const { return ___ReceiveFromAsyncCallback_33; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_33() { return &___ReceiveFromAsyncCallback_33; }
	inline void set_ReceiveFromAsyncCallback_33(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_34)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_34() const { return ___BeginReceiveFromCallback_34; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_34() { return &___BeginReceiveFromCallback_34; }
	inline void set_BeginReceiveFromCallback_34(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_35)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_35() const { return ___SendAsyncCallback_35; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_35() { return &___SendAsyncCallback_35; }
	inline void set_SendAsyncCallback_35(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_36() const { return ___BeginSendGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_36() { return &___BeginSendGenericCallback_36; }
	inline void set_BeginSendGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_37() const { return ___SendToAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_37() { return &___SendToAsyncCallback_37; }
	inline void set_SendToAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_37), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0
struct  U3CU3Ec__DisplayClass108_0_t7F368FB751FC188932070CF83BDAAE6A52E1390E  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::<>4__this
	PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * ___U3CU3E4__this_0;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::level
	uint8_t ___level_1;
	// System.String ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::debugReturn
	String_t* ___debugReturn_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass108_0_t7F368FB751FC188932070CF83BDAAE6A52E1390E, ___U3CU3E4__this_0)); }
	inline PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass108_0_t7F368FB751FC188932070CF83BDAAE6A52E1390E, ___level_1)); }
	inline uint8_t get_level_1() const { return ___level_1; }
	inline uint8_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(uint8_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_debugReturn_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass108_0_t7F368FB751FC188932070CF83BDAAE6A52E1390E, ___debugReturn_2)); }
	inline String_t* get_debugReturn_2() const { return ___debugReturn_2; }
	inline String_t** get_address_of_debugReturn_2() { return &___debugReturn_2; }
	inline void set_debugReturn_2(String_t* value)
	{
		___debugReturn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugReturn_2), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0
struct  U3CU3Ec__DisplayClass109_0_t2CA3A31BEB1D2542A7CB18775EE64CA2B20E634D  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0::<>4__this
	PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * ___U3CU3E4__this_0;
	// ExitGames.Client.Photon.StatusCode ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0::statusValue
	int32_t ___statusValue_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass109_0_t2CA3A31BEB1D2542A7CB18775EE64CA2B20E634D, ___U3CU3E4__this_0)); }
	inline PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_statusValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass109_0_t2CA3A31BEB1D2542A7CB18775EE64CA2B20E634D, ___statusValue_1)); }
	inline int32_t get_statusValue_1() const { return ___statusValue_1; }
	inline int32_t* get_address_of_statusValue_1() { return &___statusValue_1; }
	inline void set_statusValue_1(int32_t value)
	{
		___statusValue_1 = value;
	}
};


// System.Func`1<System.Boolean>
struct  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.ThreadAbortException
struct  ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct  LogCallbackDelegate_tF534BC28927809361F2EB3E1435B3C27AD4683FC  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.PeerBase/MyAction
struct  MyAction_t6F0F852884660B3EA5FD67078543E9EB4DA822E3  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SocketNative/LogCallbackDelegate
struct  LogCallbackDelegate_t2B633BDDE269B5F6FAE8DBFBC0EBAE0381D73E65  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct  IntegerMillisecondsDelegate_t301E02C35DC01EF2AD37BB2A93D73016EFE63BAB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<K,V> ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  NonAllocDictionary_2_GetEnumerator_m195C229E4A0DDB64377510C21C812CE51361EE9F_gshared (NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<K,V> ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  PairIterator_get_Current_m1C5F326BB84EEC2FEE117FA73E289AB92CDECEA2_gshared (PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PairIterator_MoveNext_mBD4A17562A154CFBB245E2AFD60C8D17620868CC_gshared (PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m54E32C8C32E8DC956C5E1D202775E30CEDAE1DF0 (U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 * __this, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<K,V> ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>::GetEnumerator()
inline PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  NonAllocDictionary_2_GetEnumerator_m195C229E4A0DDB64377510C21C812CE51361EE9F (NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * __this, const RuntimeMethod* method)
{
	return ((  PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  (*) (NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC *, const RuntimeMethod*))NonAllocDictionary_2_GetEnumerator_m195C229E4A0DDB64377510C21C812CE51361EE9F_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::.ctor(ExitGames.Client.Photon.ParameterDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair__ctor_m6D026C19E8B3BB837D4BF33B4344C4C4EE969802 (KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * __this, ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * ___pd0, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<K,V> ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>::get_Current()
inline KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  PairIterator_get_Current_m1C5F326BB84EEC2FEE117FA73E289AB92CDECEA2 (PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  (*) (PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 *, const RuntimeMethod*))PairIterator_get_Current_m1C5F326BB84EEC2FEE117FA73E289AB92CDECEA2_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  KeyValuePair_get_Current_mDE5B3B1FD7F213CE00D4E3D66E6586F70180BB69 (KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>::MoveNext()
inline bool PairIterator_MoveNext_mBD4A17562A154CFBB245E2AFD60C8D17620868CC (PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 *, const RuntimeMethod*))PairIterator_MoveNext_mBD4A17562A154CFBB245E2AFD60C8D17620868CC_gshared)(__this, method);
}
// System.Boolean ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValuePair_MoveNext_m352D9D9BAFC250CC1DB5E8E4AD23D6403D1F8155 (KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PeerBase_get_Listener_mDF83CB14105834B69CFA6998D1906C7398E95C05 (PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_ReadingHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingHeader_m87D6838178E86A1E37D6431ADA1D289B11BD9A7B (ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m55B8FED10F855E0CD97391386883173B88EFA6CC (U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.UnknownType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownType__ctor_m48C78C9B9C28214C3235AB3649A16277C09AF86A (UnknownType_t2D6F5A6540E728DC2C0DBC1B2BA56572469309C4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ExitGames.Client.Photon.Version::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__cctor_mEADC615C170D659BCE62532D17CB9487DA1DE650 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4____8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tD0798083762E913681956D75F75A9235EEFE72AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC0EFAF035B0B068404853C07F2ABB6B7CBBFAEA4____8EFDBA54EA7E0C4CD01D2516C047073D8F1E3F442811918AFD4AD38C385361FB_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Version_tD0798083762E913681956D75F75A9235EEFE72AF_StaticFields*)il2cpp_codegen_static_fields_for(Version_tD0798083762E913681956D75F75A9235EEFE72AF_il2cpp_TypeInfo_var))->set_clientVersion_0(L_1);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_tF534BC28927809361F2EB3E1435B3C27AD4683FC (LogCallbackDelegate_tF534BC28927809361F2EB3E1435B3C27AD4683FC * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_mA381EE76A2AC56941C208CA78F78783783AEEBFC (LogCallbackDelegate_tF534BC28927809361F2EB3E1435B3C27AD4683FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mD4E1531A3D5006D86800601DB41889915AEAEF44 (LogCallbackDelegate_tF534BC28927809361F2EB3E1435B3C27AD4683FC * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userData0, ___level1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___level1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___userData0, ___level1, ___msg2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___userData0, ___level1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___level1, ___msg2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___level1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___level1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_mF1DE335E77B6A4D439C820136CA3099B426AB780 (LogCallbackDelegate_tF534BC28927809361F2EB3E1435B3C27AD4683FC * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___level1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_mA0794F5525529240642CF892060064EB1B1840EB (LogCallbackDelegate_tF534BC28927809361F2EB3E1435B3C27AD4683FC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAE7FCC62B70800260563B5938A4E6E6634DC65C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 * L_0 = (U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 *)il2cpp_codegen_object_new(U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m54E32C8C32E8DC956C5E1D202775E30CEDAE1DF0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m54E32C8C32E8DC956C5E1D202775E30CEDAE1DF0 (U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.IPhotonSocket/<>c::<GetIpAddresses>b__55_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetIpAddressesU3Eb__55_0_m7911E6C6412FFABEC0630D81BF3C40754AF3788B (U3CU3Ec_tD6B1F17F26D471F9BC7BABD65DAE2C26D919D389 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ___x0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = ___x0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = Box(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_0 = *(int32_t*)UnBox(L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_12 = ___x0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		return L_16;
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
// Conversion methods for marshalling of: ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
IL2CPP_EXTERN_C void KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshal_pinvoke(const KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E& unmarshaled, KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshaled_pinvoke& marshaled)
{
	Exception_t* ____interator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_interator' of type 'KeyValuePair'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____interator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshal_pinvoke_back(const KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshaled_pinvoke& marshaled, KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E& unmarshaled)
{
	Exception_t* ____interator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_interator' of type 'KeyValuePair'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____interator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
IL2CPP_EXTERN_C void KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshal_pinvoke_cleanup(KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
IL2CPP_EXTERN_C void KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshal_com(const KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E& unmarshaled, KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshaled_com& marshaled)
{
	Exception_t* ____interator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_interator' of type 'KeyValuePair'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____interator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshal_com_back(const KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshaled_com& marshaled, KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E& unmarshaled)
{
	Exception_t* ____interator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_interator' of type 'KeyValuePair'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____interator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
IL2CPP_EXTERN_C void KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshal_com_cleanup(KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E_marshaled_com& marshaled)
{
}
// System.Void ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::.ctor(ExitGames.Client.Photon.ParameterDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair__ctor_m6D026C19E8B3BB837D4BF33B4344C4C4EE969802 (KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * __this, ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * ___pd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonAllocDictionary_2_GetEnumerator_m195C229E4A0DDB64377510C21C812CE51361EE9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_0 = ___pd0;
		NullCheck(L_0);
		NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * L_1 = L_0->get_paramDict_0();
		NullCheck(L_1);
		PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63  L_2;
		L_2 = NonAllocDictionary_2_GetEnumerator_m195C229E4A0DDB64377510C21C812CE51361EE9F(L_1, /*hidden argument*/NonAllocDictionary_2_GetEnumerator_m195C229E4A0DDB64377510C21C812CE51361EE9F_RuntimeMethod_var);
		__this->set__interator_0(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void KeyValuePair__ctor_m6D026C19E8B3BB837D4BF33B4344C4C4EE969802_AdjustorThunk (RuntimeObject * __this, ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * ___pd0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * _thisAdjusted = reinterpret_cast<KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E *>(__this + _offset);
	KeyValuePair__ctor_m6D026C19E8B3BB837D4BF33B4344C4C4EE969802(_thisAdjusted, ___pd0, method);
}
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  KeyValuePair_get_Current_mDE5B3B1FD7F213CE00D4E3D66E6586F70180BB69 (KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PairIterator_get_Current_m1C5F326BB84EEC2FEE117FA73E289AB92CDECEA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 * L_0 = __this->get_address_of__interator_0();
		KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  L_1;
		L_1 = PairIterator_get_Current_m1C5F326BB84EEC2FEE117FA73E289AB92CDECEA2((PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 *)L_0, /*hidden argument*/PairIterator_get_Current_m1C5F326BB84EEC2FEE117FA73E289AB92CDECEA2_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  KeyValuePair_get_Current_mDE5B3B1FD7F213CE00D4E3D66E6586F70180BB69_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * _thisAdjusted = reinterpret_cast<KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E *>(__this + _offset);
	KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  _returnValue;
	_returnValue = KeyValuePair_get_Current_mDE5B3B1FD7F213CE00D4E3D66E6586F70180BB69(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValuePair_MoveNext_m352D9D9BAFC250CC1DB5E8E4AD23D6403D1F8155 (KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PairIterator_MoveNext_mBD4A17562A154CFBB245E2AFD60C8D17620868CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 * L_0 = __this->get_address_of__interator_0();
		bool L_1;
		L_1 = PairIterator_MoveNext_mBD4A17562A154CFBB245E2AFD60C8D17620868CC((PairIterator_t8126F86A358139292F08BBA016A5F6C31DC9BF63 *)L_0, /*hidden argument*/PairIterator_MoveNext_mBD4A17562A154CFBB245E2AFD60C8D17620868CC_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool KeyValuePair_MoveNext_m352D9D9BAFC250CC1DB5E8E4AD23D6403D1F8155_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E * _thisAdjusted = reinterpret_cast<KeyValuePair_t21DADABA5E6B5003D05019DAD763B48011065C6E *>(__this + _offset);
	bool _returnValue;
	_returnValue = KeyValuePair_MoveNext_m352D9D9BAFC250CC1DB5E8E4AD23D6403D1F8155(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass108_0__ctor_m2BA66350CB5C2797973CA0A9956C200E7AB1081F (U3CU3Ec__DisplayClass108_0_t7F368FB751FC188932070CF83BDAAE6A52E1390E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::<EnqueueDebugReturn>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass108_0_U3CEnqueueDebugReturnU3Eb__0_m9611A3E15DE5FDBD6C091B51A2D73CB2B5D9159A (U3CU3Ec__DisplayClass108_0_t7F368FB751FC188932070CF83BDAAE6A52E1390E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = PeerBase_get_Listener_mDF83CB14105834B69CFA6998D1906C7398E95C05(L_0, /*hidden argument*/NULL);
		uint8_t L_2 = __this->get_level_1();
		String_t* L_3 = __this->get_debugReturn_2();
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_1, L_2, L_3);
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
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass109_0__ctor_m54298CAF003BA478844DFE044E35516AE8DB5BAF (U3CU3Ec__DisplayClass109_0_t2CA3A31BEB1D2542A7CB18775EE64CA2B20E634D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0::<EnqueueStatusCallback>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass109_0_U3CEnqueueStatusCallbackU3Eb__0_m279698DB84CD3215C8946827F25A5053C80CE943 (U3CU3Ec__DisplayClass109_0_t2CA3A31BEB1D2542A7CB18775EE64CA2B20E634D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = PeerBase_get_Listener_mDF83CB14105834B69CFA6998D1906C7398E95C05(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_statusValue_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_1, L_2);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MyAction_t6F0F852884660B3EA5FD67078543E9EB4DA822E3 (MyAction_t6F0F852884660B3EA5FD67078543E9EB4DA822E3 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_m2647F415C66D2B3696A8008B9000D282AE3C752A (MyAction_t6F0F852884660B3EA5FD67078543E9EB4DA822E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_Invoke_m180977B71ECF0F4A1E76C1BCC673D48A200DA94C (MyAction_t6F0F852884660B3EA5FD67078543E9EB4DA822E3 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.PeerBase/MyAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MyAction_BeginInvoke_m2772DA2609EDDBDD24B3412DD1AB0D573AE404C0 (MyAction_t6F0F852884660B3EA5FD67078543E9EB4DA822E3 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_EndInvoke_mEA4F3C508C9893FF35AB140066BE4819F6190526 (MyAction_t6F0F852884660B3EA5FD67078543E9EB4DA822E3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t2B633BDDE269B5F6FAE8DBFBC0EBAE0381D73E65 (LogCallbackDelegate_t2B633BDDE269B5F6FAE8DBFBC0EBAE0381D73E65 * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___pUserData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.SocketNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_mEB46359BF5066A1B5381E2C1E0C0AC9071983428 (LogCallbackDelegate_t2B633BDDE269B5F6FAE8DBFBC0EBAE0381D73E65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.SocketNative/LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_m5F3B95C5A7584B17646EAB5A6A8DFFC7B31F964E (LogCallbackDelegate_t2B633BDDE269B5F6FAE8DBFBC0EBAE0381D73E65 * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pUserData0, ___level1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pUserData0, ___level1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___pUserData0, ___level1, ___msg2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___pUserData0, ___level1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pUserData0, ___level1, ___msg2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pUserData0, ___level1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pUserData0, ___level1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.SocketNative/LogCallbackDelegate::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m2BA136E90D8F7163F4E091F76607F7B7C9415E0F (LogCallbackDelegate_t2B633BDDE269B5F6FAE8DBFBC0EBAE0381D73E65 * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pUserData0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___level1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void ExitGames.Client.Photon.SocketNative/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_m06842C3A6DD064D0591D0EB1138975BA7D85C4D7 (LogCallbackDelegate_t2B633BDDE269B5F6FAE8DBFBC0EBAE0381D73E65 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::.ctor(System.Net.Sockets.Socket,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveContext__ctor_mCE6103A7AE9428A530C2859A3E256BD001464AB9 (ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headerBuffer1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageBuffer2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___headerBuffer1;
		__this->set_HeaderBuffer_2(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___messageBuffer2;
		__this->set_MessageBuffer_5(L_1);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = ___socket0;
		__this->set_workSocket_0(L_2);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_ReadingHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingHeader_m87D6838178E86A1E37D6431ADA1D289B11BD9A7B (ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_ExpectedMessageBytes_3();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_ReadingMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingMessage_mEFD5784202B2506E22156E0EEF25D65D92E0BC45 (ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_ExpectedMessageBytes_3();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_CurrentBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ReceiveContext_get_CurrentBuffer_mA834F9C4BF80830A02ECB1A20BE6C20595841EE1 (ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;
	{
		bool L_0;
		L_0 = ReceiveContext_get_ReadingHeader_m87D6838178E86A1E37D6431ADA1D289B11BD9A7B(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_MessageBuffer_5();
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_HeaderBuffer_2();
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_CurrentOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReceiveContext_get_CurrentOffset_mF78D81814C9A9A03922EFC9931101CC78AA36D7D (ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = ReceiveContext_get_ReadingHeader_m87D6838178E86A1E37D6431ADA1D289B11BD9A7B(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_ReceivedMessageBytes_4();
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		int32_t L_2 = __this->get_ReceivedHeaderBytes_1();
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_CurrentExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReceiveContext_get_CurrentExpected_m17E1CD2693118A92982786D0BEA25D0EC9CC5E07 (ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = ReceiveContext_get_ReadingHeader_m87D6838178E86A1E37D6431ADA1D289B11BD9A7B(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_ExpectedMessageBytes_3();
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_0011:
	{
		G_B3_0 = ((int32_t)9);
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveContext_Reset_mD77AF995576A440312237DE088D4A486C3B39AC4 (ReceiveContext_t7474DA8FCBBA1B0489BFD4EDC9A9A21FB9BA176F * __this, const RuntimeMethod* method)
{
	{
		__this->set_ReceivedHeaderBytes_1(0);
		__this->set_ExpectedMessageBytes_3(0);
		__this->set_ReceivedMessageBytes_4(0);
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m32CD32FB9F7974C12BAA79159BE0B960D603F3C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB * L_0 = (U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB *)il2cpp_codegen_object_new(U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m55B8FED10F855E0CD97391386883173B88EFA6CC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m55B8FED10F855E0CD97391386883173B88EFA6CC (U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass/<>c::<.cctor>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__20_0_mCC45AFD2BC9DA2F09E1DE59DEFD683E164452895 (U3CU3Ec_t36932B99348450578EF6018FBE35CC7B11A0C6AB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		return L_0;
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m261B079FBA752BE39C7676780D068F607205C81B (U3CU3Ec__DisplayClass6_0_t1F9CAB73D2DECBBF1D2F799B6BF8398B39103990 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::<StartBackgroundCalls>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_mDBDAF371FA3C47F9C79F0962F3E164D6A519E55C (U3CU3Ec__DisplayClass6_0_t1F9CAB73D2DECBBF1D2F799B6BF8398B39103990 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0012;
		}

IL_0004:
		{
			int32_t L_0 = __this->get_millisecondsInterval_0();
			Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(L_0, /*hidden argument*/NULL);
		}

IL_0012:
		{
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = __this->get_myThread_1();
			NullCheck(L_1);
			bool L_2;
			L_2 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_1, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
			V_0 = L_2;
			bool L_3 = V_0;
			if (L_3)
			{
				goto IL_0004;
			}
		}

IL_0021:
		{
			goto IL_0029;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{ // begin catch(System.Threading.ThreadAbortException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IntegerMillisecondsDelegate_t301E02C35DC01EF2AD37BB2A93D73016EFE63BAB (IntegerMillisecondsDelegate_t301E02C35DC01EF2AD37BB2A93D73016EFE63BAB * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_mF8418575BB66A54DCF16FB8D5D51FCFB652A7642 (IntegerMillisecondsDelegate_t301E02C35DC01EF2AD37BB2A93D73016EFE63BAB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_mA06E9193C7DD3EAF3951D259A2C9CB4F925CB1C4 (IntegerMillisecondsDelegate_t301E02C35DC01EF2AD37BB2A93D73016EFE63BAB * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegerMillisecondsDelegate_BeginInvoke_m6ADFA74BB1CEE25B0C72A34CAA2EC548D5FC9E1A (IntegerMillisecondsDelegate_t301E02C35DC01EF2AD37BB2A93D73016EFE63BAB * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_EndInvoke_m3A59E3CDF52DE736DE6E1270556F85235BDD47AB (IntegerMillisecondsDelegate_t301E02C35DC01EF2AD37BB2A93D73016EFE63BAB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeRandom_Next_m3C182A116EAE9005374B3D26E4155E336455221F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_il2cpp_TypeInfo_var))->get__r_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_il2cpp_TypeInfo_var))->get__r_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_2);
		V_2 = L_3;
		IL2CPP_LEAVE(0x2B, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002a;
			}
		}

IL_0023:
		{
			Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__ctor_m736A124FC142FF6972BE1F736D5F8E08BCC844E5 (ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__cctor_m51704D52F3A583AB08870C8783B5D4B4BEE57E14 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1BBE23DE1CE2263754A6FB17BCBCBF4360BFA961_il2cpp_TypeInfo_var))->set__r_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
