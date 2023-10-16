#ifndef __ICE_C_CONTEXT__
#define __ICE_C_CONTEXT__

typedef struct ice_c_context ice_c_context;

struct ice_c_context {
    int file_id;
    int line_number;
    int column_number;
}

#endif // __ICEC_CONTEXT__