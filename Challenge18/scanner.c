/*Problem: File Integrity Scanner Using Hash Trees

Files:
- merkle_tree.c
- merkle_tree.h
- scanner.c
- README.md

Description:
Implement a file integrity scanner that:
- walks a directory tree
- computes hashes of files
- builds a Merkle tree over the directory
- outputs a single root hash

On a second run, the program must:
- recompute hashes
- identify which files or directories changed
- report minimal differences

Rules:
- Do not load entire files into memory
- Hash incrementally (chunked reads)

🎯 Constraints:
	• directory may contain 100,000+ files
	• file sizes vary from bytes to GBs
	• must be deterministic across runs
	• memory usage must be bounded

Language: c
*/