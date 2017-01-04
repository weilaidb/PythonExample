package com.sleepycat.persist.model;
import static com.sleepycat.asm.Opcodes.AALOAD;
import static com.sleepycat.asm.Opcodes.ACC_ABSTRACT;
import static com.sleepycat.asm.Opcodes.ACC_PRIVATE;
import static com.sleepycat.asm.Opcodes.ACC_PUBLIC;
import static com.sleepycat.asm.Opcodes.ACC_STATIC;
import static com.sleepycat.asm.Opcodes.ACC_TRANSIENT;
import static com.sleepycat.asm.Opcodes.ACONST_NULL;
import static com.sleepycat.asm.Opcodes.ALOAD;
import static com.sleepycat.asm.Opcodes.ANEWARRAY;
import static com.sleepycat.asm.Opcodes.ARETURN;
import static com.sleepycat.asm.Opcodes.ASM4;
import static com.sleepycat.asm.Opcodes.BIPUSH;
import static com.sleepycat.asm.Opcodes.CHECKCAST;
import static com.sleepycat.asm.Opcodes.DCMPL;
import static com.sleepycat.asm.Opcodes.DCONST_0;
import static com.sleepycat.asm.Opcodes.DUP;
import static com.sleepycat.asm.Opcodes.FCMPL;
import static com.sleepycat.asm.Opcodes.FCONST_0;
import static com.sleepycat.asm.Opcodes.GETFIELD;
import static com.sleepycat.asm.Opcodes.GOTO;
import static com.sleepycat.asm.Opcodes.ICONST_0;
import static com.sleepycat.asm.Opcodes.ICONST_1;
import static com.sleepycat.asm.Opcodes.ICONST_2;
import static com.sleepycat.asm.Opcodes.ICONST_3;
import static com.sleepycat.asm.Opcodes.ICONST_4;
import static com.sleepycat.asm.Opcodes.ICONST_5;
import static com.sleepycat.asm.Opcodes.IFEQ;
import static com.sleepycat.asm.Opcodes.IFGT;
import static com.sleepycat.asm.Opcodes.IFLE;
import static com.sleepycat.asm.Opcodes.IFNE;
import static com.sleepycat.asm.Opcodes.IFNONNULL;
import static com.sleepycat.asm.Opcodes.IF_ICMPNE;
import static com.sleepycat.asm.Opcodes.ILOAD;
import static com.sleepycat.asm.Opcodes.INVOKEINTERFACE;
import static com.sleepycat.asm.Opcodes.INVOKESPECIAL;
import static com.sleepycat.asm.Opcodes.INVOKESTATIC;
import static com.sleepycat.asm.Opcodes.INVOKEVIRTUAL;
import static com.sleepycat.asm.Opcodes.IRETURN;
import static com.sleepycat.asm.Opcodes.ISUB;
import static com.sleepycat.asm.Opcodes.LCMP;
import static com.sleepycat.asm.Opcodes.LCONST_0;
import static com.sleepycat.asm.Opcodes.NEW;
import static com.sleepycat.asm.Opcodes.POP;
import static com.sleepycat.asm.Opcodes.PUTFIELD;
import static com.sleepycat.asm.Opcodes.RETURN;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import com.sleepycat.asm.AnnotationVisitor;
import com.sleepycat.asm.Attribute;
import com.sleepycat.asm.ClassVisitor;
import com.sleepycat.asm.FieldVisitor;
import com.sleepycat.asm.Label;
import com.sleepycat.asm.MethodVisitor;
import com.sleepycat.asm.Type;
import com.sleepycat.compat.DbCompat;
class BytecodeEnhancer extends ClassVisitor {
@SuppressWarnings("serial")
static class NotPersistentException extends RuntimeException
private static final NotPersistentException NOT_PERSISTENT =
new NotPersistentException();
private static final Map<String, Integer> PRIMITIVE_WRAPPERS =
new HashMap<String, Integer>();
static
private String className;
private String superclassName;
private boolean isPersistent;
private boolean isAbstract;
private boolean hasDefaultConstructor;
private boolean hasPersistentSuperclass;
private boolean isCompositeKey;
private FieldInfo priKeyField;
private List<FieldInfo> secKeyFields;
private List<FieldInfo> nonKeyFields;
private String staticBlockMethod;
BytecodeEnhancer(ClassVisitor parentVisitor)
@Override
public void visit(int version,
int access,
String name,
String sig,
String superName,
String[] interfaces)
@Override
public void visitSource(String source, String debug)
@Override
public AnnotationVisitor visitAnnotation(String desc, boolean visible)
@Override
public FieldVisitor visitField(int access,
String name,
String desc,
String sig,
Object value)
@Override
public MethodVisitor visitMethod(int access,
String name,
String desc,
String sig,
String[] exceptions)
@Override
public void visitEnd()
private void sortFields()
