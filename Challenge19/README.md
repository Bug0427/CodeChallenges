Problem: HTTP Request Router With Middleware

Files:
- router.js
- middleware.js
- server.js
- README.md

Description:
Implement a minimal HTTP server that supports:
- route matching by method + path
- middleware chaining (like Express, but simplified)
- error handling middleware
- async handlers

Features:
- middleware can modify request/response
- middleware can short-circuit requests
- errors propagate to error handlers

You may NOT use Express, Fastify, or similar frameworks.

🎯 Constraints:
	• must support concurrent requests
	• async/await support required
	• no global mutable state for requests
	• routing must be efficient (no O(n) per request scan)

Language: JavaScript