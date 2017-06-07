#ifndef DB_ERROR_H
#define DB_ERROR_H

#define ERROR_OK						0
#define ERROR_CVT_OPEN					-1
#define ERROR_CVT_MAP					-2
#define ERROR_INVALID_ITEM				-3
#define ERROR_NAME_EXIST				-4
#define ERROR_ADDR_EXIST				-54
#define ERROR_ID_EXIST					-55
#define ERROR_POINT_FULL				-5
#define ERROR_POINT_MEM					-6
#define ERROR_POINT_NONE				-7

#define ERROR_ITER_NONE					-8
#define ERROR_ITER_EMPTY				-9
#define ERROR_ITER_END					-10

#define ERROR_BTREE_NULL				-11
#define ERROR_BTREE_NOITEM				-12
#define ERROR_DATA_NULL					-13
#define ERROR_INDEX_ALLOC				-14
#define ERROR_DATA_ALLOC				-15
#define ERROR_EMPTY_VALUE				-16
#define ERROR_DATA_SPLIT				-17
#define ERROR_HIST_NONE					-18
#define ERROR_HIST_END					-19
#define ERROR_NO_VALUE					-20
#define ERROR_INVALID_CACHE				-21
#define ERROR_BTREE_INVALID				-22
#define ERROR_CACHE_OPEN				-23
#define ERROR_PACKET_SEQ				-24
#define ERROR_PACKET_NULL				-25
#define ERROR_MAP_INVALID				-26
#define ERROR_CONNECT_ERROR				-27
#define ERROR_SEND_ERROR				-28
#define ERROR_RECV_ERROR				-29
#define ERROR_PACKET_ERROR				-30
#define ERROR_BUFFER_ERROR				-31
#define ERROR_CONNECTION_NONE			-32
#define ERROR_CONNECTION_DISCONNECTED	-33
#define ERROR_WAIT_QUEUE				-34
#define ERROR_CACHE_EMPTY				-35
#define ERROR_NAMESERVER_NONE			-36
#define ERROR_NAMESERVER_CONNECT		-37
#define ERROR_CONNECTION_EXIST			-38

#define ERROR_INVALID_PARA				-39
#define ERROR_REPLY_BLOCKED				-40
#define ERROR_POINT_EXCEED				-41

#define ERROR_LICENSE_RESTRICTED		-42

#define ERROR_SERVER_NONE				-43
#define ERROR_SERVER_EXIST				-44
#define ERROR_SERVER_RESOLVE			-45
#define ERROR_CONNECTION_FORMAT			-46
#define ERROR_SERVER_NETWORK			-47
#define ERROR_SYSTEM_LIMIT				-48
#define ERROR_ARCHIVE_NONE				-49

#define ERROR_SECURITY_FAILURE			-50
#define ERROR_NET_TIMEOUT				-51
#define ERROR_NET_CLOSED				-52

#define ERROR_BUCKET_NULL				-70
#define ERROR_KEY_NOFOUND				-71
#define ERROR_KEY_FOUND					-72
#define ERROR_POINT_NULL				-73
#define ERROR_HASH_END					-74
#define ERROR_PROTO_BAD					-75
#define ERROR_HANDLE_BAD				-76
#define ERROR_ATTR_NONE					-77
#define ERROR_INDEX_OVER				-78
#define ERROR_ATTR_MANY					-79
#define ERROR_TYPE_BAD					-80
#define ERROR_BLOB_LARGE				-81
#define ERROR_ACCESS_BAD				-82
#define ERROR_NO_MEM					-83
#define ERROR_SCRIPT_NONE				-84
#define ERROR_SCRIPT_SYNTAX				-85
#define ERROR_HASH_CLASH				-86
#define ERROR_SERVER_INDEX				-87
#define ERROR_LOCAL_FILE				-88
#define ERROR_USER_CANCEL				-89
#define ERROR_ACCESS_ATTACK				-90

#endif
