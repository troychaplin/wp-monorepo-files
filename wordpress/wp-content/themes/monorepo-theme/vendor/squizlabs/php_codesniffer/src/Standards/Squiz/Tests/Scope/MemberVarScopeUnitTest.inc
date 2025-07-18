<?php
class MyClass
{
    private $var1 = null;
    protected ?int $var2 = null;
    public $var3 = null;
    $var4 = null;
}

class foo
{
    const bar = <<<BAZ
qux
BAZ;
}

class Foo {
    public static function default(): ObjectA
    {
        return new self(1);
    }
}//end class

class MyClass {
    $anonFunc = function($foo) use ($bar) {};
    public $anonFunc2 = function($foo2) use ($bar2) {};
    public function method($var1, $var2) {
        $anon = new class {
            $p1 = null;
            public $p2;
            protected $p3;
            private $p4;
            $p5 = null;

            public function m($x) {
                $y = $x + 1;

                $xAnon = new class {
                    $g1;
                    public $g2;
                    $g3 = null;
                };

                $anonFunc = function($foo) use ($bar) {
                    $x = true;
                };

                $z = 2 * $y;

                return $y ?: $z;
            }
        };

        $var = null;
    }

    public string $mCounter, $mSearchUser, $mSearchPeriodStart, $mSearchPeriodEnd,
    $mTestFilter;

    protected $mCounter,
        $mSearchUser,
        $mSearchPeriodStart,
        $mSearchPeriodEnd,
        $mTestFilter;

    var $mCounter, $mSearchUser,
        $mSearchPeriodStart;
}

interface Base {
    protected $anonymous;
}

class PHP84FinalProperties {
    final int $final;
}

class AsymVisibility {
    // The read scope is public, but not specified. Error should use different error code.
    public(set) $asymPublic  = 'hello';
    protected(set) $asymProtected  = 'hello';
    private(set) $asymPrivate  = 'hello';

    public public(set) $asymPublicPublic  = 'hello';
    protected(set) public $asymPublicProtected  = 'hello';
    protected private(set) $asymProtectedPrivate  = 'hello';
}
