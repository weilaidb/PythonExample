package org.apache.hadoop.oncrpc;
import static org.junit.Assert.assertEquals;
import org.apache.hadoop.oncrpc.RpcAcceptedReply.AcceptState;
import org.apache.hadoop.oncrpc.RpcReply.ReplyState;
import org.apache.hadoop.oncrpc.security.Verifier;
import org.apache.hadoop.oncrpc.security.VerifierNone;
import org.junit.Test;
public class TestRpcAcceptedReply
