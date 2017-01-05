package org.apache.hadoop.mapreduce.filecache;
import java.net.URI;
import java.net.URISyntaxException;
import static org.junit.Assert.*;
import org.junit.Test;
public class TestURIFragments {
@Test
public void testURIs() throws URISyntaxException {
assertTrue(DistributedCache.checkURIs(null, null));
assertFalse(DistributedCache.checkURIs(new URI[] { new URI(
"file:
assertFalse(DistributedCache.checkURIs(null,
new URI[] { new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(null, new URI[] {
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] { new URI(
"file:
"file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(null, new URI[] {
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] { new URI(
"file:
"file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(null, new URI[] {
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] { new URI(
"file:
"file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
new URI("file:
new URI("file:
assertFalse(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
new URI("file:
new URI("file:
assertTrue(DistributedCache.checkURIs(new URI[] {
new URI("file:
new URI("file:
assertTrue(DistributedCache.checkURIs(null, new URI[]
