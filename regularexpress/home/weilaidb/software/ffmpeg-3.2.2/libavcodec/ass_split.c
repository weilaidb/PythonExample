typedef enum  ASSFieldType;
typedef struct  ASSFields;
typedef struct  ASSSection;
static const ASSSection ass_sections[] = ;
typedef int (*ASSConvertFunc)(void *dest, const char *buf, int len);
convert_str
convert_int
convert_flt
convert_color
convert_timestamp
convert_alignment
static const ASSConvertFunc convert_func[] = ;
struct ASSSplitContext ;
*realloc_section_array
is_eol
*skip_space
*get_default_field_orders
*ass_split_section
ass_split
*ff_ass_split
free_section
*ff_ass_split_dialog
ff_ass_free_dialog
*ff_ass_split_dialog2
ff_ass_split_free
ff_ass_split_override_codes
if (text && callbacks->text)
callbacks->text(priv, text, text_len);
if (callbacks->end)
callbacks->end(priv);
return 0;
}
*ff_ass_style_get
