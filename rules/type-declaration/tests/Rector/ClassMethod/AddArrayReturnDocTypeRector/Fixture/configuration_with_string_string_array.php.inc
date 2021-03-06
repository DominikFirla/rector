<?php

namespace Rector\TypeDeclaration\Tests\Rector\ClassMethod\AddArrayReturnDocTypeRector\Fixture;

use Rector\Generic\Rector\Assign\DimFetchAssignToMethodCallRector;
use Rector\Generic\ValueObject\DimFetchAssignToMethodCall;

final class ConfigurationWithStringStringArray
{
    public function getSome(): array
    {
        return [
            DimFetchAssignToMethodCallRector::class => [
                DimFetchAssignToMethodCallRector::DIM_FETCH_ASSIGN_TO_METHOD_CALL => [
                    new DimFetchAssignToMethodCall(
                        'Nette\Application\Routers\RouteList',
                        'Nette\Application\Routers\Route',
                        'addRoute'
                    ),
                ],
            ],
        ];
    }
}

?>
-----
<?php

namespace Rector\TypeDeclaration\Tests\Rector\ClassMethod\AddArrayReturnDocTypeRector\Fixture;

use Rector\Generic\Rector\Assign\DimFetchAssignToMethodCallRector;
use Rector\Generic\ValueObject\DimFetchAssignToMethodCall;

final class ConfigurationWithStringStringArray
{
    /**
     * @return array<string, array<string, \Rector\Generic\ValueObject\DimFetchAssignToMethodCall[]>>
     */
    public function getSome(): array
    {
        return [
            DimFetchAssignToMethodCallRector::class => [
                DimFetchAssignToMethodCallRector::DIM_FETCH_ASSIGN_TO_METHOD_CALL => [
                    new DimFetchAssignToMethodCall(
                        'Nette\Application\Routers\RouteList',
                        'Nette\Application\Routers\Route',
                        'addRoute'
                    ),
                ],
            ],
        ];
    }
}

?>
