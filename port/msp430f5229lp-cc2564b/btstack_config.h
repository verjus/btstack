//
// btstack_config.h for msp-exp430f5438-cc2564b port
//

#ifndef __BTSTACK_CONFIG
#define __BTSTACK_CONFIG

// Port related features
#define HAVE_EMBEDDED_TICK

// BTstack features that can be enabled
#define ENABLE_BLE
#define ENABLE_CLASSIC
#define ENABLE_LE_PERIPHERAL
// #define ENABLE_LE_CENTRAL
// #define ENABLE_LOG_ERROR
// #define ENABLE_LOG_INFO 
// #define ENABLE_EHCILL

// BTstack configuration. buffers, sizes, ...
#define HCI_ACL_PAYLOAD_SIZE 52
#define MAX_SPP_CONNECTIONS 1
#define MAX_NR_HCI_CONNECTIONS MAX_SPP_CONNECTIONS
#define MAX_NR_GATT_CLIENTS 1
#define MAX_NR_HFP_CONNECTIONS 0
#define MAX_NR_L2CAP_SERVICES  2
#define MAX_NR_L2CAP_CHANNELS  (1+MAX_SPP_CONNECTIONS)
#define MAX_NR_RFCOMM_MULTIPLEXERS MAX_SPP_CONNECTIONS
#define MAX_NR_RFCOMM_SERVICES 1
#define MAX_NR_RFCOMM_CHANNELS MAX_SPP_CONNECTIONS
#define MAX_NR_BNEP_SERVICES 1
#define MAX_NR_BNEP_CHANNELS MAX_SPP_CONNECTIONS
#define MAX_NR_BTSTACK_LINK_KEY_DB_MEMORY_ENTRIES  2
#define MAX_NR_WHITELIST_ENTRIES 1
#define MAX_NR_SM_LOOKUP_ENTRIES 3
#define MAX_NR_SERVICE_RECORD_ITEMS 1

#endif

