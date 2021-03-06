<?php

namespace Rector\MockistaToMockery\Tests\Rector\Class_\MockeryTearDownRector\Fixture;

use PHPUnit\Framework\TestCase;

class SkipExisting extends TestCase
{
    public function test()
    {
        $mockUser = \mock(User::class);
    }
    protected function tearDown(): void
    {
        \Mockery::close();
    }
}
