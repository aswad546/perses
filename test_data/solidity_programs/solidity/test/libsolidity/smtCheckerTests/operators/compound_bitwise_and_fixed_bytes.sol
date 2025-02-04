pragma experimental SMTChecker;
contract C {
    function f() public pure returns (bytes1) {
        bytes1 a = 0xff;
        bytes1 b = 0xf0;
        a &= b;
        assert(a == b);

        a &= ~b;
        assert(a != 0); // fails
    }
}
// ----
// Warning 6321: (83-89): Unnamed return variable can remain unassigned. Add an explicit return with value to all non-reverting code paths or name the variable.
// Warning 6328: (209-223): CHC: Assertion violation happens here.\nCounterexample:\n\n = 0\na = 0\nb = 240\n\nTransaction trace:\nC.constructor()\nC.f()
